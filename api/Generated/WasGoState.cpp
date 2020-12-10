/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "WasGoState.h"
int WasGoState::get_heap_size(){
	return (int) _wasgo_WasGoState_wrapper_get_heap_size(wasgo_id);
}
// Dictionary WasGoState::get_properties(){
// 	return Dictionary(_wasgo_WasGoState_wrapper_get_properties(wasgo_id));
// }
::AABB WasGoState::get_property_aabb(String p_property){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_WasGoState_wrapper_get_property_aabb(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, wasgo_buffer_property, wasgo_size_property);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Basis WasGoState::get_property_basis(String p_property){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 40;
    uint8_t wasgo_ret_buffer[40];
    _wasgo_WasGoState_wrapper_get_property_basis(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, wasgo_buffer_property, wasgo_size_property);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
bool WasGoState::get_property_bool(String p_property){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	return (bool) _wasgo_WasGoState_wrapper_get_property_bool(wasgo_id, wasgo_buffer_property, wasgo_size_property);
}
Color WasGoState::get_property_color(String p_property){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_WasGoState_wrapper_get_property_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, wasgo_buffer_property, wasgo_size_property);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
float WasGoState::get_property_float(String p_property){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	return (float) _wasgo_WasGoState_wrapper_get_property_float(wasgo_id, wasgo_buffer_property, wasgo_size_property);
}
int WasGoState::get_property_int(String p_property){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	return (int) _wasgo_WasGoState_wrapper_get_property_int(wasgo_id, wasgo_buffer_property, wasgo_size_property);
}
NodePath WasGoState::get_property_nodepath(String p_property){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_WasGoState_wrapper_get_property_nodepath(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, wasgo_buffer_property, wasgo_size_property);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Plane WasGoState::get_property_plane(String p_property){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_WasGoState_wrapper_get_property_plane(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, wasgo_buffer_property, wasgo_size_property);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Quat WasGoState::get_property_quat(String p_property){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_WasGoState_wrapper_get_property_quat(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, wasgo_buffer_property, wasgo_size_property);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Rect2 WasGoState::get_property_rect2(String p_property){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_WasGoState_wrapper_get_property_rect2(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, wasgo_buffer_property, wasgo_size_property);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
String WasGoState::get_property_string(String p_property){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_WasGoState_wrapper_get_property_string(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, wasgo_buffer_property, wasgo_size_property);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Transform WasGoState::get_property_transform(String p_property){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_WasGoState_wrapper_get_property_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, wasgo_buffer_property, wasgo_size_property);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Transform2D WasGoState::get_property_transform2d(String p_property){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_WasGoState_wrapper_get_property_transform2d(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, wasgo_buffer_property, wasgo_size_property);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Vector2 WasGoState::get_property_vector2(String p_property){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_WasGoState_wrapper_get_property_vector2(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, wasgo_buffer_property, wasgo_size_property);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Vector3 WasGoState::get_property_vector3(String p_property){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_WasGoState_wrapper_get_property_vector3(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, wasgo_buffer_property, wasgo_size_property);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int WasGoState::get_stack_size(){
	return (int) _wasgo_WasGoState_wrapper_get_stack_size(wasgo_id);
}
WasmResource WasGoState::get_wasm_script(){
	return WasmResource(_wasgo_WasGoState_wrapper_get_wasm_script(wasgo_id));
}
void WasGoState::set_heap_size(int p_heap_size){
	_wasgo_WasGoState_wrapper_set_heap_size(wasgo_id, p_heap_size);
}
void WasGoState::set_int_property(int p_value, String p_key){

    Variant wasgo_var_key = p_key;
    int wasgo_size_key = 10 + String(p_key).size();
    uint8_t wasgo_buffer_key[wasgo_size_key];
    encode_variant(wasgo_var_key, wasgo_buffer_key, wasgo_size_key);
    
	_wasgo_WasGoState_wrapper_set_int_property(wasgo_id, p_value, wasgo_buffer_key, -69, wasgo_size_key);
}
// void WasGoState::set_properties(Dictionary p_properties){
// 	_wasgo_WasGoState_wrapper_set_properties(wasgo_id, p_properties._get_wasgo_id());
// }
void WasGoState::set_property_aabb(String p_property, ::AABB p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_var_value = p_value;
    uint8_t wasgo_buffer_value[28];
    int wasgo_size_value = 28;
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_WasGoState_wrapper_set_property_aabb(wasgo_id, wasgo_buffer_property, wasgo_size_property, -69, wasgo_buffer_value, wasgo_size_value);
}
void WasGoState::set_property_basis(String p_property, Basis p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_var_value = p_value;
    uint8_t wasgo_buffer_value[40];
    int wasgo_size_value = 40;
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_WasGoState_wrapper_set_property_basis(wasgo_id, wasgo_buffer_property, wasgo_size_property, -69, wasgo_buffer_value, wasgo_size_value);
}
void WasGoState::set_property_bool(String p_property, bool p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	_wasgo_WasGoState_wrapper_set_property_bool(wasgo_id, wasgo_buffer_property, wasgo_size_property, -69, p_value);
}
void WasGoState::set_property_color(String p_property, Color p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_var_value = p_value;
    uint8_t wasgo_buffer_value[20];
    int wasgo_size_value = 20;
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_WasGoState_wrapper_set_property_color(wasgo_id, wasgo_buffer_property, wasgo_size_property, -69, wasgo_buffer_value, wasgo_size_value);
}
void WasGoState::set_property_float(String p_property, float p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	_wasgo_WasGoState_wrapper_set_property_float(wasgo_id, wasgo_buffer_property, wasgo_size_property, -69, p_value);
}
void WasGoState::set_property_int(String p_property, int p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	_wasgo_WasGoState_wrapper_set_property_int(wasgo_id, wasgo_buffer_property, wasgo_size_property, -69, p_value);
}
void WasGoState::set_property_nodepath(String p_property, NodePath p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_var_value = p_value;
    int wasgo_size_value = 10 + String(p_value).size();
    uint8_t wasgo_buffer_value[wasgo_size_value];
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_WasGoState_wrapper_set_property_nodepath(wasgo_id, wasgo_buffer_property, wasgo_size_property, -69, wasgo_buffer_value, wasgo_size_value);
}
void WasGoState::set_property_plane(String p_property, Plane p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_var_value = p_value;
    uint8_t wasgo_buffer_value[20];
    int wasgo_size_value = 20;
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_WasGoState_wrapper_set_property_plane(wasgo_id, wasgo_buffer_property, wasgo_size_property, -69, wasgo_buffer_value, wasgo_size_value);
}
void WasGoState::set_property_quat(String p_property, Quat p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_var_value = p_value;
    uint8_t wasgo_buffer_value[20];
    int wasgo_size_value = 20;
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_WasGoState_wrapper_set_property_quat(wasgo_id, wasgo_buffer_property, wasgo_size_property, -69, wasgo_buffer_value, wasgo_size_value);
}
void WasGoState::set_property_rect2(String p_property, Rect2 p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_var_value = p_value;
    uint8_t wasgo_buffer_value[20];
    int wasgo_size_value = 20;
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_WasGoState_wrapper_set_property_rect2(wasgo_id, wasgo_buffer_property, wasgo_size_property, -69, wasgo_buffer_value, wasgo_size_value);
}
void WasGoState::set_property_string(String p_property, String p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_var_value = p_value;
    int wasgo_size_value = 10 + String(p_value).size();
    uint8_t wasgo_buffer_value[wasgo_size_value];
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_WasGoState_wrapper_set_property_string(wasgo_id, wasgo_buffer_property, wasgo_size_property, -69, wasgo_buffer_value, wasgo_size_value);
}
void WasGoState::set_property_transform(String p_property, Transform p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_var_value = p_value;
    uint8_t wasgo_buffer_value[52];
    int wasgo_size_value = 52;
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_WasGoState_wrapper_set_property_transform(wasgo_id, wasgo_buffer_property, wasgo_size_property, -69, wasgo_buffer_value, wasgo_size_value);
}
void WasGoState::set_property_transform2d(String p_property, Transform2D p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_var_value = p_value;
    uint8_t wasgo_buffer_value[28];
    int wasgo_size_value = 28;
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_WasGoState_wrapper_set_property_transform2d(wasgo_id, wasgo_buffer_property, wasgo_size_property, -69, wasgo_buffer_value, wasgo_size_value);
}
void WasGoState::set_property_vector2(String p_property, Vector2 p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_var_value = p_value;
    uint8_t wasgo_buffer_value[12];
    int wasgo_size_value = 12;
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_WasGoState_wrapper_set_property_vector2(wasgo_id, wasgo_buffer_property, wasgo_size_property, -69, wasgo_buffer_value, wasgo_size_value);
}
void WasGoState::set_property_vector3(String p_property, Vector3 p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_var_value = p_value;
    uint8_t wasgo_buffer_value[16];
    int wasgo_size_value = 16;
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_WasGoState_wrapper_set_property_vector3(wasgo_id, wasgo_buffer_property, wasgo_size_property, -69, wasgo_buffer_value, wasgo_size_value);
}
void WasGoState::set_stack_size(int p_stack_size){
	_wasgo_WasGoState_wrapper_set_stack_size(wasgo_id, p_stack_size);
}
void WasGoState::set_wasm_script(WasmResource p_wasm_script){
	_wasgo_WasGoState_wrapper_set_wasm_script(wasgo_id, p_wasm_script._get_wasgo_id());
}

WasGoState::WasGoState(WasGoID p_wasgo_id) : Node(p_wasgo_id){
}
WasGoState::WasGoState(Node other) : Node(other._get_wasgo_id()){
}
WasGoState::WasGoState():Node(){
}
WasGoState WasGoState::new_instance(){
    return WasGoState(_wasgo_WasGoState_constructor());
}
WasGoID WasGoState::_get_wasgo_id(){
    return wasgo_id;
}
WasGoState::operator bool(){
    return (bool) wasgo_id;
}
