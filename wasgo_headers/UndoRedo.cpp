/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "UndoRedo.h"
void UndoRedo::add_do_method(Object p_object, String p_method){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	_wasgo_UndoRedo_wrapper_add_do_method(wasgo_id, p_object._get_wasgo_id(), wasgo_buffer_method, wasgo_size_method);
}
void UndoRedo::add_do_property(Object p_object, String p_property, Variant p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	_wasgo_UndoRedo_wrapper_add_do_property(wasgo_id, p_object._get_wasgo_id(), wasgo_buffer_property, wasgo_size_property, p_value._get_wasgo_id());
}
void UndoRedo::add_do_reference(Object p_object){
	_wasgo_UndoRedo_wrapper_add_do_reference(wasgo_id, p_object._get_wasgo_id());
}
void UndoRedo::add_undo_method(Object p_object, String p_method){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	_wasgo_UndoRedo_wrapper_add_undo_method(wasgo_id, p_object._get_wasgo_id(), wasgo_buffer_method, wasgo_size_method);
}
void UndoRedo::add_undo_property(Object p_object, String p_property, Variant p_value){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    
	_wasgo_UndoRedo_wrapper_add_undo_property(wasgo_id, p_object._get_wasgo_id(), wasgo_buffer_property, wasgo_size_property, p_value._get_wasgo_id());
}
void UndoRedo::add_undo_reference(Object p_object){
	_wasgo_UndoRedo_wrapper_add_undo_reference(wasgo_id, p_object._get_wasgo_id());
}
void UndoRedo::clear_history(bool p_increase_version){
	_wasgo_UndoRedo_wrapper_clear_history(wasgo_id, p_increase_version);
}
void UndoRedo::commit_action(){
	_wasgo_UndoRedo_wrapper_commit_action(wasgo_id);
}
void UndoRedo::create_action(String p_name, UndoRedo::MergeMode p_merge_mode){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_UndoRedo_wrapper_create_action(wasgo_id, wasgo_buffer_name, wasgo_size_name, p_merge_mode._get_wasgo_id());
}
String UndoRedo::get_current_action_name(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_UndoRedo_wrapper_get_current_action_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int UndoRedo::get_version(){
	return (int) _wasgo_UndoRedo_wrapper_get_version(wasgo_id);
}
bool UndoRedo::has_redo(){
	return (bool) _wasgo_UndoRedo_wrapper_has_redo(wasgo_id);
}
bool UndoRedo::has_undo(){
	return (bool) _wasgo_UndoRedo_wrapper_has_undo(wasgo_id);
}
bool UndoRedo::is_commiting_action(){
	return (bool) _wasgo_UndoRedo_wrapper_is_commiting_action(wasgo_id);
}
bool UndoRedo::redo(){
	return (bool) _wasgo_UndoRedo_wrapper_redo(wasgo_id);
}
bool UndoRedo::undo(){
	return (bool) _wasgo_UndoRedo_wrapper_undo(wasgo_id);
}

UndoRedo::UndoRedo(WasGoID p_wasgo_id) : Object(p_wasgo_id){
}
UndoRedo::UndoRedo(Object other) : Object(other._get_wasgo_id()){
}
UndoRedo::UndoRedo():Object(){
}
UndoRedo UndoRedo::new_instance(){
    return UndoRedo(_wasgo_UndoRedo_constructor());
}
WasGoID UndoRedo::_get_wasgo_id(){
    return wasgo_id;
}
UndoRedo::operator bool(){
    return (bool) wasgo_id;
}
