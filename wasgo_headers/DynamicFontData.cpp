/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "DynamicFontData.h"
String DynamicFontData::get_font_path(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_DynamicFontData_wrapper_get_font_path(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
DynamicFontData::Hinting DynamicFontData::get_hinting(){
	return DynamicFontData::Hinting(_wasgo_DynamicFontData_wrapper_get_hinting(wasgo_id));
}
bool DynamicFontData::is_antialiased(){
	return (bool) _wasgo_DynamicFontData_wrapper_is_antialiased(wasgo_id);
}
void DynamicFontData::set_antialiased(bool p_antialiased){
	_wasgo_DynamicFontData_wrapper_set_antialiased(wasgo_id, p_antialiased);
}
void DynamicFontData::set_font_path(String p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_DynamicFontData_wrapper_set_font_path(wasgo_id, wasgo_buffer_path, wasgo_size_path);
}
void DynamicFontData::set_hinting(DynamicFontData::Hinting p_mode){
	_wasgo_DynamicFontData_wrapper_set_hinting(wasgo_id, p_mode._get_wasgo_id());
}

DynamicFontData::DynamicFontData(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
DynamicFontData::DynamicFontData(Resource other) : Resource(other._get_wasgo_id()){
    wasgo_id = _wasgo_DynamicFontData_constructor();
}
DynamicFontData::new_instance(){
    return DynamicFontData(_wasgo_DynamicFontData_constructor());
}