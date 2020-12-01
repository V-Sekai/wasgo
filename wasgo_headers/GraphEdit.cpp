/* THIS FILE IS GENERATED */
#include "GraphEdit.h"
void GraphEdit::add_valid_connection_type(int p_from_type, int p_to_type){
	_wasgo_GraphEdit_wrapper_add_valid_connection_type(wasgo_id, p_from_type, p_to_type);
}
void GraphEdit::add_valid_left_disconnect_type(int p_type){
	_wasgo_GraphEdit_wrapper_add_valid_left_disconnect_type(wasgo_id, p_type);
}
void GraphEdit::add_valid_right_disconnect_type(int p_type){
	_wasgo_GraphEdit_wrapper_add_valid_right_disconnect_type(wasgo_id, p_type);
}
void GraphEdit::clear_connections(){
	_wasgo_GraphEdit_wrapper_clear_connections(wasgo_id);
}
Error GraphEdit::connect_node(String p_from, int p_from_port, String p_to, int p_to_port){
	return Error::from_wasgo_id(_wasgo_GraphEdit_wrapper_connect_node(wasgo_id, ((Variant) p_from).get_wasgo_id(), p_from_port, ((Variant) p_to).get_wasgo_id(), p_to_port));
}
void GraphEdit::disconnect_node(String p_from, int p_from_port, String p_to, int p_to_port){
	_wasgo_GraphEdit_wrapper_disconnect_node(wasgo_id, ((Variant) p_from).get_wasgo_id(), p_from_port, ((Variant) p_to).get_wasgo_id(), p_to_port);
}
Array GraphEdit::get_connection_list(){
	return Array::from_wasgo_id(_wasgo_GraphEdit_wrapper_get_connection_list(wasgo_id));
}
Vector2 GraphEdit::get_scroll_ofs(){
	return Vector2::from_wasgo_id(_wasgo_GraphEdit_wrapper_get_scroll_ofs(wasgo_id));
}
int GraphEdit::get_snap(){
	return (int) _wasgo_GraphEdit_wrapper_get_snap(wasgo_id);
}
float GraphEdit::get_zoom(){
	return (float) _wasgo_GraphEdit_wrapper_get_zoom(wasgo_id);
}
bool GraphEdit::is_node_connected(String p_from, int p_from_port, String p_to, int p_to_port){
	return (bool) _wasgo_GraphEdit_wrapper_is_node_connected(wasgo_id, ((Variant) p_from).get_wasgo_id(), p_from_port, ((Variant) p_to).get_wasgo_id(), p_to_port);
}
bool GraphEdit::is_right_disconnects_enabled(){
	return (bool) _wasgo_GraphEdit_wrapper_is_right_disconnects_enabled(wasgo_id);
}
bool GraphEdit::is_using_snap(){
	return (bool) _wasgo_GraphEdit_wrapper_is_using_snap(wasgo_id);
}
bool GraphEdit::is_valid_connection_type(int p_from_type, int p_to_type){
	return (bool) _wasgo_GraphEdit_wrapper_is_valid_connection_type(wasgo_id, p_from_type, p_to_type);
}
void GraphEdit::remove_valid_connection_type(int p_from_type, int p_to_type){
	_wasgo_GraphEdit_wrapper_remove_valid_connection_type(wasgo_id, p_from_type, p_to_type);
}
void GraphEdit::remove_valid_left_disconnect_type(int p_type){
	_wasgo_GraphEdit_wrapper_remove_valid_left_disconnect_type(wasgo_id, p_type);
}
void GraphEdit::remove_valid_right_disconnect_type(int p_type){
	_wasgo_GraphEdit_wrapper_remove_valid_right_disconnect_type(wasgo_id, p_type);
}
void GraphEdit::set_connection_activity(String p_from, int p_from_port, String p_to, int p_to_port, float p_amount){
	_wasgo_GraphEdit_wrapper_set_connection_activity(wasgo_id, ((Variant) p_from).get_wasgo_id(), p_from_port, ((Variant) p_to).get_wasgo_id(), p_to_port, p_amount);
}
void GraphEdit::set_right_disconnects(bool p_enable){
	_wasgo_GraphEdit_wrapper_set_right_disconnects(wasgo_id, p_enable);
}
void GraphEdit::set_scroll_ofs(Vector2 p_ofs){
	_wasgo_GraphEdit_wrapper_set_scroll_ofs(wasgo_id, ((Variant) p_ofs).get_wasgo_id());
}
void GraphEdit::set_snap(int p_pixels){
	_wasgo_GraphEdit_wrapper_set_snap(wasgo_id, p_pixels);
}
void GraphEdit::set_use_snap(bool p_enable){
	_wasgo_GraphEdit_wrapper_set_use_snap(wasgo_id, p_enable);
}
void GraphEdit::set_zoom(float p_p_zoom){
	_wasgo_GraphEdit_wrapper_set_zoom(wasgo_id, p_p_zoom);
}