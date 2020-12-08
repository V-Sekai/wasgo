/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CanvasItem.h"
void CanvasItem::draw_arc(Vector2 p_center, float p_radius, float p_start_angle, float p_end_angle, int p_point_count, Color p_color, float p_width, bool p_antialiased){

    Variant wasgo_var_center = p_center;
    uint8_t wasgo_buffer_center[12];
    int wasgo_size_center = 12;
    encode_variant(wasgo_var_center, wasgo_buffer_center, wasgo_size_center);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_CanvasItem_wrapper_draw_arc(wasgo_id, wasgo_buffer_center, wasgo_size_center, p_radius, p_start_angle, p_end_angle, p_point_count, wasgo_buffer_color, wasgo_size_color, p_width, p_antialiased);
}
float CanvasItem::draw_char(Font p_font, Vector2 p_position, String p_char, String p_next, Color p_modulate){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    

    Variant wasgo_var_char = p_char;
    int wasgo_size_char = String(p_char).size();
    uint8_t wasgo_buffer_char[wasgo_size_char];
    encode_variant(wasgo_var_char, wasgo_buffer_char, wasgo_size_char);
    

    Variant wasgo_var_next = p_next;
    int wasgo_size_next = String(p_next).size();
    uint8_t wasgo_buffer_next[wasgo_size_next];
    encode_variant(wasgo_var_next, wasgo_buffer_next, wasgo_size_next);
    

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    
	return (float) _wasgo_CanvasItem_wrapper_draw_char(wasgo_id, p_font._get_wasgo_id(), wasgo_buffer_position, wasgo_size_position, wasgo_buffer_char, wasgo_size_char, wasgo_buffer_next, wasgo_size_next, wasgo_buffer_modulate, wasgo_size_modulate);
}
void CanvasItem::draw_circle(Vector2 p_position, float p_radius, Color p_color){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_CanvasItem_wrapper_draw_circle(wasgo_id, wasgo_buffer_position, wasgo_size_position, p_radius, wasgo_buffer_color, wasgo_size_color);
}
void CanvasItem::draw_colored_polygon(PoolVector2Array p_points, Color p_color, PoolVector2Array p_uvs, Texture p_texture, Texture p_normal_map, bool p_antialiased){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_CanvasItem_wrapper_draw_colored_polygon(wasgo_id, p_points._get_wasgo_id(), wasgo_buffer_color, wasgo_size_color, p_uvs._get_wasgo_id(), p_texture._get_wasgo_id(), p_normal_map._get_wasgo_id(), p_antialiased);
}
void CanvasItem::draw_line(Vector2 p_from, Vector2 p_to, Color p_color, float p_width, bool p_antialiased){

    Variant wasgo_var_from = p_from;
    uint8_t wasgo_buffer_from[12];
    int wasgo_size_from = 12;
    encode_variant(wasgo_var_from, wasgo_buffer_from, wasgo_size_from);
    

    Variant wasgo_var_to = p_to;
    uint8_t wasgo_buffer_to[12];
    int wasgo_size_to = 12;
    encode_variant(wasgo_var_to, wasgo_buffer_to, wasgo_size_to);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_CanvasItem_wrapper_draw_line(wasgo_id, wasgo_buffer_from, wasgo_size_from, wasgo_buffer_to, wasgo_size_to, wasgo_buffer_color, wasgo_size_color, p_width, p_antialiased);
}
void CanvasItem::draw_mesh(Mesh p_mesh, Texture p_texture, Texture p_normal_map, Transform2D p_transform, Color p_modulate){

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    
	_wasgo_CanvasItem_wrapper_draw_mesh(wasgo_id, p_mesh._get_wasgo_id(), p_texture._get_wasgo_id(), p_normal_map._get_wasgo_id(), wasgo_buffer_transform, wasgo_size_transform, wasgo_buffer_modulate, wasgo_size_modulate);
}
void CanvasItem::draw_multiline(PoolVector2Array p_points, Color p_color, float p_width, bool p_antialiased){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_CanvasItem_wrapper_draw_multiline(wasgo_id, p_points._get_wasgo_id(), wasgo_buffer_color, wasgo_size_color, p_width, p_antialiased);
}
void CanvasItem::draw_multiline_colors(PoolVector2Array p_points, PoolColorArray p_colors, float p_width, bool p_antialiased){
	_wasgo_CanvasItem_wrapper_draw_multiline_colors(wasgo_id, p_points._get_wasgo_id(), p_colors._get_wasgo_id(), p_width, p_antialiased);
}
void CanvasItem::draw_multimesh(MultiMesh p_multimesh, Texture p_texture, Texture p_normal_map){
	_wasgo_CanvasItem_wrapper_draw_multimesh(wasgo_id, p_multimesh._get_wasgo_id(), p_texture._get_wasgo_id(), p_normal_map._get_wasgo_id());
}
void CanvasItem::draw_polygon(PoolVector2Array p_points, PoolColorArray p_colors, PoolVector2Array p_uvs, Texture p_texture, Texture p_normal_map, bool p_antialiased){
	_wasgo_CanvasItem_wrapper_draw_polygon(wasgo_id, p_points._get_wasgo_id(), p_colors._get_wasgo_id(), p_uvs._get_wasgo_id(), p_texture._get_wasgo_id(), p_normal_map._get_wasgo_id(), p_antialiased);
}
void CanvasItem::draw_polyline(PoolVector2Array p_points, Color p_color, float p_width, bool p_antialiased){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_CanvasItem_wrapper_draw_polyline(wasgo_id, p_points._get_wasgo_id(), wasgo_buffer_color, wasgo_size_color, p_width, p_antialiased);
}
void CanvasItem::draw_polyline_colors(PoolVector2Array p_points, PoolColorArray p_colors, float p_width, bool p_antialiased){
	_wasgo_CanvasItem_wrapper_draw_polyline_colors(wasgo_id, p_points._get_wasgo_id(), p_colors._get_wasgo_id(), p_width, p_antialiased);
}
void CanvasItem::draw_primitive(PoolVector2Array p_points, PoolColorArray p_colors, PoolVector2Array p_uvs, Texture p_texture, float p_width, Texture p_normal_map){
	_wasgo_CanvasItem_wrapper_draw_primitive(wasgo_id, p_points._get_wasgo_id(), p_colors._get_wasgo_id(), p_uvs._get_wasgo_id(), p_texture._get_wasgo_id(), p_width, p_normal_map._get_wasgo_id());
}
void CanvasItem::draw_rect(Rect2 p_rect, Color p_color, bool p_filled, float p_width, bool p_antialiased){

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_CanvasItem_wrapper_draw_rect(wasgo_id, wasgo_buffer_rect, wasgo_size_rect, wasgo_buffer_color, wasgo_size_color, p_filled, p_width, p_antialiased);
}
void CanvasItem::draw_set_transform(Vector2 p_position, float p_rotation, Vector2 p_scale){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    

    Variant wasgo_var_scale = p_scale;
    uint8_t wasgo_buffer_scale[12];
    int wasgo_size_scale = 12;
    encode_variant(wasgo_var_scale, wasgo_buffer_scale, wasgo_size_scale);
    
	_wasgo_CanvasItem_wrapper_draw_set_transform(wasgo_id, wasgo_buffer_position, wasgo_size_position, p_rotation, wasgo_buffer_scale, wasgo_size_scale);
}
void CanvasItem::draw_set_transform_matrix(Transform2D p_xform){

    Variant wasgo_var_xform = p_xform;
    uint8_t wasgo_buffer_xform[28];
    int wasgo_size_xform = 28;
    encode_variant(wasgo_var_xform, wasgo_buffer_xform, wasgo_size_xform);
    
	_wasgo_CanvasItem_wrapper_draw_set_transform_matrix(wasgo_id, wasgo_buffer_xform, wasgo_size_xform);
}
void CanvasItem::draw_string(Font p_font, Vector2 p_position, String p_text, Color p_modulate, int p_clip_w){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    
	_wasgo_CanvasItem_wrapper_draw_string(wasgo_id, p_font._get_wasgo_id(), wasgo_buffer_position, wasgo_size_position, wasgo_buffer_text, wasgo_size_text, wasgo_buffer_modulate, wasgo_size_modulate, p_clip_w);
}
void CanvasItem::draw_style_box(StyleBox p_style_box, Rect2 p_rect){

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	_wasgo_CanvasItem_wrapper_draw_style_box(wasgo_id, p_style_box._get_wasgo_id(), wasgo_buffer_rect, wasgo_size_rect);
}
void CanvasItem::draw_texture(Texture p_texture, Vector2 p_position, Color p_modulate, Texture p_normal_map){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[12];
    int wasgo_size_position = 12;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    
	_wasgo_CanvasItem_wrapper_draw_texture(wasgo_id, p_texture._get_wasgo_id(), wasgo_buffer_position, wasgo_size_position, wasgo_buffer_modulate, wasgo_size_modulate, p_normal_map._get_wasgo_id());
}
void CanvasItem::draw_texture_rect(Texture p_texture, Rect2 p_rect, bool p_tile, Color p_modulate, bool p_transpose, Texture p_normal_map){

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    
	_wasgo_CanvasItem_wrapper_draw_texture_rect(wasgo_id, p_texture._get_wasgo_id(), wasgo_buffer_rect, wasgo_size_rect, p_tile, wasgo_buffer_modulate, wasgo_size_modulate, p_transpose, p_normal_map._get_wasgo_id());
}
void CanvasItem::draw_texture_rect_region(Texture p_texture, Rect2 p_rect, Rect2 p_src_rect, Color p_modulate, bool p_transpose, Texture p_normal_map, bool p_clip_uv){

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    

    Variant wasgo_var_src_rect = p_src_rect;
    uint8_t wasgo_buffer_src_rect[20];
    int wasgo_size_src_rect = 20;
    encode_variant(wasgo_var_src_rect, wasgo_buffer_src_rect, wasgo_size_src_rect);
    

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    
	_wasgo_CanvasItem_wrapper_draw_texture_rect_region(wasgo_id, p_texture._get_wasgo_id(), wasgo_buffer_rect, wasgo_size_rect, wasgo_buffer_src_rect, wasgo_size_src_rect, wasgo_buffer_modulate, wasgo_size_modulate, p_transpose, p_normal_map._get_wasgo_id(), p_clip_uv);
}
void CanvasItem::force_update_transform(){
	_wasgo_CanvasItem_wrapper_force_update_transform(wasgo_id);
}
RID CanvasItem::get_canvas(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_CanvasItem_wrapper_get_canvas(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID CanvasItem::get_canvas_item(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_CanvasItem_wrapper_get_canvas_item(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
Transform2D CanvasItem::get_canvas_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_CanvasItem_wrapper_get_canvas_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
Vector2 CanvasItem::get_global_mouse_position(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_CanvasItem_wrapper_get_global_mouse_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Transform2D CanvasItem::get_global_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_CanvasItem_wrapper_get_global_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
Transform2D CanvasItem::get_global_transform_with_canvas(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_CanvasItem_wrapper_get_global_transform_with_canvas(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
int CanvasItem::get_light_mask(){
	return (int) _wasgo_CanvasItem_wrapper_get_light_mask(wasgo_id);
}
Vector2 CanvasItem::get_local_mouse_position(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_CanvasItem_wrapper_get_local_mouse_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Material CanvasItem::get_material(){
	return Material(_wasgo_CanvasItem_wrapper_get_material(wasgo_id));
}
Color CanvasItem::get_modulate(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_CanvasItem_wrapper_get_modulate(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Color CanvasItem::get_self_modulate(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_CanvasItem_wrapper_get_self_modulate(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Transform2D CanvasItem::get_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_CanvasItem_wrapper_get_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
bool CanvasItem::get_use_parent_material(){
	return (bool) _wasgo_CanvasItem_wrapper_get_use_parent_material(wasgo_id);
}
Rect2 CanvasItem::get_viewport_rect(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_CanvasItem_wrapper_get_viewport_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Rect2) wasgo_ret;
    
}
Transform2D CanvasItem::get_viewport_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_CanvasItem_wrapper_get_viewport_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
World2D CanvasItem::get_world_2d(){
	return World2D(_wasgo_CanvasItem_wrapper_get_world_2d(wasgo_id));
}
void CanvasItem::hide(){
	_wasgo_CanvasItem_wrapper_hide(wasgo_id);
}
bool CanvasItem::is_draw_behind_parent_enabled(){
	return (bool) _wasgo_CanvasItem_wrapper_is_draw_behind_parent_enabled(wasgo_id);
}
bool CanvasItem::is_local_transform_notification_enabled(){
	return (bool) _wasgo_CanvasItem_wrapper_is_local_transform_notification_enabled(wasgo_id);
}
bool CanvasItem::is_set_as_toplevel(){
	return (bool) _wasgo_CanvasItem_wrapper_is_set_as_toplevel(wasgo_id);
}
bool CanvasItem::is_transform_notification_enabled(){
	return (bool) _wasgo_CanvasItem_wrapper_is_transform_notification_enabled(wasgo_id);
}
bool CanvasItem::is_visible(){
	return (bool) _wasgo_CanvasItem_wrapper_is_visible(wasgo_id);
}
bool CanvasItem::is_visible_in_tree(){
	return (bool) _wasgo_CanvasItem_wrapper_is_visible_in_tree(wasgo_id);
}
Vector2 CanvasItem::make_canvas_position_local(Vector2 p_screen_point){

    Variant wasgo_var_screen_point = p_screen_point;
    uint8_t wasgo_buffer_screen_point[12];
    int wasgo_size_screen_point = 12;
    encode_variant(wasgo_var_screen_point, wasgo_buffer_screen_point, wasgo_size_screen_point);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_CanvasItem_wrapper_make_canvas_position_local(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_screen_point, wasgo_size_screen_point);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
InputEvent CanvasItem::make_input_local(InputEvent p_event){
	return InputEvent(_wasgo_CanvasItem_wrapper_make_input_local(wasgo_id, p_event._get_wasgo_id()));
}
void CanvasItem::set_as_toplevel(bool p_enable){
	_wasgo_CanvasItem_wrapper_set_as_toplevel(wasgo_id, p_enable);
}
void CanvasItem::set_draw_behind_parent(bool p_enable){
	_wasgo_CanvasItem_wrapper_set_draw_behind_parent(wasgo_id, p_enable);
}
void CanvasItem::set_light_mask(int p_light_mask){
	_wasgo_CanvasItem_wrapper_set_light_mask(wasgo_id, p_light_mask);
}
void CanvasItem::set_material(Material p_material){
	_wasgo_CanvasItem_wrapper_set_material(wasgo_id, p_material._get_wasgo_id());
}
void CanvasItem::set_modulate(Color p_modulate){

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    
	_wasgo_CanvasItem_wrapper_set_modulate(wasgo_id, wasgo_buffer_modulate, wasgo_size_modulate);
}
void CanvasItem::set_notify_local_transform(bool p_enable){
	_wasgo_CanvasItem_wrapper_set_notify_local_transform(wasgo_id, p_enable);
}
void CanvasItem::set_notify_transform(bool p_enable){
	_wasgo_CanvasItem_wrapper_set_notify_transform(wasgo_id, p_enable);
}
void CanvasItem::set_self_modulate(Color p_self_modulate){

    Variant wasgo_var_self_modulate = p_self_modulate;
    uint8_t wasgo_buffer_self_modulate[20];
    int wasgo_size_self_modulate = 20;
    encode_variant(wasgo_var_self_modulate, wasgo_buffer_self_modulate, wasgo_size_self_modulate);
    
	_wasgo_CanvasItem_wrapper_set_self_modulate(wasgo_id, wasgo_buffer_self_modulate, wasgo_size_self_modulate);
}
void CanvasItem::set_use_parent_material(bool p_enable){
	_wasgo_CanvasItem_wrapper_set_use_parent_material(wasgo_id, p_enable);
}
void CanvasItem::set_visible(bool p_visible){
	_wasgo_CanvasItem_wrapper_set_visible(wasgo_id, p_visible);
}
void CanvasItem::show(){
	_wasgo_CanvasItem_wrapper_show(wasgo_id);
}
void CanvasItem::update(){
	_wasgo_CanvasItem_wrapper_update(wasgo_id);
}

CanvasItem::CanvasItem(WasGoID p_wasgo_id) : Node(p_wasgo_id){
}
CanvasItem::CanvasItem(Node other) : Node(other._get_wasgo_id()){
}
CanvasItem::CanvasItem():Node(){
}
CanvasItem CanvasItem::new_instance(){
    return CanvasItem(_wasgo_CanvasItem_constructor());
}
WasGoID CanvasItem::_get_wasgo_id(){
    return wasgo_id;
}
CanvasItem::operator bool(){
    return (bool) wasgo_id;
}
