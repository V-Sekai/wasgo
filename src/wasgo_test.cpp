#include "wasgo_test.h"
// #include "bh_getopt.h"
// #include "bh_read_file.h"
#define HashMap bh_HashMap
#define Vector bh_Vector
#include "bh_platform.h"
#undef HashMap
#undef Vector
#include "core/io/file_access.h"
#include "include/wasgo_function_table.h"
#include "wasgo_callable.h"
#include "wasgo_state.h"
#include "wasm_export.h"
// #include "thirdparty/wasm-micro-runtime/core/iwasm/include/lib_export.h"
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

	uint32_t argv[] = { (uint32_t)n };
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

	int ret_val = -1;
	uint32 argv[4];
	double arg_d = 0.000101;

	printf("Creating WasGoState.\n");
	Ref<WasmResource> reference = ResourceLoader::load(wasm_path);
	ERR_FAIL_COND_V(reference.is_null(), FAILED);
	WasGoState *state = memnew(WasGoState); // This leaks memory because it's not put in the tree.
	state->set_wasm_script(reference);
	printf("Creating Wasm callable.\n");
	WasGoCallable callable = WasGoCallable(state, "test", "()i");
	Variant var = Variant(420);
	const Variant *args = &var;
	Variant return_val = Variant(0);
	Callable::CallError r_call_error;
	callable.call(&args, 0, return_val, r_call_error);
	return 0;
}
