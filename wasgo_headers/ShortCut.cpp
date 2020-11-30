/* THIS FILE IS GENERATED */
#include "ShortCut.h"
String ShortCut::get_as_text(){
	return String::from_wasgo_id(_wasgo_ShortCut_wrapper_get_as_text(wasgo_id));
}
InputEvent ShortCut::get_shortcut(){
	return InputEvent::from_wasgo_id(_wasgo_ShortCut_wrapper_get_shortcut(wasgo_id));
}
bool ShortCut::is_shortcut(InputEvent p_event){
	return (bool) _wasgo_ShortCut_wrapper_is_shortcut(wasgo_id, ((Variant) event).get_wasgo_id()));
}
bool ShortCut::is_valid(){
	return (bool) _wasgo_ShortCut_wrapper_is_valid(wasgo_id));
}
void ShortCut::set_shortcut(InputEvent p_event){
	_wasgo_ShortCut_wrapper_set_shortcut(wasgo_id, ((Variant) event).get_wasgo_id());
}

ShortCut::ShortCut(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ShortCut::~ShortCut(){
}