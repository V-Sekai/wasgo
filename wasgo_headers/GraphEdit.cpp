/* THIS FILE IS GENERATED */
#include "marshalls.h"
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

    Variant wasgo_var_from = p_from;
    int wasgo_size_from = 10 + String(p_from).size();
    uint8_t wasgo_buffer_from[wasgo_size_from];
    encode_variant(wasgo_var_from, wasgo_buffer_from, wasgo_size_from);
    

    Variant wasgo_var_to = p_to;
    int wasgo_size_to = 10 + String(p_to).size();
    uint8_t wasgo_buffer_to[wasgo_size_to];
    encode_variant(wasgo_var_to, wasgo_buffer_to, wasgo_size_to);
    
	return Error(_wasgo_GraphEdit_wrapper_connect_node(wasgo_id, wasgo_buffer_from, wasgo_size_from, -69, p_from_port, wasgo_buffer_to, wasgo_size_to, p_to_port));
}
void GraphEdit::disconnect_node(String p_from, int p_from_port, String p_to, int p_to_port){

    Variant wasgo_var_from = p_from;
    int wasgo_size_from = 10 + String(p_from).size();
    uint8_t wasgo_buffer_from[wasgo_size_from];
    encode_variant(wasgo_var_from, wasgo_buffer_from, wasgo_size_from);
    

    Variant wasgo_var_to = p_to;
    int wasgo_size_to = 10 + String(p_to).size();
    uint8_t wasgo_buffer_to[wasgo_size_to];
    encode_variant(wasgo_var_to, wasgo_buffer_to, wasgo_size_to);
    
	_wasgo_GraphEdit_wrapper_disconnect_node(wasgo_id, wasgo_buffer_from, wasgo_size_from, -69, p_from_port, wasgo_buffer_to, wasgo_size_to, p_to_port);
}
Array GraphEdit::get_connection_list(){
	return Array(_wasgo_GraphEdit_wrapper_get_connection_list(wasgo_id));
}
Vector2 GraphEdit::get_scroll_ofs(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_GraphEdit_wrapper_get_scroll_ofs(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int GraphEdit::get_snap(){
	return (int) _wasgo_GraphEdit_wrapper_get_snap(wasgo_id);
}
float GraphEdit::get_zoom(){
	return (float) _wasgo_GraphEdit_wrapper_get_zoom(wasgo_id);
}
HBoxContainer GraphEdit::get_zoom_hbox(){
	return HBoxContainer(_wasgo_GraphEdit_wrapper_get_zoom_hbox(wasgo_id));
}
bool GraphEdit::is_node_connected(String p_from, int p_from_port, String p_to, int p_to_port){

    Variant wasgo_var_from = p_from;
    int wasgo_size_from = 10 + String(p_from).size();
    uint8_t wasgo_buffer_from[wasgo_size_from];
    encode_variant(wasgo_var_from, wasgo_buffer_from, wasgo_size_from);
    

    Variant wasgo_var_to = p_to;
    int wasgo_size_to = 10 + String(p_to).size();
    uint8_t wasgo_buffer_to[wasgo_size_to];
    encode_variant(wasgo_var_to, wasgo_buffer_to, wasgo_size_to);
    
	return (bool) _wasgo_GraphEdit_wrapper_is_node_connected(wasgo_id, wasgo_buffer_from, wasgo_size_from, -69, p_from_port, wasgo_buffer_to, wasgo_size_to, p_to_port);
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

    Variant wasgo_var_from = p_from;
    int wasgo_size_from = 10 + String(p_from).size();
    uint8_t wasgo_buffer_from[wasgo_size_from];
    encode_variant(wasgo_var_from, wasgo_buffer_from, wasgo_size_from);
    

    Variant wasgo_var_to = p_to;
    int wasgo_size_to = 10 + String(p_to).size();
    uint8_t wasgo_buffer_to[wasgo_size_to];
    encode_variant(wasgo_var_to, wasgo_buffer_to, wasgo_size_to);
    
	_wasgo_GraphEdit_wrapper_set_connection_activity(wasgo_id, wasgo_buffer_from, wasgo_size_from, -69, p_from_port, wasgo_buffer_to, wasgo_size_to, p_to_port, p_amount);
}
void GraphEdit::set_right_disconnects(bool p_enable){
	_wasgo_GraphEdit_wrapper_set_right_disconnects(wasgo_id, p_enable);
}
void GraphEdit::set_scroll_ofs(Vector2 p_ofs){

    Variant wasgo_var_ofs = p_ofs;
    uint8_t wasgo_buffer_ofs[12];
    int wasgo_size_ofs = 12;
    encode_variant(wasgo_var_ofs, wasgo_buffer_ofs, wasgo_size_ofs);
    
	_wasgo_GraphEdit_wrapper_set_scroll_ofs(wasgo_id, wasgo_buffer_ofs, wasgo_size_ofs);
}
void GraphEdit::set_selected(Node p_node){
	_wasgo_GraphEdit_wrapper_set_selected(wasgo_id, p_node._get_wasgo_id());
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

GraphEdit::GraphEdit(WasGoID p_wasgo_id) : Control(p_wasgo_id){
}
GraphEdit::GraphEdit(Control other) : Control(other._get_wasgo_id()){
}
GraphEdit::GraphEdit():Control(){
}
GraphEdit GraphEdit::new_instance(){
    return GraphEdit(_wasgo_GraphEdit_constructor());
}
WasGoID GraphEdit::_get_wasgo_id(){
    return wasgo_id;
}
GraphEdit::operator bool(){
    return (bool) wasgo_id;
}
