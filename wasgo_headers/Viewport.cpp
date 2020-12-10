/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Viewport.h"
World Viewport::find_world(){
	return World(_wasgo_Viewport_wrapper_find_world(wasgo_id));
}
World2D Viewport::find_world_2d(){
	return World2D(_wasgo_Viewport_wrapper_find_world_2d(wasgo_id));
}
Camera Viewport::get_camera(){
	return Camera(_wasgo_Viewport_wrapper_get_camera(wasgo_id));
}
Transform2D Viewport::get_canvas_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_Viewport_wrapper_get_canvas_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Viewport::ClearMode Viewport::get_clear_mode(){
	return Viewport::ClearMode(_wasgo_Viewport_wrapper_get_clear_mode(wasgo_id));
}
Viewport::DebugDraw Viewport::get_debug_draw(){
	return Viewport::DebugDraw(_wasgo_Viewport_wrapper_get_debug_draw(wasgo_id));
}
Transform2D Viewport::get_final_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_Viewport_wrapper_get_final_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Transform2D Viewport::get_global_canvas_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_Viewport_wrapper_get_global_canvas_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
bool Viewport::get_hdr(){
	return (bool) _wasgo_Viewport_wrapper_get_hdr(wasgo_id);
}
bool Viewport::get_keep_3d_linear(){
	return (bool) _wasgo_Viewport_wrapper_get_keep_3d_linear(wasgo_id);
}
Control Viewport::get_modal_stack_top(){
	return Control(_wasgo_Viewport_wrapper_get_modal_stack_top(wasgo_id));
}
Vector2 Viewport::get_mouse_position(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Viewport_wrapper_get_mouse_position(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Viewport::MSAA Viewport::get_msaa(){
	return Viewport::MSAA(_wasgo_Viewport_wrapper_get_msaa(wasgo_id));
}
bool Viewport::get_physics_object_picking(){
	return (bool) _wasgo_Viewport_wrapper_get_physics_object_picking(wasgo_id);
}
int Viewport::get_render_info(Viewport::RenderInfo p_info){
	return (int) _wasgo_Viewport_wrapper_get_render_info(wasgo_id, p_info._get_wasgo_id());
}
Viewport::ShadowAtlasQuadrantSubdiv Viewport::get_shadow_atlas_quadrant_subdiv(int p_quadrant){
	return Viewport::ShadowAtlasQuadrantSubdiv(_wasgo_Viewport_wrapper_get_shadow_atlas_quadrant_subdiv(wasgo_id, p_quadrant));
}
int Viewport::get_shadow_atlas_size(){
	return (int) _wasgo_Viewport_wrapper_get_shadow_atlas_size(wasgo_id);
}
Vector2 Viewport::get_size(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Viewport_wrapper_get_size(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Vector2 Viewport::get_size_override(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_Viewport_wrapper_get_size_override(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
ViewportTexture Viewport::get_texture(){
	return ViewportTexture(_wasgo_Viewport_wrapper_get_texture(wasgo_id));
}
Viewport::UpdateMode Viewport::get_update_mode(){
	return Viewport::UpdateMode(_wasgo_Viewport_wrapper_get_update_mode(wasgo_id));
}
Viewport::Usage Viewport::get_usage(){
	return Viewport::Usage(_wasgo_Viewport_wrapper_get_usage(wasgo_id));
}
bool Viewport::get_vflip(){
	return (bool) _wasgo_Viewport_wrapper_get_vflip(wasgo_id);
}
RID Viewport::get_viewport_rid(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Viewport_wrapper_get_viewport_rid(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
Rect2 Viewport::get_visible_rect(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Viewport_wrapper_get_visible_rect(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
World Viewport::get_world(){
	return World(_wasgo_Viewport_wrapper_get_world(wasgo_id));
}
World2D Viewport::get_world_2d(){
	return World2D(_wasgo_Viewport_wrapper_get_world_2d(wasgo_id));
}
Variant Viewport::gui_get_drag_data(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Viewport_wrapper_gui_get_drag_data(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
bool Viewport::gui_has_modal_stack(){
	return (bool) _wasgo_Viewport_wrapper_gui_has_modal_stack(wasgo_id);
}
bool Viewport::gui_is_dragging(){
	return (bool) _wasgo_Viewport_wrapper_gui_is_dragging(wasgo_id);
}
bool Viewport::has_transparent_background(){
	return (bool) _wasgo_Viewport_wrapper_has_transparent_background(wasgo_id);
}
void Viewport::input(InputEvent p_local_event){
	_wasgo_Viewport_wrapper_input(wasgo_id, p_local_event._get_wasgo_id());
}
bool Viewport::is_3d_disabled(){
	return (bool) _wasgo_Viewport_wrapper_is_3d_disabled(wasgo_id);
}
bool Viewport::is_audio_listener(){
	return (bool) _wasgo_Viewport_wrapper_is_audio_listener(wasgo_id);
}
bool Viewport::is_audio_listener_2d(){
	return (bool) _wasgo_Viewport_wrapper_is_audio_listener_2d(wasgo_id);
}
bool Viewport::is_handling_input_locally(){
	return (bool) _wasgo_Viewport_wrapper_is_handling_input_locally(wasgo_id);
}
bool Viewport::is_input_disabled(){
	return (bool) _wasgo_Viewport_wrapper_is_input_disabled(wasgo_id);
}
bool Viewport::is_input_handled(){
	return (bool) _wasgo_Viewport_wrapper_is_input_handled(wasgo_id);
}
bool Viewport::is_size_override_enabled(){
	return (bool) _wasgo_Viewport_wrapper_is_size_override_enabled(wasgo_id);
}
bool Viewport::is_size_override_stretch_enabled(){
	return (bool) _wasgo_Viewport_wrapper_is_size_override_stretch_enabled(wasgo_id);
}
bool Viewport::is_snap_controls_to_pixels_enabled(){
	return (bool) _wasgo_Viewport_wrapper_is_snap_controls_to_pixels_enabled(wasgo_id);
}
bool Viewport::is_using_own_world(){
	return (bool) _wasgo_Viewport_wrapper_is_using_own_world(wasgo_id);
}
bool Viewport::is_using_render_direct_to_screen(){
	return (bool) _wasgo_Viewport_wrapper_is_using_render_direct_to_screen(wasgo_id);
}
void Viewport::set_as_audio_listener(bool p_enable){
	_wasgo_Viewport_wrapper_set_as_audio_listener(wasgo_id, p_enable);
}
void Viewport::set_as_audio_listener_2d(bool p_enable){
	_wasgo_Viewport_wrapper_set_as_audio_listener_2d(wasgo_id, p_enable);
}
void Viewport::set_attach_to_screen_rect(Rect2 p_rect){

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	_wasgo_Viewport_wrapper_set_attach_to_screen_rect(wasgo_id, wasgo_buffer_rect, wasgo_size_rect);
}
void Viewport::set_canvas_transform(Transform2D p_xform){

    Variant wasgo_var_xform = p_xform;
    uint8_t wasgo_buffer_xform[28];
    int wasgo_size_xform = 28;
    encode_variant(wasgo_var_xform, wasgo_buffer_xform, wasgo_size_xform);
    
	_wasgo_Viewport_wrapper_set_canvas_transform(wasgo_id, wasgo_buffer_xform, wasgo_size_xform);
}
void Viewport::set_clear_mode(Viewport::ClearMode p_mode){
	_wasgo_Viewport_wrapper_set_clear_mode(wasgo_id, p_mode._get_wasgo_id());
}
void Viewport::set_debug_draw(Viewport::DebugDraw p_debug_draw){
	_wasgo_Viewport_wrapper_set_debug_draw(wasgo_id, p_debug_draw._get_wasgo_id());
}
void Viewport::set_disable_3d(bool p_disable){
	_wasgo_Viewport_wrapper_set_disable_3d(wasgo_id, p_disable);
}
void Viewport::set_disable_input(bool p_disable){
	_wasgo_Viewport_wrapper_set_disable_input(wasgo_id, p_disable);
}
void Viewport::set_global_canvas_transform(Transform2D p_xform){

    Variant wasgo_var_xform = p_xform;
    uint8_t wasgo_buffer_xform[28];
    int wasgo_size_xform = 28;
    encode_variant(wasgo_var_xform, wasgo_buffer_xform, wasgo_size_xform);
    
	_wasgo_Viewport_wrapper_set_global_canvas_transform(wasgo_id, wasgo_buffer_xform, wasgo_size_xform);
}
void Viewport::set_handle_input_locally(bool p_enable){
	_wasgo_Viewport_wrapper_set_handle_input_locally(wasgo_id, p_enable);
}
void Viewport::set_hdr(bool p_enable){
	_wasgo_Viewport_wrapper_set_hdr(wasgo_id, p_enable);
}
void Viewport::set_input_as_handled(){
	_wasgo_Viewport_wrapper_set_input_as_handled(wasgo_id);
}
void Viewport::set_keep_3d_linear(bool p_keep_3d_linear){
	_wasgo_Viewport_wrapper_set_keep_3d_linear(wasgo_id, p_keep_3d_linear);
}
void Viewport::set_msaa(Viewport::MSAA p_msaa){
	_wasgo_Viewport_wrapper_set_msaa(wasgo_id, p_msaa._get_wasgo_id());
}
void Viewport::set_physics_object_picking(bool p_enable){
	_wasgo_Viewport_wrapper_set_physics_object_picking(wasgo_id, p_enable);
}
void Viewport::set_shadow_atlas_quadrant_subdiv(int p_quadrant, Viewport::ShadowAtlasQuadrantSubdiv p_subdiv){
	_wasgo_Viewport_wrapper_set_shadow_atlas_quadrant_subdiv(wasgo_id, p_quadrant, p_subdiv._get_wasgo_id());
}
void Viewport::set_shadow_atlas_size(int p_size){
	_wasgo_Viewport_wrapper_set_shadow_atlas_size(wasgo_id, p_size);
}
void Viewport::set_size(Vector2 p_size){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[12];
    int wasgo_size_size = 12;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    
	_wasgo_Viewport_wrapper_set_size(wasgo_id, wasgo_buffer_size, wasgo_size_size);
}
void Viewport::set_size_override(bool p_enable, Vector2 p_size, Vector2 p_margin){

    Variant wasgo_var_size = p_size;
    uint8_t wasgo_buffer_size[12];
    int wasgo_size_size = 12;
    encode_variant(wasgo_var_size, wasgo_buffer_size, wasgo_size_size);
    

    Variant wasgo_var_margin = p_margin;
    uint8_t wasgo_buffer_margin[12];
    int wasgo_size_margin = 12;
    encode_variant(wasgo_var_margin, wasgo_buffer_margin, wasgo_size_margin);
    
	_wasgo_Viewport_wrapper_set_size_override(wasgo_id, p_enable, wasgo_buffer_size, wasgo_size_size, wasgo_size_size, wasgo_buffer_margin, wasgo_size_margin);
}
void Viewport::set_size_override_stretch(bool p_enabled){
	_wasgo_Viewport_wrapper_set_size_override_stretch(wasgo_id, p_enabled);
}
void Viewport::set_snap_controls_to_pixels(bool p_enabled){
	_wasgo_Viewport_wrapper_set_snap_controls_to_pixels(wasgo_id, p_enabled);
}
void Viewport::set_transparent_background(bool p_enable){
	_wasgo_Viewport_wrapper_set_transparent_background(wasgo_id, p_enable);
}
void Viewport::set_update_mode(Viewport::UpdateMode p_mode){
	_wasgo_Viewport_wrapper_set_update_mode(wasgo_id, p_mode._get_wasgo_id());
}
void Viewport::set_usage(Viewport::Usage p_usage){
	_wasgo_Viewport_wrapper_set_usage(wasgo_id, p_usage._get_wasgo_id());
}
void Viewport::set_use_arvr(bool p_use){
	_wasgo_Viewport_wrapper_set_use_arvr(wasgo_id, p_use);
}
void Viewport::set_use_own_world(bool p_enable){
	_wasgo_Viewport_wrapper_set_use_own_world(wasgo_id, p_enable);
}
void Viewport::set_use_render_direct_to_screen(bool p_enable){
	_wasgo_Viewport_wrapper_set_use_render_direct_to_screen(wasgo_id, p_enable);
}
void Viewport::set_vflip(bool p_enable){
	_wasgo_Viewport_wrapper_set_vflip(wasgo_id, p_enable);
}
void Viewport::set_world(World p_world){
	_wasgo_Viewport_wrapper_set_world(wasgo_id, p_world._get_wasgo_id());
}
void Viewport::set_world_2d(World2D p_world_2d){
	_wasgo_Viewport_wrapper_set_world_2d(wasgo_id, p_world_2d._get_wasgo_id());
}
void Viewport::unhandled_input(InputEvent p_local_event){
	_wasgo_Viewport_wrapper_unhandled_input(wasgo_id, p_local_event._get_wasgo_id());
}
void Viewport::update_worlds(){
	_wasgo_Viewport_wrapper_update_worlds(wasgo_id);
}
bool Viewport::use_arvr(){
	return (bool) _wasgo_Viewport_wrapper_use_arvr(wasgo_id);
}
void Viewport::warp_mouse(Vector2 p_to_position){

    Variant wasgo_var_to_position = p_to_position;
    uint8_t wasgo_buffer_to_position[12];
    int wasgo_size_to_position = 12;
    encode_variant(wasgo_var_to_position, wasgo_buffer_to_position, wasgo_size_to_position);
    
	_wasgo_Viewport_wrapper_warp_mouse(wasgo_id, wasgo_buffer_to_position, wasgo_size_to_position);
}

Viewport::Viewport(WasGoID p_wasgo_id) : Node(p_wasgo_id){
}
Viewport::Viewport(Node other) : Node(other._get_wasgo_id()){
}
Viewport::Viewport():Node(){
}
Viewport Viewport::new_instance(){
    return Viewport(_wasgo_Viewport_constructor());
}
WasGoID Viewport::_get_wasgo_id(){
    return wasgo_id;
}
Viewport::operator bool(){
    return (bool) wasgo_id;
}
