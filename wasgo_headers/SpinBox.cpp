/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SpinBox.h"
void SpinBox::apply(){
	_wasgo_SpinBox_wrapper_apply(wasgo_id);
}
LineEdit::Align SpinBox::get_align(){
	return LineEdit::Align(_wasgo_SpinBox_wrapper_get_align(wasgo_id));
}
LineEdit SpinBox::get_line_edit(){
	return LineEdit(_wasgo_SpinBox_wrapper_get_line_edit(wasgo_id));
}
String SpinBox::get_prefix(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_SpinBox_wrapper_get_prefix(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String SpinBox::get_suffix(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_SpinBox_wrapper_get_suffix(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
bool SpinBox::is_editable(){
	return (bool) _wasgo_SpinBox_wrapper_is_editable(wasgo_id);
}
void SpinBox::set_align(LineEdit::Align p_align){
	_wasgo_SpinBox_wrapper_set_align(wasgo_id, p_align._get_wasgo_id());
}
void SpinBox::set_editable(bool p_editable){
	_wasgo_SpinBox_wrapper_set_editable(wasgo_id, p_editable);
}
void SpinBox::set_prefix(String p_prefix){

    Variant wasgo_var_prefix = p_prefix;
    uint8_t wasgo_buffer_prefix[256];
    int wasgo_size_prefix = 256;
    encode_variant(wasgo_var_prefix, wasgo_buffer_prefix, wasgo_size_prefix);
    
	_wasgo_SpinBox_wrapper_set_prefix(wasgo_id, wasgo_buffer_prefix, wasgo_size_prefix);
}
void SpinBox::set_suffix(String p_suffix){

    Variant wasgo_var_suffix = p_suffix;
    uint8_t wasgo_buffer_suffix[256];
    int wasgo_size_suffix = 256;
    encode_variant(wasgo_var_suffix, wasgo_buffer_suffix, wasgo_size_suffix);
    
	_wasgo_SpinBox_wrapper_set_suffix(wasgo_id, wasgo_buffer_suffix, wasgo_size_suffix);
}

SpinBox::SpinBox(WasGoId p_wasgo_id) : Range(p_wasgo_id){
}
SpinBox::SpinBox(){
    wasgo_id = _wasgo_SpinBox_constructor();
}
SpinBox::~SpinBox(){
    _wasgo_SpinBox_destructor(wasgo_id);
}