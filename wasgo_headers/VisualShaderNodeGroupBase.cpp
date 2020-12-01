/* THIS FILE IS GENERATED */
#include "VisualShaderNodeGroupBase.h"
void VisualShaderNodeGroupBase::add_input_port(int p_id, int p_type, String p_name){
	_wasgo_VisualShaderNodeGroupBase_wrapper_add_input_port(wasgo_id, p_id, p_type, ((Variant) p_name).get_wasgo_id());
}
void VisualShaderNodeGroupBase::add_output_port(int p_id, int p_type, String p_name){
	_wasgo_VisualShaderNodeGroupBase_wrapper_add_output_port(wasgo_id, p_id, p_type, ((Variant) p_name).get_wasgo_id());
}
void VisualShaderNodeGroupBase::clear_input_ports(){
	_wasgo_VisualShaderNodeGroupBase_wrapper_clear_input_ports(wasgo_id);
}
void VisualShaderNodeGroupBase::clear_output_ports(){
	_wasgo_VisualShaderNodeGroupBase_wrapper_clear_output_ports(wasgo_id);
}
int VisualShaderNodeGroupBase::get_free_input_port_id(){
	return (int) _wasgo_VisualShaderNodeGroupBase_wrapper_get_free_input_port_id(wasgo_id);
}
int VisualShaderNodeGroupBase::get_free_output_port_id(){
	return (int) _wasgo_VisualShaderNodeGroupBase_wrapper_get_free_output_port_id(wasgo_id);
}
int VisualShaderNodeGroupBase::get_input_port_count(){
	return (int) _wasgo_VisualShaderNodeGroupBase_wrapper_get_input_port_count(wasgo_id);
}
String VisualShaderNodeGroupBase::get_inputs(){
	return String::from_wasgo_id(_wasgo_VisualShaderNodeGroupBase_wrapper_get_inputs(wasgo_id));
}
int VisualShaderNodeGroupBase::get_output_port_count(){
	return (int) _wasgo_VisualShaderNodeGroupBase_wrapper_get_output_port_count(wasgo_id);
}
String VisualShaderNodeGroupBase::get_outputs(){
	return String::from_wasgo_id(_wasgo_VisualShaderNodeGroupBase_wrapper_get_outputs(wasgo_id));
}
Vector2 VisualShaderNodeGroupBase::get_size(){
	return Vector2::from_wasgo_id(_wasgo_VisualShaderNodeGroupBase_wrapper_get_size(wasgo_id));
}
bool VisualShaderNodeGroupBase::has_input_port(int p_id){
	return (bool) _wasgo_VisualShaderNodeGroupBase_wrapper_has_input_port(wasgo_id, p_id);
}
bool VisualShaderNodeGroupBase::has_output_port(int p_id){
	return (bool) _wasgo_VisualShaderNodeGroupBase_wrapper_has_output_port(wasgo_id, p_id);
}
bool VisualShaderNodeGroupBase::is_valid_port_name(String p_name){
	return (bool) _wasgo_VisualShaderNodeGroupBase_wrapper_is_valid_port_name(wasgo_id, ((Variant) p_name).get_wasgo_id());
}
void VisualShaderNodeGroupBase::remove_input_port(int p_id){
	_wasgo_VisualShaderNodeGroupBase_wrapper_remove_input_port(wasgo_id, p_id);
}
void VisualShaderNodeGroupBase::remove_output_port(int p_id){
	_wasgo_VisualShaderNodeGroupBase_wrapper_remove_output_port(wasgo_id, p_id);
}
void VisualShaderNodeGroupBase::set_input_port_name(int p_id, String p_name){
	_wasgo_VisualShaderNodeGroupBase_wrapper_set_input_port_name(wasgo_id, p_id, ((Variant) p_name).get_wasgo_id());
}
void VisualShaderNodeGroupBase::set_input_port_type(int p_id, int p_type){
	_wasgo_VisualShaderNodeGroupBase_wrapper_set_input_port_type(wasgo_id, p_id, p_type);
}
void VisualShaderNodeGroupBase::set_inputs(String p_inputs){
	_wasgo_VisualShaderNodeGroupBase_wrapper_set_inputs(wasgo_id, ((Variant) p_inputs).get_wasgo_id());
}
void VisualShaderNodeGroupBase::set_output_port_name(int p_id, String p_name){
	_wasgo_VisualShaderNodeGroupBase_wrapper_set_output_port_name(wasgo_id, p_id, ((Variant) p_name).get_wasgo_id());
}
void VisualShaderNodeGroupBase::set_output_port_type(int p_id, int p_type){
	_wasgo_VisualShaderNodeGroupBase_wrapper_set_output_port_type(wasgo_id, p_id, p_type);
}
void VisualShaderNodeGroupBase::set_outputs(String p_outputs){
	_wasgo_VisualShaderNodeGroupBase_wrapper_set_outputs(wasgo_id, ((Variant) p_outputs).get_wasgo_id());
}
void VisualShaderNodeGroupBase::set_size(Vector2 p_size){
	_wasgo_VisualShaderNodeGroupBase_wrapper_set_size(wasgo_id, ((Variant) p_size).get_wasgo_id());
}