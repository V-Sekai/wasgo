/* THIS FILE IS GENERATED */
#include "DynamicFontData.h"
String DynamicFontData::get_font_path(){
	return String::from_wasgo_id(_wasgo_DynamicFontData_wrapper_get_font_path(wasgo_id));
}
DynamicFontData::Hinting DynamicFontData::get_hinting(){
	return DynamicFontData::Hinting::from_wasgo_id(_wasgo_DynamicFontData_wrapper_get_hinting(wasgo_id));
}
bool DynamicFontData::is_antialiased(){
	return (bool) _wasgo_DynamicFontData_wrapper_is_antialiased(wasgo_id);
}
void DynamicFontData::set_antialiased(bool p_antialiased){
	_wasgo_DynamicFontData_wrapper_set_antialiased(wasgo_id, p_antialiased);
}
void DynamicFontData::set_font_path(String p_path){
	_wasgo_DynamicFontData_wrapper_set_font_path(wasgo_id, ((Variant) p_path).get_wasgo_id());
}
void DynamicFontData::set_hinting(DynamicFontData::Hinting p_mode){
	_wasgo_DynamicFontData_wrapper_set_hinting(wasgo_id, ((Variant) p_mode).get_wasgo_id());
}