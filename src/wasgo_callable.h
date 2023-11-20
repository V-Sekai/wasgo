#ifndef WASGO_CALLABLE
#define WASGO_CALLABLE
#include "core/variant/callable.h"
#include "core/variant/variant.h"
#include "src/wasgo_state.h"

class WasGoCallable : public CallableCustom {
	ObjectID wasgo_state_id = ObjectID();
	wasm_function_inst_t wasgo_func = wasm_function_inst_t();

public:
	static bool equal_func(const CallableCustom *p_a, const CallableCustom *p_b);
	static bool less_func(const CallableCustom *p_a, const CallableCustom *p_b);

	virtual uint32_t hash() const override;
	virtual String get_as_text() const override;
	virtual CompareEqualFunc get_compare_equal_func() const override;
	virtual CompareLessFunc get_compare_less_func() const override;
	virtual ObjectID get_object() const override; // must always be able to provide an object
	virtual void call(const Variant **p_arguments, int p_argcount, Variant &r_return_value, Callable::CallError &r_call_error) const override;
	virtual Error rpc(int p_peer_id, const Variant **p_arguments, int p_argcount, Callable::CallError &r_call_error) const override;
	virtual const Callable *get_base_comparator() const override;

	// WasGoCallable();
	WasGoCallable(WasGoState *p_state, String p_func, String p_definition);
	virtual ~WasGoCallable();
};

#endif