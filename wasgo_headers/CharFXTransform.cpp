/* THIS FILE IS GENERATED */
#include "CharFXTransform.h"
int CharFXTransform::get_absolute_index(){
	return (int) _wasgo_CharFXTransform_wrapper_get_absolute_index(wasgo_id);
}
int CharFXTransform::get_character(){
	return (int) _wasgo_CharFXTransform_wrapper_get_character(wasgo_id);
}
Color CharFXTransform::get_color(){
	return Color::from_wasgo_id(_wasgo_CharFXTransform_wrapper_get_color(wasgo_id));
}
float CharFXTransform::get_elapsed_time(){
	return (float) _wasgo_CharFXTransform_wrapper_get_elapsed_time(wasgo_id);
}
Dictionary CharFXTransform::get_environment(){
	return Dictionary::from_wasgo_id(_wasgo_CharFXTransform_wrapper_get_environment(wasgo_id));
}
Vector2 CharFXTransform::get_offset(){
	return Vector2::from_wasgo_id(_wasgo_CharFXTransform_wrapper_get_offset(wasgo_id));
}
int CharFXTransform::get_relative_index(){
	return (int) _wasgo_CharFXTransform_wrapper_get_relative_index(wasgo_id);
}
bool CharFXTransform::is_visible(){
	return (bool) _wasgo_CharFXTransform_wrapper_is_visible(wasgo_id);
}
void CharFXTransform::set_absolute_index(int p_index){
	_wasgo_CharFXTransform_wrapper_set_absolute_index(wasgo_id, p_index);
}
void CharFXTransform::set_character(int p_character){
	_wasgo_CharFXTransform_wrapper_set_character(wasgo_id, p_character);
}
void CharFXTransform::set_color(Color p_color){
	_wasgo_CharFXTransform_wrapper_set_color(wasgo_id, ((Variant) p_color).get_wasgo_id());
}
void CharFXTransform::set_elapsed_time(float p_time){
	_wasgo_CharFXTransform_wrapper_set_elapsed_time(wasgo_id, p_time);
}
void CharFXTransform::set_environment(Dictionary p_environment){
	_wasgo_CharFXTransform_wrapper_set_environment(wasgo_id, ((Variant) p_environment).get_wasgo_id());
}
void CharFXTransform::set_offset(Vector2 p_offset){
	_wasgo_CharFXTransform_wrapper_set_offset(wasgo_id, ((Variant) p_offset).get_wasgo_id());
}
void CharFXTransform::set_relative_index(int p_index){
	_wasgo_CharFXTransform_wrapper_set_relative_index(wasgo_id, p_index);
}
void CharFXTransform::set_visibility(bool p_visibility){
	_wasgo_CharFXTransform_wrapper_set_visibility(wasgo_id, p_visibility);
}