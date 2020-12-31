/* THIS FILE IS GENERATED */
#ifndef WASGOSTATE_H
#define WASGOSTATE_H

#include "wasgo/wasgoid.h"

#include "Vector3.h"
#include "Vector2.h"
#include "Transform2D.h"
#include "Basis.h"
#include "AABB.h"
#include "WasmResource.h"
#include "Node.h"
#include "Ustring.h"
#include "Variant.h"
#include "Color.h"
#include "Transform.h"
#include "Plane.h"
#include "NodePath.h"
#include "Quat.h"
#include "Rect2.h"
class WasGoState : public Node{
public:
int get_heap_size();
// Dictionary get_properties();
AABB get_property_aabb(String p_property);
Basis get_property_basis(String p_property);
bool get_property_bool(String p_property);
Color get_property_color(String p_property);
float get_property_float(String p_property);
int get_property_int(String p_property);
NodePath get_property_nodepath(String p_property);
Plane get_property_plane(String p_property);
Quat get_property_quat(String p_property);
Rect2 get_property_rect2(String p_property);
String get_property_string(String p_property);
Transform get_property_transform(String p_property);
Transform2D get_property_transform2d(String p_property);
Vector2 get_property_vector2(String p_property);
Vector3 get_property_vector3(String p_property);
int get_stack_size();
WasmResource get_wasm_script();
void set_heap_size(int p_heap_size);
void set_int_property(int p_value, String p_key);
// void set_properties(Dictionary p_properties);
void set_property_aabb(String p_property, AABB p_value);
void set_property_basis(String p_property, Basis p_value);
void set_property_bool(String p_property, bool p_value);
void set_property_color(String p_property, Color p_value);
void set_property_float(String p_property, float p_value);
void set_property_int(String p_property, int p_value);
void set_property_nodepath(String p_property, NodePath p_value);
void set_property_plane(String p_property, Plane p_value);
void set_property_quat(String p_property, Quat p_value);
void set_property_rect2(String p_property, Rect2 p_value);
void set_property_string(String p_property, String p_value);
void set_property_transform(String p_property, Transform p_value);
void set_property_transform2d(String p_property, Transform2D p_value);
void set_property_vector2(String p_property, Vector2 p_value);
void set_property_vector3(String p_property, Vector3 p_value);
void set_stack_size(int p_stack_size);
void set_wasm_script(WasmResource p_wasm_script);

protected:
public:
explicit WasGoState(WasGoID p_wasgo_id);
explicit WasGoState(Node other);
WasGoState();
WasGoState new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_WasGoState_wrapper_get_heap_size(WasGoID wasgo_id);
WasGoID _wasgo_WasGoState_wrapper_get_properties(WasGoID wasgo_id);
void _wasgo_WasGoState_wrapper_get_property_aabb(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_property, int p_property_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_get_property_basis(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_property, int p_property_wasgo_buffer_size);
int _wasgo_WasGoState_wrapper_get_property_bool(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_get_property_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_property, int p_property_wasgo_buffer_size);
float _wasgo_WasGoState_wrapper_get_property_float(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size);
int _wasgo_WasGoState_wrapper_get_property_int(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_get_property_nodepath(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_property, int p_property_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_get_property_plane(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_property, int p_property_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_get_property_quat(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_property, int p_property_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_get_property_rect2(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_property, int p_property_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_get_property_string(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_property, int p_property_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_get_property_transform(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_property, int p_property_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_get_property_transform2d(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_property, int p_property_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_get_property_vector2(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_property, int p_property_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_get_property_vector3(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_property, int p_property_wasgo_buffer_size);
int _wasgo_WasGoState_wrapper_get_stack_size(WasGoID wasgo_id);
WasGoID _wasgo_WasGoState_wrapper_get_wasm_script(WasGoID wasgo_id);
void _wasgo_WasGoState_wrapper_set_heap_size(WasGoID wasgo_id, int p_heap_size);
void _wasgo_WasGoState_wrapper_set_int_property(WasGoID wasgo_id, int p_value, const uint8_t * p_key, int wasgo_throwaway, int p_key_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_set_properties(WasGoID wasgo_id, WasGoID p_properties);
void _wasgo_WasGoState_wrapper_set_property_aabb(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_set_property_basis(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_set_property_bool(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, int wasgo_throwaway, bool p_value);
void _wasgo_WasGoState_wrapper_set_property_color(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_set_property_float(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, int wasgo_throwaway, float p_value);
void _wasgo_WasGoState_wrapper_set_property_int(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, int wasgo_throwaway, int p_value);
void _wasgo_WasGoState_wrapper_set_property_nodepath(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_set_property_plane(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_set_property_quat(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_set_property_rect2(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_set_property_string(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_set_property_transform(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_set_property_transform2d(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_set_property_vector2(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_set_property_vector3(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_WasGoState_wrapper_set_stack_size(WasGoID wasgo_id, int p_stack_size);
void _wasgo_WasGoState_wrapper_set_wasm_script(WasGoID wasgo_id, WasGoID p_wasm_script);

    //constructor wrappers
    WasGoID _wasgo_WasGoState_constructor();
            
}
#endif