/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Object.h"
void Object::add_user_signal(String p_signal, Array p_arguments = (Array) []){

    Variant wasgo_var_signal = p_signal;
    int wasgo_size_signal = String(p_signal).size();
    uint8_t wasgo_buffer_signal[wasgo_size_signal];
    encode_variant(wasgo_var_signal, wasgo_buffer_signal, wasgo_size_signal);
    
	_wasgo_Object_wrapper_add_user_signal(wasgo_id, wasgo_buffer_signal, wasgo_size_signal, p_arguments._get_wasgo_id());
}
Variant Object::call(String p_method){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	return Variant(_wasgo_Object_wrapper_call(wasgo_id, wasgo_buffer_method, wasgo_size_method));
}
void Object::call_deferred(String p_method){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	_wasgo_Object_wrapper_call_deferred(wasgo_id, wasgo_buffer_method, wasgo_size_method);
}
Variant Object::callv(String p_method, Array p_arg_array){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	return Variant(_wasgo_Object_wrapper_callv(wasgo_id, wasgo_buffer_method, wasgo_size_method, p_arg_array._get_wasgo_id()));
}
bool Object::can_translate_messages(){
	return (bool) _wasgo_Object_wrapper_can_translate_messages(wasgo_id);
}
Error Object::connect(String p_signal, Object p_target, String p_method, Array p_binds = (Array) [], int p_flags = (int) 0){

    Variant wasgo_var_signal = p_signal;
    int wasgo_size_signal = String(p_signal).size();
    uint8_t wasgo_buffer_signal[wasgo_size_signal];
    encode_variant(wasgo_var_signal, wasgo_buffer_signal, wasgo_size_signal);
    

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	return Error(_wasgo_Object_wrapper_connect(wasgo_id, wasgo_buffer_signal, wasgo_size_signal, p_target._get_wasgo_id(), wasgo_buffer_method, wasgo_size_method, p_binds._get_wasgo_id(), p_flags));
}
void Object::disconnect(String p_signal, Object p_target, String p_method){

    Variant wasgo_var_signal = p_signal;
    int wasgo_size_signal = String(p_signal).size();
    uint8_t wasgo_buffer_signal[wasgo_size_signal];
    encode_variant(wasgo_var_signal, wasgo_buffer_signal, wasgo_size_signal);
    

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	_wasgo_Object_wrapper_disconnect(wasgo_id, wasgo_buffer_signal, wasgo_size_signal, p_target._get_wasgo_id(), wasgo_buffer_method, wasgo_size_method);
}
void Object::emit_signal(String p_signal){

    Variant wasgo_var_signal = p_signal;
    int wasgo_size_signal = String(p_signal).size();
    uint8_t wasgo_buffer_signal[wasgo_size_signal];
    encode_variant(wasgo_var_signal, wasgo_buffer_signal, wasgo_size_signal);
    
	_wasgo_Object_wrapper_emit_signal(wasgo_id, wasgo_buffer_signal, wasgo_size_signal);
}
void Object::free(){
	_wasgo_Object_wrapper_free(wasgo_id);
}
Variant Object::get(String p_property){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	return Variant(_wasgo_Object_wrapper_get(wasgo_id, wasgo_buffer_property, wasgo_size_property));
}
String Object::get_class(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Object_wrapper_get_class(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Array Object::get_incoming_connections(){
	return Array(_wasgo_Object_wrapper_get_incoming_connections(wasgo_id));
}
Variant Object::get_indexed(NodePath p_property){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	return Variant(_wasgo_Object_wrapper_get_indexed(wasgo_id, wasgo_buffer_property, wasgo_size_property));
}
int Object::get_instance_id(){
	return (int) _wasgo_Object_wrapper_get_instance_id(wasgo_id);
}
Variant Object::get_meta(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return Variant(_wasgo_Object_wrapper_get_meta(wasgo_id, wasgo_buffer_name, wasgo_size_name));
}
PoolStringArray Object::get_meta_list(){
	return PoolStringArray(_wasgo_Object_wrapper_get_meta_list(wasgo_id));
}
Array Object::get_method_list(){
	return Array(_wasgo_Object_wrapper_get_method_list(wasgo_id));
}
Array Object::get_property_list(){
	return Array(_wasgo_Object_wrapper_get_property_list(wasgo_id));
}
Reference Object::get_script(){
	return Reference(_wasgo_Object_wrapper_get_script(wasgo_id));
}
Array Object::get_signal_connection_list(String p_signal){

    Variant wasgo_var_signal = p_signal;
    int wasgo_size_signal = String(p_signal).size();
    uint8_t wasgo_buffer_signal[wasgo_size_signal];
    encode_variant(wasgo_var_signal, wasgo_buffer_signal, wasgo_size_signal);
    
	return Array(_wasgo_Object_wrapper_get_signal_connection_list(wasgo_id, wasgo_buffer_signal, wasgo_size_signal));
}
Array Object::get_signal_list(){
	return Array(_wasgo_Object_wrapper_get_signal_list(wasgo_id));
}
bool Object::has_meta(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_Object_wrapper_has_meta(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
bool Object::has_method(String p_method){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	return (bool) _wasgo_Object_wrapper_has_method(wasgo_id, wasgo_buffer_method, wasgo_size_method);
}
bool Object::has_signal(String p_signal){

    Variant wasgo_var_signal = p_signal;
    int wasgo_size_signal = String(p_signal).size();
    uint8_t wasgo_buffer_signal[wasgo_size_signal];
    encode_variant(wasgo_var_signal, wasgo_buffer_signal, wasgo_size_signal);
    
	return (bool) _wasgo_Object_wrapper_has_signal(wasgo_id, wasgo_buffer_signal, wasgo_size_signal);
}
bool Object::has_user_signal(String p_signal){

    Variant wasgo_var_signal = p_signal;
    int wasgo_size_signal = String(p_signal).size();
    uint8_t wasgo_buffer_signal[wasgo_size_signal];
    encode_variant(wasgo_var_signal, wasgo_buffer_signal, wasgo_size_signal);
    
	return (bool) _wasgo_Object_wrapper_has_user_signal(wasgo_id, wasgo_buffer_signal, wasgo_size_signal);
}
bool Object::is_blocking_signals(){
	return (bool) _wasgo_Object_wrapper_is_blocking_signals(wasgo_id);
}
bool Object::is_class(String p_class){

    Variant wasgo_var_class = p_class;
    int wasgo_size_class = String(p_class).size();
    uint8_t wasgo_buffer_class[wasgo_size_class];
    encode_variant(wasgo_var_class, wasgo_buffer_class, wasgo_size_class);
    
	return (bool) _wasgo_Object_wrapper_is_class(wasgo_id, wasgo_buffer_class, wasgo_size_class);
}
bool Object::is_connected(String p_signal, Object p_target, String p_method){

    Variant wasgo_var_signal = p_signal;
    int wasgo_size_signal = String(p_signal).size();
    uint8_t wasgo_buffer_signal[wasgo_size_signal];
    encode_variant(wasgo_var_signal, wasgo_buffer_signal, wasgo_size_signal);
    

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	return (bool) _wasgo_Object_wrapper_is_connected(wasgo_id, wasgo_buffer_signal, wasgo_size_signal, p_target._get_wasgo_id(), wasgo_buffer_method, wasgo_size_method);
}
bool Object::is_queued_for_deletion(){
	return (bool) _wasgo_Object_wrapper_is_queued_for_deletion(wasgo_id);
}
void Object::notification(int p_what, bool p_reversed = (bool) false){
	_wasgo_Object_wrapper_notification(wasgo_id, p_what, p_reversed);
}
void Object::property_list_changed_notify(){
	_wasgo_Object_wrapper_property_list_changed_notify(wasgo_id);
}
void Object::remove_meta(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_Object_wrapper_remove_meta(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void Object::set(String p_property, Variant p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	_wasgo_Object_wrapper_set(wasgo_id, wasgo_buffer_property, wasgo_size_property, p_value._get_wasgo_id());
}
void Object::set_block_signals(bool p_enable){
	_wasgo_Object_wrapper_set_block_signals(wasgo_id, p_enable);
}
void Object::set_deferred(String p_property, Variant p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	_wasgo_Object_wrapper_set_deferred(wasgo_id, wasgo_buffer_property, wasgo_size_property, p_value._get_wasgo_id());
}
void Object::set_indexed(NodePath p_property, Variant p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	_wasgo_Object_wrapper_set_indexed(wasgo_id, wasgo_buffer_property, wasgo_size_property, p_value._get_wasgo_id());
}
void Object::set_message_translation(bool p_enable){
	_wasgo_Object_wrapper_set_message_translation(wasgo_id, p_enable);
}
void Object::set_meta(String p_name, Variant p_value){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_Object_wrapper_set_meta(wasgo_id, wasgo_buffer_name, wasgo_size_name, p_value._get_wasgo_id());
}
void Object::set_script(Reference p_script){
	_wasgo_Object_wrapper_set_script(wasgo_id, p_script._get_wasgo_id());
}
String Object::to_string(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Object_wrapper_to_string(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String Object::tr(String p_message){

    Variant wasgo_var_message = p_message;
    int wasgo_size_message = String(p_message).size();
    uint8_t wasgo_buffer_message[wasgo_size_message];
    encode_variant(wasgo_var_message, wasgo_buffer_message, wasgo_size_message);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Object_wrapper_tr(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_message, wasgo_size_message);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}

Object::Object(WasGoID p_wasgo_id) : (p_wasgo_id){
}
Object::Object( other) : (other._get_wasgo_id()){
    wasgo_id = _wasgo_Object_constructor();
}
Object::new_instance(){
    return Object(_wasgo_Object_constructor());
}