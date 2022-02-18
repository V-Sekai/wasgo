#include "wasgo_callable.h"
#include "core/templates/local_vector.h"
#include <stdint.h>

uint32_t WasGoCallable::hash() const {
    return 0;
};
String WasGoCallable::get_as_text() const {
    return "";
};
CallableCustom::CompareEqualFunc WasGoCallable::get_compare_equal_func() const {
	return &equal_func;
};
CallableCustom::CompareLessFunc WasGoCallable::get_compare_less_func() const {
	return &less_func;
};
ObjectID WasGoCallable::get_object() const {
	return wasgo_state_id;
}
void WasGoCallable::call(const Variant **p_arguments, int p_argcount, Variant &r_return_value, Callable::CallError &r_call_error) const {
	r_call_error.error = Callable::CallError::CALL_ERROR_INVALID_METHOD; // Can't find anything better
	r_return_value = Variant();

	WasGoState *state = Object::cast_to<WasGoState>(ObjectDB::get_instance(wasgo_state_id));
	if (state == nullptr) {
		r_call_error.error = Callable::CallError::CALL_ERROR_INSTANCE_IS_NULL;
		return;
	}
	LocalVector<Variant> argv;
	//TODO DELETE
	p_argcount = 0;
	uint32_t fake_arg = 0;
	
	argv.resize(p_argcount + 1);
	argv[0] = 0;
	for (int i = 0; i < p_argcount; i++) {
		const Variant * arg = p_arguments[i];
		argv[i + 1] = * arg;
	}
	// if (!wasm_runtime_call_wasm(state->exec_env, wasgo_func, p_argcount, (uint32_t*) argv.ptr())) {
	if (!wasm_runtime_call_wasm(state->exec_env, wasgo_func, p_argcount, (uint32_t*) &fake_arg)) {
		printf("call wasm callable failed. %s\n", wasm_runtime_get_exception(state->module_inst));
		print_line(String("call wasm callable failed. ") + wasm_runtime_get_exception(state->module_inst));
		// goto fail;
	} else {
		r_call_error.error = Callable::CallError::CALL_OK;
	}
	r_return_value = argv[0];
};
void WasGoCallable::rpc(int p_peer_id, const Variant **p_arguments, int p_argcount, Callable::CallError &r_call_error) const {
    
};
const Callable* WasGoCallable::get_base_comparator() const {
    return nullptr;
};

WasGoCallable::WasGoCallable(WasGoState *p_state, String p_func, String p_definition) {
	if(p_state != nullptr && p_state->module_inst != nullptr){
		wasgo_state_id = p_state->get_instance_id();
		ERR_FAIL_COND(!(wasgo_func = wasm_runtime_lookup_function(p_state->module_inst, p_func.utf8().get_data(), p_definition.utf8().get_data())));

		if (wasgo_func == nullptr) {
			printf("NULL FUNC");
		}
		print_line(String("wasgo_func: ") + p_func);
		print_line(String("wasgo_func_definition: ") + p_definition);
	}
}
WasGoCallable::~WasGoCallable() {
	
}

bool WasGoCallable::equal_func(const CallableCustom *p_a, const CallableCustom *p_b){
    return false;
}
bool WasGoCallable::less_func(const CallableCustom *p_a, const CallableCustom *p_b){
    return false;
}