/* THIS FILE IS GENERATED */
#include "LinkButton.h"
String LinkButton::get_text(){
	return String::from_wasgo_id(_wasgo_LinkButton_wrapper_get_text(wasgo_id));
}
LinkButton::UnderlineMode LinkButton::get_underline_mode(){
	return LinkButton::UnderlineMode::from_wasgo_id(_wasgo_LinkButton_wrapper_get_underline_mode(wasgo_id));
}
void LinkButton::set_text(String p_text){
	_wasgo_LinkButton_wrapper_set_text(wasgo_id, ((Variant) p_text).get_wasgo_id());
}
void LinkButton::set_underline_mode(LinkButton::UnderlineMode p_underline_mode){
	_wasgo_LinkButton_wrapper_set_underline_mode(wasgo_id, ((Variant) p_underline_mode).get_wasgo_id());
}