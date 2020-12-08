/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Control.h"
void Control::accept_event(){
	_wasgo_Control_wrapper_accept_event(wasgo_id);
}
void Control::add_color_override(String p_name, Color p_color){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_Control_wrapper_add_color_override(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_color, wasgo_size_color);
}
void Control::add_constant_override(String p_name, int p_constant){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_Control_wrapper_add_constant_override(wasgo_id, wasgo_buffer_name, wasgo_size_name, p_constant);
}
void Control::add_font_override(String p_name, Font p_font){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_Control_wrapper_add_font_override(wasgo_id, wasgo_buffer_name, wasgo_size_name, p_font._get_wasgo_id());
}
void Control::add_icon_override(String p_name, Texture p_texture){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_Control_wrapper_add_icon_override(wasgo_id, wasgo_buffer_name, wasgo_size_name, p_texture._get_wasgo_id());
}
void Control::add_shader_override(String p_name, Shader p_shader){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_Control_wrapper_add_shader_override(wasgo_id, wasgo_buffer_name, wasgo_size_name, p_shader._get_wasgo_id());
}
void Control::add_stylebox_override(String p_name, StyleBox p_stylebox){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_Control_wrapper_add_stylebox_override(wasgo_id, wasgo_buffer_name, wasgo_size_name, p_stylebox._get_wasgo_id());
}
bool Control::can_drop_data(Vector2 p_position, Variant p_data){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	return (bool) _wasgo_Control_wrapper_can_drop_data(wasgo_id, wasgo_buffer_position, wasgo_size_position, p_data._get_wasgo_id());
}
void Control::drop_data(Vector2 p_position, Variant p_data){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_Control_wrapper_drop_data(wasgo_id, wasgo_buffer_position, wasgo_size_position, p_data._get_wasgo_id());
}
void Control::force_drag(Variant p_data, Control p_preview){
	_wasgo_Control_wrapper_force_drag(wasgo_id, p_data._get_wasgo_id(), p_preview._get_wasgo_id());
}
float Control::get_anchor(Margin p_margin){
	return (float) _wasgo_Control_wrapper_get_anchor(wasgo_id, p_margin._get_wasgo_id());
}
Vector2 Control::get_begin(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Control_wrapper_get_begin(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Color Control::get_color(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    int wasgo_size_node_type = String(p_node_type).size();
    uint8_t wasgo_buffer_node_type[wasgo_size_node_type];
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Control_wrapper_get_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Vector2 Control::get_combined_minimum_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Control_wrapper_get_combined_minimum_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
int Control::get_constant(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    int wasgo_size_node_type = String(p_node_type).size();
    uint8_t wasgo_buffer_node_type[wasgo_size_node_type];
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return (int) _wasgo_Control_wrapper_get_constant(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
}
Control::CursorShape Control::get_cursor_shape(Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	return Control::CursorShape(_wasgo_Control_wrapper_get_cursor_shape(wasgo_id, wasgo_buffer_position, wasgo_size_position));
}
Vector2 Control::get_custom_minimum_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Control_wrapper_get_custom_minimum_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Control::CursorShape Control::get_default_cursor_shape(){
	return Control::CursorShape(_wasgo_Control_wrapper_get_default_cursor_shape(wasgo_id));
}
Variant Control::get_drag_data(Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	return Variant(_wasgo_Control_wrapper_get_drag_data(wasgo_id, wasgo_buffer_position, wasgo_size_position));
}
Vector2 Control::get_end(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Control_wrapper_get_end(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Control::FocusMode Control::get_focus_mode(){
	return Control::FocusMode(_wasgo_Control_wrapper_get_focus_mode(wasgo_id));
}
NodePath Control::get_focus_neighbour(Margin p_margin){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Control_wrapper_get_focus_neighbour(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_margin._get_wasgo_id());
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
NodePath Control::get_focus_next(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Control_wrapper_get_focus_next(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
Control Control::get_focus_owner(){
	return Control(_wasgo_Control_wrapper_get_focus_owner(wasgo_id));
}
NodePath Control::get_focus_previous(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Control_wrapper_get_focus_previous(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
Font Control::get_font(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    int wasgo_size_node_type = String(p_node_type).size();
    uint8_t wasgo_buffer_node_type[wasgo_size_node_type];
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return Font(_wasgo_Control_wrapper_get_font(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type));
}
Vector2 Control::get_global_position(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Control_wrapper_get_global_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Rect2 Control::get_global_rect(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Control_wrapper_get_global_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Rect2) wasgo_ret;
    
}
Control::GrowDirection Control::get_h_grow_direction(){
	return Control::GrowDirection(_wasgo_Control_wrapper_get_h_grow_direction(wasgo_id));
}
int Control::get_h_size_flags(){
	return (int) _wasgo_Control_wrapper_get_h_size_flags(wasgo_id);
}
Texture Control::get_icon(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    int wasgo_size_node_type = String(p_node_type).size();
    uint8_t wasgo_buffer_node_type[wasgo_size_node_type];
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return Texture(_wasgo_Control_wrapper_get_icon(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type));
}
float Control::get_margin(Margin p_margin){
	return (float) _wasgo_Control_wrapper_get_margin(wasgo_id, p_margin._get_wasgo_id());
}
Vector2 Control::get_minimum_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Control_wrapper_get_minimum_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Control::MouseFilter Control::get_mouse_filter(){
	return Control::MouseFilter(_wasgo_Control_wrapper_get_mouse_filter(wasgo_id));
}
Vector2 Control::get_parent_area_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Control_wrapper_get_parent_area_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Control Control::get_parent_control(){
	return Control(_wasgo_Control_wrapper_get_parent_control(wasgo_id));
}
Vector2 Control::get_pivot_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Control_wrapper_get_pivot_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 Control::get_position(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Control_wrapper_get_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Rect2 Control::get_rect(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Control_wrapper_get_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Rect2) wasgo_ret;
    
}
float Control::get_rotation(){
	return (float) _wasgo_Control_wrapper_get_rotation(wasgo_id);
}
float Control::get_rotation_degrees(){
	return (float) _wasgo_Control_wrapper_get_rotation_degrees(wasgo_id);
}
Vector2 Control::get_scale(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Control_wrapper_get_scale(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 Control::get_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Control_wrapper_get_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
float Control::get_stretch_ratio(){
	return (float) _wasgo_Control_wrapper_get_stretch_ratio(wasgo_id);
}
StyleBox Control::get_stylebox(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    int wasgo_size_node_type = String(p_node_type).size();
    uint8_t wasgo_buffer_node_type[wasgo_size_node_type];
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return StyleBox(_wasgo_Control_wrapper_get_stylebox(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type));
}
Theme Control::get_theme(){
	return Theme(_wasgo_Control_wrapper_get_theme(wasgo_id));
}
String Control::get_tooltip(Vector2 p_at_position){

    Variant wasgo_var_at_position = p_at_position;
    uint8_t wasgo_buffer_at_position[12];
    int wasgo_size_at_position = 12;
    encode_variant(wasgo_var_at_position, wasgo_buffer_at_position, wasgo_size_at_position);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Control_wrapper_get_tooltip(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_at_position, wasgo_size_at_position);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Control::GrowDirection Control::get_v_grow_direction(){
	return Control::GrowDirection(_wasgo_Control_wrapper_get_v_grow_direction(wasgo_id));
}
int Control::get_v_size_flags(){
	return (int) _wasgo_Control_wrapper_get_v_size_flags(wasgo_id);
}
void Control::grab_click_focus(){
	_wasgo_Control_wrapper_grab_click_focus(wasgo_id);
}
void Control::grab_focus(){
	_wasgo_Control_wrapper_grab_focus(wasgo_id);
}
bool Control::has_color(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    int wasgo_size_node_type = String(p_node_type).size();
    uint8_t wasgo_buffer_node_type[wasgo_size_node_type];
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return (bool) _wasgo_Control_wrapper_has_color(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
}
bool Control::has_color_override(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_Control_wrapper_has_color_override(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
bool Control::has_constant(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    int wasgo_size_node_type = String(p_node_type).size();
    uint8_t wasgo_buffer_node_type[wasgo_size_node_type];
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return (bool) _wasgo_Control_wrapper_has_constant(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
}
bool Control::has_constant_override(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_Control_wrapper_has_constant_override(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
bool Control::has_focus(){
	return (bool) _wasgo_Control_wrapper_has_focus(wasgo_id);
}
bool Control::has_font(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    int wasgo_size_node_type = String(p_node_type).size();
    uint8_t wasgo_buffer_node_type[wasgo_size_node_type];
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return (bool) _wasgo_Control_wrapper_has_font(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
}
bool Control::has_font_override(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_Control_wrapper_has_font_override(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
bool Control::has_icon(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    int wasgo_size_node_type = String(p_node_type).size();
    uint8_t wasgo_buffer_node_type[wasgo_size_node_type];
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return (bool) _wasgo_Control_wrapper_has_icon(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
}
bool Control::has_icon_override(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_Control_wrapper_has_icon_override(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
bool Control::has_point(Vector2 p_point){

    Variant wasgo_var_point = p_point;
    uint8_t wasgo_buffer_point[12];
    int wasgo_size_point = 12;
    encode_variant(wasgo_var_point, wasgo_buffer_point, wasgo_size_point);
    
	return (bool) _wasgo_Control_wrapper_has_point(wasgo_id, wasgo_buffer_point, wasgo_size_point);
}
bool Control::has_shader_override(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_Control_wrapper_has_shader_override(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
bool Control::has_stylebox(String p_name, String p_node_type){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_node_type = p_node_type;
    int wasgo_size_node_type = String(p_node_type).size();
    uint8_t wasgo_buffer_node_type[wasgo_size_node_type];
    encode_variant(wasgo_var_node_type, wasgo_buffer_node_type, wasgo_size_node_type);
    
	return (bool) _wasgo_Control_wrapper_has_stylebox(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_node_type, wasgo_size_node_type);
}
bool Control::has_stylebox_override(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_Control_wrapper_has_stylebox_override(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
bool Control::is_clipping_contents(){
	return (bool) _wasgo_Control_wrapper_is_clipping_contents(wasgo_id);
}
void Control::minimum_size_changed(){
	_wasgo_Control_wrapper_minimum_size_changed(wasgo_id);
}
void Control::release_focus(){
	_wasgo_Control_wrapper_release_focus(wasgo_id);
}
void Control::set_anchor(Margin p_margin, float p_anchor, bool p_keep_margin, bool p_push_opposite_anchor){
	_wasgo_Control_wrapper_set_anchor(wasgo_id, p_margin._get_wasgo_id(), p_anchor, p_keep_margin, p_push_opposite_anchor);
}
void Control::set_anchor_and_margin(Margin p_margin, float p_anchor, float p_offset, bool p_push_opposite_anchor){
	_wasgo_Control_wrapper_set_anchor_and_margin(wasgo_id, p_margin._get_wasgo_id(), p_anchor, p_offset, p_push_opposite_anchor);
}
void Control::set_anchors_and_margins_preset(Control::LayoutPreset p_preset, Control::LayoutPresetMode p_resize_mode, int p_margin){
	_wasgo_Control_wrapper_set_anchors_and_margins_preset(wasgo_id, p_preset._get_wasgo_id(), p_resize_mode._get_wasgo_id(), p_margin);
}
void Control::set_anchors_preset(Control::LayoutPreset p_preset, bool p_keep_margins){
	_wasgo_Control_wrapper_set_anchors_preset(wasgo_id, p_preset._get_wasgo_id(), p_keep_margins);
}
void Control::set_begin(Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_Control_wrapper_set_begin(wasgo_id, wasgo_buffer_position, wasgo_size_position);
}
void Control::set_clip_contents(bool p_enable){
	_wasgo_Control_wrapper_set_clip_contents(wasgo_id, p_enable);
}
void Control::set_custom_minimum_size(Vector2 p_size){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[12];
    int wasgo_size_size = 12;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_Control_wrapper_set_custom_minimum_size(wasgo_id, wasgo_buffer_size, wasgo_size_size);
}
void Control::set_default_cursor_shape(Control::CursorShape p_shape){
	_wasgo_Control_wrapper_set_default_cursor_shape(wasgo_id, p_shape._get_wasgo_id());
}
void Control::set_drag_forwarding(Control p_target){
	_wasgo_Control_wrapper_set_drag_forwarding(wasgo_id, p_target._get_wasgo_id());
}
void Control::set_drag_preview(Control p_control){
	_wasgo_Control_wrapper_set_drag_preview(wasgo_id, p_control._get_wasgo_id());
}
void Control::set_end(Vector2 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_Control_wrapper_set_end(wasgo_id, wasgo_buffer_position, wasgo_size_position);
}
void Control::set_focus_mode(Control::FocusMode p_mode){
	_wasgo_Control_wrapper_set_focus_mode(wasgo_id, p_mode._get_wasgo_id());
}
void Control::set_focus_neighbour(Margin p_margin, NodePath p_neighbour){

    Variant wasgo_var_neighbour = p_neighbour;
    int wasgo_size_neighbour = String(p_neighbour).size();
    uint8_t wasgo_buffer_neighbour[wasgo_size_neighbour];
    encode_variant(wasgo_var_neighbour, wasgo_buffer_neighbour, wasgo_size_neighbour);
    
	_wasgo_Control_wrapper_set_focus_neighbour(wasgo_id, p_margin._get_wasgo_id(), wasgo_buffer_neighbour, wasgo_size_neighbour);
}
void Control::set_focus_next(NodePath p_next){

    Variant wasgo_var_next = p_next;
    int wasgo_size_next = String(p_next).size();
    uint8_t wasgo_buffer_next[wasgo_size_next];
    encode_variant(wasgo_var_next, wasgo_buffer_next, wasgo_size_next);
    
	_wasgo_Control_wrapper_set_focus_next(wasgo_id, wasgo_buffer_next, wasgo_size_next);
}
void Control::set_focus_previous(NodePath p_previous){

    Variant wasgo_var_previous = p_previous;
    int wasgo_size_previous = String(p_previous).size();
    uint8_t wasgo_buffer_previous[wasgo_size_previous];
    encode_variant(wasgo_var_previous, wasgo_buffer_previous, wasgo_size_previous);
    
	_wasgo_Control_wrapper_set_focus_previous(wasgo_id, wasgo_buffer_previous, wasgo_size_previous);
}
void Control::set_global_position(Vector2 p_position, bool p_keep_margins){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_Control_wrapper_set_global_position(wasgo_id, wasgo_buffer_position, wasgo_size_position, p_keep_margins);
}
void Control::set_h_grow_direction(Control::GrowDirection p_direction){
	_wasgo_Control_wrapper_set_h_grow_direction(wasgo_id, p_direction._get_wasgo_id());
}
void Control::set_h_size_flags(int p_flags){
	_wasgo_Control_wrapper_set_h_size_flags(wasgo_id, p_flags);
}
void Control::set_margin(Margin p_margin, float p_offset){
	_wasgo_Control_wrapper_set_margin(wasgo_id, p_margin._get_wasgo_id(), p_offset);
}
void Control::set_margins_preset(Control::LayoutPreset p_preset, Control::LayoutPresetMode p_resize_mode, int p_margin){
	_wasgo_Control_wrapper_set_margins_preset(wasgo_id, p_preset._get_wasgo_id(), p_resize_mode._get_wasgo_id(), p_margin);
}
void Control::set_mouse_filter(Control::MouseFilter p_filter){
	_wasgo_Control_wrapper_set_mouse_filter(wasgo_id, p_filter._get_wasgo_id());
}
void Control::set_pivot_offset(Vector2 p_pivot_offset){

    Variant wasgo_var_pivot_offset = p_pivot_offset;
    uint8_t wasgo_buffer_pivot_offset[12];
    int wasgo_size_pivot_offset = 12;
    encode_variant(wasgo_var_pivot_offset, wasgo_buffer_pivot_offset, wasgo_size_pivot_offset);
    
	_wasgo_Control_wrapper_set_pivot_offset(wasgo_id, wasgo_buffer_pivot_offset, wasgo_size_pivot_offset);
}
void Control::set_position(Vector2 p_position, bool p_keep_margins){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_Control_wrapper_set_position(wasgo_id, wasgo_buffer_position, wasgo_size_position, p_keep_margins);
}
void Control::set_rotation(float p_radians){
	_wasgo_Control_wrapper_set_rotation(wasgo_id, p_radians);
}
void Control::set_rotation_degrees(float p_degrees){
	_wasgo_Control_wrapper_set_rotation_degrees(wasgo_id, p_degrees);
}
void Control::set_scale(Vector2 p_scale){

    Variant wasgo_var_scale = p_scale;
    uint8_t wasgo_buffer_scale[12];
    int wasgo_size_scale = 12;
    encode_variant(wasgo_var_scale, wasgo_buffer_scale, wasgo_size_scale);
    
	_wasgo_Control_wrapper_set_scale(wasgo_id, wasgo_buffer_scale, wasgo_size_scale);
}
void Control::set_size(Vector2 p_size, bool p_keep_margins){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[12];
    int wasgo_size_size = 12;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_Control_wrapper_set_size(wasgo_id, wasgo_buffer_size, wasgo_size_size, p_keep_margins);
}
void Control::set_stretch_ratio(float p_ratio){
	_wasgo_Control_wrapper_set_stretch_ratio(wasgo_id, p_ratio);
}
void Control::set_theme(Theme p_theme){
	_wasgo_Control_wrapper_set_theme(wasgo_id, p_theme._get_wasgo_id());
}
void Control::set_tooltip(String p_tooltip){

    Variant wasgo_var_tooltip = p_tooltip;
    int wasgo_size_tooltip = String(p_tooltip).size();
    uint8_t wasgo_buffer_tooltip[wasgo_size_tooltip];
    encode_variant(wasgo_var_tooltip, wasgo_buffer_tooltip, wasgo_size_tooltip);
    
	_wasgo_Control_wrapper_set_tooltip(wasgo_id, wasgo_buffer_tooltip, wasgo_size_tooltip);
}
void Control::set_v_grow_direction(Control::GrowDirection p_direction){
	_wasgo_Control_wrapper_set_v_grow_direction(wasgo_id, p_direction._get_wasgo_id());
}
void Control::set_v_size_flags(int p_flags){
	_wasgo_Control_wrapper_set_v_size_flags(wasgo_id, p_flags);
}
void Control::show_modal(bool p_exclusive){
	_wasgo_Control_wrapper_show_modal(wasgo_id, p_exclusive);
}
void Control::warp_mouse(Vector2 p_to_position){

    Variant wasgo_var_to_position = p_to_position;
    uint8_t wasgo_buffer_to_position[12];
    int wasgo_size_to_position = 12;
    encode_variant(wasgo_var_to_position, wasgo_buffer_to_position, wasgo_size_to_position);
    
	_wasgo_Control_wrapper_warp_mouse(wasgo_id, wasgo_buffer_to_position, wasgo_size_to_position);
}

Control::Control(WasGoID p_wasgo_id) : CanvasItem(p_wasgo_id){
}
Control::Control(CanvasItem other) : CanvasItem(other._get_wasgo_id()){
}
Control::Control():CanvasItem(){
}
Control Control::new_instance(){
    return Control(_wasgo_Control_constructor());
}
WasGoID Control::_get_wasgo_id(){
    return wasgo_id;
}
Control::operator bool(){
    return (bool) wasgo_id;
}
