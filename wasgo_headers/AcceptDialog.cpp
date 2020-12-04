/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AcceptDialog.h"
Button AcceptDialog::add_button(String p_text, bool p_right = (bool) false, String p_action = (String) ){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    

    Variant wasgo_var_action = p_action;
    int wasgo_size_action = String(p_action).size();
    uint8_t wasgo_buffer_action[wasgo_size_action];
    encode_variant(wasgo_var_action, wasgo_buffer_action, wasgo_size_action);
    
	return Button(_wasgo_AcceptDialog_wrapper_add_button(wasgo_id, wasgo_buffer_text, wasgo_size_text, p_right, wasgo_buffer_action, wasgo_size_action));
}
Button AcceptDialog::add_cancel(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return Button(_wasgo_AcceptDialog_wrapper_add_cancel(wasgo_id, wasgo_buffer_name, wasgo_size_name));
}
bool AcceptDialog::get_hide_on_ok(){
	return (bool) _wasgo_AcceptDialog_wrapper_get_hide_on_ok(wasgo_id);
}
Label AcceptDialog::get_label(){
	return Label(_wasgo_AcceptDialog_wrapper_get_label(wasgo_id));
}
Button AcceptDialog::get_ok(){
	return Button(_wasgo_AcceptDialog_wrapper_get_ok(wasgo_id));
}
String AcceptDialog::get_text(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AcceptDialog_wrapper_get_text(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
bool AcceptDialog::has_autowrap(){
	return (bool) _wasgo_AcceptDialog_wrapper_has_autowrap(wasgo_id);
}
void AcceptDialog::register_text_enter(Node p_line_edit){
	_wasgo_AcceptDialog_wrapper_register_text_enter(wasgo_id, p_line_edit._get_wasgo_id());
}
void AcceptDialog::set_autowrap(bool p_autowrap){
	_wasgo_AcceptDialog_wrapper_set_autowrap(wasgo_id, p_autowrap);
}
void AcceptDialog::set_hide_on_ok(bool p_enabled){
	_wasgo_AcceptDialog_wrapper_set_hide_on_ok(wasgo_id, p_enabled);
}
void AcceptDialog::set_text(String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_AcceptDialog_wrapper_set_text(wasgo_id, wasgo_buffer_text, wasgo_size_text);
}

AcceptDialog::AcceptDialog(WasGoId p_wasgo_id) : WindowDialog(p_wasgo_id){
}
AcceptDialog::AcceptDialog(WindowDialog other) : WindowDialog(other._get_wasgo_id()){
    wasgo_id = _wasgo_AcceptDialog_constructor();
}
AcceptDialog::new_instance(){
    return AcceptDialog(_wasgo_AcceptDialog_constructor());
}