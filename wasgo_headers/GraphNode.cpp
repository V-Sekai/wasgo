/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "GraphNode.h"
void GraphNode::clear_all_slots(){
	_wasgo_GraphNode_wrapper_clear_all_slots(wasgo_id);
}
void GraphNode::clear_slot(int p_idx){
	_wasgo_GraphNode_wrapper_clear_slot(wasgo_id, p_idx);
}
Color GraphNode::get_connection_input_color(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_GraphNode_wrapper_get_connection_input_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
int GraphNode::get_connection_input_count(){
	return (int) _wasgo_GraphNode_wrapper_get_connection_input_count(wasgo_id);
}
Vector2 GraphNode::get_connection_input_position(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_GraphNode_wrapper_get_connection_input_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
int GraphNode::get_connection_input_type(int p_idx){
	return (int) _wasgo_GraphNode_wrapper_get_connection_input_type(wasgo_id, p_idx);
}
Color GraphNode::get_connection_output_color(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_GraphNode_wrapper_get_connection_output_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
int GraphNode::get_connection_output_count(){
	return (int) _wasgo_GraphNode_wrapper_get_connection_output_count(wasgo_id);
}
Vector2 GraphNode::get_connection_output_position(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_GraphNode_wrapper_get_connection_output_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
int GraphNode::get_connection_output_type(int p_idx){
	return (int) _wasgo_GraphNode_wrapper_get_connection_output_type(wasgo_id, p_idx);
}
Vector2 GraphNode::get_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_GraphNode_wrapper_get_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
GraphNode::Overlay GraphNode::get_overlay(){
	return GraphNode::Overlay(_wasgo_GraphNode_wrapper_get_overlay(wasgo_id));
}
Color GraphNode::get_slot_color_left(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_GraphNode_wrapper_get_slot_color_left(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Color GraphNode::get_slot_color_right(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_GraphNode_wrapper_get_slot_color_right(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
int GraphNode::get_slot_type_left(int p_idx){
	return (int) _wasgo_GraphNode_wrapper_get_slot_type_left(wasgo_id, p_idx);
}
int GraphNode::get_slot_type_right(int p_idx){
	return (int) _wasgo_GraphNode_wrapper_get_slot_type_right(wasgo_id, p_idx);
}
String GraphNode::get_title(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_GraphNode_wrapper_get_title(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
bool GraphNode::is_close_button_visible(){
	return (bool) _wasgo_GraphNode_wrapper_is_close_button_visible(wasgo_id);
}
bool GraphNode::is_comment(){
	return (bool) _wasgo_GraphNode_wrapper_is_comment(wasgo_id);
}
bool GraphNode::is_resizable(){
	return (bool) _wasgo_GraphNode_wrapper_is_resizable(wasgo_id);
}
bool GraphNode::is_selected(){
	return (bool) _wasgo_GraphNode_wrapper_is_selected(wasgo_id);
}
bool GraphNode::is_slot_enabled_left(int p_idx){
	return (bool) _wasgo_GraphNode_wrapper_is_slot_enabled_left(wasgo_id, p_idx);
}
bool GraphNode::is_slot_enabled_right(int p_idx){
	return (bool) _wasgo_GraphNode_wrapper_is_slot_enabled_right(wasgo_id, p_idx);
}
void GraphNode::set_comment(bool p_comment){
	_wasgo_GraphNode_wrapper_set_comment(wasgo_id, p_comment);
}
void GraphNode::set_offset(Vector2 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_GraphNode_wrapper_set_offset(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void GraphNode::set_overlay(GraphNode::Overlay p_overlay){
	_wasgo_GraphNode_wrapper_set_overlay(wasgo_id, p_overlay._get_wasgo_id());
}
void GraphNode::set_resizable(bool p_resizable){
	_wasgo_GraphNode_wrapper_set_resizable(wasgo_id, p_resizable);
}
void GraphNode::set_selected(bool p_selected){
	_wasgo_GraphNode_wrapper_set_selected(wasgo_id, p_selected);
}
void GraphNode::set_show_close_button(bool p_show){
	_wasgo_GraphNode_wrapper_set_show_close_button(wasgo_id, p_show);
}
void GraphNode::set_slot(int p_idx, bool p_enable_left, int p_type_left, Color p_color_left, bool p_enable_right, int p_type_right, Color p_color_right, Texture p_custom_left = (Texture) [object:null], Texture p_custom_right = (Texture) [object:null]){

    Variant wasgo_var_color_left = p_color_left;
    uint8_t wasgo_buffer_color_left[20];
    int wasgo_size_color_left = 20;
    encode_variant(wasgo_var_color_left, wasgo_buffer_color_left, wasgo_size_color_left);
    

    Variant wasgo_var_color_right = p_color_right;
    uint8_t wasgo_buffer_color_right[20];
    int wasgo_size_color_right = 20;
    encode_variant(wasgo_var_color_right, wasgo_buffer_color_right, wasgo_size_color_right);
    
	_wasgo_GraphNode_wrapper_set_slot(wasgo_id, p_idx, p_enable_left, p_type_left, wasgo_buffer_color_left, wasgo_size_color_left, p_enable_right, p_type_right, wasgo_buffer_color_right, wasgo_size_color_right, p_custom_left._get_wasgo_id(), p_custom_right._get_wasgo_id());
}
void GraphNode::set_title(String p_title){

    Variant wasgo_var_title = p_title;
    uint8_t wasgo_buffer_title[256];
    int wasgo_size_title = 256;
    encode_variant(wasgo_var_title, wasgo_buffer_title, wasgo_size_title);
    
	_wasgo_GraphNode_wrapper_set_title(wasgo_id, wasgo_buffer_title, wasgo_size_title);
}

GraphNode::GraphNode(WasGoId p_wasgo_id) : Container(p_wasgo_id){
}
GraphNode::GraphNode(){
    wasgo_id = _wasgo_GraphNode_constructor();
}
GraphNode::~GraphNode(){
    _wasgo_GraphNode_destructor(wasgo_id);
}