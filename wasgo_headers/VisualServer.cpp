/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualServer.h"
void VisualServer::black_bars_set_images(RID p_left, RID p_top, RID p_right, RID p_bottom){

    Variant wasgo_var_left = p_left;
    uint8_t wasgo_buffer_left[0];
    int wasgo_size_left = 0;
    encode_variant(wasgo_var_left, wasgo_buffer_left, wasgo_size_left);
    

    Variant wasgo_var_top = p_top;
    uint8_t wasgo_buffer_top[0];
    int wasgo_size_top = 0;
    encode_variant(wasgo_var_top, wasgo_buffer_top, wasgo_size_top);
    

    Variant wasgo_var_right = p_right;
    uint8_t wasgo_buffer_right[0];
    int wasgo_size_right = 0;
    encode_variant(wasgo_var_right, wasgo_buffer_right, wasgo_size_right);
    

    Variant wasgo_var_bottom = p_bottom;
    uint8_t wasgo_buffer_bottom[0];
    int wasgo_size_bottom = 0;
    encode_variant(wasgo_var_bottom, wasgo_buffer_bottom, wasgo_size_bottom);
    
	_wasgo_VisualServer_wrapper_black_bars_set_images(wasgo_id, wasgo_buffer_left, wasgo_size_left, wasgo_buffer_top, wasgo_size_top, wasgo_buffer_right, wasgo_size_right, wasgo_buffer_bottom, wasgo_size_bottom);
}
void VisualServer::black_bars_set_margins(int p_left, int p_top, int p_right, int p_bottom){
	_wasgo_VisualServer_wrapper_black_bars_set_margins(wasgo_id, p_left, p_top, p_right, p_bottom);
}
RID VisualServer::camera_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_camera_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void VisualServer::camera_set_cull_mask(RID p_camera, int p_layers){

    Variant wasgo_var_camera = p_camera;
    uint8_t wasgo_buffer_camera[0];
    int wasgo_size_camera = 0;
    encode_variant(wasgo_var_camera, wasgo_buffer_camera, wasgo_size_camera);
    
	_wasgo_VisualServer_wrapper_camera_set_cull_mask(wasgo_id, wasgo_buffer_camera, wasgo_size_camera, p_layers);
}
void VisualServer::camera_set_environment(RID p_camera, RID p_env){

    Variant wasgo_var_camera = p_camera;
    uint8_t wasgo_buffer_camera[0];
    int wasgo_size_camera = 0;
    encode_variant(wasgo_var_camera, wasgo_buffer_camera, wasgo_size_camera);
    

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    
	_wasgo_VisualServer_wrapper_camera_set_environment(wasgo_id, wasgo_buffer_camera, wasgo_size_camera, wasgo_buffer_env, wasgo_size_env);
}
void VisualServer::camera_set_frustum(RID p_camera, float p_size, Vector2 p_offset, float p_z_near, float p_z_far){

    Variant wasgo_var_camera = p_camera;
    uint8_t wasgo_buffer_camera[0];
    int wasgo_size_camera = 0;
    encode_variant(wasgo_var_camera, wasgo_buffer_camera, wasgo_size_camera);
    

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_VisualServer_wrapper_camera_set_frustum(wasgo_id, wasgo_buffer_camera, wasgo_size_camera, p_size, wasgo_buffer_offset, wasgo_size_offset, p_z_near, p_z_far);
}
void VisualServer::camera_set_orthogonal(RID p_camera, float p_size, float p_z_near, float p_z_far){

    Variant wasgo_var_camera = p_camera;
    uint8_t wasgo_buffer_camera[0];
    int wasgo_size_camera = 0;
    encode_variant(wasgo_var_camera, wasgo_buffer_camera, wasgo_size_camera);
    
	_wasgo_VisualServer_wrapper_camera_set_orthogonal(wasgo_id, wasgo_buffer_camera, wasgo_size_camera, p_size, p_z_near, p_z_far);
}
void VisualServer::camera_set_perspective(RID p_camera, float p_fovy_degrees, float p_z_near, float p_z_far){

    Variant wasgo_var_camera = p_camera;
    uint8_t wasgo_buffer_camera[0];
    int wasgo_size_camera = 0;
    encode_variant(wasgo_var_camera, wasgo_buffer_camera, wasgo_size_camera);
    
	_wasgo_VisualServer_wrapper_camera_set_perspective(wasgo_id, wasgo_buffer_camera, wasgo_size_camera, p_fovy_degrees, p_z_near, p_z_far);
}
void VisualServer::camera_set_transform(RID p_camera, Transform p_transform){

    Variant wasgo_var_camera = p_camera;
    uint8_t wasgo_buffer_camera[0];
    int wasgo_size_camera = 0;
    encode_variant(wasgo_var_camera, wasgo_buffer_camera, wasgo_size_camera);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[52];
    int wasgo_size_transform = 52;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_VisualServer_wrapper_camera_set_transform(wasgo_id, wasgo_buffer_camera, wasgo_size_camera, wasgo_buffer_transform, wasgo_size_transform);
}
void VisualServer::camera_set_use_vertical_aspect(RID p_camera, bool p_enable){

    Variant wasgo_var_camera = p_camera;
    uint8_t wasgo_buffer_camera[0];
    int wasgo_size_camera = 0;
    encode_variant(wasgo_var_camera, wasgo_buffer_camera, wasgo_size_camera);
    
	_wasgo_VisualServer_wrapper_camera_set_use_vertical_aspect(wasgo_id, wasgo_buffer_camera, wasgo_size_camera, p_enable);
}
RID VisualServer::canvas_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_canvas_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void VisualServer::canvas_item_add_circle(RID p_item, Vector2 p_pos, float p_radius, Color p_color){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_pos = p_pos;
    uint8_t wasgo_buffer_pos[12];
    int wasgo_size_pos = 12;
    encode_variant(wasgo_var_pos, wasgo_buffer_pos, wasgo_size_pos);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_VisualServer_wrapper_canvas_item_add_circle(wasgo_id, wasgo_buffer_item, wasgo_size_item, wasgo_buffer_pos, wasgo_size_pos, p_radius, wasgo_buffer_color, wasgo_size_color);
}
void VisualServer::canvas_item_add_clip_ignore(RID p_item, bool p_ignore){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    
	_wasgo_VisualServer_wrapper_canvas_item_add_clip_ignore(wasgo_id, wasgo_buffer_item, wasgo_size_item, p_ignore);
}
void VisualServer::canvas_item_add_line(RID p_item, Vector2 p_from, Vector2 p_to, Color p_color, float p_width, bool p_antialiased){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

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
    
	_wasgo_VisualServer_wrapper_canvas_item_add_line(wasgo_id, wasgo_buffer_item, wasgo_size_item, wasgo_buffer_from, wasgo_size_from, wasgo_buffer_to, wasgo_size_to, wasgo_buffer_color, wasgo_size_color, p_width, p_antialiased);
}
void VisualServer::canvas_item_add_mesh(RID p_item, RID p_mesh, Transform2D p_transform, Color p_modulate, RID p_texture, RID p_normal_map){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    

    Variant wasgo_var_normal_map = p_normal_map;
    uint8_t wasgo_buffer_normal_map[0];
    int wasgo_size_normal_map = 0;
    encode_variant(wasgo_var_normal_map, wasgo_buffer_normal_map, wasgo_size_normal_map);
    
	_wasgo_VisualServer_wrapper_canvas_item_add_mesh(wasgo_id, wasgo_buffer_item, wasgo_size_item, wasgo_buffer_mesh, wasgo_size_mesh, wasgo_buffer_transform, wasgo_size_transform, wasgo_buffer_modulate, wasgo_size_modulate, wasgo_buffer_texture, wasgo_size_texture, wasgo_buffer_normal_map, wasgo_size_normal_map);
}
void VisualServer::canvas_item_add_multimesh(RID p_item, RID p_mesh, RID p_texture, RID p_normal_map){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    

    Variant wasgo_var_normal_map = p_normal_map;
    uint8_t wasgo_buffer_normal_map[0];
    int wasgo_size_normal_map = 0;
    encode_variant(wasgo_var_normal_map, wasgo_buffer_normal_map, wasgo_size_normal_map);
    
	_wasgo_VisualServer_wrapper_canvas_item_add_multimesh(wasgo_id, wasgo_buffer_item, wasgo_size_item, wasgo_buffer_mesh, wasgo_size_mesh, wasgo_buffer_texture, wasgo_size_texture, wasgo_buffer_normal_map, wasgo_size_normal_map);
}
void VisualServer::canvas_item_add_nine_patch(RID p_item, Rect2 p_rect, Rect2 p_source, RID p_texture, Vector2 p_topleft, Vector2 p_bottomright, VisualServer::NinePatchAxisMode p_x_axis_mode, VisualServer::NinePatchAxisMode p_y_axis_mode, bool p_draw_center, Color p_modulate, RID p_normal_map){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    

    Variant wasgo_var_source = p_source;
    uint8_t wasgo_buffer_source[20];
    int wasgo_size_source = 20;
    encode_variant(wasgo_var_source, wasgo_buffer_source, wasgo_size_source);
    

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    

    Variant wasgo_var_topleft = p_topleft;
    uint8_t wasgo_buffer_topleft[12];
    int wasgo_size_topleft = 12;
    encode_variant(wasgo_var_topleft, wasgo_buffer_topleft, wasgo_size_topleft);
    

    Variant wasgo_var_bottomright = p_bottomright;
    uint8_t wasgo_buffer_bottomright[12];
    int wasgo_size_bottomright = 12;
    encode_variant(wasgo_var_bottomright, wasgo_buffer_bottomright, wasgo_size_bottomright);
    

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    

    Variant wasgo_var_normal_map = p_normal_map;
    uint8_t wasgo_buffer_normal_map[0];
    int wasgo_size_normal_map = 0;
    encode_variant(wasgo_var_normal_map, wasgo_buffer_normal_map, wasgo_size_normal_map);
    
	_wasgo_VisualServer_wrapper_canvas_item_add_nine_patch(wasgo_id, wasgo_buffer_item, wasgo_size_item, wasgo_buffer_rect, wasgo_size_rect, wasgo_buffer_source, wasgo_size_source, wasgo_buffer_texture, wasgo_size_texture, wasgo_buffer_topleft, wasgo_size_topleft, wasgo_buffer_bottomright, wasgo_size_bottomright, p_x_axis_mode._get_wasgo_id(), p_y_axis_mode._get_wasgo_id(), p_draw_center, wasgo_buffer_modulate, wasgo_size_modulate, wasgo_buffer_normal_map, wasgo_size_normal_map);
}
void VisualServer::canvas_item_add_particles(RID p_item, RID p_particles, RID p_texture, RID p_normal_map){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    

    Variant wasgo_var_normal_map = p_normal_map;
    uint8_t wasgo_buffer_normal_map[0];
    int wasgo_size_normal_map = 0;
    encode_variant(wasgo_var_normal_map, wasgo_buffer_normal_map, wasgo_size_normal_map);
    
	_wasgo_VisualServer_wrapper_canvas_item_add_particles(wasgo_id, wasgo_buffer_item, wasgo_size_item, wasgo_buffer_particles, wasgo_size_particles, wasgo_buffer_texture, wasgo_size_texture, wasgo_buffer_normal_map, wasgo_size_normal_map);
}
void VisualServer::canvas_item_add_polygon(RID p_item, PoolVector2Array p_points, PoolColorArray p_colors, PoolVector2Array p_uvs, RID p_texture, RID p_normal_map, bool p_antialiased){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    

    Variant wasgo_var_normal_map = p_normal_map;
    uint8_t wasgo_buffer_normal_map[0];
    int wasgo_size_normal_map = 0;
    encode_variant(wasgo_var_normal_map, wasgo_buffer_normal_map, wasgo_size_normal_map);
    
	_wasgo_VisualServer_wrapper_canvas_item_add_polygon(wasgo_id, wasgo_buffer_item, wasgo_size_item, p_points._get_wasgo_id(), p_colors._get_wasgo_id(), p_uvs._get_wasgo_id(), wasgo_buffer_texture, wasgo_size_texture, wasgo_buffer_normal_map, wasgo_size_normal_map, p_antialiased);
}
void VisualServer::canvas_item_add_polyline(RID p_item, PoolVector2Array p_points, PoolColorArray p_colors, float p_width, bool p_antialiased){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    
	_wasgo_VisualServer_wrapper_canvas_item_add_polyline(wasgo_id, wasgo_buffer_item, wasgo_size_item, p_points._get_wasgo_id(), p_colors._get_wasgo_id(), p_width, p_antialiased);
}
void VisualServer::canvas_item_add_primitive(RID p_item, PoolVector2Array p_points, PoolColorArray p_colors, PoolVector2Array p_uvs, RID p_texture, float p_width, RID p_normal_map){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    

    Variant wasgo_var_normal_map = p_normal_map;
    uint8_t wasgo_buffer_normal_map[0];
    int wasgo_size_normal_map = 0;
    encode_variant(wasgo_var_normal_map, wasgo_buffer_normal_map, wasgo_size_normal_map);
    
	_wasgo_VisualServer_wrapper_canvas_item_add_primitive(wasgo_id, wasgo_buffer_item, wasgo_size_item, p_points._get_wasgo_id(), p_colors._get_wasgo_id(), p_uvs._get_wasgo_id(), wasgo_buffer_texture, wasgo_size_texture, p_width, wasgo_buffer_normal_map, wasgo_size_normal_map);
}
void VisualServer::canvas_item_add_rect(RID p_item, Rect2 p_rect, Color p_color){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_VisualServer_wrapper_canvas_item_add_rect(wasgo_id, wasgo_buffer_item, wasgo_size_item, wasgo_buffer_rect, wasgo_size_rect, wasgo_buffer_color, wasgo_size_color);
}
void VisualServer::canvas_item_add_set_transform(RID p_item, Transform2D p_transform){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_VisualServer_wrapper_canvas_item_add_set_transform(wasgo_id, wasgo_buffer_item, wasgo_size_item, wasgo_buffer_transform, wasgo_size_transform);
}
void VisualServer::canvas_item_add_texture_rect(RID p_item, Rect2 p_rect, RID p_texture, bool p_tile, Color p_modulate, bool p_transpose, RID p_normal_map){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    

    Variant wasgo_var_normal_map = p_normal_map;
    uint8_t wasgo_buffer_normal_map[0];
    int wasgo_size_normal_map = 0;
    encode_variant(wasgo_var_normal_map, wasgo_buffer_normal_map, wasgo_size_normal_map);
    
	_wasgo_VisualServer_wrapper_canvas_item_add_texture_rect(wasgo_id, wasgo_buffer_item, wasgo_size_item, wasgo_buffer_rect, wasgo_size_rect, wasgo_buffer_texture, wasgo_size_texture, p_tile, wasgo_buffer_modulate, wasgo_size_modulate, p_transpose, wasgo_buffer_normal_map, wasgo_size_normal_map);
}
void VisualServer::canvas_item_add_texture_rect_region(RID p_item, Rect2 p_rect, RID p_texture, Rect2 p_src_rect, Color p_modulate, bool p_transpose, RID p_normal_map, bool p_clip_uv){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    

    Variant wasgo_var_src_rect = p_src_rect;
    uint8_t wasgo_buffer_src_rect[20];
    int wasgo_size_src_rect = 20;
    encode_variant(wasgo_var_src_rect, wasgo_buffer_src_rect, wasgo_size_src_rect);
    

    Variant wasgo_var_modulate = p_modulate;
    uint8_t wasgo_buffer_modulate[20];
    int wasgo_size_modulate = 20;
    encode_variant(wasgo_var_modulate, wasgo_buffer_modulate, wasgo_size_modulate);
    

    Variant wasgo_var_normal_map = p_normal_map;
    uint8_t wasgo_buffer_normal_map[0];
    int wasgo_size_normal_map = 0;
    encode_variant(wasgo_var_normal_map, wasgo_buffer_normal_map, wasgo_size_normal_map);
    
	_wasgo_VisualServer_wrapper_canvas_item_add_texture_rect_region(wasgo_id, wasgo_buffer_item, wasgo_size_item, wasgo_buffer_rect, wasgo_size_rect, wasgo_buffer_texture, wasgo_size_texture, wasgo_buffer_src_rect, wasgo_size_src_rect, wasgo_buffer_modulate, wasgo_size_modulate, p_transpose, wasgo_buffer_normal_map, wasgo_size_normal_map, p_clip_uv);
}
void VisualServer::canvas_item_add_triangle_array(RID p_item, PoolIntArray p_indices, PoolVector2Array p_points, PoolColorArray p_colors, PoolVector2Array p_uvs, PoolIntArray p_bones, PoolRealArray p_weights, RID p_texture, int p_count, RID p_normal_map, bool p_antialiased, bool p_antialiasing_use_indices){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    

    Variant wasgo_var_normal_map = p_normal_map;
    uint8_t wasgo_buffer_normal_map[0];
    int wasgo_size_normal_map = 0;
    encode_variant(wasgo_var_normal_map, wasgo_buffer_normal_map, wasgo_size_normal_map);
    
	_wasgo_VisualServer_wrapper_canvas_item_add_triangle_array(wasgo_id, wasgo_buffer_item, wasgo_size_item, p_indices._get_wasgo_id(), p_points._get_wasgo_id(), p_colors._get_wasgo_id(), p_uvs._get_wasgo_id(), p_bones._get_wasgo_id(), p_weights._get_wasgo_id(), wasgo_buffer_texture, wasgo_size_texture, p_count, wasgo_buffer_normal_map, wasgo_size_normal_map, p_antialiased, p_antialiasing_use_indices);
}
void VisualServer::canvas_item_clear(RID p_item){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    
	_wasgo_VisualServer_wrapper_canvas_item_clear(wasgo_id, wasgo_buffer_item, wasgo_size_item);
}
RID VisualServer::canvas_item_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_canvas_item_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void VisualServer::canvas_item_set_clip(RID p_item, bool p_clip){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    
	_wasgo_VisualServer_wrapper_canvas_item_set_clip(wasgo_id, wasgo_buffer_item, wasgo_size_item, p_clip);
}
void VisualServer::canvas_item_set_copy_to_backbuffer(RID p_item, bool p_enabled, Rect2 p_rect){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	_wasgo_VisualServer_wrapper_canvas_item_set_copy_to_backbuffer(wasgo_id, wasgo_buffer_item, wasgo_size_item, p_enabled, wasgo_buffer_rect, wasgo_size_rect);
}
void VisualServer::canvas_item_set_custom_rect(RID p_item, bool p_use_custom_rect, Rect2 p_rect){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	_wasgo_VisualServer_wrapper_canvas_item_set_custom_rect(wasgo_id, wasgo_buffer_item, wasgo_size_item, p_use_custom_rect, wasgo_buffer_rect, wasgo_size_rect);
}
void VisualServer::canvas_item_set_distance_field_mode(RID p_item, bool p_enabled){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    
	_wasgo_VisualServer_wrapper_canvas_item_set_distance_field_mode(wasgo_id, wasgo_buffer_item, wasgo_size_item, p_enabled);
}
void VisualServer::canvas_item_set_draw_behind_parent(RID p_item, bool p_enabled){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    
	_wasgo_VisualServer_wrapper_canvas_item_set_draw_behind_parent(wasgo_id, wasgo_buffer_item, wasgo_size_item, p_enabled);
}
void VisualServer::canvas_item_set_draw_index(RID p_item, int p_index){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    
	_wasgo_VisualServer_wrapper_canvas_item_set_draw_index(wasgo_id, wasgo_buffer_item, wasgo_size_item, p_index);
}
void VisualServer::canvas_item_set_light_mask(RID p_item, int p_mask){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    
	_wasgo_VisualServer_wrapper_canvas_item_set_light_mask(wasgo_id, wasgo_buffer_item, wasgo_size_item, p_mask);
}
void VisualServer::canvas_item_set_material(RID p_item, RID p_material){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_material = p_material;
    uint8_t wasgo_buffer_material[0];
    int wasgo_size_material = 0;
    encode_variant(wasgo_var_material, wasgo_buffer_material, wasgo_size_material);
    
	_wasgo_VisualServer_wrapper_canvas_item_set_material(wasgo_id, wasgo_buffer_item, wasgo_size_item, wasgo_buffer_material, wasgo_size_material);
}
void VisualServer::canvas_item_set_modulate(RID p_item, Color p_color){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_VisualServer_wrapper_canvas_item_set_modulate(wasgo_id, wasgo_buffer_item, wasgo_size_item, wasgo_buffer_color, wasgo_size_color);
}
void VisualServer::canvas_item_set_parent(RID p_item, RID p_parent){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_parent = p_parent;
    uint8_t wasgo_buffer_parent[0];
    int wasgo_size_parent = 0;
    encode_variant(wasgo_var_parent, wasgo_buffer_parent, wasgo_size_parent);
    
	_wasgo_VisualServer_wrapper_canvas_item_set_parent(wasgo_id, wasgo_buffer_item, wasgo_size_item, wasgo_buffer_parent, wasgo_size_parent);
}
void VisualServer::canvas_item_set_self_modulate(RID p_item, Color p_color){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_VisualServer_wrapper_canvas_item_set_self_modulate(wasgo_id, wasgo_buffer_item, wasgo_size_item, wasgo_buffer_color, wasgo_size_color);
}
void VisualServer::canvas_item_set_sort_children_by_y(RID p_item, bool p_enabled){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    
	_wasgo_VisualServer_wrapper_canvas_item_set_sort_children_by_y(wasgo_id, wasgo_buffer_item, wasgo_size_item, p_enabled);
}
void VisualServer::canvas_item_set_transform(RID p_item, Transform2D p_transform){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_VisualServer_wrapper_canvas_item_set_transform(wasgo_id, wasgo_buffer_item, wasgo_size_item, wasgo_buffer_transform, wasgo_size_transform);
}
void VisualServer::canvas_item_set_use_parent_material(RID p_item, bool p_enabled){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    
	_wasgo_VisualServer_wrapper_canvas_item_set_use_parent_material(wasgo_id, wasgo_buffer_item, wasgo_size_item, p_enabled);
}
void VisualServer::canvas_item_set_visible(RID p_item, bool p_visible){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    
	_wasgo_VisualServer_wrapper_canvas_item_set_visible(wasgo_id, wasgo_buffer_item, wasgo_size_item, p_visible);
}
void VisualServer::canvas_item_set_z_as_relative_to_parent(RID p_item, bool p_enabled){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    
	_wasgo_VisualServer_wrapper_canvas_item_set_z_as_relative_to_parent(wasgo_id, wasgo_buffer_item, wasgo_size_item, p_enabled);
}
void VisualServer::canvas_item_set_z_index(RID p_item, int p_z_index){

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    
	_wasgo_VisualServer_wrapper_canvas_item_set_z_index(wasgo_id, wasgo_buffer_item, wasgo_size_item, p_z_index);
}
void VisualServer::canvas_light_attach_to_canvas(RID p_light, RID p_canvas){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    

    Variant wasgo_var_canvas = p_canvas;
    uint8_t wasgo_buffer_canvas[0];
    int wasgo_size_canvas = 0;
    encode_variant(wasgo_var_canvas, wasgo_buffer_canvas, wasgo_size_canvas);
    
	_wasgo_VisualServer_wrapper_canvas_light_attach_to_canvas(wasgo_id, wasgo_buffer_light, wasgo_size_light, wasgo_buffer_canvas, wasgo_size_canvas);
}
RID VisualServer::canvas_light_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_canvas_light_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void VisualServer::canvas_light_occluder_attach_to_canvas(RID p_occluder, RID p_canvas){

    Variant wasgo_var_occluder = p_occluder;
    uint8_t wasgo_buffer_occluder[0];
    int wasgo_size_occluder = 0;
    encode_variant(wasgo_var_occluder, wasgo_buffer_occluder, wasgo_size_occluder);
    

    Variant wasgo_var_canvas = p_canvas;
    uint8_t wasgo_buffer_canvas[0];
    int wasgo_size_canvas = 0;
    encode_variant(wasgo_var_canvas, wasgo_buffer_canvas, wasgo_size_canvas);
    
	_wasgo_VisualServer_wrapper_canvas_light_occluder_attach_to_canvas(wasgo_id, wasgo_buffer_occluder, wasgo_size_occluder, wasgo_buffer_canvas, wasgo_size_canvas);
}
RID VisualServer::canvas_light_occluder_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_canvas_light_occluder_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void VisualServer::canvas_light_occluder_set_enabled(RID p_occluder, bool p_enabled){

    Variant wasgo_var_occluder = p_occluder;
    uint8_t wasgo_buffer_occluder[0];
    int wasgo_size_occluder = 0;
    encode_variant(wasgo_var_occluder, wasgo_buffer_occluder, wasgo_size_occluder);
    
	_wasgo_VisualServer_wrapper_canvas_light_occluder_set_enabled(wasgo_id, wasgo_buffer_occluder, wasgo_size_occluder, p_enabled);
}
void VisualServer::canvas_light_occluder_set_light_mask(RID p_occluder, int p_mask){

    Variant wasgo_var_occluder = p_occluder;
    uint8_t wasgo_buffer_occluder[0];
    int wasgo_size_occluder = 0;
    encode_variant(wasgo_var_occluder, wasgo_buffer_occluder, wasgo_size_occluder);
    
	_wasgo_VisualServer_wrapper_canvas_light_occluder_set_light_mask(wasgo_id, wasgo_buffer_occluder, wasgo_size_occluder, p_mask);
}
void VisualServer::canvas_light_occluder_set_polygon(RID p_occluder, RID p_polygon){

    Variant wasgo_var_occluder = p_occluder;
    uint8_t wasgo_buffer_occluder[0];
    int wasgo_size_occluder = 0;
    encode_variant(wasgo_var_occluder, wasgo_buffer_occluder, wasgo_size_occluder);
    

    Variant wasgo_var_polygon = p_polygon;
    uint8_t wasgo_buffer_polygon[0];
    int wasgo_size_polygon = 0;
    encode_variant(wasgo_var_polygon, wasgo_buffer_polygon, wasgo_size_polygon);
    
	_wasgo_VisualServer_wrapper_canvas_light_occluder_set_polygon(wasgo_id, wasgo_buffer_occluder, wasgo_size_occluder, wasgo_buffer_polygon, wasgo_size_polygon);
}
void VisualServer::canvas_light_occluder_set_transform(RID p_occluder, Transform2D p_transform){

    Variant wasgo_var_occluder = p_occluder;
    uint8_t wasgo_buffer_occluder[0];
    int wasgo_size_occluder = 0;
    encode_variant(wasgo_var_occluder, wasgo_buffer_occluder, wasgo_size_occluder);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_VisualServer_wrapper_canvas_light_occluder_set_transform(wasgo_id, wasgo_buffer_occluder, wasgo_size_occluder, wasgo_buffer_transform, wasgo_size_transform);
}
void VisualServer::canvas_light_set_color(RID p_light, Color p_color){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_color(wasgo_id, wasgo_buffer_light, wasgo_size_light, wasgo_buffer_color, wasgo_size_color);
}
void VisualServer::canvas_light_set_enabled(RID p_light, bool p_enabled){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_enabled(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_enabled);
}
void VisualServer::canvas_light_set_energy(RID p_light, float p_energy){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_energy(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_energy);
}
void VisualServer::canvas_light_set_height(RID p_light, float p_height){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_height(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_height);
}
void VisualServer::canvas_light_set_item_cull_mask(RID p_light, int p_mask){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_item_cull_mask(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_mask);
}
void VisualServer::canvas_light_set_item_shadow_cull_mask(RID p_light, int p_mask){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_item_shadow_cull_mask(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_mask);
}
void VisualServer::canvas_light_set_layer_range(RID p_light, int p_min_layer, int p_max_layer){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_layer_range(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_min_layer, p_max_layer);
}
void VisualServer::canvas_light_set_mode(RID p_light, VisualServer::CanvasLightMode p_mode){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_mode(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_mode._get_wasgo_id());
}
void VisualServer::canvas_light_set_scale(RID p_light, float p_scale){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_scale(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_scale);
}
void VisualServer::canvas_light_set_shadow_buffer_size(RID p_light, int p_size){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_shadow_buffer_size(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_size);
}
void VisualServer::canvas_light_set_shadow_color(RID p_light, Color p_color){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_shadow_color(wasgo_id, wasgo_buffer_light, wasgo_size_light, wasgo_buffer_color, wasgo_size_color);
}
void VisualServer::canvas_light_set_shadow_enabled(RID p_light, bool p_enabled){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_shadow_enabled(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_enabled);
}
void VisualServer::canvas_light_set_shadow_filter(RID p_light, VisualServer::CanvasLightShadowFilter p_filter){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_shadow_filter(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_filter._get_wasgo_id());
}
void VisualServer::canvas_light_set_shadow_gradient_length(RID p_light, float p_length){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_shadow_gradient_length(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_length);
}
void VisualServer::canvas_light_set_shadow_smooth(RID p_light, float p_smooth){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_shadow_smooth(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_smooth);
}
void VisualServer::canvas_light_set_texture(RID p_light, RID p_texture){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_texture(wasgo_id, wasgo_buffer_light, wasgo_size_light, wasgo_buffer_texture, wasgo_size_texture);
}
void VisualServer::canvas_light_set_texture_offset(RID p_light, Vector2 p_offset){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[12];
    int wasgo_size_offset = 12;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_texture_offset(wasgo_id, wasgo_buffer_light, wasgo_size_light, wasgo_buffer_offset, wasgo_size_offset);
}
void VisualServer::canvas_light_set_transform(RID p_light, Transform2D p_transform){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_transform(wasgo_id, wasgo_buffer_light, wasgo_size_light, wasgo_buffer_transform, wasgo_size_transform);
}
void VisualServer::canvas_light_set_z_range(RID p_light, int p_min_z, int p_max_z){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_canvas_light_set_z_range(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_min_z, p_max_z);
}
RID VisualServer::canvas_occluder_polygon_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_canvas_occluder_polygon_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void VisualServer::canvas_occluder_polygon_set_cull_mode(RID p_occluder_polygon, VisualServer::CanvasOccluderPolygonCullMode p_mode){

    Variant wasgo_var_occluder_polygon = p_occluder_polygon;
    uint8_t wasgo_buffer_occluder_polygon[0];
    int wasgo_size_occluder_polygon = 0;
    encode_variant(wasgo_var_occluder_polygon, wasgo_buffer_occluder_polygon, wasgo_size_occluder_polygon);
    
	_wasgo_VisualServer_wrapper_canvas_occluder_polygon_set_cull_mode(wasgo_id, wasgo_buffer_occluder_polygon, wasgo_size_occluder_polygon, p_mode._get_wasgo_id());
}
void VisualServer::canvas_occluder_polygon_set_shape(RID p_occluder_polygon, PoolVector2Array p_shape, bool p_closed){

    Variant wasgo_var_occluder_polygon = p_occluder_polygon;
    uint8_t wasgo_buffer_occluder_polygon[0];
    int wasgo_size_occluder_polygon = 0;
    encode_variant(wasgo_var_occluder_polygon, wasgo_buffer_occluder_polygon, wasgo_size_occluder_polygon);
    
	_wasgo_VisualServer_wrapper_canvas_occluder_polygon_set_shape(wasgo_id, wasgo_buffer_occluder_polygon, wasgo_size_occluder_polygon, p_shape._get_wasgo_id(), p_closed);
}
void VisualServer::canvas_occluder_polygon_set_shape_as_lines(RID p_occluder_polygon, PoolVector2Array p_shape){

    Variant wasgo_var_occluder_polygon = p_occluder_polygon;
    uint8_t wasgo_buffer_occluder_polygon[0];
    int wasgo_size_occluder_polygon = 0;
    encode_variant(wasgo_var_occluder_polygon, wasgo_buffer_occluder_polygon, wasgo_size_occluder_polygon);
    
	_wasgo_VisualServer_wrapper_canvas_occluder_polygon_set_shape_as_lines(wasgo_id, wasgo_buffer_occluder_polygon, wasgo_size_occluder_polygon, p_shape._get_wasgo_id());
}
void VisualServer::canvas_set_item_mirroring(RID p_canvas, RID p_item, Vector2 p_mirroring){

    Variant wasgo_var_canvas = p_canvas;
    uint8_t wasgo_buffer_canvas[0];
    int wasgo_size_canvas = 0;
    encode_variant(wasgo_var_canvas, wasgo_buffer_canvas, wasgo_size_canvas);
    

    Variant wasgo_var_item = p_item;
    uint8_t wasgo_buffer_item[0];
    int wasgo_size_item = 0;
    encode_variant(wasgo_var_item, wasgo_buffer_item, wasgo_size_item);
    

    Variant wasgo_var_mirroring = p_mirroring;
    uint8_t wasgo_buffer_mirroring[12];
    int wasgo_size_mirroring = 12;
    encode_variant(wasgo_var_mirroring, wasgo_buffer_mirroring, wasgo_size_mirroring);
    
	_wasgo_VisualServer_wrapper_canvas_set_item_mirroring(wasgo_id, wasgo_buffer_canvas, wasgo_size_canvas, wasgo_buffer_item, wasgo_size_item, wasgo_buffer_mirroring, wasgo_size_mirroring);
}
void VisualServer::canvas_set_modulate(RID p_canvas, Color p_color){

    Variant wasgo_var_canvas = p_canvas;
    uint8_t wasgo_buffer_canvas[0];
    int wasgo_size_canvas = 0;
    encode_variant(wasgo_var_canvas, wasgo_buffer_canvas, wasgo_size_canvas);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_VisualServer_wrapper_canvas_set_modulate(wasgo_id, wasgo_buffer_canvas, wasgo_size_canvas, wasgo_buffer_color, wasgo_size_color);
}
RID VisualServer::directional_light_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_directional_light_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void VisualServer::draw(bool p_swap_buffers, float p_frame_step){
	_wasgo_VisualServer_wrapper_draw(wasgo_id, p_swap_buffers, p_frame_step);
}
RID VisualServer::environment_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_environment_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void VisualServer::environment_set_adjustment(RID p_env, bool p_enable, float p_brightness, float p_contrast, float p_saturation, RID p_ramp){

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    

    Variant wasgo_var_ramp = p_ramp;
    uint8_t wasgo_buffer_ramp[0];
    int wasgo_size_ramp = 0;
    encode_variant(wasgo_var_ramp, wasgo_buffer_ramp, wasgo_size_ramp);
    
	_wasgo_VisualServer_wrapper_environment_set_adjustment(wasgo_id, wasgo_buffer_env, wasgo_size_env, p_enable, p_brightness, p_contrast, p_saturation, wasgo_buffer_ramp, wasgo_size_ramp);
}
void VisualServer::environment_set_ambient_light(RID p_env, Color p_color, float p_energy, float p_sky_contibution){

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_VisualServer_wrapper_environment_set_ambient_light(wasgo_id, wasgo_buffer_env, wasgo_size_env, wasgo_buffer_color, wasgo_size_color, p_energy, p_sky_contibution);
}
void VisualServer::environment_set_background(RID p_env, VisualServer::EnvironmentBG p_bg){

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    
	_wasgo_VisualServer_wrapper_environment_set_background(wasgo_id, wasgo_buffer_env, wasgo_size_env, p_bg._get_wasgo_id());
}
void VisualServer::environment_set_bg_color(RID p_env, Color p_color){

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_VisualServer_wrapper_environment_set_bg_color(wasgo_id, wasgo_buffer_env, wasgo_size_env, wasgo_buffer_color, wasgo_size_color);
}
void VisualServer::environment_set_bg_energy(RID p_env, float p_energy){

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    
	_wasgo_VisualServer_wrapper_environment_set_bg_energy(wasgo_id, wasgo_buffer_env, wasgo_size_env, p_energy);
}
void VisualServer::environment_set_canvas_max_layer(RID p_env, int p_max_layer){

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    
	_wasgo_VisualServer_wrapper_environment_set_canvas_max_layer(wasgo_id, wasgo_buffer_env, wasgo_size_env, p_max_layer);
}
void VisualServer::environment_set_dof_blur_far(RID p_env, bool p_enable, float p_distance, float p_transition, float p_far_amount, VisualServer::EnvironmentDOFBlurQuality p_quality){

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    
	_wasgo_VisualServer_wrapper_environment_set_dof_blur_far(wasgo_id, wasgo_buffer_env, wasgo_size_env, p_enable, p_distance, p_transition, p_far_amount, p_quality._get_wasgo_id());
}
void VisualServer::environment_set_dof_blur_near(RID p_env, bool p_enable, float p_distance, float p_transition, float p_far_amount, VisualServer::EnvironmentDOFBlurQuality p_quality){

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    
	_wasgo_VisualServer_wrapper_environment_set_dof_blur_near(wasgo_id, wasgo_buffer_env, wasgo_size_env, p_enable, p_distance, p_transition, p_far_amount, p_quality._get_wasgo_id());
}
void VisualServer::environment_set_fog(RID p_env, bool p_enable, Color p_color, Color p_sun_color, float p_sun_amount){

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    

    Variant wasgo_var_sun_color = p_sun_color;
    uint8_t wasgo_buffer_sun_color[20];
    int wasgo_size_sun_color = 20;
    encode_variant(wasgo_var_sun_color, wasgo_buffer_sun_color, wasgo_size_sun_color);
    
	_wasgo_VisualServer_wrapper_environment_set_fog(wasgo_id, wasgo_buffer_env, wasgo_size_env, p_enable, wasgo_buffer_color, wasgo_size_color, wasgo_buffer_sun_color, wasgo_size_sun_color, p_sun_amount);
}
void VisualServer::environment_set_fog_depth(RID p_env, bool p_enable, float p_depth_begin, float p_depth_end, float p_depth_curve, bool p_transmit, float p_transmit_curve){

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    
	_wasgo_VisualServer_wrapper_environment_set_fog_depth(wasgo_id, wasgo_buffer_env, wasgo_size_env, p_enable, p_depth_begin, p_depth_end, p_depth_curve, p_transmit, p_transmit_curve);
}
void VisualServer::environment_set_fog_height(RID p_env, bool p_enable, float p_min_height, float p_max_height, float p_height_curve){

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    
	_wasgo_VisualServer_wrapper_environment_set_fog_height(wasgo_id, wasgo_buffer_env, wasgo_size_env, p_enable, p_min_height, p_max_height, p_height_curve);
}
void VisualServer::environment_set_glow(RID p_env, bool p_enable, int p_level_flags, float p_intensity, float p_strength, float p_bloom_threshold, VisualServer::EnvironmentGlowBlendMode p_blend_mode, float p_hdr_bleed_threshold, float p_hdr_bleed_scale, float p_hdr_luminance_cap, bool p_bicubic_upscale){

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    
	_wasgo_VisualServer_wrapper_environment_set_glow(wasgo_id, wasgo_buffer_env, wasgo_size_env, p_enable, p_level_flags, p_intensity, p_strength, p_bloom_threshold, p_blend_mode._get_wasgo_id(), p_hdr_bleed_threshold, p_hdr_bleed_scale, p_hdr_luminance_cap, p_bicubic_upscale);
}
void VisualServer::environment_set_sky(RID p_env, RID p_sky){

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    

    Variant wasgo_var_sky = p_sky;
    uint8_t wasgo_buffer_sky[0];
    int wasgo_size_sky = 0;
    encode_variant(wasgo_var_sky, wasgo_buffer_sky, wasgo_size_sky);
    
	_wasgo_VisualServer_wrapper_environment_set_sky(wasgo_id, wasgo_buffer_env, wasgo_size_env, wasgo_buffer_sky, wasgo_size_sky);
}
void VisualServer::environment_set_sky_custom_fov(RID p_env, float p_scale){

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    
	_wasgo_VisualServer_wrapper_environment_set_sky_custom_fov(wasgo_id, wasgo_buffer_env, wasgo_size_env, p_scale);
}
void VisualServer::environment_set_sky_orientation(RID p_env, Basis p_orientation){

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    

    Variant wasgo_var_orientation = p_orientation;
    uint8_t wasgo_buffer_orientation[40];
    int wasgo_size_orientation = 40;
    encode_variant(wasgo_var_orientation, wasgo_buffer_orientation, wasgo_size_orientation);
    
	_wasgo_VisualServer_wrapper_environment_set_sky_orientation(wasgo_id, wasgo_buffer_env, wasgo_size_env, wasgo_buffer_orientation, wasgo_size_orientation);
}
void VisualServer::environment_set_ssao(RID p_env, bool p_enable, float p_radius, float p_intensity, float p_radius2, float p_intensity2, float p_bias, float p_light_affect, float p_ao_channel_affect, Color p_color, VisualServer::EnvironmentSSAOQuality p_quality, VisualServer::EnvironmentSSAOBlur p_blur, float p_bilateral_sharpness){

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_VisualServer_wrapper_environment_set_ssao(wasgo_id, wasgo_buffer_env, wasgo_size_env, p_enable, p_radius, p_intensity, p_radius2, p_intensity2, p_bias, p_light_affect, p_ao_channel_affect, wasgo_buffer_color, wasgo_size_color, p_quality._get_wasgo_id(), p_blur._get_wasgo_id(), p_bilateral_sharpness);
}
void VisualServer::environment_set_ssr(RID p_env, bool p_enable, int p_max_steps, float p_fade_in, float p_fade_out, float p_depth_tolerance, bool p_roughness){

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    
	_wasgo_VisualServer_wrapper_environment_set_ssr(wasgo_id, wasgo_buffer_env, wasgo_size_env, p_enable, p_max_steps, p_fade_in, p_fade_out, p_depth_tolerance, p_roughness);
}
void VisualServer::environment_set_tonemap(RID p_env, VisualServer::EnvironmentToneMapper p_tone_mapper, float p_exposure, float p_white, bool p_auto_exposure, float p_min_luminance, float p_max_luminance, float p_auto_exp_speed, float p_auto_exp_grey){

    Variant wasgo_var_env = p_env;
    uint8_t wasgo_buffer_env[0];
    int wasgo_size_env = 0;
    encode_variant(wasgo_var_env, wasgo_buffer_env, wasgo_size_env);
    
	_wasgo_VisualServer_wrapper_environment_set_tonemap(wasgo_id, wasgo_buffer_env, wasgo_size_env, p_tone_mapper._get_wasgo_id(), p_exposure, p_white, p_auto_exposure, p_min_luminance, p_max_luminance, p_auto_exp_speed, p_auto_exp_grey);
}
void VisualServer::finish(){
	_wasgo_VisualServer_wrapper_finish(wasgo_id);
}
void VisualServer::force_draw(bool p_swap_buffers, float p_frame_step){
	_wasgo_VisualServer_wrapper_force_draw(wasgo_id, p_swap_buffers, p_frame_step);
}
void VisualServer::force_sync(){
	_wasgo_VisualServer_wrapper_force_sync(wasgo_id);
}
void VisualServer::free_rid(RID p_rid){

    Variant wasgo_var_rid = p_rid;
    uint8_t wasgo_buffer_rid[0];
    int wasgo_size_rid = 0;
    encode_variant(wasgo_var_rid, wasgo_buffer_rid, wasgo_size_rid);
    
	_wasgo_VisualServer_wrapper_free_rid(wasgo_id, wasgo_buffer_rid, wasgo_size_rid);
}
int VisualServer::get_render_info(VisualServer::RenderInfo p_info){
	return (int) _wasgo_VisualServer_wrapper_get_render_info(wasgo_id, p_info._get_wasgo_id());
}
RID VisualServer::get_test_cube(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_get_test_cube(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID VisualServer::get_test_texture(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_get_test_texture(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
String VisualServer::get_video_adapter_name(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_VisualServer_wrapper_get_video_adapter_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String VisualServer::get_video_adapter_vendor(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_VisualServer_wrapper_get_video_adapter_vendor(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
RID VisualServer::get_white_texture(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_get_white_texture(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID VisualServer::gi_probe_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_gi_probe_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
float VisualServer::gi_probe_get_bias(RID p_probe){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	return (float) _wasgo_VisualServer_wrapper_gi_probe_get_bias(wasgo_id, wasgo_buffer_probe, wasgo_size_probe);
}
::AABB VisualServer::gi_probe_get_bounds(RID p_probe){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_VisualServer_wrapper_gi_probe_get_bounds(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_probe, wasgo_size_probe);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (AABB) wasgo_ret;
    
}
float VisualServer::gi_probe_get_cell_size(RID p_probe){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	return (float) _wasgo_VisualServer_wrapper_gi_probe_get_cell_size(wasgo_id, wasgo_buffer_probe, wasgo_size_probe);
}
PoolIntArray VisualServer::gi_probe_get_dynamic_data(RID p_probe){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	return PoolIntArray(_wasgo_VisualServer_wrapper_gi_probe_get_dynamic_data(wasgo_id, wasgo_buffer_probe, wasgo_size_probe));
}
int VisualServer::gi_probe_get_dynamic_range(RID p_probe){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	return (int) _wasgo_VisualServer_wrapper_gi_probe_get_dynamic_range(wasgo_id, wasgo_buffer_probe, wasgo_size_probe);
}
float VisualServer::gi_probe_get_energy(RID p_probe){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	return (float) _wasgo_VisualServer_wrapper_gi_probe_get_energy(wasgo_id, wasgo_buffer_probe, wasgo_size_probe);
}
float VisualServer::gi_probe_get_normal_bias(RID p_probe){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	return (float) _wasgo_VisualServer_wrapper_gi_probe_get_normal_bias(wasgo_id, wasgo_buffer_probe, wasgo_size_probe);
}
float VisualServer::gi_probe_get_propagation(RID p_probe){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	return (float) _wasgo_VisualServer_wrapper_gi_probe_get_propagation(wasgo_id, wasgo_buffer_probe, wasgo_size_probe);
}
Transform VisualServer::gi_probe_get_to_cell_xform(RID p_probe){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_VisualServer_wrapper_gi_probe_get_to_cell_xform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_probe, wasgo_size_probe);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
bool VisualServer::gi_probe_is_compressed(RID p_probe){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	return (bool) _wasgo_VisualServer_wrapper_gi_probe_is_compressed(wasgo_id, wasgo_buffer_probe, wasgo_size_probe);
}
bool VisualServer::gi_probe_is_interior(RID p_probe){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	return (bool) _wasgo_VisualServer_wrapper_gi_probe_is_interior(wasgo_id, wasgo_buffer_probe, wasgo_size_probe);
}
void VisualServer::gi_probe_set_bias(RID p_probe, float p_bias){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	_wasgo_VisualServer_wrapper_gi_probe_set_bias(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, p_bias);
}
void VisualServer::gi_probe_set_bounds(RID p_probe, ::AABB p_bounds){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    

    Variant wasgo_var_bounds = p_bounds;
    uint8_t wasgo_buffer_bounds[28];
    int wasgo_size_bounds = 28;
    encode_variant(wasgo_var_bounds, wasgo_buffer_bounds, wasgo_size_bounds);
    
	_wasgo_VisualServer_wrapper_gi_probe_set_bounds(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, wasgo_buffer_bounds, wasgo_size_bounds);
}
void VisualServer::gi_probe_set_cell_size(RID p_probe, float p_range){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	_wasgo_VisualServer_wrapper_gi_probe_set_cell_size(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, p_range);
}
void VisualServer::gi_probe_set_compress(RID p_probe, bool p_enable){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	_wasgo_VisualServer_wrapper_gi_probe_set_compress(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, p_enable);
}
void VisualServer::gi_probe_set_dynamic_data(RID p_probe, PoolIntArray p_data){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	_wasgo_VisualServer_wrapper_gi_probe_set_dynamic_data(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, p_data._get_wasgo_id());
}
void VisualServer::gi_probe_set_dynamic_range(RID p_probe, int p_range){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	_wasgo_VisualServer_wrapper_gi_probe_set_dynamic_range(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, p_range);
}
void VisualServer::gi_probe_set_energy(RID p_probe, float p_energy){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	_wasgo_VisualServer_wrapper_gi_probe_set_energy(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, p_energy);
}
void VisualServer::gi_probe_set_interior(RID p_probe, bool p_enable){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	_wasgo_VisualServer_wrapper_gi_probe_set_interior(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, p_enable);
}
void VisualServer::gi_probe_set_normal_bias(RID p_probe, float p_bias){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	_wasgo_VisualServer_wrapper_gi_probe_set_normal_bias(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, p_bias);
}
void VisualServer::gi_probe_set_propagation(RID p_probe, float p_propagation){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	_wasgo_VisualServer_wrapper_gi_probe_set_propagation(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, p_propagation);
}
void VisualServer::gi_probe_set_to_cell_xform(RID p_probe, Transform p_xform){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    

    Variant wasgo_var_xform = p_xform;
    uint8_t wasgo_buffer_xform[52];
    int wasgo_size_xform = 52;
    encode_variant(wasgo_var_xform, wasgo_buffer_xform, wasgo_size_xform);
    
	_wasgo_VisualServer_wrapper_gi_probe_set_to_cell_xform(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, wasgo_buffer_xform, wasgo_size_xform);
}
bool VisualServer::has_changed(){
	return (bool) _wasgo_VisualServer_wrapper_has_changed(wasgo_id);
}
bool VisualServer::has_feature(VisualServer::Features p_feature){
	return (bool) _wasgo_VisualServer_wrapper_has_feature(wasgo_id, p_feature._get_wasgo_id());
}
bool VisualServer::has_os_feature(String p_feature){

    Variant wasgo_var_feature = p_feature;
    int wasgo_size_feature = String(p_feature).size();
    uint8_t wasgo_buffer_feature[wasgo_size_feature];
    encode_variant(wasgo_var_feature, wasgo_buffer_feature, wasgo_size_feature);
    
	return (bool) _wasgo_VisualServer_wrapper_has_os_feature(wasgo_id, wasgo_buffer_feature, wasgo_size_feature);
}
void VisualServer::immediate_begin(RID p_immediate, VisualServer::PrimitiveType p_primitive, RID p_texture){

    Variant wasgo_var_immediate = p_immediate;
    uint8_t wasgo_buffer_immediate[0];
    int wasgo_size_immediate = 0;
    encode_variant(wasgo_var_immediate, wasgo_buffer_immediate, wasgo_size_immediate);
    

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    
	_wasgo_VisualServer_wrapper_immediate_begin(wasgo_id, wasgo_buffer_immediate, wasgo_size_immediate, p_primitive._get_wasgo_id(), wasgo_buffer_texture, wasgo_size_texture);
}
void VisualServer::immediate_clear(RID p_immediate){

    Variant wasgo_var_immediate = p_immediate;
    uint8_t wasgo_buffer_immediate[0];
    int wasgo_size_immediate = 0;
    encode_variant(wasgo_var_immediate, wasgo_buffer_immediate, wasgo_size_immediate);
    
	_wasgo_VisualServer_wrapper_immediate_clear(wasgo_id, wasgo_buffer_immediate, wasgo_size_immediate);
}
void VisualServer::immediate_color(RID p_immediate, Color p_color){

    Variant wasgo_var_immediate = p_immediate;
    uint8_t wasgo_buffer_immediate[0];
    int wasgo_size_immediate = 0;
    encode_variant(wasgo_var_immediate, wasgo_buffer_immediate, wasgo_size_immediate);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_VisualServer_wrapper_immediate_color(wasgo_id, wasgo_buffer_immediate, wasgo_size_immediate, wasgo_buffer_color, wasgo_size_color);
}
RID VisualServer::immediate_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_immediate_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void VisualServer::immediate_end(RID p_immediate){

    Variant wasgo_var_immediate = p_immediate;
    uint8_t wasgo_buffer_immediate[0];
    int wasgo_size_immediate = 0;
    encode_variant(wasgo_var_immediate, wasgo_buffer_immediate, wasgo_size_immediate);
    
	_wasgo_VisualServer_wrapper_immediate_end(wasgo_id, wasgo_buffer_immediate, wasgo_size_immediate);
}
RID VisualServer::immediate_get_material(RID p_immediate){

    Variant wasgo_var_immediate = p_immediate;
    uint8_t wasgo_buffer_immediate[0];
    int wasgo_size_immediate = 0;
    encode_variant(wasgo_var_immediate, wasgo_buffer_immediate, wasgo_size_immediate);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_immediate_get_material(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_immediate, wasgo_size_immediate);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void VisualServer::immediate_normal(RID p_immediate, Vector3 p_normal){

    Variant wasgo_var_immediate = p_immediate;
    uint8_t wasgo_buffer_immediate[0];
    int wasgo_size_immediate = 0;
    encode_variant(wasgo_var_immediate, wasgo_buffer_immediate, wasgo_size_immediate);
    

    Variant wasgo_var_normal = p_normal;
    uint8_t wasgo_buffer_normal[16];
    int wasgo_size_normal = 16;
    encode_variant(wasgo_var_normal, wasgo_buffer_normal, wasgo_size_normal);
    
	_wasgo_VisualServer_wrapper_immediate_normal(wasgo_id, wasgo_buffer_immediate, wasgo_size_immediate, wasgo_buffer_normal, wasgo_size_normal);
}
void VisualServer::immediate_set_material(RID p_immediate, RID p_material){

    Variant wasgo_var_immediate = p_immediate;
    uint8_t wasgo_buffer_immediate[0];
    int wasgo_size_immediate = 0;
    encode_variant(wasgo_var_immediate, wasgo_buffer_immediate, wasgo_size_immediate);
    

    Variant wasgo_var_material = p_material;
    uint8_t wasgo_buffer_material[0];
    int wasgo_size_material = 0;
    encode_variant(wasgo_var_material, wasgo_buffer_material, wasgo_size_material);
    
	_wasgo_VisualServer_wrapper_immediate_set_material(wasgo_id, wasgo_buffer_immediate, wasgo_size_immediate, wasgo_buffer_material, wasgo_size_material);
}
void VisualServer::immediate_tangent(RID p_immediate, Plane p_tangent){

    Variant wasgo_var_immediate = p_immediate;
    uint8_t wasgo_buffer_immediate[0];
    int wasgo_size_immediate = 0;
    encode_variant(wasgo_var_immediate, wasgo_buffer_immediate, wasgo_size_immediate);
    

    Variant wasgo_var_tangent = p_tangent;
    uint8_t wasgo_buffer_tangent[20];
    int wasgo_size_tangent = 20;
    encode_variant(wasgo_var_tangent, wasgo_buffer_tangent, wasgo_size_tangent);
    
	_wasgo_VisualServer_wrapper_immediate_tangent(wasgo_id, wasgo_buffer_immediate, wasgo_size_immediate, wasgo_buffer_tangent, wasgo_size_tangent);
}
void VisualServer::immediate_uv(RID p_immediate, Vector2 p_tex_uv){

    Variant wasgo_var_immediate = p_immediate;
    uint8_t wasgo_buffer_immediate[0];
    int wasgo_size_immediate = 0;
    encode_variant(wasgo_var_immediate, wasgo_buffer_immediate, wasgo_size_immediate);
    

    Variant wasgo_var_tex_uv = p_tex_uv;
    uint8_t wasgo_buffer_tex_uv[12];
    int wasgo_size_tex_uv = 12;
    encode_variant(wasgo_var_tex_uv, wasgo_buffer_tex_uv, wasgo_size_tex_uv);
    
	_wasgo_VisualServer_wrapper_immediate_uv(wasgo_id, wasgo_buffer_immediate, wasgo_size_immediate, wasgo_buffer_tex_uv, wasgo_size_tex_uv);
}
void VisualServer::immediate_uv2(RID p_immediate, Vector2 p_tex_uv){

    Variant wasgo_var_immediate = p_immediate;
    uint8_t wasgo_buffer_immediate[0];
    int wasgo_size_immediate = 0;
    encode_variant(wasgo_var_immediate, wasgo_buffer_immediate, wasgo_size_immediate);
    

    Variant wasgo_var_tex_uv = p_tex_uv;
    uint8_t wasgo_buffer_tex_uv[12];
    int wasgo_size_tex_uv = 12;
    encode_variant(wasgo_var_tex_uv, wasgo_buffer_tex_uv, wasgo_size_tex_uv);
    
	_wasgo_VisualServer_wrapper_immediate_uv2(wasgo_id, wasgo_buffer_immediate, wasgo_size_immediate, wasgo_buffer_tex_uv, wasgo_size_tex_uv);
}
void VisualServer::immediate_vertex(RID p_immediate, Vector3 p_vertex){

    Variant wasgo_var_immediate = p_immediate;
    uint8_t wasgo_buffer_immediate[0];
    int wasgo_size_immediate = 0;
    encode_variant(wasgo_var_immediate, wasgo_buffer_immediate, wasgo_size_immediate);
    

    Variant wasgo_var_vertex = p_vertex;
    uint8_t wasgo_buffer_vertex[16];
    int wasgo_size_vertex = 16;
    encode_variant(wasgo_var_vertex, wasgo_buffer_vertex, wasgo_size_vertex);
    
	_wasgo_VisualServer_wrapper_immediate_vertex(wasgo_id, wasgo_buffer_immediate, wasgo_size_immediate, wasgo_buffer_vertex, wasgo_size_vertex);
}
void VisualServer::immediate_vertex_2d(RID p_immediate, Vector2 p_vertex){

    Variant wasgo_var_immediate = p_immediate;
    uint8_t wasgo_buffer_immediate[0];
    int wasgo_size_immediate = 0;
    encode_variant(wasgo_var_immediate, wasgo_buffer_immediate, wasgo_size_immediate);
    

    Variant wasgo_var_vertex = p_vertex;
    uint8_t wasgo_buffer_vertex[12];
    int wasgo_size_vertex = 12;
    encode_variant(wasgo_var_vertex, wasgo_buffer_vertex, wasgo_size_vertex);
    
	_wasgo_VisualServer_wrapper_immediate_vertex_2d(wasgo_id, wasgo_buffer_immediate, wasgo_size_immediate, wasgo_buffer_vertex, wasgo_size_vertex);
}
void VisualServer::init(){
	_wasgo_VisualServer_wrapper_init(wasgo_id);
}
void VisualServer::instance_attach_object_instance_id(RID p_instance, int p_id){

    Variant wasgo_var_instance = p_instance;
    uint8_t wasgo_buffer_instance[0];
    int wasgo_size_instance = 0;
    encode_variant(wasgo_var_instance, wasgo_buffer_instance, wasgo_size_instance);
    
	_wasgo_VisualServer_wrapper_instance_attach_object_instance_id(wasgo_id, wasgo_buffer_instance, wasgo_size_instance, p_id);
}
void VisualServer::instance_attach_skeleton(RID p_instance, RID p_skeleton){

    Variant wasgo_var_instance = p_instance;
    uint8_t wasgo_buffer_instance[0];
    int wasgo_size_instance = 0;
    encode_variant(wasgo_var_instance, wasgo_buffer_instance, wasgo_size_instance);
    

    Variant wasgo_var_skeleton = p_skeleton;
    uint8_t wasgo_buffer_skeleton[0];
    int wasgo_size_skeleton = 0;
    encode_variant(wasgo_var_skeleton, wasgo_buffer_skeleton, wasgo_size_skeleton);
    
	_wasgo_VisualServer_wrapper_instance_attach_skeleton(wasgo_id, wasgo_buffer_instance, wasgo_size_instance, wasgo_buffer_skeleton, wasgo_size_skeleton);
}
RID VisualServer::instance_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_instance_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID VisualServer::instance_create2(RID p_base, RID p_scenario){

    Variant wasgo_var_base = p_base;
    uint8_t wasgo_buffer_base[0];
    int wasgo_size_base = 0;
    encode_variant(wasgo_var_base, wasgo_buffer_base, wasgo_size_base);
    

    Variant wasgo_var_scenario = p_scenario;
    uint8_t wasgo_buffer_scenario[0];
    int wasgo_size_scenario = 0;
    encode_variant(wasgo_var_scenario, wasgo_buffer_scenario, wasgo_size_scenario);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_instance_create2(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_base, wasgo_size_base, wasgo_buffer_scenario, wasgo_size_scenario);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void VisualServer::instance_geometry_set_as_instance_lod(RID p_instance, RID p_as_lod_of_instance){

    Variant wasgo_var_instance = p_instance;
    uint8_t wasgo_buffer_instance[0];
    int wasgo_size_instance = 0;
    encode_variant(wasgo_var_instance, wasgo_buffer_instance, wasgo_size_instance);
    

    Variant wasgo_var_as_lod_of_instance = p_as_lod_of_instance;
    uint8_t wasgo_buffer_as_lod_of_instance[0];
    int wasgo_size_as_lod_of_instance = 0;
    encode_variant(wasgo_var_as_lod_of_instance, wasgo_buffer_as_lod_of_instance, wasgo_size_as_lod_of_instance);
    
	_wasgo_VisualServer_wrapper_instance_geometry_set_as_instance_lod(wasgo_id, wasgo_buffer_instance, wasgo_size_instance, wasgo_buffer_as_lod_of_instance, wasgo_size_as_lod_of_instance);
}
void VisualServer::instance_geometry_set_cast_shadows_setting(RID p_instance, VisualServer::ShadowCastingSetting p_shadow_casting_setting){

    Variant wasgo_var_instance = p_instance;
    uint8_t wasgo_buffer_instance[0];
    int wasgo_size_instance = 0;
    encode_variant(wasgo_var_instance, wasgo_buffer_instance, wasgo_size_instance);
    
	_wasgo_VisualServer_wrapper_instance_geometry_set_cast_shadows_setting(wasgo_id, wasgo_buffer_instance, wasgo_size_instance, p_shadow_casting_setting._get_wasgo_id());
}
void VisualServer::instance_geometry_set_draw_range(RID p_instance, float p_min, float p_max, float p_min_margin, float p_max_margin){

    Variant wasgo_var_instance = p_instance;
    uint8_t wasgo_buffer_instance[0];
    int wasgo_size_instance = 0;
    encode_variant(wasgo_var_instance, wasgo_buffer_instance, wasgo_size_instance);
    
	_wasgo_VisualServer_wrapper_instance_geometry_set_draw_range(wasgo_id, wasgo_buffer_instance, wasgo_size_instance, p_min, p_max, p_min_margin, p_max_margin);
}
void VisualServer::instance_geometry_set_flag(RID p_instance, VisualServer::InstanceFlags p_flag, bool p_enabled){

    Variant wasgo_var_instance = p_instance;
    uint8_t wasgo_buffer_instance[0];
    int wasgo_size_instance = 0;
    encode_variant(wasgo_var_instance, wasgo_buffer_instance, wasgo_size_instance);
    
	_wasgo_VisualServer_wrapper_instance_geometry_set_flag(wasgo_id, wasgo_buffer_instance, wasgo_size_instance, p_flag._get_wasgo_id(), p_enabled);
}
void VisualServer::instance_geometry_set_material_override(RID p_instance, RID p_material){

    Variant wasgo_var_instance = p_instance;
    uint8_t wasgo_buffer_instance[0];
    int wasgo_size_instance = 0;
    encode_variant(wasgo_var_instance, wasgo_buffer_instance, wasgo_size_instance);
    

    Variant wasgo_var_material = p_material;
    uint8_t wasgo_buffer_material[0];
    int wasgo_size_material = 0;
    encode_variant(wasgo_var_material, wasgo_buffer_material, wasgo_size_material);
    
	_wasgo_VisualServer_wrapper_instance_geometry_set_material_override(wasgo_id, wasgo_buffer_instance, wasgo_size_instance, wasgo_buffer_material, wasgo_size_material);
}
void VisualServer::instance_set_base(RID p_instance, RID p_base){

    Variant wasgo_var_instance = p_instance;
    uint8_t wasgo_buffer_instance[0];
    int wasgo_size_instance = 0;
    encode_variant(wasgo_var_instance, wasgo_buffer_instance, wasgo_size_instance);
    

    Variant wasgo_var_base = p_base;
    uint8_t wasgo_buffer_base[0];
    int wasgo_size_base = 0;
    encode_variant(wasgo_var_base, wasgo_buffer_base, wasgo_size_base);
    
	_wasgo_VisualServer_wrapper_instance_set_base(wasgo_id, wasgo_buffer_instance, wasgo_size_instance, wasgo_buffer_base, wasgo_size_base);
}
void VisualServer::instance_set_blend_shape_weight(RID p_instance, int p_shape, float p_weight){

    Variant wasgo_var_instance = p_instance;
    uint8_t wasgo_buffer_instance[0];
    int wasgo_size_instance = 0;
    encode_variant(wasgo_var_instance, wasgo_buffer_instance, wasgo_size_instance);
    
	_wasgo_VisualServer_wrapper_instance_set_blend_shape_weight(wasgo_id, wasgo_buffer_instance, wasgo_size_instance, p_shape, p_weight);
}
void VisualServer::instance_set_custom_aabb(RID p_instance, ::AABB p_aabb){

    Variant wasgo_var_instance = p_instance;
    uint8_t wasgo_buffer_instance[0];
    int wasgo_size_instance = 0;
    encode_variant(wasgo_var_instance, wasgo_buffer_instance, wasgo_size_instance);
    

    Variant wasgo_var_aabb = p_aabb;
    uint8_t wasgo_buffer_aabb[28];
    int wasgo_size_aabb = 28;
    encode_variant(wasgo_var_aabb, wasgo_buffer_aabb, wasgo_size_aabb);
    
	_wasgo_VisualServer_wrapper_instance_set_custom_aabb(wasgo_id, wasgo_buffer_instance, wasgo_size_instance, wasgo_buffer_aabb, wasgo_size_aabb);
}
void VisualServer::instance_set_exterior(RID p_instance, bool p_enabled){

    Variant wasgo_var_instance = p_instance;
    uint8_t wasgo_buffer_instance[0];
    int wasgo_size_instance = 0;
    encode_variant(wasgo_var_instance, wasgo_buffer_instance, wasgo_size_instance);
    
	_wasgo_VisualServer_wrapper_instance_set_exterior(wasgo_id, wasgo_buffer_instance, wasgo_size_instance, p_enabled);
}
void VisualServer::instance_set_extra_visibility_margin(RID p_instance, float p_margin){

    Variant wasgo_var_instance = p_instance;
    uint8_t wasgo_buffer_instance[0];
    int wasgo_size_instance = 0;
    encode_variant(wasgo_var_instance, wasgo_buffer_instance, wasgo_size_instance);
    
	_wasgo_VisualServer_wrapper_instance_set_extra_visibility_margin(wasgo_id, wasgo_buffer_instance, wasgo_size_instance, p_margin);
}
void VisualServer::instance_set_layer_mask(RID p_instance, int p_mask){

    Variant wasgo_var_instance = p_instance;
    uint8_t wasgo_buffer_instance[0];
    int wasgo_size_instance = 0;
    encode_variant(wasgo_var_instance, wasgo_buffer_instance, wasgo_size_instance);
    
	_wasgo_VisualServer_wrapper_instance_set_layer_mask(wasgo_id, wasgo_buffer_instance, wasgo_size_instance, p_mask);
}
void VisualServer::instance_set_scenario(RID p_instance, RID p_scenario){

    Variant wasgo_var_instance = p_instance;
    uint8_t wasgo_buffer_instance[0];
    int wasgo_size_instance = 0;
    encode_variant(wasgo_var_instance, wasgo_buffer_instance, wasgo_size_instance);
    

    Variant wasgo_var_scenario = p_scenario;
    uint8_t wasgo_buffer_scenario[0];
    int wasgo_size_scenario = 0;
    encode_variant(wasgo_var_scenario, wasgo_buffer_scenario, wasgo_size_scenario);
    
	_wasgo_VisualServer_wrapper_instance_set_scenario(wasgo_id, wasgo_buffer_instance, wasgo_size_instance, wasgo_buffer_scenario, wasgo_size_scenario);
}
void VisualServer::instance_set_surface_material(RID p_instance, int p_surface, RID p_material){

    Variant wasgo_var_instance = p_instance;
    uint8_t wasgo_buffer_instance[0];
    int wasgo_size_instance = 0;
    encode_variant(wasgo_var_instance, wasgo_buffer_instance, wasgo_size_instance);
    

    Variant wasgo_var_material = p_material;
    uint8_t wasgo_buffer_material[0];
    int wasgo_size_material = 0;
    encode_variant(wasgo_var_material, wasgo_buffer_material, wasgo_size_material);
    
	_wasgo_VisualServer_wrapper_instance_set_surface_material(wasgo_id, wasgo_buffer_instance, wasgo_size_instance, p_surface, wasgo_buffer_material, wasgo_size_material);
}
void VisualServer::instance_set_transform(RID p_instance, Transform p_transform){

    Variant wasgo_var_instance = p_instance;
    uint8_t wasgo_buffer_instance[0];
    int wasgo_size_instance = 0;
    encode_variant(wasgo_var_instance, wasgo_buffer_instance, wasgo_size_instance);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[52];
    int wasgo_size_transform = 52;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_VisualServer_wrapper_instance_set_transform(wasgo_id, wasgo_buffer_instance, wasgo_size_instance, wasgo_buffer_transform, wasgo_size_transform);
}
void VisualServer::instance_set_use_lightmap(RID p_instance, RID p_lightmap_instance, RID p_lightmap){

    Variant wasgo_var_instance = p_instance;
    uint8_t wasgo_buffer_instance[0];
    int wasgo_size_instance = 0;
    encode_variant(wasgo_var_instance, wasgo_buffer_instance, wasgo_size_instance);
    

    Variant wasgo_var_lightmap_instance = p_lightmap_instance;
    uint8_t wasgo_buffer_lightmap_instance[0];
    int wasgo_size_lightmap_instance = 0;
    encode_variant(wasgo_var_lightmap_instance, wasgo_buffer_lightmap_instance, wasgo_size_lightmap_instance);
    

    Variant wasgo_var_lightmap = p_lightmap;
    uint8_t wasgo_buffer_lightmap[0];
    int wasgo_size_lightmap = 0;
    encode_variant(wasgo_var_lightmap, wasgo_buffer_lightmap, wasgo_size_lightmap);
    
	_wasgo_VisualServer_wrapper_instance_set_use_lightmap(wasgo_id, wasgo_buffer_instance, wasgo_size_instance, wasgo_buffer_lightmap_instance, wasgo_size_lightmap_instance, wasgo_buffer_lightmap, wasgo_size_lightmap);
}
void VisualServer::instance_set_visible(RID p_instance, bool p_visible){

    Variant wasgo_var_instance = p_instance;
    uint8_t wasgo_buffer_instance[0];
    int wasgo_size_instance = 0;
    encode_variant(wasgo_var_instance, wasgo_buffer_instance, wasgo_size_instance);
    
	_wasgo_VisualServer_wrapper_instance_set_visible(wasgo_id, wasgo_buffer_instance, wasgo_size_instance, p_visible);
}
Array VisualServer::instances_cull_aabb(::AABB p_aabb, RID p_scenario){

    Variant wasgo_var_aabb = p_aabb;
    uint8_t wasgo_buffer_aabb[28];
    int wasgo_size_aabb = 28;
    encode_variant(wasgo_var_aabb, wasgo_buffer_aabb, wasgo_size_aabb);
    

    Variant wasgo_var_scenario = p_scenario;
    uint8_t wasgo_buffer_scenario[0];
    int wasgo_size_scenario = 0;
    encode_variant(wasgo_var_scenario, wasgo_buffer_scenario, wasgo_size_scenario);
    
	return Array(_wasgo_VisualServer_wrapper_instances_cull_aabb(wasgo_id, wasgo_buffer_aabb, wasgo_size_aabb, wasgo_buffer_scenario, wasgo_size_scenario));
}
Array VisualServer::instances_cull_convex(Array p_convex, RID p_scenario){

    Variant wasgo_var_scenario = p_scenario;
    uint8_t wasgo_buffer_scenario[0];
    int wasgo_size_scenario = 0;
    encode_variant(wasgo_var_scenario, wasgo_buffer_scenario, wasgo_size_scenario);
    
	return Array(_wasgo_VisualServer_wrapper_instances_cull_convex(wasgo_id, p_convex._get_wasgo_id(), wasgo_buffer_scenario, wasgo_size_scenario));
}
Array VisualServer::instances_cull_ray(Vector3 p_from, Vector3 p_to, RID p_scenario){

    Variant wasgo_var_from = p_from;
    uint8_t wasgo_buffer_from[16];
    int wasgo_size_from = 16;
    encode_variant(wasgo_var_from, wasgo_buffer_from, wasgo_size_from);
    

    Variant wasgo_var_to = p_to;
    uint8_t wasgo_buffer_to[16];
    int wasgo_size_to = 16;
    encode_variant(wasgo_var_to, wasgo_buffer_to, wasgo_size_to);
    

    Variant wasgo_var_scenario = p_scenario;
    uint8_t wasgo_buffer_scenario[0];
    int wasgo_size_scenario = 0;
    encode_variant(wasgo_var_scenario, wasgo_buffer_scenario, wasgo_size_scenario);
    
	return Array(_wasgo_VisualServer_wrapper_instances_cull_ray(wasgo_id, wasgo_buffer_from, wasgo_size_from, wasgo_buffer_to, wasgo_size_to, wasgo_buffer_scenario, wasgo_size_scenario));
}
bool VisualServer::is_render_loop_enabled(){
	return (bool) _wasgo_VisualServer_wrapper_is_render_loop_enabled(wasgo_id);
}
void VisualServer::light_directional_set_blend_splits(RID p_light, bool p_enable){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_light_directional_set_blend_splits(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_enable);
}
void VisualServer::light_directional_set_shadow_depth_range_mode(RID p_light, VisualServer::LightDirectionalShadowDepthRangeMode p_range_mode){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_light_directional_set_shadow_depth_range_mode(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_range_mode._get_wasgo_id());
}
void VisualServer::light_directional_set_shadow_mode(RID p_light, VisualServer::LightDirectionalShadowMode p_mode){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_light_directional_set_shadow_mode(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_mode._get_wasgo_id());
}
void VisualServer::light_omni_set_shadow_detail(RID p_light, VisualServer::LightOmniShadowDetail p_detail){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_light_omni_set_shadow_detail(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_detail._get_wasgo_id());
}
void VisualServer::light_omni_set_shadow_mode(RID p_light, VisualServer::LightOmniShadowMode p_mode){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_light_omni_set_shadow_mode(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_mode._get_wasgo_id());
}
void VisualServer::light_set_bake_mode(RID p_light, VisualServer::LightBakeMode p_bake_mode){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_light_set_bake_mode(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_bake_mode._get_wasgo_id());
}
void VisualServer::light_set_color(RID p_light, Color p_color){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_VisualServer_wrapper_light_set_color(wasgo_id, wasgo_buffer_light, wasgo_size_light, wasgo_buffer_color, wasgo_size_color);
}
void VisualServer::light_set_cull_mask(RID p_light, int p_mask){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_light_set_cull_mask(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_mask);
}
void VisualServer::light_set_negative(RID p_light, bool p_enable){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_light_set_negative(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_enable);
}
void VisualServer::light_set_param(RID p_light, VisualServer::LightParam p_param, float p_value){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_light_set_param(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_param._get_wasgo_id(), p_value);
}
void VisualServer::light_set_projector(RID p_light, RID p_texture){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    
	_wasgo_VisualServer_wrapper_light_set_projector(wasgo_id, wasgo_buffer_light, wasgo_size_light, wasgo_buffer_texture, wasgo_size_texture);
}
void VisualServer::light_set_reverse_cull_face_mode(RID p_light, bool p_enabled){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_light_set_reverse_cull_face_mode(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_enabled);
}
void VisualServer::light_set_shadow(RID p_light, bool p_enabled){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_light_set_shadow(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_enabled);
}
void VisualServer::light_set_shadow_color(RID p_light, Color p_color){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_VisualServer_wrapper_light_set_shadow_color(wasgo_id, wasgo_buffer_light, wasgo_size_light, wasgo_buffer_color, wasgo_size_color);
}
void VisualServer::light_set_use_gi(RID p_light, bool p_enabled){

    Variant wasgo_var_light = p_light;
    uint8_t wasgo_buffer_light[0];
    int wasgo_size_light = 0;
    encode_variant(wasgo_var_light, wasgo_buffer_light, wasgo_size_light);
    
	_wasgo_VisualServer_wrapper_light_set_use_gi(wasgo_id, wasgo_buffer_light, wasgo_size_light, p_enabled);
}
RID VisualServer::lightmap_capture_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_lightmap_capture_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
::AABB VisualServer::lightmap_capture_get_bounds(RID p_capture){

    Variant wasgo_var_capture = p_capture;
    uint8_t wasgo_buffer_capture[0];
    int wasgo_size_capture = 0;
    encode_variant(wasgo_var_capture, wasgo_buffer_capture, wasgo_size_capture);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_VisualServer_wrapper_lightmap_capture_get_bounds(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_capture, wasgo_size_capture);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (AABB) wasgo_ret;
    
}
float VisualServer::lightmap_capture_get_energy(RID p_capture){

    Variant wasgo_var_capture = p_capture;
    uint8_t wasgo_buffer_capture[0];
    int wasgo_size_capture = 0;
    encode_variant(wasgo_var_capture, wasgo_buffer_capture, wasgo_size_capture);
    
	return (float) _wasgo_VisualServer_wrapper_lightmap_capture_get_energy(wasgo_id, wasgo_buffer_capture, wasgo_size_capture);
}
PoolByteArray VisualServer::lightmap_capture_get_octree(RID p_capture){

    Variant wasgo_var_capture = p_capture;
    uint8_t wasgo_buffer_capture[0];
    int wasgo_size_capture = 0;
    encode_variant(wasgo_var_capture, wasgo_buffer_capture, wasgo_size_capture);
    
	return PoolByteArray(_wasgo_VisualServer_wrapper_lightmap_capture_get_octree(wasgo_id, wasgo_buffer_capture, wasgo_size_capture));
}
int VisualServer::lightmap_capture_get_octree_cell_subdiv(RID p_capture){

    Variant wasgo_var_capture = p_capture;
    uint8_t wasgo_buffer_capture[0];
    int wasgo_size_capture = 0;
    encode_variant(wasgo_var_capture, wasgo_buffer_capture, wasgo_size_capture);
    
	return (int) _wasgo_VisualServer_wrapper_lightmap_capture_get_octree_cell_subdiv(wasgo_id, wasgo_buffer_capture, wasgo_size_capture);
}
Transform VisualServer::lightmap_capture_get_octree_cell_transform(RID p_capture){

    Variant wasgo_var_capture = p_capture;
    uint8_t wasgo_buffer_capture[0];
    int wasgo_size_capture = 0;
    encode_variant(wasgo_var_capture, wasgo_buffer_capture, wasgo_size_capture);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_VisualServer_wrapper_lightmap_capture_get_octree_cell_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_capture, wasgo_size_capture);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
void VisualServer::lightmap_capture_set_bounds(RID p_capture, ::AABB p_bounds){

    Variant wasgo_var_capture = p_capture;
    uint8_t wasgo_buffer_capture[0];
    int wasgo_size_capture = 0;
    encode_variant(wasgo_var_capture, wasgo_buffer_capture, wasgo_size_capture);
    

    Variant wasgo_var_bounds = p_bounds;
    uint8_t wasgo_buffer_bounds[28];
    int wasgo_size_bounds = 28;
    encode_variant(wasgo_var_bounds, wasgo_buffer_bounds, wasgo_size_bounds);
    
	_wasgo_VisualServer_wrapper_lightmap_capture_set_bounds(wasgo_id, wasgo_buffer_capture, wasgo_size_capture, wasgo_buffer_bounds, wasgo_size_bounds);
}
void VisualServer::lightmap_capture_set_energy(RID p_capture, float p_energy){

    Variant wasgo_var_capture = p_capture;
    uint8_t wasgo_buffer_capture[0];
    int wasgo_size_capture = 0;
    encode_variant(wasgo_var_capture, wasgo_buffer_capture, wasgo_size_capture);
    
	_wasgo_VisualServer_wrapper_lightmap_capture_set_energy(wasgo_id, wasgo_buffer_capture, wasgo_size_capture, p_energy);
}
void VisualServer::lightmap_capture_set_octree(RID p_capture, PoolByteArray p_octree){

    Variant wasgo_var_capture = p_capture;
    uint8_t wasgo_buffer_capture[0];
    int wasgo_size_capture = 0;
    encode_variant(wasgo_var_capture, wasgo_buffer_capture, wasgo_size_capture);
    
	_wasgo_VisualServer_wrapper_lightmap_capture_set_octree(wasgo_id, wasgo_buffer_capture, wasgo_size_capture, p_octree._get_wasgo_id());
}
void VisualServer::lightmap_capture_set_octree_cell_subdiv(RID p_capture, int p_subdiv){

    Variant wasgo_var_capture = p_capture;
    uint8_t wasgo_buffer_capture[0];
    int wasgo_size_capture = 0;
    encode_variant(wasgo_var_capture, wasgo_buffer_capture, wasgo_size_capture);
    
	_wasgo_VisualServer_wrapper_lightmap_capture_set_octree_cell_subdiv(wasgo_id, wasgo_buffer_capture, wasgo_size_capture, p_subdiv);
}
void VisualServer::lightmap_capture_set_octree_cell_transform(RID p_capture, Transform p_xform){

    Variant wasgo_var_capture = p_capture;
    uint8_t wasgo_buffer_capture[0];
    int wasgo_size_capture = 0;
    encode_variant(wasgo_var_capture, wasgo_buffer_capture, wasgo_size_capture);
    

    Variant wasgo_var_xform = p_xform;
    uint8_t wasgo_buffer_xform[52];
    int wasgo_size_xform = 52;
    encode_variant(wasgo_var_xform, wasgo_buffer_xform, wasgo_size_xform);
    
	_wasgo_VisualServer_wrapper_lightmap_capture_set_octree_cell_transform(wasgo_id, wasgo_buffer_capture, wasgo_size_capture, wasgo_buffer_xform, wasgo_size_xform);
}
RID VisualServer::make_sphere_mesh(int p_latitudes, int p_longitudes, float p_radius){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_make_sphere_mesh(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_latitudes, p_longitudes, p_radius);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID VisualServer::material_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_material_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
Variant VisualServer::material_get_param(RID p_material, String p_parameter){

    Variant wasgo_var_material = p_material;
    uint8_t wasgo_buffer_material[0];
    int wasgo_size_material = 0;
    encode_variant(wasgo_var_material, wasgo_buffer_material, wasgo_size_material);
    

    Variant wasgo_var_parameter = p_parameter;
    int wasgo_size_parameter = String(p_parameter).size();
    uint8_t wasgo_buffer_parameter[wasgo_size_parameter];
    encode_variant(wasgo_var_parameter, wasgo_buffer_parameter, wasgo_size_parameter);
    
	return Variant(_wasgo_VisualServer_wrapper_material_get_param(wasgo_id, wasgo_buffer_material, wasgo_size_material, wasgo_buffer_parameter, wasgo_size_parameter));
}
Variant VisualServer::material_get_param_default(RID p_material, String p_parameter){

    Variant wasgo_var_material = p_material;
    uint8_t wasgo_buffer_material[0];
    int wasgo_size_material = 0;
    encode_variant(wasgo_var_material, wasgo_buffer_material, wasgo_size_material);
    

    Variant wasgo_var_parameter = p_parameter;
    int wasgo_size_parameter = String(p_parameter).size();
    uint8_t wasgo_buffer_parameter[wasgo_size_parameter];
    encode_variant(wasgo_var_parameter, wasgo_buffer_parameter, wasgo_size_parameter);
    
	return Variant(_wasgo_VisualServer_wrapper_material_get_param_default(wasgo_id, wasgo_buffer_material, wasgo_size_material, wasgo_buffer_parameter, wasgo_size_parameter));
}
RID VisualServer::material_get_shader(RID p_shader_material){

    Variant wasgo_var_shader_material = p_shader_material;
    uint8_t wasgo_buffer_shader_material[0];
    int wasgo_size_shader_material = 0;
    encode_variant(wasgo_var_shader_material, wasgo_buffer_shader_material, wasgo_size_shader_material);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_material_get_shader(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_shader_material, wasgo_size_shader_material);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void VisualServer::material_set_line_width(RID p_material, float p_width){

    Variant wasgo_var_material = p_material;
    uint8_t wasgo_buffer_material[0];
    int wasgo_size_material = 0;
    encode_variant(wasgo_var_material, wasgo_buffer_material, wasgo_size_material);
    
	_wasgo_VisualServer_wrapper_material_set_line_width(wasgo_id, wasgo_buffer_material, wasgo_size_material, p_width);
}
void VisualServer::material_set_next_pass(RID p_material, RID p_next_material){

    Variant wasgo_var_material = p_material;
    uint8_t wasgo_buffer_material[0];
    int wasgo_size_material = 0;
    encode_variant(wasgo_var_material, wasgo_buffer_material, wasgo_size_material);
    

    Variant wasgo_var_next_material = p_next_material;
    uint8_t wasgo_buffer_next_material[0];
    int wasgo_size_next_material = 0;
    encode_variant(wasgo_var_next_material, wasgo_buffer_next_material, wasgo_size_next_material);
    
	_wasgo_VisualServer_wrapper_material_set_next_pass(wasgo_id, wasgo_buffer_material, wasgo_size_material, wasgo_buffer_next_material, wasgo_size_next_material);
}
void VisualServer::material_set_param(RID p_material, String p_parameter, Variant p_value){

    Variant wasgo_var_material = p_material;
    uint8_t wasgo_buffer_material[0];
    int wasgo_size_material = 0;
    encode_variant(wasgo_var_material, wasgo_buffer_material, wasgo_size_material);
    

    Variant wasgo_var_parameter = p_parameter;
    int wasgo_size_parameter = String(p_parameter).size();
    uint8_t wasgo_buffer_parameter[wasgo_size_parameter];
    encode_variant(wasgo_var_parameter, wasgo_buffer_parameter, wasgo_size_parameter);
    
	_wasgo_VisualServer_wrapper_material_set_param(wasgo_id, wasgo_buffer_material, wasgo_size_material, wasgo_buffer_parameter, wasgo_size_parameter, p_value._get_wasgo_id());
}
void VisualServer::material_set_render_priority(RID p_material, int p_priority){

    Variant wasgo_var_material = p_material;
    uint8_t wasgo_buffer_material[0];
    int wasgo_size_material = 0;
    encode_variant(wasgo_var_material, wasgo_buffer_material, wasgo_size_material);
    
	_wasgo_VisualServer_wrapper_material_set_render_priority(wasgo_id, wasgo_buffer_material, wasgo_size_material, p_priority);
}
void VisualServer::material_set_shader(RID p_shader_material, RID p_shader){

    Variant wasgo_var_shader_material = p_shader_material;
    uint8_t wasgo_buffer_shader_material[0];
    int wasgo_size_shader_material = 0;
    encode_variant(wasgo_var_shader_material, wasgo_buffer_shader_material, wasgo_size_shader_material);
    

    Variant wasgo_var_shader = p_shader;
    uint8_t wasgo_buffer_shader[0];
    int wasgo_size_shader = 0;
    encode_variant(wasgo_var_shader, wasgo_buffer_shader, wasgo_size_shader);
    
	_wasgo_VisualServer_wrapper_material_set_shader(wasgo_id, wasgo_buffer_shader_material, wasgo_size_shader_material, wasgo_buffer_shader, wasgo_size_shader);
}
void VisualServer::mesh_add_surface_from_arrays(RID p_mesh, VisualServer::PrimitiveType p_primitive, Array p_arrays, Array p_blend_shapes, int p_compress_format){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	_wasgo_VisualServer_wrapper_mesh_add_surface_from_arrays(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh, p_primitive._get_wasgo_id(), p_arrays._get_wasgo_id(), p_blend_shapes._get_wasgo_id(), p_compress_format);
}
void VisualServer::mesh_clear(RID p_mesh){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	_wasgo_VisualServer_wrapper_mesh_clear(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh);
}
RID VisualServer::mesh_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_mesh_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
int VisualServer::mesh_get_blend_shape_count(RID p_mesh){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	return (int) _wasgo_VisualServer_wrapper_mesh_get_blend_shape_count(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh);
}
VisualServer::BlendShapeMode VisualServer::mesh_get_blend_shape_mode(RID p_mesh){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	return VisualServer::BlendShapeMode(_wasgo_VisualServer_wrapper_mesh_get_blend_shape_mode(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh));
}
::AABB VisualServer::mesh_get_custom_aabb(RID p_mesh){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_VisualServer_wrapper_mesh_get_custom_aabb(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_mesh, wasgo_size_mesh);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (AABB) wasgo_ret;
    
}
int VisualServer::mesh_get_surface_count(RID p_mesh){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	return (int) _wasgo_VisualServer_wrapper_mesh_get_surface_count(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh);
}
void VisualServer::mesh_remove_surface(RID p_mesh, int p_index){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	_wasgo_VisualServer_wrapper_mesh_remove_surface(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh, p_index);
}
void VisualServer::mesh_set_blend_shape_count(RID p_mesh, int p_amount){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	_wasgo_VisualServer_wrapper_mesh_set_blend_shape_count(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh, p_amount);
}
void VisualServer::mesh_set_blend_shape_mode(RID p_mesh, VisualServer::BlendShapeMode p_mode){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	_wasgo_VisualServer_wrapper_mesh_set_blend_shape_mode(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh, p_mode._get_wasgo_id());
}
void VisualServer::mesh_set_custom_aabb(RID p_mesh, ::AABB p_aabb){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    

    Variant wasgo_var_aabb = p_aabb;
    uint8_t wasgo_buffer_aabb[28];
    int wasgo_size_aabb = 28;
    encode_variant(wasgo_var_aabb, wasgo_buffer_aabb, wasgo_size_aabb);
    
	_wasgo_VisualServer_wrapper_mesh_set_custom_aabb(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh, wasgo_buffer_aabb, wasgo_size_aabb);
}
::AABB VisualServer::mesh_surface_get_aabb(RID p_mesh, int p_surface){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_VisualServer_wrapper_mesh_surface_get_aabb(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_mesh, wasgo_size_mesh, p_surface);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (AABB) wasgo_ret;
    
}
PoolByteArray VisualServer::mesh_surface_get_array(RID p_mesh, int p_surface){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	return PoolByteArray(_wasgo_VisualServer_wrapper_mesh_surface_get_array(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh, p_surface));
}
int VisualServer::mesh_surface_get_array_index_len(RID p_mesh, int p_surface){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	return (int) _wasgo_VisualServer_wrapper_mesh_surface_get_array_index_len(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh, p_surface);
}
int VisualServer::mesh_surface_get_array_len(RID p_mesh, int p_surface){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	return (int) _wasgo_VisualServer_wrapper_mesh_surface_get_array_len(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh, p_surface);
}
Array VisualServer::mesh_surface_get_arrays(RID p_mesh, int p_surface){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	return Array(_wasgo_VisualServer_wrapper_mesh_surface_get_arrays(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh, p_surface));
}
Array VisualServer::mesh_surface_get_blend_shape_arrays(RID p_mesh, int p_surface){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	return Array(_wasgo_VisualServer_wrapper_mesh_surface_get_blend_shape_arrays(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh, p_surface));
}
int VisualServer::mesh_surface_get_format(RID p_mesh, int p_surface){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	return (int) _wasgo_VisualServer_wrapper_mesh_surface_get_format(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh, p_surface);
}
int VisualServer::mesh_surface_get_format_offset(int p_format, int p_vertex_len, int p_index_len, int p_array_index){
	return (int) _wasgo_VisualServer_wrapper_mesh_surface_get_format_offset(wasgo_id, p_format, p_vertex_len, p_index_len, p_array_index);
}
int VisualServer::mesh_surface_get_format_stride(int p_format, int p_vertex_len, int p_index_len){
	return (int) _wasgo_VisualServer_wrapper_mesh_surface_get_format_stride(wasgo_id, p_format, p_vertex_len, p_index_len);
}
PoolByteArray VisualServer::mesh_surface_get_index_array(RID p_mesh, int p_surface){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	return PoolByteArray(_wasgo_VisualServer_wrapper_mesh_surface_get_index_array(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh, p_surface));
}
RID VisualServer::mesh_surface_get_material(RID p_mesh, int p_surface){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_mesh_surface_get_material(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_mesh, wasgo_size_mesh, p_surface);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
VisualServer::PrimitiveType VisualServer::mesh_surface_get_primitive_type(RID p_mesh, int p_surface){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	return VisualServer::PrimitiveType(_wasgo_VisualServer_wrapper_mesh_surface_get_primitive_type(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh, p_surface));
}
Array VisualServer::mesh_surface_get_skeleton_aabb(RID p_mesh, int p_surface){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	return Array(_wasgo_VisualServer_wrapper_mesh_surface_get_skeleton_aabb(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh, p_surface));
}
void VisualServer::mesh_surface_set_material(RID p_mesh, int p_surface, RID p_material){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    

    Variant wasgo_var_material = p_material;
    uint8_t wasgo_buffer_material[0];
    int wasgo_size_material = 0;
    encode_variant(wasgo_var_material, wasgo_buffer_material, wasgo_size_material);
    
	_wasgo_VisualServer_wrapper_mesh_surface_set_material(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh, p_surface, wasgo_buffer_material, wasgo_size_material);
}
void VisualServer::mesh_surface_update_region(RID p_mesh, int p_surface, int p_offset, PoolByteArray p_data){

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	_wasgo_VisualServer_wrapper_mesh_surface_update_region(wasgo_id, wasgo_buffer_mesh, wasgo_size_mesh, p_surface, p_offset, p_data._get_wasgo_id());
}
void VisualServer::multimesh_allocate(RID p_multimesh, int p_instances, VisualServer::MultimeshTransformFormat p_transform_format, VisualServer::MultimeshColorFormat p_color_format, VisualServer::MultimeshCustomDataFormat p_custom_data_format){

    Variant wasgo_var_multimesh = p_multimesh;
    uint8_t wasgo_buffer_multimesh[0];
    int wasgo_size_multimesh = 0;
    encode_variant(wasgo_var_multimesh, wasgo_buffer_multimesh, wasgo_size_multimesh);
    
	_wasgo_VisualServer_wrapper_multimesh_allocate(wasgo_id, wasgo_buffer_multimesh, wasgo_size_multimesh, p_instances, p_transform_format._get_wasgo_id(), p_color_format._get_wasgo_id(), p_custom_data_format._get_wasgo_id());
}
RID VisualServer::multimesh_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_multimesh_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
::AABB VisualServer::multimesh_get_aabb(RID p_multimesh){

    Variant wasgo_var_multimesh = p_multimesh;
    uint8_t wasgo_buffer_multimesh[0];
    int wasgo_size_multimesh = 0;
    encode_variant(wasgo_var_multimesh, wasgo_buffer_multimesh, wasgo_size_multimesh);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_VisualServer_wrapper_multimesh_get_aabb(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_multimesh, wasgo_size_multimesh);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (AABB) wasgo_ret;
    
}
int VisualServer::multimesh_get_instance_count(RID p_multimesh){

    Variant wasgo_var_multimesh = p_multimesh;
    uint8_t wasgo_buffer_multimesh[0];
    int wasgo_size_multimesh = 0;
    encode_variant(wasgo_var_multimesh, wasgo_buffer_multimesh, wasgo_size_multimesh);
    
	return (int) _wasgo_VisualServer_wrapper_multimesh_get_instance_count(wasgo_id, wasgo_buffer_multimesh, wasgo_size_multimesh);
}
RID VisualServer::multimesh_get_mesh(RID p_multimesh){

    Variant wasgo_var_multimesh = p_multimesh;
    uint8_t wasgo_buffer_multimesh[0];
    int wasgo_size_multimesh = 0;
    encode_variant(wasgo_var_multimesh, wasgo_buffer_multimesh, wasgo_size_multimesh);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_multimesh_get_mesh(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_multimesh, wasgo_size_multimesh);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
int VisualServer::multimesh_get_visible_instances(RID p_multimesh){

    Variant wasgo_var_multimesh = p_multimesh;
    uint8_t wasgo_buffer_multimesh[0];
    int wasgo_size_multimesh = 0;
    encode_variant(wasgo_var_multimesh, wasgo_buffer_multimesh, wasgo_size_multimesh);
    
	return (int) _wasgo_VisualServer_wrapper_multimesh_get_visible_instances(wasgo_id, wasgo_buffer_multimesh, wasgo_size_multimesh);
}
Color VisualServer::multimesh_instance_get_color(RID p_multimesh, int p_index){

    Variant wasgo_var_multimesh = p_multimesh;
    uint8_t wasgo_buffer_multimesh[0];
    int wasgo_size_multimesh = 0;
    encode_variant(wasgo_var_multimesh, wasgo_buffer_multimesh, wasgo_size_multimesh);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_VisualServer_wrapper_multimesh_instance_get_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_multimesh, wasgo_size_multimesh, p_index);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Color VisualServer::multimesh_instance_get_custom_data(RID p_multimesh, int p_index){

    Variant wasgo_var_multimesh = p_multimesh;
    uint8_t wasgo_buffer_multimesh[0];
    int wasgo_size_multimesh = 0;
    encode_variant(wasgo_var_multimesh, wasgo_buffer_multimesh, wasgo_size_multimesh);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_VisualServer_wrapper_multimesh_instance_get_custom_data(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_multimesh, wasgo_size_multimesh, p_index);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Transform VisualServer::multimesh_instance_get_transform(RID p_multimesh, int p_index){

    Variant wasgo_var_multimesh = p_multimesh;
    uint8_t wasgo_buffer_multimesh[0];
    int wasgo_size_multimesh = 0;
    encode_variant(wasgo_var_multimesh, wasgo_buffer_multimesh, wasgo_size_multimesh);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_VisualServer_wrapper_multimesh_instance_get_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_multimesh, wasgo_size_multimesh, p_index);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
Transform2D VisualServer::multimesh_instance_get_transform_2d(RID p_multimesh, int p_index){

    Variant wasgo_var_multimesh = p_multimesh;
    uint8_t wasgo_buffer_multimesh[0];
    int wasgo_size_multimesh = 0;
    encode_variant(wasgo_var_multimesh, wasgo_buffer_multimesh, wasgo_size_multimesh);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_VisualServer_wrapper_multimesh_instance_get_transform_2d(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_multimesh, wasgo_size_multimesh, p_index);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
void VisualServer::multimesh_instance_set_color(RID p_multimesh, int p_index, Color p_color){

    Variant wasgo_var_multimesh = p_multimesh;
    uint8_t wasgo_buffer_multimesh[0];
    int wasgo_size_multimesh = 0;
    encode_variant(wasgo_var_multimesh, wasgo_buffer_multimesh, wasgo_size_multimesh);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_VisualServer_wrapper_multimesh_instance_set_color(wasgo_id, wasgo_buffer_multimesh, wasgo_size_multimesh, p_index, wasgo_buffer_color, wasgo_size_color);
}
void VisualServer::multimesh_instance_set_custom_data(RID p_multimesh, int p_index, Color p_custom_data){

    Variant wasgo_var_multimesh = p_multimesh;
    uint8_t wasgo_buffer_multimesh[0];
    int wasgo_size_multimesh = 0;
    encode_variant(wasgo_var_multimesh, wasgo_buffer_multimesh, wasgo_size_multimesh);
    

    Variant wasgo_var_custom_data = p_custom_data;
    uint8_t wasgo_buffer_custom_data[20];
    int wasgo_size_custom_data = 20;
    encode_variant(wasgo_var_custom_data, wasgo_buffer_custom_data, wasgo_size_custom_data);
    
	_wasgo_VisualServer_wrapper_multimesh_instance_set_custom_data(wasgo_id, wasgo_buffer_multimesh, wasgo_size_multimesh, p_index, wasgo_buffer_custom_data, wasgo_size_custom_data);
}
void VisualServer::multimesh_instance_set_transform(RID p_multimesh, int p_index, Transform p_transform){

    Variant wasgo_var_multimesh = p_multimesh;
    uint8_t wasgo_buffer_multimesh[0];
    int wasgo_size_multimesh = 0;
    encode_variant(wasgo_var_multimesh, wasgo_buffer_multimesh, wasgo_size_multimesh);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[52];
    int wasgo_size_transform = 52;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_VisualServer_wrapper_multimesh_instance_set_transform(wasgo_id, wasgo_buffer_multimesh, wasgo_size_multimesh, p_index, wasgo_buffer_transform, wasgo_size_transform);
}
void VisualServer::multimesh_instance_set_transform_2d(RID p_multimesh, int p_index, Transform2D p_transform){

    Variant wasgo_var_multimesh = p_multimesh;
    uint8_t wasgo_buffer_multimesh[0];
    int wasgo_size_multimesh = 0;
    encode_variant(wasgo_var_multimesh, wasgo_buffer_multimesh, wasgo_size_multimesh);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_VisualServer_wrapper_multimesh_instance_set_transform_2d(wasgo_id, wasgo_buffer_multimesh, wasgo_size_multimesh, p_index, wasgo_buffer_transform, wasgo_size_transform);
}
void VisualServer::multimesh_set_as_bulk_array(RID p_multimesh, PoolRealArray p_array){

    Variant wasgo_var_multimesh = p_multimesh;
    uint8_t wasgo_buffer_multimesh[0];
    int wasgo_size_multimesh = 0;
    encode_variant(wasgo_var_multimesh, wasgo_buffer_multimesh, wasgo_size_multimesh);
    
	_wasgo_VisualServer_wrapper_multimesh_set_as_bulk_array(wasgo_id, wasgo_buffer_multimesh, wasgo_size_multimesh, p_array._get_wasgo_id());
}
void VisualServer::multimesh_set_mesh(RID p_multimesh, RID p_mesh){

    Variant wasgo_var_multimesh = p_multimesh;
    uint8_t wasgo_buffer_multimesh[0];
    int wasgo_size_multimesh = 0;
    encode_variant(wasgo_var_multimesh, wasgo_buffer_multimesh, wasgo_size_multimesh);
    

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	_wasgo_VisualServer_wrapper_multimesh_set_mesh(wasgo_id, wasgo_buffer_multimesh, wasgo_size_multimesh, wasgo_buffer_mesh, wasgo_size_mesh);
}
void VisualServer::multimesh_set_visible_instances(RID p_multimesh, int p_visible){

    Variant wasgo_var_multimesh = p_multimesh;
    uint8_t wasgo_buffer_multimesh[0];
    int wasgo_size_multimesh = 0;
    encode_variant(wasgo_var_multimesh, wasgo_buffer_multimesh, wasgo_size_multimesh);
    
	_wasgo_VisualServer_wrapper_multimesh_set_visible_instances(wasgo_id, wasgo_buffer_multimesh, wasgo_size_multimesh, p_visible);
}
RID VisualServer::omni_light_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_omni_light_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID VisualServer::particles_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_particles_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
::AABB VisualServer::particles_get_current_aabb(RID p_particles){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_VisualServer_wrapper_particles_get_current_aabb(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_particles, wasgo_size_particles);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (AABB) wasgo_ret;
    
}
bool VisualServer::particles_get_emitting(RID p_particles){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    
	return (bool) _wasgo_VisualServer_wrapper_particles_get_emitting(wasgo_id, wasgo_buffer_particles, wasgo_size_particles);
}
bool VisualServer::particles_is_inactive(RID p_particles){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    
	return (bool) _wasgo_VisualServer_wrapper_particles_is_inactive(wasgo_id, wasgo_buffer_particles, wasgo_size_particles);
}
void VisualServer::particles_request_process(RID p_particles){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    
	_wasgo_VisualServer_wrapper_particles_request_process(wasgo_id, wasgo_buffer_particles, wasgo_size_particles);
}
void VisualServer::particles_restart(RID p_particles){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    
	_wasgo_VisualServer_wrapper_particles_restart(wasgo_id, wasgo_buffer_particles, wasgo_size_particles);
}
void VisualServer::particles_set_amount(RID p_particles, int p_amount){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    
	_wasgo_VisualServer_wrapper_particles_set_amount(wasgo_id, wasgo_buffer_particles, wasgo_size_particles, p_amount);
}
void VisualServer::particles_set_custom_aabb(RID p_particles, ::AABB p_aabb){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    

    Variant wasgo_var_aabb = p_aabb;
    uint8_t wasgo_buffer_aabb[28];
    int wasgo_size_aabb = 28;
    encode_variant(wasgo_var_aabb, wasgo_buffer_aabb, wasgo_size_aabb);
    
	_wasgo_VisualServer_wrapper_particles_set_custom_aabb(wasgo_id, wasgo_buffer_particles, wasgo_size_particles, wasgo_buffer_aabb, wasgo_size_aabb);
}
void VisualServer::particles_set_draw_order(RID p_particles, VisualServer::ParticlesDrawOrder p_order){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    
	_wasgo_VisualServer_wrapper_particles_set_draw_order(wasgo_id, wasgo_buffer_particles, wasgo_size_particles, p_order._get_wasgo_id());
}
void VisualServer::particles_set_draw_pass_mesh(RID p_particles, int p_pass, RID p_mesh){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    

    Variant wasgo_var_mesh = p_mesh;
    uint8_t wasgo_buffer_mesh[0];
    int wasgo_size_mesh = 0;
    encode_variant(wasgo_var_mesh, wasgo_buffer_mesh, wasgo_size_mesh);
    
	_wasgo_VisualServer_wrapper_particles_set_draw_pass_mesh(wasgo_id, wasgo_buffer_particles, wasgo_size_particles, p_pass, wasgo_buffer_mesh, wasgo_size_mesh);
}
void VisualServer::particles_set_draw_passes(RID p_particles, int p_count){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    
	_wasgo_VisualServer_wrapper_particles_set_draw_passes(wasgo_id, wasgo_buffer_particles, wasgo_size_particles, p_count);
}
void VisualServer::particles_set_emission_transform(RID p_particles, Transform p_transform){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[52];
    int wasgo_size_transform = 52;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_VisualServer_wrapper_particles_set_emission_transform(wasgo_id, wasgo_buffer_particles, wasgo_size_particles, wasgo_buffer_transform, wasgo_size_transform);
}
void VisualServer::particles_set_emitting(RID p_particles, bool p_emitting){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    
	_wasgo_VisualServer_wrapper_particles_set_emitting(wasgo_id, wasgo_buffer_particles, wasgo_size_particles, p_emitting);
}
void VisualServer::particles_set_explosiveness_ratio(RID p_particles, float p_ratio){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    
	_wasgo_VisualServer_wrapper_particles_set_explosiveness_ratio(wasgo_id, wasgo_buffer_particles, wasgo_size_particles, p_ratio);
}
void VisualServer::particles_set_fixed_fps(RID p_particles, int p_fps){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    
	_wasgo_VisualServer_wrapper_particles_set_fixed_fps(wasgo_id, wasgo_buffer_particles, wasgo_size_particles, p_fps);
}
void VisualServer::particles_set_fractional_delta(RID p_particles, bool p_enable){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    
	_wasgo_VisualServer_wrapper_particles_set_fractional_delta(wasgo_id, wasgo_buffer_particles, wasgo_size_particles, p_enable);
}
void VisualServer::particles_set_lifetime(RID p_particles, float p_lifetime){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    
	_wasgo_VisualServer_wrapper_particles_set_lifetime(wasgo_id, wasgo_buffer_particles, wasgo_size_particles, p_lifetime);
}
void VisualServer::particles_set_one_shot(RID p_particles, bool p_one_shot){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    
	_wasgo_VisualServer_wrapper_particles_set_one_shot(wasgo_id, wasgo_buffer_particles, wasgo_size_particles, p_one_shot);
}
void VisualServer::particles_set_pre_process_time(RID p_particles, float p_time){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    
	_wasgo_VisualServer_wrapper_particles_set_pre_process_time(wasgo_id, wasgo_buffer_particles, wasgo_size_particles, p_time);
}
void VisualServer::particles_set_process_material(RID p_particles, RID p_material){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    

    Variant wasgo_var_material = p_material;
    uint8_t wasgo_buffer_material[0];
    int wasgo_size_material = 0;
    encode_variant(wasgo_var_material, wasgo_buffer_material, wasgo_size_material);
    
	_wasgo_VisualServer_wrapper_particles_set_process_material(wasgo_id, wasgo_buffer_particles, wasgo_size_particles, wasgo_buffer_material, wasgo_size_material);
}
void VisualServer::particles_set_randomness_ratio(RID p_particles, float p_ratio){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    
	_wasgo_VisualServer_wrapper_particles_set_randomness_ratio(wasgo_id, wasgo_buffer_particles, wasgo_size_particles, p_ratio);
}
void VisualServer::particles_set_speed_scale(RID p_particles, float p_scale){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    
	_wasgo_VisualServer_wrapper_particles_set_speed_scale(wasgo_id, wasgo_buffer_particles, wasgo_size_particles, p_scale);
}
void VisualServer::particles_set_use_local_coordinates(RID p_particles, bool p_enable){

    Variant wasgo_var_particles = p_particles;
    uint8_t wasgo_buffer_particles[0];
    int wasgo_size_particles = 0;
    encode_variant(wasgo_var_particles, wasgo_buffer_particles, wasgo_size_particles);
    
	_wasgo_VisualServer_wrapper_particles_set_use_local_coordinates(wasgo_id, wasgo_buffer_particles, wasgo_size_particles, p_enable);
}
RID VisualServer::reflection_probe_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_reflection_probe_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void VisualServer::reflection_probe_set_as_interior(RID p_probe, bool p_enable){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	_wasgo_VisualServer_wrapper_reflection_probe_set_as_interior(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, p_enable);
}
void VisualServer::reflection_probe_set_cull_mask(RID p_probe, int p_layers){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	_wasgo_VisualServer_wrapper_reflection_probe_set_cull_mask(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, p_layers);
}
void VisualServer::reflection_probe_set_enable_box_projection(RID p_probe, bool p_enable){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	_wasgo_VisualServer_wrapper_reflection_probe_set_enable_box_projection(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, p_enable);
}
void VisualServer::reflection_probe_set_enable_shadows(RID p_probe, bool p_enable){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	_wasgo_VisualServer_wrapper_reflection_probe_set_enable_shadows(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, p_enable);
}
void VisualServer::reflection_probe_set_extents(RID p_probe, Vector3 p_extents){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    

    Variant wasgo_var_extents = p_extents;
    uint8_t wasgo_buffer_extents[16];
    int wasgo_size_extents = 16;
    encode_variant(wasgo_var_extents, wasgo_buffer_extents, wasgo_size_extents);
    
	_wasgo_VisualServer_wrapper_reflection_probe_set_extents(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, wasgo_buffer_extents, wasgo_size_extents);
}
void VisualServer::reflection_probe_set_intensity(RID p_probe, float p_intensity){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	_wasgo_VisualServer_wrapper_reflection_probe_set_intensity(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, p_intensity);
}
void VisualServer::reflection_probe_set_interior_ambient(RID p_probe, Color p_color){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_VisualServer_wrapper_reflection_probe_set_interior_ambient(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, wasgo_buffer_color, wasgo_size_color);
}
void VisualServer::reflection_probe_set_interior_ambient_energy(RID p_probe, float p_energy){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	_wasgo_VisualServer_wrapper_reflection_probe_set_interior_ambient_energy(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, p_energy);
}
void VisualServer::reflection_probe_set_interior_ambient_probe_contribution(RID p_probe, float p_contrib){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	_wasgo_VisualServer_wrapper_reflection_probe_set_interior_ambient_probe_contribution(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, p_contrib);
}
void VisualServer::reflection_probe_set_max_distance(RID p_probe, float p_distance){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	_wasgo_VisualServer_wrapper_reflection_probe_set_max_distance(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, p_distance);
}
void VisualServer::reflection_probe_set_origin_offset(RID p_probe, Vector3 p_offset){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[16];
    int wasgo_size_offset = 16;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_VisualServer_wrapper_reflection_probe_set_origin_offset(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, wasgo_buffer_offset, wasgo_size_offset);
}
void VisualServer::reflection_probe_set_update_mode(RID p_probe, VisualServer::ReflectionProbeUpdateMode p_mode){

    Variant wasgo_var_probe = p_probe;
    uint8_t wasgo_buffer_probe[0];
    int wasgo_size_probe = 0;
    encode_variant(wasgo_var_probe, wasgo_buffer_probe, wasgo_size_probe);
    
	_wasgo_VisualServer_wrapper_reflection_probe_set_update_mode(wasgo_id, wasgo_buffer_probe, wasgo_size_probe, p_mode._get_wasgo_id());
}
void VisualServer::request_frame_drawn_callback(Object p_where, String p_method, Variant p_userdata){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    
	_wasgo_VisualServer_wrapper_request_frame_drawn_callback(wasgo_id, p_where._get_wasgo_id(), wasgo_buffer_method, wasgo_size_method, p_userdata._get_wasgo_id());
}
RID VisualServer::scenario_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_scenario_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void VisualServer::scenario_set_debug(RID p_scenario, VisualServer::ScenarioDebugMode p_debug_mode){

    Variant wasgo_var_scenario = p_scenario;
    uint8_t wasgo_buffer_scenario[0];
    int wasgo_size_scenario = 0;
    encode_variant(wasgo_var_scenario, wasgo_buffer_scenario, wasgo_size_scenario);
    
	_wasgo_VisualServer_wrapper_scenario_set_debug(wasgo_id, wasgo_buffer_scenario, wasgo_size_scenario, p_debug_mode._get_wasgo_id());
}
void VisualServer::scenario_set_environment(RID p_scenario, RID p_environment){

    Variant wasgo_var_scenario = p_scenario;
    uint8_t wasgo_buffer_scenario[0];
    int wasgo_size_scenario = 0;
    encode_variant(wasgo_var_scenario, wasgo_buffer_scenario, wasgo_size_scenario);
    

    Variant wasgo_var_environment = p_environment;
    uint8_t wasgo_buffer_environment[0];
    int wasgo_size_environment = 0;
    encode_variant(wasgo_var_environment, wasgo_buffer_environment, wasgo_size_environment);
    
	_wasgo_VisualServer_wrapper_scenario_set_environment(wasgo_id, wasgo_buffer_scenario, wasgo_size_scenario, wasgo_buffer_environment, wasgo_size_environment);
}
void VisualServer::scenario_set_fallback_environment(RID p_scenario, RID p_environment){

    Variant wasgo_var_scenario = p_scenario;
    uint8_t wasgo_buffer_scenario[0];
    int wasgo_size_scenario = 0;
    encode_variant(wasgo_var_scenario, wasgo_buffer_scenario, wasgo_size_scenario);
    

    Variant wasgo_var_environment = p_environment;
    uint8_t wasgo_buffer_environment[0];
    int wasgo_size_environment = 0;
    encode_variant(wasgo_var_environment, wasgo_buffer_environment, wasgo_size_environment);
    
	_wasgo_VisualServer_wrapper_scenario_set_fallback_environment(wasgo_id, wasgo_buffer_scenario, wasgo_size_scenario, wasgo_buffer_environment, wasgo_size_environment);
}
void VisualServer::scenario_set_reflection_atlas_size(RID p_scenario, int p_size, int p_subdiv){

    Variant wasgo_var_scenario = p_scenario;
    uint8_t wasgo_buffer_scenario[0];
    int wasgo_size_scenario = 0;
    encode_variant(wasgo_var_scenario, wasgo_buffer_scenario, wasgo_size_scenario);
    
	_wasgo_VisualServer_wrapper_scenario_set_reflection_atlas_size(wasgo_id, wasgo_buffer_scenario, wasgo_size_scenario, p_size, p_subdiv);
}
void VisualServer::set_boot_image(Image p_image, Color p_color, bool p_scale, bool p_use_filter){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_VisualServer_wrapper_set_boot_image(wasgo_id, p_image._get_wasgo_id(), wasgo_buffer_color, wasgo_size_color, p_scale, p_use_filter);
}
void VisualServer::set_debug_generate_wireframes(bool p_generate){
	_wasgo_VisualServer_wrapper_set_debug_generate_wireframes(wasgo_id, p_generate);
}
void VisualServer::set_default_clear_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_VisualServer_wrapper_set_default_clear_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void VisualServer::set_render_loop_enabled(bool p_enabled){
	_wasgo_VisualServer_wrapper_set_render_loop_enabled(wasgo_id, p_enabled);
}
void VisualServer::set_shader_time_scale(float p_scale){
	_wasgo_VisualServer_wrapper_set_shader_time_scale(wasgo_id, p_scale);
}
RID VisualServer::shader_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_shader_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
String VisualServer::shader_get_code(RID p_shader){

    Variant wasgo_var_shader = p_shader;
    uint8_t wasgo_buffer_shader[0];
    int wasgo_size_shader = 0;
    encode_variant(wasgo_var_shader, wasgo_buffer_shader, wasgo_size_shader);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_VisualServer_wrapper_shader_get_code(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_shader, wasgo_size_shader);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
RID VisualServer::shader_get_default_texture_param(RID p_shader, String p_name){

    Variant wasgo_var_shader = p_shader;
    uint8_t wasgo_buffer_shader[0];
    int wasgo_size_shader = 0;
    encode_variant(wasgo_var_shader, wasgo_buffer_shader, wasgo_size_shader);
    

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_shader_get_default_texture_param(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_shader, wasgo_size_shader, wasgo_buffer_name, wasgo_size_name);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
Array VisualServer::shader_get_param_list(RID p_shader){

    Variant wasgo_var_shader = p_shader;
    uint8_t wasgo_buffer_shader[0];
    int wasgo_size_shader = 0;
    encode_variant(wasgo_var_shader, wasgo_buffer_shader, wasgo_size_shader);
    
	return Array(_wasgo_VisualServer_wrapper_shader_get_param_list(wasgo_id, wasgo_buffer_shader, wasgo_size_shader));
}
void VisualServer::shader_set_code(RID p_shader, String p_code){

    Variant wasgo_var_shader = p_shader;
    uint8_t wasgo_buffer_shader[0];
    int wasgo_size_shader = 0;
    encode_variant(wasgo_var_shader, wasgo_buffer_shader, wasgo_size_shader);
    

    Variant wasgo_var_code = p_code;
    int wasgo_size_code = String(p_code).size();
    uint8_t wasgo_buffer_code[wasgo_size_code];
    encode_variant(wasgo_var_code, wasgo_buffer_code, wasgo_size_code);
    
	_wasgo_VisualServer_wrapper_shader_set_code(wasgo_id, wasgo_buffer_shader, wasgo_size_shader, wasgo_buffer_code, wasgo_size_code);
}
void VisualServer::shader_set_default_texture_param(RID p_shader, String p_name, RID p_texture){

    Variant wasgo_var_shader = p_shader;
    uint8_t wasgo_buffer_shader[0];
    int wasgo_size_shader = 0;
    encode_variant(wasgo_var_shader, wasgo_buffer_shader, wasgo_size_shader);
    

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    
	_wasgo_VisualServer_wrapper_shader_set_default_texture_param(wasgo_id, wasgo_buffer_shader, wasgo_size_shader, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_texture, wasgo_size_texture);
}
void VisualServer::skeleton_allocate(RID p_skeleton, int p_bones, bool p_is_2d_skeleton){

    Variant wasgo_var_skeleton = p_skeleton;
    uint8_t wasgo_buffer_skeleton[0];
    int wasgo_size_skeleton = 0;
    encode_variant(wasgo_var_skeleton, wasgo_buffer_skeleton, wasgo_size_skeleton);
    
	_wasgo_VisualServer_wrapper_skeleton_allocate(wasgo_id, wasgo_buffer_skeleton, wasgo_size_skeleton, p_bones, p_is_2d_skeleton);
}
Transform VisualServer::skeleton_bone_get_transform(RID p_skeleton, int p_bone){

    Variant wasgo_var_skeleton = p_skeleton;
    uint8_t wasgo_buffer_skeleton[0];
    int wasgo_size_skeleton = 0;
    encode_variant(wasgo_var_skeleton, wasgo_buffer_skeleton, wasgo_size_skeleton);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_VisualServer_wrapper_skeleton_bone_get_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_skeleton, wasgo_size_skeleton, p_bone);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
Transform2D VisualServer::skeleton_bone_get_transform_2d(RID p_skeleton, int p_bone){

    Variant wasgo_var_skeleton = p_skeleton;
    uint8_t wasgo_buffer_skeleton[0];
    int wasgo_size_skeleton = 0;
    encode_variant(wasgo_var_skeleton, wasgo_buffer_skeleton, wasgo_size_skeleton);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_VisualServer_wrapper_skeleton_bone_get_transform_2d(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_skeleton, wasgo_size_skeleton, p_bone);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform2D) wasgo_ret;
    
}
void VisualServer::skeleton_bone_set_transform(RID p_skeleton, int p_bone, Transform p_transform){

    Variant wasgo_var_skeleton = p_skeleton;
    uint8_t wasgo_buffer_skeleton[0];
    int wasgo_size_skeleton = 0;
    encode_variant(wasgo_var_skeleton, wasgo_buffer_skeleton, wasgo_size_skeleton);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[52];
    int wasgo_size_transform = 52;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_VisualServer_wrapper_skeleton_bone_set_transform(wasgo_id, wasgo_buffer_skeleton, wasgo_size_skeleton, p_bone, wasgo_buffer_transform, wasgo_size_transform);
}
void VisualServer::skeleton_bone_set_transform_2d(RID p_skeleton, int p_bone, Transform2D p_transform){

    Variant wasgo_var_skeleton = p_skeleton;
    uint8_t wasgo_buffer_skeleton[0];
    int wasgo_size_skeleton = 0;
    encode_variant(wasgo_var_skeleton, wasgo_buffer_skeleton, wasgo_size_skeleton);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_VisualServer_wrapper_skeleton_bone_set_transform_2d(wasgo_id, wasgo_buffer_skeleton, wasgo_size_skeleton, p_bone, wasgo_buffer_transform, wasgo_size_transform);
}
RID VisualServer::skeleton_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_skeleton_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
int VisualServer::skeleton_get_bone_count(RID p_skeleton){

    Variant wasgo_var_skeleton = p_skeleton;
    uint8_t wasgo_buffer_skeleton[0];
    int wasgo_size_skeleton = 0;
    encode_variant(wasgo_var_skeleton, wasgo_buffer_skeleton, wasgo_size_skeleton);
    
	return (int) _wasgo_VisualServer_wrapper_skeleton_get_bone_count(wasgo_id, wasgo_buffer_skeleton, wasgo_size_skeleton);
}
RID VisualServer::sky_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_sky_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void VisualServer::sky_set_texture(RID p_sky, RID p_cube_map, int p_radiance_size){

    Variant wasgo_var_sky = p_sky;
    uint8_t wasgo_buffer_sky[0];
    int wasgo_size_sky = 0;
    encode_variant(wasgo_var_sky, wasgo_buffer_sky, wasgo_size_sky);
    

    Variant wasgo_var_cube_map = p_cube_map;
    uint8_t wasgo_buffer_cube_map[0];
    int wasgo_size_cube_map = 0;
    encode_variant(wasgo_var_cube_map, wasgo_buffer_cube_map, wasgo_size_cube_map);
    
	_wasgo_VisualServer_wrapper_sky_set_texture(wasgo_id, wasgo_buffer_sky, wasgo_size_sky, wasgo_buffer_cube_map, wasgo_size_cube_map, p_radiance_size);
}
RID VisualServer::spot_light_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_spot_light_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void VisualServer::sync(){
	_wasgo_VisualServer_wrapper_sync(wasgo_id);
}
void VisualServer::texture_allocate(RID p_texture, int p_width, int p_height, int p_depth_3d, Image::Format p_format, VisualServer::TextureType p_type, int p_flags){

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    
	_wasgo_VisualServer_wrapper_texture_allocate(wasgo_id, wasgo_buffer_texture, wasgo_size_texture, p_width, p_height, p_depth_3d, p_format._get_wasgo_id(), p_type._get_wasgo_id(), p_flags);
}
void VisualServer::texture_bind(RID p_texture, int p_number){

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    
	_wasgo_VisualServer_wrapper_texture_bind(wasgo_id, wasgo_buffer_texture, wasgo_size_texture, p_number);
}
RID VisualServer::texture_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_texture_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID VisualServer::texture_create_from_image(Image p_image, int p_flags){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_texture_create_from_image(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_image._get_wasgo_id(), p_flags);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
Array VisualServer::texture_debug_usage(){
	return Array(_wasgo_VisualServer_wrapper_texture_debug_usage(wasgo_id));
}
Image VisualServer::texture_get_data(RID p_texture, int p_cube_side){

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    
	return Image(_wasgo_VisualServer_wrapper_texture_get_data(wasgo_id, wasgo_buffer_texture, wasgo_size_texture, p_cube_side));
}
int VisualServer::texture_get_depth(RID p_texture){

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    
	return (int) _wasgo_VisualServer_wrapper_texture_get_depth(wasgo_id, wasgo_buffer_texture, wasgo_size_texture);
}
int VisualServer::texture_get_flags(RID p_texture){

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    
	return (int) _wasgo_VisualServer_wrapper_texture_get_flags(wasgo_id, wasgo_buffer_texture, wasgo_size_texture);
}
Image::Format VisualServer::texture_get_format(RID p_texture){

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    
	return Image::Format(_wasgo_VisualServer_wrapper_texture_get_format(wasgo_id, wasgo_buffer_texture, wasgo_size_texture));
}
int VisualServer::texture_get_height(RID p_texture){

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    
	return (int) _wasgo_VisualServer_wrapper_texture_get_height(wasgo_id, wasgo_buffer_texture, wasgo_size_texture);
}
String VisualServer::texture_get_path(RID p_texture){

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_VisualServer_wrapper_texture_get_path(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_texture, wasgo_size_texture);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int VisualServer::texture_get_texid(RID p_texture){

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    
	return (int) _wasgo_VisualServer_wrapper_texture_get_texid(wasgo_id, wasgo_buffer_texture, wasgo_size_texture);
}
VisualServer::TextureType VisualServer::texture_get_type(RID p_texture){

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    
	return VisualServer::TextureType(_wasgo_VisualServer_wrapper_texture_get_type(wasgo_id, wasgo_buffer_texture, wasgo_size_texture));
}
int VisualServer::texture_get_width(RID p_texture){

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    
	return (int) _wasgo_VisualServer_wrapper_texture_get_width(wasgo_id, wasgo_buffer_texture, wasgo_size_texture);
}
void VisualServer::texture_set_data(RID p_texture, Image p_image, int p_layer){

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    
	_wasgo_VisualServer_wrapper_texture_set_data(wasgo_id, wasgo_buffer_texture, wasgo_size_texture, p_image._get_wasgo_id(), p_layer);
}
void VisualServer::texture_set_data_partial(RID p_texture, Image p_image, int p_src_x, int p_src_y, int p_src_w, int p_src_h, int p_dst_x, int p_dst_y, int p_dst_mip, int p_layer){

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    
	_wasgo_VisualServer_wrapper_texture_set_data_partial(wasgo_id, wasgo_buffer_texture, wasgo_size_texture, p_image._get_wasgo_id(), p_src_x, p_src_y, p_src_w, p_src_h, p_dst_x, p_dst_y, p_dst_mip, p_layer);
}
void VisualServer::texture_set_flags(RID p_texture, int p_flags){

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    
	_wasgo_VisualServer_wrapper_texture_set_flags(wasgo_id, wasgo_buffer_texture, wasgo_size_texture, p_flags);
}
void VisualServer::texture_set_path(RID p_texture, String p_path){

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_VisualServer_wrapper_texture_set_path(wasgo_id, wasgo_buffer_texture, wasgo_size_texture, wasgo_buffer_path, wasgo_size_path);
}
void VisualServer::texture_set_shrink_all_x2_on_set_data(bool p_shrink){
	_wasgo_VisualServer_wrapper_texture_set_shrink_all_x2_on_set_data(wasgo_id, p_shrink);
}
void VisualServer::texture_set_size_override(RID p_texture, int p_width, int p_height, int p_depth){

    Variant wasgo_var_texture = p_texture;
    uint8_t wasgo_buffer_texture[0];
    int wasgo_size_texture = 0;
    encode_variant(wasgo_var_texture, wasgo_buffer_texture, wasgo_size_texture);
    
	_wasgo_VisualServer_wrapper_texture_set_size_override(wasgo_id, wasgo_buffer_texture, wasgo_size_texture, p_width, p_height, p_depth);
}
void VisualServer::textures_keep_original(bool p_enable){
	_wasgo_VisualServer_wrapper_textures_keep_original(wasgo_id, p_enable);
}
void VisualServer::viewport_attach_camera(RID p_viewport, RID p_camera){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    

    Variant wasgo_var_camera = p_camera;
    uint8_t wasgo_buffer_camera[0];
    int wasgo_size_camera = 0;
    encode_variant(wasgo_var_camera, wasgo_buffer_camera, wasgo_size_camera);
    
	_wasgo_VisualServer_wrapper_viewport_attach_camera(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, wasgo_buffer_camera, wasgo_size_camera);
}
void VisualServer::viewport_attach_canvas(RID p_viewport, RID p_canvas){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    

    Variant wasgo_var_canvas = p_canvas;
    uint8_t wasgo_buffer_canvas[0];
    int wasgo_size_canvas = 0;
    encode_variant(wasgo_var_canvas, wasgo_buffer_canvas, wasgo_size_canvas);
    
	_wasgo_VisualServer_wrapper_viewport_attach_canvas(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, wasgo_buffer_canvas, wasgo_size_canvas);
}
void VisualServer::viewport_attach_to_screen(RID p_viewport, Rect2 p_rect, int p_screen){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	_wasgo_VisualServer_wrapper_viewport_attach_to_screen(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, wasgo_buffer_rect, wasgo_size_rect, p_screen);
}
RID VisualServer::viewport_create(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_viewport_create(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void VisualServer::viewport_detach(RID p_viewport){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_detach(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport);
}
int VisualServer::viewport_get_render_info(RID p_viewport, VisualServer::ViewportRenderInfo p_info){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	return (int) _wasgo_VisualServer_wrapper_viewport_get_render_info(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_info._get_wasgo_id());
}
RID VisualServer::viewport_get_texture(RID p_viewport){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualServer_wrapper_viewport_get_texture(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_viewport, wasgo_size_viewport);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
void VisualServer::viewport_remove_canvas(RID p_viewport, RID p_canvas){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    

    Variant wasgo_var_canvas = p_canvas;
    uint8_t wasgo_buffer_canvas[0];
    int wasgo_size_canvas = 0;
    encode_variant(wasgo_var_canvas, wasgo_buffer_canvas, wasgo_size_canvas);
    
	_wasgo_VisualServer_wrapper_viewport_remove_canvas(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, wasgo_buffer_canvas, wasgo_size_canvas);
}
void VisualServer::viewport_set_active(RID p_viewport, bool p_active){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_active(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_active);
}
void VisualServer::viewport_set_canvas_stacking(RID p_viewport, RID p_canvas, int p_layer, int p_sublayer){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    

    Variant wasgo_var_canvas = p_canvas;
    uint8_t wasgo_buffer_canvas[0];
    int wasgo_size_canvas = 0;
    encode_variant(wasgo_var_canvas, wasgo_buffer_canvas, wasgo_size_canvas);
    
	_wasgo_VisualServer_wrapper_viewport_set_canvas_stacking(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, wasgo_buffer_canvas, wasgo_size_canvas, p_layer, p_sublayer);
}
void VisualServer::viewport_set_canvas_transform(RID p_viewport, RID p_canvas, Transform2D p_offset){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    

    Variant wasgo_var_canvas = p_canvas;
    uint8_t wasgo_buffer_canvas[0];
    int wasgo_size_canvas = 0;
    encode_variant(wasgo_var_canvas, wasgo_buffer_canvas, wasgo_size_canvas);
    

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[28];
    int wasgo_size_offset = 28;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_VisualServer_wrapper_viewport_set_canvas_transform(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, wasgo_buffer_canvas, wasgo_size_canvas, wasgo_buffer_offset, wasgo_size_offset);
}
void VisualServer::viewport_set_clear_mode(RID p_viewport, VisualServer::ViewportClearMode p_clear_mode){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_clear_mode(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_clear_mode._get_wasgo_id());
}
void VisualServer::viewport_set_debug_draw(RID p_viewport, VisualServer::ViewportDebugDraw p_draw){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_debug_draw(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_draw._get_wasgo_id());
}
void VisualServer::viewport_set_disable_3d(RID p_viewport, bool p_disabled){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_disable_3d(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_disabled);
}
void VisualServer::viewport_set_disable_environment(RID p_viewport, bool p_disabled){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_disable_environment(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_disabled);
}
void VisualServer::viewport_set_global_canvas_transform(RID p_viewport, Transform2D p_transform){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[28];
    int wasgo_size_transform = 28;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_VisualServer_wrapper_viewport_set_global_canvas_transform(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, wasgo_buffer_transform, wasgo_size_transform);
}
void VisualServer::viewport_set_hdr(RID p_viewport, bool p_enabled){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_hdr(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_enabled);
}
void VisualServer::viewport_set_hide_canvas(RID p_viewport, bool p_hidden){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_hide_canvas(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_hidden);
}
void VisualServer::viewport_set_hide_scenario(RID p_viewport, bool p_hidden){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_hide_scenario(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_hidden);
}
void VisualServer::viewport_set_msaa(RID p_viewport, VisualServer::ViewportMSAA p_msaa){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_msaa(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_msaa._get_wasgo_id());
}
void VisualServer::viewport_set_parent_viewport(RID p_viewport, RID p_parent_viewport){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    

    Variant wasgo_var_parent_viewport = p_parent_viewport;
    uint8_t wasgo_buffer_parent_viewport[0];
    int wasgo_size_parent_viewport = 0;
    encode_variant(wasgo_var_parent_viewport, wasgo_buffer_parent_viewport, wasgo_size_parent_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_parent_viewport(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, wasgo_buffer_parent_viewport, wasgo_size_parent_viewport);
}
void VisualServer::viewport_set_render_direct_to_screen(RID p_viewport, bool p_enabled){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_render_direct_to_screen(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_enabled);
}
void VisualServer::viewport_set_scenario(RID p_viewport, RID p_scenario){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    

    Variant wasgo_var_scenario = p_scenario;
    uint8_t wasgo_buffer_scenario[0];
    int wasgo_size_scenario = 0;
    encode_variant(wasgo_var_scenario, wasgo_buffer_scenario, wasgo_size_scenario);
    
	_wasgo_VisualServer_wrapper_viewport_set_scenario(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, wasgo_buffer_scenario, wasgo_size_scenario);
}
void VisualServer::viewport_set_shadow_atlas_quadrant_subdivision(RID p_viewport, int p_quadrant, int p_subdivision){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_shadow_atlas_quadrant_subdivision(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_quadrant, p_subdivision);
}
void VisualServer::viewport_set_shadow_atlas_size(RID p_viewport, int p_size){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_shadow_atlas_size(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_size);
}
void VisualServer::viewport_set_size(RID p_viewport, int p_width, int p_height){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_size(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_width, p_height);
}
void VisualServer::viewport_set_transparent_background(RID p_viewport, bool p_enabled){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_transparent_background(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_enabled);
}
void VisualServer::viewport_set_update_mode(RID p_viewport, VisualServer::ViewportUpdateMode p_update_mode){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_update_mode(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_update_mode._get_wasgo_id());
}
void VisualServer::viewport_set_usage(RID p_viewport, VisualServer::ViewportUsage p_usage){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_usage(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_usage._get_wasgo_id());
}
void VisualServer::viewport_set_use_arvr(RID p_viewport, bool p_use_arvr){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_use_arvr(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_use_arvr);
}
void VisualServer::viewport_set_use_debanding(RID p_viewport, bool p_debanding){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_use_debanding(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_debanding);
}
void VisualServer::viewport_set_use_fxaa(RID p_viewport, bool p_fxaa){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_use_fxaa(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_fxaa);
}
void VisualServer::viewport_set_vflip(RID p_viewport, bool p_enabled){

    Variant wasgo_var_viewport = p_viewport;
    uint8_t wasgo_buffer_viewport[0];
    int wasgo_size_viewport = 0;
    encode_variant(wasgo_var_viewport, wasgo_buffer_viewport, wasgo_size_viewport);
    
	_wasgo_VisualServer_wrapper_viewport_set_vflip(wasgo_id, wasgo_buffer_viewport, wasgo_size_viewport, p_enabled);
}

VisualServer::VisualServer(WasGoID p_wasgo_id) : Object(p_wasgo_id){
}
VisualServer::VisualServer(Object other) : Object(other._get_wasgo_id()){
}
VisualServer::VisualServer():Object(){
}
VisualServer VisualServer::new_instance(){
    return VisualServer(_wasgo_VisualServer_constructor());
}
WasGoID VisualServer::_get_wasgo_id(){
    return wasgo_id;
}
VisualServer::operator bool(){
    return (bool) wasgo_id;
}
