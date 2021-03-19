#include "Test.h"
// #include "bh_getopt.h"
// #include "bh_read_file.h"
#define HashMap bh_HashMap
#define Vector bh_Vector
#include "bh_platform.h"
#undef HashMap
#undef Vector
#include "wasm_export.h"
#include "core/os/file_access.h"
#include "wasgo_state.h"
// #include "wasm_runtime_common.h"

#include "math.h"

extern "C" bool wasm_runtime_call_indirect(wasm_exec_env_t exec_env,
		uint32_t element_indices,
		uint32_t argc, uint32_t argv[]);

// The first parameter is not exec_env because it is invoked by native funtions
extern "C" void reverse(char *str, int len) {
	int i = 0, j = len - 1, temp;
	while (i < j) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

// The first parameter exec_env must be defined using type wasm_exec_env_t
// which is the calling convention for exporting native API by WAMR.
//
// Converts a given integer x to string str[].
// digit is the number of digits required in the output.
// If digit is more than the number of digits in x,
// then 0s are added at the beginning.
extern "C" int intToStr(wasm_exec_env_t exec_env, int x, char *str, int str_len, int digit) {
	int i = 0;

	printf("calling into native function: %s\n", __FUNCTION__);

	while (x) {
		// native is responsible for checking the str_len overflow
		if (i >= str_len) {
			return -1;
		}
		str[i++] = (x % 10) + '0';
		x = x / 10;
	}

	// If number of digits required is more, then
	// add 0s at the beginning
	while (i < digit) {
		if (i >= str_len) {
			return -1;
		}
		str[i++] = '0';
	}

	reverse(str, i);

	if (i >= str_len)
		return -1;
	str[i] = '\0';
	return i;
}

extern "C" int get_pow(wasm_exec_env_t exec_env, int x, int y) {
	printf("calling into native function: %s\n", __FUNCTION__);
	return (int)pow(x, y);
}

extern "C" int32_t calculate_native(wasm_exec_env_t exec_env, int32_t n, int32_t func1, int32_t func2) {
	printf("calling into native function: %s, n=%d, func1=%d, func2=%d\n",
			__FUNCTION__, n, func1, func2);

	uint32_t argv[] = { (uint32_t) n };
	if (!wasm_runtime_call_indirect(exec_env, func1, 1, argv)) {
		printf("call func1 failed\n");
		return 0xDEAD;
	}

	uint32_t n1 = argv[0];
	printf("call func1 and return n1=%d\n", n1);

	if (!wasm_runtime_call_indirect(exec_env, func2, 1, argv)) {
		printf("call func2 failed\n");
		return 0xDEAD;
	}

	uint32_t n2 = argv[0];
	printf("call func2 and return n2=%d\n", n2);
	return n1 + n2;
}

extern "C" void print_usage(void) {
	fprintf(stdout, "Options:\r\n");
	fprintf(stdout, "  -f [path of wasm file] \n");
}

int WasGoTest::test() {
	printf("We got to the test\n");

	static char test_global_heap_buf[512 * 1024 * 100];
	char *buffer = nullptr, error_buf[128];
	int opt;
	char *wasm_path = "test.wasm";

	wasm_module_t module = NULL;
	wasm_module_inst_t module_inst = NULL;
	wasm_exec_env_t exec_env = NULL;
	uint32_t buf_size, stack_size = 809200, heap_size = 809200;
	wasm_function_inst_t func = NULL;
	wasm_function_inst_t func2 = NULL;
	char *native_buffer = NULL;
	uint32_t wasm_buffer = 0;

	RuntimeInitArgs init_args;
	memset(&init_args, 0, sizeof(RuntimeInitArgs));

	// Define an array of NativeSymbol for the APIs to be exported.
	// Note: the array must be static defined since runtime
	//            will keep it after registration
	// For the function signature specifications, goto the link:
	// https://github.com/bytecodealliance/wasm-micro-runtime/blob/main/doc/export_native_api.md

	static NativeSymbol test_native_symbols[] = {
		{
				"intToStr", // the name of WASM function name
				intToStr, // the native function pointer
				"(i*~i)i", // the function prototype signature, avoid to use i32
				NULL // attachment is NULL
		},
		{
				"get_pow", // the name of WASM function name
				get_pow, // the native function pointer
				"(ii)i", // the function prototype signature, avoid to use i32
				NULL // attachment is NULL
		},
		{ "calculate_native",
				calculate_native,
				"(iii)i",
				NULL }
	};

	init_args.mem_alloc_type = Alloc_With_Pool;
	init_args.mem_alloc_option.pool.heap_buf = test_global_heap_buf;
	init_args.mem_alloc_option.pool.heap_size = sizeof(test_global_heap_buf);

	// Native symbols need below registration phase
	init_args.n_native_symbols = sizeof(test_native_symbols) / sizeof(NativeSymbol);
	init_args.native_module_name = "env";
	init_args.native_symbols = test_native_symbols;

	if (!wasm_runtime_full_init(&init_args)) {
		printf("Init runtime environment failed.\n");
		return -1;
	}

	// buffer = bh_read_file_to_buffer(wasm_path, &buf_size);
	Error err;
	FileAccess *file = FileAccess::open(wasm_path, FileAccess::READ, &err);
	if (err != OK) {
		printf("We couldnt read the file: %s\n", wasm_path);
		goto fail;
	}
	buffer = (char *) malloc(file->get_len());
	buf_size = file->get_len();
	file->get_buffer((uint8_t *)buffer, file->get_len());
	file->close();

	if (!buffer) {
		printf("Open wasm app file [%s] failed.\n", wasm_path);
		goto fail;
	}

	module = wasm_runtime_load((uint8_t *) buffer, buf_size, error_buf, sizeof(error_buf));
	if (!module) {
		printf("Load wasm module failed. error: %s\n", error_buf);
		goto fail;
	}

	module_inst = wasm_runtime_instantiate(module,
			stack_size,
			heap_size,
			error_buf,
			sizeof(error_buf));

	if (!module_inst) {
		printf("Instantiate wasm module failed. error: %s\n", error_buf);
		goto fail;
	}

	exec_env = wasm_runtime_create_exec_env(module_inst, stack_size);
	if (!exec_env) {
		printf("Create wasm execution environment failed.\n");
		goto fail;
	}

	uint32 argv[4];
	double arg_d = 0.000101;
	argv[0] = 10;
	// the second arg will occupy two array elements
	// memcpy(&argv[1], &arg_d, sizeof(arg_d));
	// *(float *)(argv + 3) = 300.002;

	// char *arg_s = "";
	// memcpy(&argv[1], &arg_s, sizeof(arg_s));
	// *(float *)(argv + 3) = 300.002;

	if (!(func = wasm_runtime_lookup_function(module_inst, "test", NULL))) {
		printf("The test wasm function is not found.\n");
		printf("error buffer: %s\n", error_buf);
		goto fail;
	}

	// pass 4 elements for function arguments
	if (!wasm_runtime_call_wasm(exec_env, func, 0, argv)) {
		printf("call wasm function test failed. %s\n", wasm_runtime_get_exception(module_inst));
		printf("error buffer: %s\n", error_buf);
		goto fail;
	}

	int ret_val = *(int *)argv;
	printf("Native finished calling wasm function test(), returned a int value: %d\n", ret_val);

	// if (!(func = wasm_runtime_lookup_function(module_inst, "generate_float", NULL))) {
	// 	printf("The generate_float wasm function is not found.\n");
	// 	goto fail;
	// }

	// // pass 4 elements for function arguments
	// if (!wasm_runtime_call_wasm(exec_env, func, 4, argv)) {
	// 	printf("call wasm function generate_float failed. %s\n", wasm_runtime_get_exception(module_inst));
	// 	goto fail;
	// }

	// int ret_val_57 = *(int *)argv;
	// printf("Native finished calling wasm function generate_float(), returned a float value: %ff\n", ret_val_57);

	// Next we will pass a buffer to the WASM function
	// uint32 argv2[4];

	// // must allocate buffer from wasm instance memory space (never use pointer from host runtime)
	// wasm_buffer = wasm_runtime_module_malloc(module_inst, 100, (void **)&native_buffer);

	// *(float *)argv2 = ret_val; // the first argument
	// argv2[1] = wasm_buffer; // the second argument is the wasm buffer address
	// argv2[2] = 100; //  the third argument is the wasm buffer size
	// argv2[3] = 3; //  the last argument is the digits after decimal point for converting float to string

	// if (!(func2 = wasm_runtime_lookup_function(module_inst, "float_to_string", NULL))) {
	// 	printf("The wasm function float_to_string wasm function is not found.\n");
	// 	goto fail;
	// }

	// if (wasm_runtime_call_wasm(exec_env, func2, 4, argv2)) {
	// 	printf("Native finished calling wasm function: float_to_string, returned a formatted string: %s\n", native_buffer);
	// } else {
	// 	printf("call wasm function float_to_string failed. error: %s\n", wasm_runtime_get_exception(module_inst));
	// 	goto fail;
	// }

	// wasm_function_inst_t func3 = wasm_runtime_lookup_function(module_inst,
	// 		"calculate",
	// 		NULL);
	// if (!func3) {
	// 	printf("The wasm function calculate is not found.\n");
	// 	goto fail;
	// }

	// uint32_t argv3[1] = { 3 };
	// if (wasm_runtime_call_wasm(exec_env, func3, 1, argv3)) {
	// 	uint32_t result = *(uint32_t *)argv3;
	// 	printf("Native finished calling wasm function: calculate, return: %d\n", result);
	// } else {
	// 	printf("call wasm function calculate failed. error: %s\n", wasm_runtime_get_exception(module_inst));
	// 	goto fail;
	// }

	printf("We completed the test\n");

fail:
	if (exec_env) wasm_runtime_destroy_exec_env(exec_env);
	if (module_inst) {
		if (wasm_buffer) wasm_runtime_module_free(module_inst, wasm_buffer);
		wasm_runtime_deinstantiate(module_inst);
	}
	if (module) wasm_runtime_unload(module);
	if (buffer) free(buffer);
	wasm_runtime_destroy();
	return 0;
}
