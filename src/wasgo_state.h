/*************************************************************************/
/*  wasgo_state.h                                                        */
/*************************************************************************/ 
/*
This file defines the WasGoState class.
A WasGoState contains everything needed to run a wasm script.
When creating a game with Wasm, the user makes these nodes and puts them in their scene.
These get saved with the scene and when the game is run they're used by the Wasm Runtime Singleton to create working wasm instances.

These nodes also handle things like translating wasm commands to Godot functions.
*/

#ifndef WASGO_STATE_H
#define WASGO_STATE_H

#include "resource_wasm.h"
#include "wasm_export.h"
#include "core/engine.h"
#include "core/variant.h"
#include "scene/main/node.h"

class WasGoState : public Node {
	GDCLASS(WasGoState, Node);

	//Properties
	Ref<WasmResource> wasm_script;
	Dictionary properties = {}; //Properties to be passed to the script when it starts up
	uint32_t stack_size = 8192000;
	uint32_t heap_size = 8192000;

public:
	enum InterpolationType {
		NONE,
		LERP,
		SLERP
	};
	typedef uint32_t WasGoID;

	WasGoState();
	~WasGoState();

	void _initialize();
	void _stop();

	virtual void _validate_property(PropertyInfo &property) const;
	void _notification(int p_what);
	static void _bind_methods();

	void set_stack_size(int p_stack_size);
	int get_stack_size();

	void set_heap_size(int p_heap_size);
	int get_heap_size();

	void set_wasm_script(Ref<WasmResource> p_wasm_script);
	Ref<WasmResource> get_wasm_script();

	void set_properties(Dictionary p_properties);
	Dictionary get_properties();
	void set_property(String key, Variant value);
	Variant get_property(String key);

	void init(wasm_module_t instance);

	//Starting from here
	int call_wasm_function(String func_name, int argc = 0, uint32_t *argv = nullptr);

	int call_object_function(WasGoID object_id, int argc, uint32_t *argv);
	int call_variant_function(WasGoID object_id, int argc, uint32_t *argv);
	// int call_array_function(WasGoID array_id, int argc, uint32_t *argv);
	// int call_dictionary_function(WasGoID dictionary_id, int argc, uint32_t *argv);

	Object *lookup_object(WasGoID id);
	Object *lookup_createdObject(WasGoID id);
	Object *lookup_referencedObject(WasGoID id);
	Variant *lookup_variant(WasGoID id);

	WasGoID lookup_object_reverse(ObjectID id);
	WasGoID lookup_createdObject_reverse(ObjectID id);
	WasGoID lookup_referencedObject_reverse(ObjectID id);
	// WasGoID lookup_variant_reverse(Variant *);

	bool is_active();

	//the regular node callbacks
	// void _enter_tree();
	// void _exit_tree();
	// String _get_configuration_warning();
	// void _input(InputEvent event);
	// void _physics_process(float delta);
	// void _process(float delta);
	// void _ready();
	// void _unhandled_input(InputEvent event);
	// void _unhandled_key_input(InputEventKey event);

	WasGoID generate_id();
	WasGoID create_object(ObjectID obj_id);
	WasGoID reference_object(ObjectID obj_id);
	WasGoID create_variant(Variant var);
	WasGoID create_object(Object obj);
	WasGoID reference_object(Object obj);
	WasGoID create_object(Object *obj);
	WasGoID reference_object(Object *obj);
	WasGoID reference_object(Ref<Object> ref);

	WasGoID handle_return_variant(Variant var);

private:
	wasm_module_t module = NULL;
	wasm_module_inst_t module_inst = NULL;
	wasm_exec_env_t exec_env = NULL;
	uint32_t wasm_buffer = 0;

	WasGoID last_id = 0;

	Ref<WasmResource> wasm_resource;

	wasm_function_inst_t notification_callback = nullptr;

	HashMap<ObjectID, WasGoID> createdObjects;
	HashMap<WasGoID, ObjectID> createdObjectsReverse;
	HashMap<ObjectID, WasGoID> referencedObjects;
	HashMap<WasGoID, ObjectID> referencedObjectsReverse;

	//Only for special types that are not Objects. No referencing allowed. Everything is pass by value
	// HashMap<Variant, WasGoID> createdVariants;
	HashMap<WasGoID, Variant> createdVariantsReverse;

	HashMap<WasGoID, InterpolationType> networkedVariants;

	// HashMap<WasGoID, int> createdObjectCounts;
	// HashMap<WasGoID, int> referencedObjectCounts;
	// HashMap<WasGoID, int> referencedArraysCounts;
	// HashMap<WasGoID, int> referencedDictionaryCounts;
};


//WRAPPERS
WasGoState::WasGoID _wasgo_this_node(wasm_exec_env_t exec_env);

int _wasgo_get_property_bool(wasm_exec_env_t p_exec_env, const uint8_t *property_name, int property_name_size);
void _wasgo_set_property_bool(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, int value);

int _wasgo_get_property_int(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size);
void _wasgo_set_property_int(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, int value);

float _wasgo_get_property_float(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size);
void _wasgo_set_property_float(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, float value);

void _wasgo_get_property_string(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);
void _wasgo_set_property_string(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);

void _wasgo_get_property_vector2(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);
void _wasgo_set_property_vector2(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);

void _wasgo_get_property_rect2(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);
void _wasgo_set_property_rect2(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);

void _wasgo_get_property_vector3(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);
void _wasgo_set_property_vector3(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);

void _wasgo_get_property_transform2d(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);
void _wasgo_set_property_transform2d(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);

void _wasgo_get_property_plane(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);
void _wasgo_set_property_plane(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);

void _wasgo_get_property_quat(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);
void _wasgo_set_property_quat(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);

void _wasgo_get_property_basis(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);
void _wasgo_set_property_basis(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);

void _wasgo_get_property_aabb(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);
void _wasgo_set_property_aabb(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);

void _wasgo_get_property_transform(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);
void _wasgo_set_property_transform(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);

void _wasgo_get_property_color(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);
void _wasgo_set_property_color(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);

void _wasgo_get_property_nodepath(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);
void _wasgo_set_property_nodepath(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, uint8_t *value, int value_size);

WasGoState::WasGoID _wasgo_get_property_object(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size);
void _wasgo_set_property_object(wasm_exec_env_t p_exec_env, const uint8_t* property_name, int property_name_size, WasGoState::WasGoID p_wasgo_id);

#endif