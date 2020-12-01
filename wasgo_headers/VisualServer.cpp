/* THIS FILE IS GENERATED */
#include "VisualServer.h"
void VisualServer::black_bars_set_images(RID p_left, RID p_top, RID p_right, RID p_bottom){
	_wasgo_VisualServer_wrapper_black_bars_set_images(wasgo_id, ((Variant) p_left).get_wasgo_id(), ((Variant) p_top).get_wasgo_id(), ((Variant) p_right).get_wasgo_id(), ((Variant) p_bottom).get_wasgo_id());
}
void VisualServer::black_bars_set_margins(int p_left, int p_top, int p_right, int p_bottom){
	_wasgo_VisualServer_wrapper_black_bars_set_margins(wasgo_id, p_left, p_top, p_right, p_bottom);
}
RID VisualServer::camera_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_camera_create(wasgo_id));
}
void VisualServer::camera_set_cull_mask(RID p_camera, int p_layers){
	_wasgo_VisualServer_wrapper_camera_set_cull_mask(wasgo_id, ((Variant) p_camera).get_wasgo_id(), p_layers);
}
void VisualServer::camera_set_environment(RID p_camera, RID p_env){
	_wasgo_VisualServer_wrapper_camera_set_environment(wasgo_id, ((Variant) p_camera).get_wasgo_id(), ((Variant) p_env).get_wasgo_id());
}
void VisualServer::camera_set_frustum(RID p_camera, float p_size, Vector2 p_offset, float p_z_near, float p_z_far){
	_wasgo_VisualServer_wrapper_camera_set_frustum(wasgo_id, ((Variant) p_camera).get_wasgo_id(), p_size, ((Variant) p_offset).get_wasgo_id(), p_z_near, p_z_far);
}
void VisualServer::camera_set_orthogonal(RID p_camera, float p_size, float p_z_near, float p_z_far){
	_wasgo_VisualServer_wrapper_camera_set_orthogonal(wasgo_id, ((Variant) p_camera).get_wasgo_id(), p_size, p_z_near, p_z_far);
}
void VisualServer::camera_set_perspective(RID p_camera, float p_fovy_degrees, float p_z_near, float p_z_far){
	_wasgo_VisualServer_wrapper_camera_set_perspective(wasgo_id, ((Variant) p_camera).get_wasgo_id(), p_fovy_degrees, p_z_near, p_z_far);
}
void VisualServer::camera_set_transform(RID p_camera, Transform p_transform){
	_wasgo_VisualServer_wrapper_camera_set_transform(wasgo_id, ((Variant) p_camera).get_wasgo_id(), ((Variant) p_transform).get_wasgo_id());
}
void VisualServer::camera_set_use_vertical_aspect(RID p_camera, bool p_enable){
	_wasgo_VisualServer_wrapper_camera_set_use_vertical_aspect(wasgo_id, ((Variant) p_camera).get_wasgo_id(), p_enable);
}
RID VisualServer::canvas_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_canvas_create(wasgo_id));
}
void VisualServer::canvas_item_add_circle(RID p_item, Vector2 p_pos, float p_radius, Color p_color){
	_wasgo_VisualServer_wrapper_canvas_item_add_circle(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_pos).get_wasgo_id(), p_radius, ((Variant) p_color).get_wasgo_id());
}
void VisualServer::canvas_item_add_clip_ignore(RID p_item, bool p_ignore){
	_wasgo_VisualServer_wrapper_canvas_item_add_clip_ignore(wasgo_id, ((Variant) p_item).get_wasgo_id(), p_ignore);
}
void VisualServer::canvas_item_add_line(RID p_item, Vector2 p_from, Vector2 p_to, Color p_color, float p_width = (float) 1, bool p_antialiased = (bool) false){
	_wasgo_VisualServer_wrapper_canvas_item_add_line(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_from).get_wasgo_id(), ((Variant) p_to).get_wasgo_id(), ((Variant) p_color).get_wasgo_id(), p_width, p_antialiased);
}
void VisualServer::canvas_item_add_mesh(RID p_item, RID p_mesh, Transform2D p_transform = Transform2D(((1, 0), (0, 1), (0, 0))), Color p_modulate = Color(1,1,1,1), RID p_texture = (RID) [rid], RID p_normal_map = (RID) [rid]){
	_wasgo_VisualServer_wrapper_canvas_item_add_mesh(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_mesh).get_wasgo_id(), ((Variant) p_transform).get_wasgo_id(), ((Variant) p_modulate).get_wasgo_id(), ((Variant) p_texture).get_wasgo_id(), ((Variant) p_normal_map).get_wasgo_id());
}
void VisualServer::canvas_item_add_multimesh(RID p_item, RID p_mesh, RID p_texture, RID p_normal_map = (RID) [rid]){
	_wasgo_VisualServer_wrapper_canvas_item_add_multimesh(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_mesh).get_wasgo_id(), ((Variant) p_texture).get_wasgo_id(), ((Variant) p_normal_map).get_wasgo_id());
}
void VisualServer::canvas_item_add_nine_patch(RID p_item, Rect2 p_rect, Rect2 p_source, RID p_texture, Vector2 p_topleft, Vector2 p_bottomright, VisualServer::NinePatchAxisMode p_x_axis_mode = (VisualServer::NinePatchAxisMode) 0, VisualServer::NinePatchAxisMode p_y_axis_mode = (VisualServer::NinePatchAxisMode) 0, bool p_draw_center = (bool) true, Color p_modulate = Color(1,1,1,1), RID p_normal_map = (RID) [rid]){
	_wasgo_VisualServer_wrapper_canvas_item_add_nine_patch(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_rect).get_wasgo_id(), ((Variant) p_source).get_wasgo_id(), ((Variant) p_texture).get_wasgo_id(), ((Variant) p_topleft).get_wasgo_id(), ((Variant) p_bottomright).get_wasgo_id(), ((Variant) p_x_axis_mode).get_wasgo_id(), ((Variant) p_y_axis_mode).get_wasgo_id(), p_draw_center, ((Variant) p_modulate).get_wasgo_id(), ((Variant) p_normal_map).get_wasgo_id());
}
void VisualServer::canvas_item_add_particles(RID p_item, RID p_particles, RID p_texture, RID p_normal_map){
	_wasgo_VisualServer_wrapper_canvas_item_add_particles(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_particles).get_wasgo_id(), ((Variant) p_texture).get_wasgo_id(), ((Variant) p_normal_map).get_wasgo_id());
}
void VisualServer::canvas_item_add_polygon(RID p_item, PoolVector2Array p_points, PoolColorArray p_colors, PoolVector2Array p_uvs = (PoolVector2Array) [], RID p_texture = (RID) [rid], RID p_normal_map = (RID) [rid], bool p_antialiased = (bool) false){
	_wasgo_VisualServer_wrapper_canvas_item_add_polygon(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_points).get_wasgo_id(), ((Variant) p_colors).get_wasgo_id(), ((Variant) p_uvs).get_wasgo_id(), ((Variant) p_texture).get_wasgo_id(), ((Variant) p_normal_map).get_wasgo_id(), p_antialiased);
}
void VisualServer::canvas_item_add_polyline(RID p_item, PoolVector2Array p_points, PoolColorArray p_colors, float p_width = (float) 1, bool p_antialiased = (bool) false){
	_wasgo_VisualServer_wrapper_canvas_item_add_polyline(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_points).get_wasgo_id(), ((Variant) p_colors).get_wasgo_id(), p_width, p_antialiased);
}
void VisualServer::canvas_item_add_primitive(RID p_item, PoolVector2Array p_points, PoolColorArray p_colors, PoolVector2Array p_uvs, RID p_texture, float p_width = (float) 1, RID p_normal_map = (RID) [rid]){
	_wasgo_VisualServer_wrapper_canvas_item_add_primitive(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_points).get_wasgo_id(), ((Variant) p_colors).get_wasgo_id(), ((Variant) p_uvs).get_wasgo_id(), ((Variant) p_texture).get_wasgo_id(), p_width, ((Variant) p_normal_map).get_wasgo_id());
}
void VisualServer::canvas_item_add_rect(RID p_item, Rect2 p_rect, Color p_color){
	_wasgo_VisualServer_wrapper_canvas_item_add_rect(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_rect).get_wasgo_id(), ((Variant) p_color).get_wasgo_id());
}
void VisualServer::canvas_item_add_set_transform(RID p_item, Transform2D p_transform){
	_wasgo_VisualServer_wrapper_canvas_item_add_set_transform(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_transform).get_wasgo_id());
}
void VisualServer::canvas_item_add_texture_rect(RID p_item, Rect2 p_rect, RID p_texture, bool p_tile = (bool) false, Color p_modulate = Color(1,1,1,1), bool p_transpose = (bool) false, RID p_normal_map = (RID) [rid]){
	_wasgo_VisualServer_wrapper_canvas_item_add_texture_rect(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_rect).get_wasgo_id(), ((Variant) p_texture).get_wasgo_id(), p_tile, ((Variant) p_modulate).get_wasgo_id(), p_transpose, ((Variant) p_normal_map).get_wasgo_id());
}
void VisualServer::canvas_item_add_texture_rect_region(RID p_item, Rect2 p_rect, RID p_texture, Rect2 p_src_rect, Color p_modulate = Color(1,1,1,1), bool p_transpose = (bool) false, RID p_normal_map = (RID) [rid], bool p_clip_uv = (bool) true){
	_wasgo_VisualServer_wrapper_canvas_item_add_texture_rect_region(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_rect).get_wasgo_id(), ((Variant) p_texture).get_wasgo_id(), ((Variant) p_src_rect).get_wasgo_id(), ((Variant) p_modulate).get_wasgo_id(), p_transpose, ((Variant) p_normal_map).get_wasgo_id(), p_clip_uv);
}
void VisualServer::canvas_item_add_triangle_array(RID p_item, PoolIntArray p_indices, PoolVector2Array p_points, PoolColorArray p_colors, PoolVector2Array p_uvs = (PoolVector2Array) [], PoolIntArray p_bones = (PoolIntArray) [], PoolRealArray p_weights = (PoolRealArray) [], RID p_texture = (RID) [rid], int p_count = (int) -1, RID p_normal_map = (RID) [rid], bool p_antialiased = (bool) false, bool p_antialiasing_use_indices = (bool) false){
	_wasgo_VisualServer_wrapper_canvas_item_add_triangle_array(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_indices).get_wasgo_id(), ((Variant) p_points).get_wasgo_id(), ((Variant) p_colors).get_wasgo_id(), ((Variant) p_uvs).get_wasgo_id(), ((Variant) p_bones).get_wasgo_id(), ((Variant) p_weights).get_wasgo_id(), ((Variant) p_texture).get_wasgo_id(), p_count, ((Variant) p_normal_map).get_wasgo_id(), p_antialiased, p_antialiasing_use_indices);
}
void VisualServer::canvas_item_clear(RID p_item){
	_wasgo_VisualServer_wrapper_canvas_item_clear(wasgo_id, ((Variant) p_item).get_wasgo_id());
}
RID VisualServer::canvas_item_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_canvas_item_create(wasgo_id));
}
void VisualServer::canvas_item_set_clip(RID p_item, bool p_clip){
	_wasgo_VisualServer_wrapper_canvas_item_set_clip(wasgo_id, ((Variant) p_item).get_wasgo_id(), p_clip);
}
void VisualServer::canvas_item_set_copy_to_backbuffer(RID p_item, bool p_enabled, Rect2 p_rect){
	_wasgo_VisualServer_wrapper_canvas_item_set_copy_to_backbuffer(wasgo_id, ((Variant) p_item).get_wasgo_id(), p_enabled, ((Variant) p_rect).get_wasgo_id());
}
void VisualServer::canvas_item_set_custom_rect(RID p_item, bool p_use_custom_rect, Rect2 p_rect = Rect2((0, 0, 0, 0))){
	_wasgo_VisualServer_wrapper_canvas_item_set_custom_rect(wasgo_id, ((Variant) p_item).get_wasgo_id(), p_use_custom_rect, ((Variant) p_rect).get_wasgo_id());
}
void VisualServer::canvas_item_set_distance_field_mode(RID p_item, bool p_enabled){
	_wasgo_VisualServer_wrapper_canvas_item_set_distance_field_mode(wasgo_id, ((Variant) p_item).get_wasgo_id(), p_enabled);
}
void VisualServer::canvas_item_set_draw_behind_parent(RID p_item, bool p_enabled){
	_wasgo_VisualServer_wrapper_canvas_item_set_draw_behind_parent(wasgo_id, ((Variant) p_item).get_wasgo_id(), p_enabled);
}
void VisualServer::canvas_item_set_draw_index(RID p_item, int p_index){
	_wasgo_VisualServer_wrapper_canvas_item_set_draw_index(wasgo_id, ((Variant) p_item).get_wasgo_id(), p_index);
}
void VisualServer::canvas_item_set_light_mask(RID p_item, int p_mask){
	_wasgo_VisualServer_wrapper_canvas_item_set_light_mask(wasgo_id, ((Variant) p_item).get_wasgo_id(), p_mask);
}
void VisualServer::canvas_item_set_material(RID p_item, RID p_material){
	_wasgo_VisualServer_wrapper_canvas_item_set_material(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_material).get_wasgo_id());
}
void VisualServer::canvas_item_set_modulate(RID p_item, Color p_color){
	_wasgo_VisualServer_wrapper_canvas_item_set_modulate(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_color).get_wasgo_id());
}
void VisualServer::canvas_item_set_parent(RID p_item, RID p_parent){
	_wasgo_VisualServer_wrapper_canvas_item_set_parent(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_parent).get_wasgo_id());
}
void VisualServer::canvas_item_set_self_modulate(RID p_item, Color p_color){
	_wasgo_VisualServer_wrapper_canvas_item_set_self_modulate(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_color).get_wasgo_id());
}
void VisualServer::canvas_item_set_sort_children_by_y(RID p_item, bool p_enabled){
	_wasgo_VisualServer_wrapper_canvas_item_set_sort_children_by_y(wasgo_id, ((Variant) p_item).get_wasgo_id(), p_enabled);
}
void VisualServer::canvas_item_set_transform(RID p_item, Transform2D p_transform){
	_wasgo_VisualServer_wrapper_canvas_item_set_transform(wasgo_id, ((Variant) p_item).get_wasgo_id(), ((Variant) p_transform).get_wasgo_id());
}
void VisualServer::canvas_item_set_use_parent_material(RID p_item, bool p_enabled){
	_wasgo_VisualServer_wrapper_canvas_item_set_use_parent_material(wasgo_id, ((Variant) p_item).get_wasgo_id(), p_enabled);
}
void VisualServer::canvas_item_set_visible(RID p_item, bool p_visible){
	_wasgo_VisualServer_wrapper_canvas_item_set_visible(wasgo_id, ((Variant) p_item).get_wasgo_id(), p_visible);
}
void VisualServer::canvas_item_set_z_as_relative_to_parent(RID p_item, bool p_enabled){
	_wasgo_VisualServer_wrapper_canvas_item_set_z_as_relative_to_parent(wasgo_id, ((Variant) p_item).get_wasgo_id(), p_enabled);
}
void VisualServer::canvas_item_set_z_index(RID p_item, int p_z_index){
	_wasgo_VisualServer_wrapper_canvas_item_set_z_index(wasgo_id, ((Variant) p_item).get_wasgo_id(), p_z_index);
}
void VisualServer::canvas_light_attach_to_canvas(RID p_light, RID p_canvas){
	_wasgo_VisualServer_wrapper_canvas_light_attach_to_canvas(wasgo_id, ((Variant) p_light).get_wasgo_id(), ((Variant) p_canvas).get_wasgo_id());
}
RID VisualServer::canvas_light_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_canvas_light_create(wasgo_id));
}
void VisualServer::canvas_light_occluder_attach_to_canvas(RID p_occluder, RID p_canvas){
	_wasgo_VisualServer_wrapper_canvas_light_occluder_attach_to_canvas(wasgo_id, ((Variant) p_occluder).get_wasgo_id(), ((Variant) p_canvas).get_wasgo_id());
}
RID VisualServer::canvas_light_occluder_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_canvas_light_occluder_create(wasgo_id));
}
void VisualServer::canvas_light_occluder_set_enabled(RID p_occluder, bool p_enabled){
	_wasgo_VisualServer_wrapper_canvas_light_occluder_set_enabled(wasgo_id, ((Variant) p_occluder).get_wasgo_id(), p_enabled);
}
void VisualServer::canvas_light_occluder_set_light_mask(RID p_occluder, int p_mask){
	_wasgo_VisualServer_wrapper_canvas_light_occluder_set_light_mask(wasgo_id, ((Variant) p_occluder).get_wasgo_id(), p_mask);
}
void VisualServer::canvas_light_occluder_set_polygon(RID p_occluder, RID p_polygon){
	_wasgo_VisualServer_wrapper_canvas_light_occluder_set_polygon(wasgo_id, ((Variant) p_occluder).get_wasgo_id(), ((Variant) p_polygon).get_wasgo_id());
}
void VisualServer::canvas_light_occluder_set_transform(RID p_occluder, Transform2D p_transform){
	_wasgo_VisualServer_wrapper_canvas_light_occluder_set_transform(wasgo_id, ((Variant) p_occluder).get_wasgo_id(), ((Variant) p_transform).get_wasgo_id());
}
void VisualServer::canvas_light_set_color(RID p_light, Color p_color){
	_wasgo_VisualServer_wrapper_canvas_light_set_color(wasgo_id, ((Variant) p_light).get_wasgo_id(), ((Variant) p_color).get_wasgo_id());
}
void VisualServer::canvas_light_set_enabled(RID p_light, bool p_enabled){
	_wasgo_VisualServer_wrapper_canvas_light_set_enabled(wasgo_id, ((Variant) p_light).get_wasgo_id(), p_enabled);
}
void VisualServer::canvas_light_set_energy(RID p_light, float p_energy){
	_wasgo_VisualServer_wrapper_canvas_light_set_energy(wasgo_id, ((Variant) p_light).get_wasgo_id(), p_energy);
}
void VisualServer::canvas_light_set_height(RID p_light, float p_height){
	_wasgo_VisualServer_wrapper_canvas_light_set_height(wasgo_id, ((Variant) p_light).get_wasgo_id(), p_height);
}
void VisualServer::canvas_light_set_item_cull_mask(RID p_light, int p_mask){
	_wasgo_VisualServer_wrapper_canvas_light_set_item_cull_mask(wasgo_id, ((Variant) p_light).get_wasgo_id(), p_mask);
}
void VisualServer::canvas_light_set_item_shadow_cull_mask(RID p_light, int p_mask){
	_wasgo_VisualServer_wrapper_canvas_light_set_item_shadow_cull_mask(wasgo_id, ((Variant) p_light).get_wasgo_id(), p_mask);
}
void VisualServer::canvas_light_set_layer_range(RID p_light, int p_min_layer, int p_max_layer){
	_wasgo_VisualServer_wrapper_canvas_light_set_layer_range(wasgo_id, ((Variant) p_light).get_wasgo_id(), p_min_layer, p_max_layer);
}
void VisualServer::canvas_light_set_mode(RID p_light, VisualServer::CanvasLightMode p_mode){
	_wasgo_VisualServer_wrapper_canvas_light_set_mode(wasgo_id, ((Variant) p_light).get_wasgo_id(), ((Variant) p_mode).get_wasgo_id());
}
void VisualServer::canvas_light_set_scale(RID p_light, float p_scale){
	_wasgo_VisualServer_wrapper_canvas_light_set_scale(wasgo_id, ((Variant) p_light).get_wasgo_id(), p_scale);
}
void VisualServer::canvas_light_set_shadow_buffer_size(RID p_light, int p_size){
	_wasgo_VisualServer_wrapper_canvas_light_set_shadow_buffer_size(wasgo_id, ((Variant) p_light).get_wasgo_id(), p_size);
}
void VisualServer::canvas_light_set_shadow_color(RID p_light, Color p_color){
	_wasgo_VisualServer_wrapper_canvas_light_set_shadow_color(wasgo_id, ((Variant) p_light).get_wasgo_id(), ((Variant) p_color).get_wasgo_id());
}
void VisualServer::canvas_light_set_shadow_enabled(RID p_light, bool p_enabled){
	_wasgo_VisualServer_wrapper_canvas_light_set_shadow_enabled(wasgo_id, ((Variant) p_light).get_wasgo_id(), p_enabled);
}
void VisualServer::canvas_light_set_shadow_filter(RID p_light, VisualServer::CanvasLightShadowFilter p_filter){
	_wasgo_VisualServer_wrapper_canvas_light_set_shadow_filter(wasgo_id, ((Variant) p_light).get_wasgo_id(), ((Variant) p_filter).get_wasgo_id());
}
void VisualServer::canvas_light_set_shadow_gradient_length(RID p_light, float p_length){
	_wasgo_VisualServer_wrapper_canvas_light_set_shadow_gradient_length(wasgo_id, ((Variant) p_light).get_wasgo_id(), p_length);
}
void VisualServer::canvas_light_set_shadow_smooth(RID p_light, float p_smooth){
	_wasgo_VisualServer_wrapper_canvas_light_set_shadow_smooth(wasgo_id, ((Variant) p_light).get_wasgo_id(), p_smooth);
}
void VisualServer::canvas_light_set_texture(RID p_light, RID p_texture){
	_wasgo_VisualServer_wrapper_canvas_light_set_texture(wasgo_id, ((Variant) p_light).get_wasgo_id(), ((Variant) p_texture).get_wasgo_id());
}
void VisualServer::canvas_light_set_texture_offset(RID p_light, Vector2 p_offset){
	_wasgo_VisualServer_wrapper_canvas_light_set_texture_offset(wasgo_id, ((Variant) p_light).get_wasgo_id(), ((Variant) p_offset).get_wasgo_id());
}
void VisualServer::canvas_light_set_transform(RID p_light, Transform2D p_transform){
	_wasgo_VisualServer_wrapper_canvas_light_set_transform(wasgo_id, ((Variant) p_light).get_wasgo_id(), ((Variant) p_transform).get_wasgo_id());
}
void VisualServer::canvas_light_set_z_range(RID p_light, int p_min_z, int p_max_z){
	_wasgo_VisualServer_wrapper_canvas_light_set_z_range(wasgo_id, ((Variant) p_light).get_wasgo_id(), p_min_z, p_max_z);
}
RID VisualServer::canvas_occluder_polygon_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_canvas_occluder_polygon_create(wasgo_id));
}
void VisualServer::canvas_occluder_polygon_set_cull_mode(RID p_occluder_polygon, VisualServer::CanvasOccluderPolygonCullMode p_mode){
	_wasgo_VisualServer_wrapper_canvas_occluder_polygon_set_cull_mode(wasgo_id, ((Variant) p_occluder_polygon).get_wasgo_id(), ((Variant) p_mode).get_wasgo_id());
}
void VisualServer::canvas_occluder_polygon_set_shape(RID p_occluder_polygon, PoolVector2Array p_shape, bool p_closed){
	_wasgo_VisualServer_wrapper_canvas_occluder_polygon_set_shape(wasgo_id, ((Variant) p_occluder_polygon).get_wasgo_id(), ((Variant) p_shape).get_wasgo_id(), p_closed);
}
void VisualServer::canvas_occluder_polygon_set_shape_as_lines(RID p_occluder_polygon, PoolVector2Array p_shape){
	_wasgo_VisualServer_wrapper_canvas_occluder_polygon_set_shape_as_lines(wasgo_id, ((Variant) p_occluder_polygon).get_wasgo_id(), ((Variant) p_shape).get_wasgo_id());
}
void VisualServer::canvas_set_item_mirroring(RID p_canvas, RID p_item, Vector2 p_mirroring){
	_wasgo_VisualServer_wrapper_canvas_set_item_mirroring(wasgo_id, ((Variant) p_canvas).get_wasgo_id(), ((Variant) p_item).get_wasgo_id(), ((Variant) p_mirroring).get_wasgo_id());
}
void VisualServer::canvas_set_modulate(RID p_canvas, Color p_color){
	_wasgo_VisualServer_wrapper_canvas_set_modulate(wasgo_id, ((Variant) p_canvas).get_wasgo_id(), ((Variant) p_color).get_wasgo_id());
}
RID VisualServer::directional_light_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_directional_light_create(wasgo_id));
}
void VisualServer::draw(bool p_swap_buffers = (bool) true, float p_frame_step = (float) 0){
	_wasgo_VisualServer_wrapper_draw(wasgo_id, p_swap_buffers, p_frame_step);
}
RID VisualServer::environment_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_environment_create(wasgo_id));
}
void VisualServer::environment_set_adjustment(RID p_env, bool p_enable, float p_brightness, float p_contrast, float p_saturation, RID p_ramp){
	_wasgo_VisualServer_wrapper_environment_set_adjustment(wasgo_id, ((Variant) p_env).get_wasgo_id(), p_enable, p_brightness, p_contrast, p_saturation, ((Variant) p_ramp).get_wasgo_id());
}
void VisualServer::environment_set_ambient_light(RID p_env, Color p_color, float p_energy = (float) 1, float p_sky_contibution = (float) 0){
	_wasgo_VisualServer_wrapper_environment_set_ambient_light(wasgo_id, ((Variant) p_env).get_wasgo_id(), ((Variant) p_color).get_wasgo_id(), p_energy, p_sky_contibution);
}
void VisualServer::environment_set_background(RID p_env, VisualServer::EnvironmentBG p_bg){
	_wasgo_VisualServer_wrapper_environment_set_background(wasgo_id, ((Variant) p_env).get_wasgo_id(), ((Variant) p_bg).get_wasgo_id());
}
void VisualServer::environment_set_bg_color(RID p_env, Color p_color){
	_wasgo_VisualServer_wrapper_environment_set_bg_color(wasgo_id, ((Variant) p_env).get_wasgo_id(), ((Variant) p_color).get_wasgo_id());
}
void VisualServer::environment_set_bg_energy(RID p_env, float p_energy){
	_wasgo_VisualServer_wrapper_environment_set_bg_energy(wasgo_id, ((Variant) p_env).get_wasgo_id(), p_energy);
}
void VisualServer::environment_set_canvas_max_layer(RID p_env, int p_max_layer){
	_wasgo_VisualServer_wrapper_environment_set_canvas_max_layer(wasgo_id, ((Variant) p_env).get_wasgo_id(), p_max_layer);
}
void VisualServer::environment_set_dof_blur_far(RID p_env, bool p_enable, float p_distance, float p_transition, float p_far_amount, VisualServer::EnvironmentDOFBlurQuality p_quality){
	_wasgo_VisualServer_wrapper_environment_set_dof_blur_far(wasgo_id, ((Variant) p_env).get_wasgo_id(), p_enable, p_distance, p_transition, p_far_amount, ((Variant) p_quality).get_wasgo_id());
}
void VisualServer::environment_set_dof_blur_near(RID p_env, bool p_enable, float p_distance, float p_transition, float p_far_amount, VisualServer::EnvironmentDOFBlurQuality p_quality){
	_wasgo_VisualServer_wrapper_environment_set_dof_blur_near(wasgo_id, ((Variant) p_env).get_wasgo_id(), p_enable, p_distance, p_transition, p_far_amount, ((Variant) p_quality).get_wasgo_id());
}
void VisualServer::environment_set_fog(RID p_env, bool p_enable, Color p_color, Color p_sun_color, float p_sun_amount){
	_wasgo_VisualServer_wrapper_environment_set_fog(wasgo_id, ((Variant) p_env).get_wasgo_id(), p_enable, ((Variant) p_color).get_wasgo_id(), ((Variant) p_sun_color).get_wasgo_id(), p_sun_amount);
}
void VisualServer::environment_set_fog_depth(RID p_env, bool p_enable, float p_depth_begin, float p_depth_end, float p_depth_curve, bool p_transmit, float p_transmit_curve){
	_wasgo_VisualServer_wrapper_environment_set_fog_depth(wasgo_id, ((Variant) p_env).get_wasgo_id(), p_enable, p_depth_begin, p_depth_end, p_depth_curve, p_transmit, p_transmit_curve);
}
void VisualServer::environment_set_fog_height(RID p_env, bool p_enable, float p_min_height, float p_max_height, float p_height_curve){
	_wasgo_VisualServer_wrapper_environment_set_fog_height(wasgo_id, ((Variant) p_env).get_wasgo_id(), p_enable, p_min_height, p_max_height, p_height_curve);
}
void VisualServer::environment_set_glow(RID p_env, bool p_enable, int p_level_flags, float p_intensity, float p_strength, float p_bloom_threshold, VisualServer::EnvironmentGlowBlendMode p_blend_mode, float p_hdr_bleed_threshold, float p_hdr_bleed_scale, float p_hdr_luminance_cap, bool p_bicubic_upscale){
	_wasgo_VisualServer_wrapper_environment_set_glow(wasgo_id, ((Variant) p_env).get_wasgo_id(), p_enable, p_level_flags, p_intensity, p_strength, p_bloom_threshold, ((Variant) p_blend_mode).get_wasgo_id(), p_hdr_bleed_threshold, p_hdr_bleed_scale, p_hdr_luminance_cap, p_bicubic_upscale);
}
void VisualServer::environment_set_sky(RID p_env, RID p_sky){
	_wasgo_VisualServer_wrapper_environment_set_sky(wasgo_id, ((Variant) p_env).get_wasgo_id(), ((Variant) p_sky).get_wasgo_id());
}
void VisualServer::environment_set_sky_custom_fov(RID p_env, float p_scale){
	_wasgo_VisualServer_wrapper_environment_set_sky_custom_fov(wasgo_id, ((Variant) p_env).get_wasgo_id(), p_scale);
}
void VisualServer::environment_set_sky_orientation(RID p_env, Basis p_orientation){
	_wasgo_VisualServer_wrapper_environment_set_sky_orientation(wasgo_id, ((Variant) p_env).get_wasgo_id(), ((Variant) p_orientation).get_wasgo_id());
}
void VisualServer::environment_set_ssao(RID p_env, bool p_enable, float p_radius, float p_intensity, float p_radius2, float p_intensity2, float p_bias, float p_light_affect, float p_ao_channel_affect, Color p_color, VisualServer::EnvironmentSSAOQuality p_quality, VisualServer::EnvironmentSSAOBlur p_blur, float p_bilateral_sharpness){
	_wasgo_VisualServer_wrapper_environment_set_ssao(wasgo_id, ((Variant) p_env).get_wasgo_id(), p_enable, p_radius, p_intensity, p_radius2, p_intensity2, p_bias, p_light_affect, p_ao_channel_affect, ((Variant) p_color).get_wasgo_id(), ((Variant) p_quality).get_wasgo_id(), ((Variant) p_blur).get_wasgo_id(), p_bilateral_sharpness);
}
void VisualServer::environment_set_ssr(RID p_env, bool p_enable, int p_max_steps, float p_fade_in, float p_fade_out, float p_depth_tolerance, bool p_roughness){
	_wasgo_VisualServer_wrapper_environment_set_ssr(wasgo_id, ((Variant) p_env).get_wasgo_id(), p_enable, p_max_steps, p_fade_in, p_fade_out, p_depth_tolerance, p_roughness);
}
void VisualServer::environment_set_tonemap(RID p_env, VisualServer::EnvironmentToneMapper p_tone_mapper, float p_exposure, float p_white, bool p_auto_exposure, float p_min_luminance, float p_max_luminance, float p_auto_exp_speed, float p_auto_exp_grey){
	_wasgo_VisualServer_wrapper_environment_set_tonemap(wasgo_id, ((Variant) p_env).get_wasgo_id(), ((Variant) p_tone_mapper).get_wasgo_id(), p_exposure, p_white, p_auto_exposure, p_min_luminance, p_max_luminance, p_auto_exp_speed, p_auto_exp_grey);
}
void VisualServer::finish(){
	_wasgo_VisualServer_wrapper_finish(wasgo_id);
}
void VisualServer::force_draw(bool p_swap_buffers = (bool) true, float p_frame_step = (float) 0){
	_wasgo_VisualServer_wrapper_force_draw(wasgo_id, p_swap_buffers, p_frame_step);
}
void VisualServer::force_sync(){
	_wasgo_VisualServer_wrapper_force_sync(wasgo_id);
}
void VisualServer::free_rid(RID p_rid){
	_wasgo_VisualServer_wrapper_free_rid(wasgo_id, ((Variant) p_rid).get_wasgo_id());
}
int VisualServer::get_render_info(VisualServer::RenderInfo p_info){
	return (int) _wasgo_VisualServer_wrapper_get_render_info(wasgo_id, ((Variant) p_info).get_wasgo_id());
}
RID VisualServer::get_test_cube(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_get_test_cube(wasgo_id));
}
RID VisualServer::get_test_texture(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_get_test_texture(wasgo_id));
}
String VisualServer::get_video_adapter_name(){
	return String::from_wasgo_id(_wasgo_VisualServer_wrapper_get_video_adapter_name(wasgo_id));
}
String VisualServer::get_video_adapter_vendor(){
	return String::from_wasgo_id(_wasgo_VisualServer_wrapper_get_video_adapter_vendor(wasgo_id));
}
RID VisualServer::get_white_texture(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_get_white_texture(wasgo_id));
}
RID VisualServer::gi_probe_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_gi_probe_create(wasgo_id));
}
float VisualServer::gi_probe_get_bias(RID p_probe){
	return (float) _wasgo_VisualServer_wrapper_gi_probe_get_bias(wasgo_id, ((Variant) p_probe).get_wasgo_id());
}
::AABB VisualServer::gi_probe_get_bounds(RID p_probe){
	return ::AABB::from_wasgo_id(_wasgo_VisualServer_wrapper_gi_probe_get_bounds(wasgo_id, ((Variant) p_probe).get_wasgo_id()));
}
float VisualServer::gi_probe_get_cell_size(RID p_probe){
	return (float) _wasgo_VisualServer_wrapper_gi_probe_get_cell_size(wasgo_id, ((Variant) p_probe).get_wasgo_id());
}
PoolIntArray VisualServer::gi_probe_get_dynamic_data(RID p_probe){
	return PoolIntArray::from_wasgo_id(_wasgo_VisualServer_wrapper_gi_probe_get_dynamic_data(wasgo_id, ((Variant) p_probe).get_wasgo_id()));
}
int VisualServer::gi_probe_get_dynamic_range(RID p_probe){
	return (int) _wasgo_VisualServer_wrapper_gi_probe_get_dynamic_range(wasgo_id, ((Variant) p_probe).get_wasgo_id());
}
float VisualServer::gi_probe_get_energy(RID p_probe){
	return (float) _wasgo_VisualServer_wrapper_gi_probe_get_energy(wasgo_id, ((Variant) p_probe).get_wasgo_id());
}
float VisualServer::gi_probe_get_normal_bias(RID p_probe){
	return (float) _wasgo_VisualServer_wrapper_gi_probe_get_normal_bias(wasgo_id, ((Variant) p_probe).get_wasgo_id());
}
float VisualServer::gi_probe_get_propagation(RID p_probe){
	return (float) _wasgo_VisualServer_wrapper_gi_probe_get_propagation(wasgo_id, ((Variant) p_probe).get_wasgo_id());
}
Transform VisualServer::gi_probe_get_to_cell_xform(RID p_probe){
	return Transform::from_wasgo_id(_wasgo_VisualServer_wrapper_gi_probe_get_to_cell_xform(wasgo_id, ((Variant) p_probe).get_wasgo_id()));
}
bool VisualServer::gi_probe_is_compressed(RID p_probe){
	return (bool) _wasgo_VisualServer_wrapper_gi_probe_is_compressed(wasgo_id, ((Variant) p_probe).get_wasgo_id());
}
bool VisualServer::gi_probe_is_interior(RID p_probe){
	return (bool) _wasgo_VisualServer_wrapper_gi_probe_is_interior(wasgo_id, ((Variant) p_probe).get_wasgo_id());
}
void VisualServer::gi_probe_set_bias(RID p_probe, float p_bias){
	_wasgo_VisualServer_wrapper_gi_probe_set_bias(wasgo_id, ((Variant) p_probe).get_wasgo_id(), p_bias);
}
void VisualServer::gi_probe_set_bounds(RID p_probe, ::AABB p_bounds){
	_wasgo_VisualServer_wrapper_gi_probe_set_bounds(wasgo_id, ((Variant) p_probe).get_wasgo_id(), ((Variant) p_bounds).get_wasgo_id());
}
void VisualServer::gi_probe_set_cell_size(RID p_probe, float p_range){
	_wasgo_VisualServer_wrapper_gi_probe_set_cell_size(wasgo_id, ((Variant) p_probe).get_wasgo_id(), p_range);
}
void VisualServer::gi_probe_set_compress(RID p_probe, bool p_enable){
	_wasgo_VisualServer_wrapper_gi_probe_set_compress(wasgo_id, ((Variant) p_probe).get_wasgo_id(), p_enable);
}
void VisualServer::gi_probe_set_dynamic_data(RID p_probe, PoolIntArray p_data){
	_wasgo_VisualServer_wrapper_gi_probe_set_dynamic_data(wasgo_id, ((Variant) p_probe).get_wasgo_id(), ((Variant) p_data).get_wasgo_id());
}
void VisualServer::gi_probe_set_dynamic_range(RID p_probe, int p_range){
	_wasgo_VisualServer_wrapper_gi_probe_set_dynamic_range(wasgo_id, ((Variant) p_probe).get_wasgo_id(), p_range);
}
void VisualServer::gi_probe_set_energy(RID p_probe, float p_energy){
	_wasgo_VisualServer_wrapper_gi_probe_set_energy(wasgo_id, ((Variant) p_probe).get_wasgo_id(), p_energy);
}
void VisualServer::gi_probe_set_interior(RID p_probe, bool p_enable){
	_wasgo_VisualServer_wrapper_gi_probe_set_interior(wasgo_id, ((Variant) p_probe).get_wasgo_id(), p_enable);
}
void VisualServer::gi_probe_set_normal_bias(RID p_probe, float p_bias){
	_wasgo_VisualServer_wrapper_gi_probe_set_normal_bias(wasgo_id, ((Variant) p_probe).get_wasgo_id(), p_bias);
}
void VisualServer::gi_probe_set_propagation(RID p_probe, float p_propagation){
	_wasgo_VisualServer_wrapper_gi_probe_set_propagation(wasgo_id, ((Variant) p_probe).get_wasgo_id(), p_propagation);
}
void VisualServer::gi_probe_set_to_cell_xform(RID p_probe, Transform p_xform){
	_wasgo_VisualServer_wrapper_gi_probe_set_to_cell_xform(wasgo_id, ((Variant) p_probe).get_wasgo_id(), ((Variant) p_xform).get_wasgo_id());
}
bool VisualServer::has_changed(){
	return (bool) _wasgo_VisualServer_wrapper_has_changed(wasgo_id);
}
bool VisualServer::has_feature(VisualServer::Features p_feature){
	return (bool) _wasgo_VisualServer_wrapper_has_feature(wasgo_id, ((Variant) p_feature).get_wasgo_id());
}
bool VisualServer::has_os_feature(String p_feature){
	return (bool) _wasgo_VisualServer_wrapper_has_os_feature(wasgo_id, ((Variant) p_feature).get_wasgo_id());
}
void VisualServer::immediate_begin(RID p_immediate, VisualServer::PrimitiveType p_primitive, RID p_texture = (RID) [rid]){
	_wasgo_VisualServer_wrapper_immediate_begin(wasgo_id, ((Variant) p_immediate).get_wasgo_id(), ((Variant) p_primitive).get_wasgo_id(), ((Variant) p_texture).get_wasgo_id());
}
void VisualServer::immediate_clear(RID p_immediate){
	_wasgo_VisualServer_wrapper_immediate_clear(wasgo_id, ((Variant) p_immediate).get_wasgo_id());
}
void VisualServer::immediate_color(RID p_immediate, Color p_color){
	_wasgo_VisualServer_wrapper_immediate_color(wasgo_id, ((Variant) p_immediate).get_wasgo_id(), ((Variant) p_color).get_wasgo_id());
}
RID VisualServer::immediate_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_immediate_create(wasgo_id));
}
void VisualServer::immediate_end(RID p_immediate){
	_wasgo_VisualServer_wrapper_immediate_end(wasgo_id, ((Variant) p_immediate).get_wasgo_id());
}
RID VisualServer::immediate_get_material(RID p_immediate){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_immediate_get_material(wasgo_id, ((Variant) p_immediate).get_wasgo_id()));
}
void VisualServer::immediate_normal(RID p_immediate, Vector3 p_normal){
	_wasgo_VisualServer_wrapper_immediate_normal(wasgo_id, ((Variant) p_immediate).get_wasgo_id(), ((Variant) p_normal).get_wasgo_id());
}
void VisualServer::immediate_set_material(RID p_immediate, RID p_material){
	_wasgo_VisualServer_wrapper_immediate_set_material(wasgo_id, ((Variant) p_immediate).get_wasgo_id(), ((Variant) p_material).get_wasgo_id());
}
void VisualServer::immediate_tangent(RID p_immediate, Plane p_tangent){
	_wasgo_VisualServer_wrapper_immediate_tangent(wasgo_id, ((Variant) p_immediate).get_wasgo_id(), ((Variant) p_tangent).get_wasgo_id());
}
void VisualServer::immediate_uv(RID p_immediate, Vector2 p_tex_uv){
	_wasgo_VisualServer_wrapper_immediate_uv(wasgo_id, ((Variant) p_immediate).get_wasgo_id(), ((Variant) p_tex_uv).get_wasgo_id());
}
void VisualServer::immediate_uv2(RID p_immediate, Vector2 p_tex_uv){
	_wasgo_VisualServer_wrapper_immediate_uv2(wasgo_id, ((Variant) p_immediate).get_wasgo_id(), ((Variant) p_tex_uv).get_wasgo_id());
}
void VisualServer::immediate_vertex(RID p_immediate, Vector3 p_vertex){
	_wasgo_VisualServer_wrapper_immediate_vertex(wasgo_id, ((Variant) p_immediate).get_wasgo_id(), ((Variant) p_vertex).get_wasgo_id());
}
void VisualServer::immediate_vertex_2d(RID p_immediate, Vector2 p_vertex){
	_wasgo_VisualServer_wrapper_immediate_vertex_2d(wasgo_id, ((Variant) p_immediate).get_wasgo_id(), ((Variant) p_vertex).get_wasgo_id());
}
void VisualServer::init(){
	_wasgo_VisualServer_wrapper_init(wasgo_id);
}
void VisualServer::instance_attach_object_instance_id(RID p_instance, int p_id){
	_wasgo_VisualServer_wrapper_instance_attach_object_instance_id(wasgo_id, ((Variant) p_instance).get_wasgo_id(), p_id);
}
void VisualServer::instance_attach_skeleton(RID p_instance, RID p_skeleton){
	_wasgo_VisualServer_wrapper_instance_attach_skeleton(wasgo_id, ((Variant) p_instance).get_wasgo_id(), ((Variant) p_skeleton).get_wasgo_id());
}
RID VisualServer::instance_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_instance_create(wasgo_id));
}
RID VisualServer::instance_create2(RID p_base, RID p_scenario){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_instance_create2(wasgo_id, ((Variant) p_base).get_wasgo_id(), ((Variant) p_scenario).get_wasgo_id()));
}
void VisualServer::instance_geometry_set_as_instance_lod(RID p_instance, RID p_as_lod_of_instance){
	_wasgo_VisualServer_wrapper_instance_geometry_set_as_instance_lod(wasgo_id, ((Variant) p_instance).get_wasgo_id(), ((Variant) p_as_lod_of_instance).get_wasgo_id());
}
void VisualServer::instance_geometry_set_cast_shadows_setting(RID p_instance, VisualServer::ShadowCastingSetting p_shadow_casting_setting){
	_wasgo_VisualServer_wrapper_instance_geometry_set_cast_shadows_setting(wasgo_id, ((Variant) p_instance).get_wasgo_id(), ((Variant) p_shadow_casting_setting).get_wasgo_id());
}
void VisualServer::instance_geometry_set_draw_range(RID p_instance, float p_min, float p_max, float p_min_margin, float p_max_margin){
	_wasgo_VisualServer_wrapper_instance_geometry_set_draw_range(wasgo_id, ((Variant) p_instance).get_wasgo_id(), p_min, p_max, p_min_margin, p_max_margin);
}
void VisualServer::instance_geometry_set_flag(RID p_instance, VisualServer::InstanceFlags p_flag, bool p_enabled){
	_wasgo_VisualServer_wrapper_instance_geometry_set_flag(wasgo_id, ((Variant) p_instance).get_wasgo_id(), ((Variant) p_flag).get_wasgo_id(), p_enabled);
}
void VisualServer::instance_geometry_set_material_override(RID p_instance, RID p_material){
	_wasgo_VisualServer_wrapper_instance_geometry_set_material_override(wasgo_id, ((Variant) p_instance).get_wasgo_id(), ((Variant) p_material).get_wasgo_id());
}
void VisualServer::instance_set_base(RID p_instance, RID p_base){
	_wasgo_VisualServer_wrapper_instance_set_base(wasgo_id, ((Variant) p_instance).get_wasgo_id(), ((Variant) p_base).get_wasgo_id());
}
void VisualServer::instance_set_blend_shape_weight(RID p_instance, int p_shape, float p_weight){
	_wasgo_VisualServer_wrapper_instance_set_blend_shape_weight(wasgo_id, ((Variant) p_instance).get_wasgo_id(), p_shape, p_weight);
}
void VisualServer::instance_set_custom_aabb(RID p_instance, ::AABB p_aabb){
	_wasgo_VisualServer_wrapper_instance_set_custom_aabb(wasgo_id, ((Variant) p_instance).get_wasgo_id(), ((Variant) p_aabb).get_wasgo_id());
}
void VisualServer::instance_set_exterior(RID p_instance, bool p_enabled){
	_wasgo_VisualServer_wrapper_instance_set_exterior(wasgo_id, ((Variant) p_instance).get_wasgo_id(), p_enabled);
}
void VisualServer::instance_set_extra_visibility_margin(RID p_instance, float p_margin){
	_wasgo_VisualServer_wrapper_instance_set_extra_visibility_margin(wasgo_id, ((Variant) p_instance).get_wasgo_id(), p_margin);
}
void VisualServer::instance_set_layer_mask(RID p_instance, int p_mask){
	_wasgo_VisualServer_wrapper_instance_set_layer_mask(wasgo_id, ((Variant) p_instance).get_wasgo_id(), p_mask);
}
void VisualServer::instance_set_scenario(RID p_instance, RID p_scenario){
	_wasgo_VisualServer_wrapper_instance_set_scenario(wasgo_id, ((Variant) p_instance).get_wasgo_id(), ((Variant) p_scenario).get_wasgo_id());
}
void VisualServer::instance_set_surface_material(RID p_instance, int p_surface, RID p_material){
	_wasgo_VisualServer_wrapper_instance_set_surface_material(wasgo_id, ((Variant) p_instance).get_wasgo_id(), p_surface, ((Variant) p_material).get_wasgo_id());
}
void VisualServer::instance_set_transform(RID p_instance, Transform p_transform){
	_wasgo_VisualServer_wrapper_instance_set_transform(wasgo_id, ((Variant) p_instance).get_wasgo_id(), ((Variant) p_transform).get_wasgo_id());
}
void VisualServer::instance_set_use_lightmap(RID p_instance, RID p_lightmap_instance, RID p_lightmap){
	_wasgo_VisualServer_wrapper_instance_set_use_lightmap(wasgo_id, ((Variant) p_instance).get_wasgo_id(), ((Variant) p_lightmap_instance).get_wasgo_id(), ((Variant) p_lightmap).get_wasgo_id());
}
void VisualServer::instance_set_visible(RID p_instance, bool p_visible){
	_wasgo_VisualServer_wrapper_instance_set_visible(wasgo_id, ((Variant) p_instance).get_wasgo_id(), p_visible);
}
Array VisualServer::instances_cull_aabb(::AABB p_aabb, RID p_scenario = (RID) [rid]){
	return Array::from_wasgo_id(_wasgo_VisualServer_wrapper_instances_cull_aabb(wasgo_id, ((Variant) p_aabb).get_wasgo_id(), ((Variant) p_scenario).get_wasgo_id()));
}
Array VisualServer::instances_cull_convex(Array p_convex, RID p_scenario = (RID) [rid]){
	return Array::from_wasgo_id(_wasgo_VisualServer_wrapper_instances_cull_convex(wasgo_id, ((Variant) p_convex).get_wasgo_id(), ((Variant) p_scenario).get_wasgo_id()));
}
Array VisualServer::instances_cull_ray(Vector3 p_from, Vector3 p_to, RID p_scenario = (RID) [rid]){
	return Array::from_wasgo_id(_wasgo_VisualServer_wrapper_instances_cull_ray(wasgo_id, ((Variant) p_from).get_wasgo_id(), ((Variant) p_to).get_wasgo_id(), ((Variant) p_scenario).get_wasgo_id()));
}
bool VisualServer::is_render_loop_enabled(){
	return (bool) _wasgo_VisualServer_wrapper_is_render_loop_enabled(wasgo_id);
}
void VisualServer::light_directional_set_blend_splits(RID p_light, bool p_enable){
	_wasgo_VisualServer_wrapper_light_directional_set_blend_splits(wasgo_id, ((Variant) p_light).get_wasgo_id(), p_enable);
}
void VisualServer::light_directional_set_shadow_depth_range_mode(RID p_light, VisualServer::LightDirectionalShadowDepthRangeMode p_range_mode){
	_wasgo_VisualServer_wrapper_light_directional_set_shadow_depth_range_mode(wasgo_id, ((Variant) p_light).get_wasgo_id(), ((Variant) p_range_mode).get_wasgo_id());
}
void VisualServer::light_directional_set_shadow_mode(RID p_light, VisualServer::LightDirectionalShadowMode p_mode){
	_wasgo_VisualServer_wrapper_light_directional_set_shadow_mode(wasgo_id, ((Variant) p_light).get_wasgo_id(), ((Variant) p_mode).get_wasgo_id());
}
void VisualServer::light_omni_set_shadow_detail(RID p_light, VisualServer::LightOmniShadowDetail p_detail){
	_wasgo_VisualServer_wrapper_light_omni_set_shadow_detail(wasgo_id, ((Variant) p_light).get_wasgo_id(), ((Variant) p_detail).get_wasgo_id());
}
void VisualServer::light_omni_set_shadow_mode(RID p_light, VisualServer::LightOmniShadowMode p_mode){
	_wasgo_VisualServer_wrapper_light_omni_set_shadow_mode(wasgo_id, ((Variant) p_light).get_wasgo_id(), ((Variant) p_mode).get_wasgo_id());
}
void VisualServer::light_set_bake_mode(RID p_light, VisualServer::LightBakeMode p_bake_mode){
	_wasgo_VisualServer_wrapper_light_set_bake_mode(wasgo_id, ((Variant) p_light).get_wasgo_id(), ((Variant) p_bake_mode).get_wasgo_id());
}
void VisualServer::light_set_color(RID p_light, Color p_color){
	_wasgo_VisualServer_wrapper_light_set_color(wasgo_id, ((Variant) p_light).get_wasgo_id(), ((Variant) p_color).get_wasgo_id());
}
void VisualServer::light_set_cull_mask(RID p_light, int p_mask){
	_wasgo_VisualServer_wrapper_light_set_cull_mask(wasgo_id, ((Variant) p_light).get_wasgo_id(), p_mask);
}
void VisualServer::light_set_negative(RID p_light, bool p_enable){
	_wasgo_VisualServer_wrapper_light_set_negative(wasgo_id, ((Variant) p_light).get_wasgo_id(), p_enable);
}
void VisualServer::light_set_param(RID p_light, VisualServer::LightParam p_param, float p_value){
	_wasgo_VisualServer_wrapper_light_set_param(wasgo_id, ((Variant) p_light).get_wasgo_id(), ((Variant) p_param).get_wasgo_id(), p_value);
}
void VisualServer::light_set_projector(RID p_light, RID p_texture){
	_wasgo_VisualServer_wrapper_light_set_projector(wasgo_id, ((Variant) p_light).get_wasgo_id(), ((Variant) p_texture).get_wasgo_id());
}
void VisualServer::light_set_reverse_cull_face_mode(RID p_light, bool p_enabled){
	_wasgo_VisualServer_wrapper_light_set_reverse_cull_face_mode(wasgo_id, ((Variant) p_light).get_wasgo_id(), p_enabled);
}
void VisualServer::light_set_shadow(RID p_light, bool p_enabled){
	_wasgo_VisualServer_wrapper_light_set_shadow(wasgo_id, ((Variant) p_light).get_wasgo_id(), p_enabled);
}
void VisualServer::light_set_shadow_color(RID p_light, Color p_color){
	_wasgo_VisualServer_wrapper_light_set_shadow_color(wasgo_id, ((Variant) p_light).get_wasgo_id(), ((Variant) p_color).get_wasgo_id());
}
void VisualServer::light_set_use_gi(RID p_light, bool p_enabled){
	_wasgo_VisualServer_wrapper_light_set_use_gi(wasgo_id, ((Variant) p_light).get_wasgo_id(), p_enabled);
}
RID VisualServer::lightmap_capture_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_lightmap_capture_create(wasgo_id));
}
::AABB VisualServer::lightmap_capture_get_bounds(RID p_capture){
	return ::AABB::from_wasgo_id(_wasgo_VisualServer_wrapper_lightmap_capture_get_bounds(wasgo_id, ((Variant) p_capture).get_wasgo_id()));
}
float VisualServer::lightmap_capture_get_energy(RID p_capture){
	return (float) _wasgo_VisualServer_wrapper_lightmap_capture_get_energy(wasgo_id, ((Variant) p_capture).get_wasgo_id());
}
PoolByteArray VisualServer::lightmap_capture_get_octree(RID p_capture){
	return PoolByteArray::from_wasgo_id(_wasgo_VisualServer_wrapper_lightmap_capture_get_octree(wasgo_id, ((Variant) p_capture).get_wasgo_id()));
}
int VisualServer::lightmap_capture_get_octree_cell_subdiv(RID p_capture){
	return (int) _wasgo_VisualServer_wrapper_lightmap_capture_get_octree_cell_subdiv(wasgo_id, ((Variant) p_capture).get_wasgo_id());
}
Transform VisualServer::lightmap_capture_get_octree_cell_transform(RID p_capture){
	return Transform::from_wasgo_id(_wasgo_VisualServer_wrapper_lightmap_capture_get_octree_cell_transform(wasgo_id, ((Variant) p_capture).get_wasgo_id()));
}
void VisualServer::lightmap_capture_set_bounds(RID p_capture, ::AABB p_bounds){
	_wasgo_VisualServer_wrapper_lightmap_capture_set_bounds(wasgo_id, ((Variant) p_capture).get_wasgo_id(), ((Variant) p_bounds).get_wasgo_id());
}
void VisualServer::lightmap_capture_set_energy(RID p_capture, float p_energy){
	_wasgo_VisualServer_wrapper_lightmap_capture_set_energy(wasgo_id, ((Variant) p_capture).get_wasgo_id(), p_energy);
}
void VisualServer::lightmap_capture_set_octree(RID p_capture, PoolByteArray p_octree){
	_wasgo_VisualServer_wrapper_lightmap_capture_set_octree(wasgo_id, ((Variant) p_capture).get_wasgo_id(), ((Variant) p_octree).get_wasgo_id());
}
void VisualServer::lightmap_capture_set_octree_cell_subdiv(RID p_capture, int p_subdiv){
	_wasgo_VisualServer_wrapper_lightmap_capture_set_octree_cell_subdiv(wasgo_id, ((Variant) p_capture).get_wasgo_id(), p_subdiv);
}
void VisualServer::lightmap_capture_set_octree_cell_transform(RID p_capture, Transform p_xform){
	_wasgo_VisualServer_wrapper_lightmap_capture_set_octree_cell_transform(wasgo_id, ((Variant) p_capture).get_wasgo_id(), ((Variant) p_xform).get_wasgo_id());
}
RID VisualServer::make_sphere_mesh(int p_latitudes, int p_longitudes, float p_radius){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_make_sphere_mesh(wasgo_id, p_latitudes, p_longitudes, p_radius));
}
RID VisualServer::material_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_material_create(wasgo_id));
}
Variant VisualServer::material_get_param(RID p_material, String p_parameter){
	return Variant::from_wasgo_id(_wasgo_VisualServer_wrapper_material_get_param(wasgo_id, ((Variant) p_material).get_wasgo_id(), ((Variant) p_parameter).get_wasgo_id()));
}
Variant VisualServer::material_get_param_default(RID p_material, String p_parameter){
	return Variant::from_wasgo_id(_wasgo_VisualServer_wrapper_material_get_param_default(wasgo_id, ((Variant) p_material).get_wasgo_id(), ((Variant) p_parameter).get_wasgo_id()));
}
RID VisualServer::material_get_shader(RID p_shader_material){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_material_get_shader(wasgo_id, ((Variant) p_shader_material).get_wasgo_id()));
}
void VisualServer::material_set_line_width(RID p_material, float p_width){
	_wasgo_VisualServer_wrapper_material_set_line_width(wasgo_id, ((Variant) p_material).get_wasgo_id(), p_width);
}
void VisualServer::material_set_next_pass(RID p_material, RID p_next_material){
	_wasgo_VisualServer_wrapper_material_set_next_pass(wasgo_id, ((Variant) p_material).get_wasgo_id(), ((Variant) p_next_material).get_wasgo_id());
}
void VisualServer::material_set_param(RID p_material, String p_parameter, Variant p_value){
	_wasgo_VisualServer_wrapper_material_set_param(wasgo_id, ((Variant) p_material).get_wasgo_id(), ((Variant) p_parameter).get_wasgo_id(), ((Variant) p_value).get_wasgo_id());
}
void VisualServer::material_set_render_priority(RID p_material, int p_priority){
	_wasgo_VisualServer_wrapper_material_set_render_priority(wasgo_id, ((Variant) p_material).get_wasgo_id(), p_priority);
}
void VisualServer::material_set_shader(RID p_shader_material, RID p_shader){
	_wasgo_VisualServer_wrapper_material_set_shader(wasgo_id, ((Variant) p_shader_material).get_wasgo_id(), ((Variant) p_shader).get_wasgo_id());
}
void VisualServer::mesh_add_surface_from_arrays(RID p_mesh, VisualServer::PrimitiveType p_primitive, Array p_arrays, Array p_blend_shapes = (Array) [], int p_compress_format = (int) 97280){
	_wasgo_VisualServer_wrapper_mesh_add_surface_from_arrays(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), ((Variant) p_primitive).get_wasgo_id(), ((Variant) p_arrays).get_wasgo_id(), ((Variant) p_blend_shapes).get_wasgo_id(), p_compress_format);
}
void VisualServer::mesh_clear(RID p_mesh){
	_wasgo_VisualServer_wrapper_mesh_clear(wasgo_id, ((Variant) p_mesh).get_wasgo_id());
}
RID VisualServer::mesh_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_mesh_create(wasgo_id));
}
int VisualServer::mesh_get_blend_shape_count(RID p_mesh){
	return (int) _wasgo_VisualServer_wrapper_mesh_get_blend_shape_count(wasgo_id, ((Variant) p_mesh).get_wasgo_id());
}
VisualServer::BlendShapeMode VisualServer::mesh_get_blend_shape_mode(RID p_mesh){
	return VisualServer::BlendShapeMode::from_wasgo_id(_wasgo_VisualServer_wrapper_mesh_get_blend_shape_mode(wasgo_id, ((Variant) p_mesh).get_wasgo_id()));
}
::AABB VisualServer::mesh_get_custom_aabb(RID p_mesh){
	return ::AABB::from_wasgo_id(_wasgo_VisualServer_wrapper_mesh_get_custom_aabb(wasgo_id, ((Variant) p_mesh).get_wasgo_id()));
}
int VisualServer::mesh_get_surface_count(RID p_mesh){
	return (int) _wasgo_VisualServer_wrapper_mesh_get_surface_count(wasgo_id, ((Variant) p_mesh).get_wasgo_id());
}
void VisualServer::mesh_remove_surface(RID p_mesh, int p_index){
	_wasgo_VisualServer_wrapper_mesh_remove_surface(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), p_index);
}
void VisualServer::mesh_set_blend_shape_count(RID p_mesh, int p_amount){
	_wasgo_VisualServer_wrapper_mesh_set_blend_shape_count(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), p_amount);
}
void VisualServer::mesh_set_blend_shape_mode(RID p_mesh, VisualServer::BlendShapeMode p_mode){
	_wasgo_VisualServer_wrapper_mesh_set_blend_shape_mode(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), ((Variant) p_mode).get_wasgo_id());
}
void VisualServer::mesh_set_custom_aabb(RID p_mesh, ::AABB p_aabb){
	_wasgo_VisualServer_wrapper_mesh_set_custom_aabb(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), ((Variant) p_aabb).get_wasgo_id());
}
::AABB VisualServer::mesh_surface_get_aabb(RID p_mesh, int p_surface){
	return ::AABB::from_wasgo_id(_wasgo_VisualServer_wrapper_mesh_surface_get_aabb(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), p_surface));
}
PoolByteArray VisualServer::mesh_surface_get_array(RID p_mesh, int p_surface){
	return PoolByteArray::from_wasgo_id(_wasgo_VisualServer_wrapper_mesh_surface_get_array(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), p_surface));
}
int VisualServer::mesh_surface_get_array_index_len(RID p_mesh, int p_surface){
	return (int) _wasgo_VisualServer_wrapper_mesh_surface_get_array_index_len(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), p_surface);
}
int VisualServer::mesh_surface_get_array_len(RID p_mesh, int p_surface){
	return (int) _wasgo_VisualServer_wrapper_mesh_surface_get_array_len(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), p_surface);
}
Array VisualServer::mesh_surface_get_arrays(RID p_mesh, int p_surface){
	return Array::from_wasgo_id(_wasgo_VisualServer_wrapper_mesh_surface_get_arrays(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), p_surface));
}
Array VisualServer::mesh_surface_get_blend_shape_arrays(RID p_mesh, int p_surface){
	return Array::from_wasgo_id(_wasgo_VisualServer_wrapper_mesh_surface_get_blend_shape_arrays(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), p_surface));
}
int VisualServer::mesh_surface_get_format(RID p_mesh, int p_surface){
	return (int) _wasgo_VisualServer_wrapper_mesh_surface_get_format(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), p_surface);
}
int VisualServer::mesh_surface_get_format_offset(int p_format, int p_vertex_len, int p_index_len, int p_array_index){
	return (int) _wasgo_VisualServer_wrapper_mesh_surface_get_format_offset(wasgo_id, p_format, p_vertex_len, p_index_len, p_array_index);
}
int VisualServer::mesh_surface_get_format_stride(int p_format, int p_vertex_len, int p_index_len){
	return (int) _wasgo_VisualServer_wrapper_mesh_surface_get_format_stride(wasgo_id, p_format, p_vertex_len, p_index_len);
}
PoolByteArray VisualServer::mesh_surface_get_index_array(RID p_mesh, int p_surface){
	return PoolByteArray::from_wasgo_id(_wasgo_VisualServer_wrapper_mesh_surface_get_index_array(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), p_surface));
}
RID VisualServer::mesh_surface_get_material(RID p_mesh, int p_surface){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_mesh_surface_get_material(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), p_surface));
}
VisualServer::PrimitiveType VisualServer::mesh_surface_get_primitive_type(RID p_mesh, int p_surface){
	return VisualServer::PrimitiveType::from_wasgo_id(_wasgo_VisualServer_wrapper_mesh_surface_get_primitive_type(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), p_surface));
}
Array VisualServer::mesh_surface_get_skeleton_aabb(RID p_mesh, int p_surface){
	return Array::from_wasgo_id(_wasgo_VisualServer_wrapper_mesh_surface_get_skeleton_aabb(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), p_surface));
}
void VisualServer::mesh_surface_set_material(RID p_mesh, int p_surface, RID p_material){
	_wasgo_VisualServer_wrapper_mesh_surface_set_material(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), p_surface, ((Variant) p_material).get_wasgo_id());
}
void VisualServer::mesh_surface_update_region(RID p_mesh, int p_surface, int p_offset, PoolByteArray p_data){
	_wasgo_VisualServer_wrapper_mesh_surface_update_region(wasgo_id, ((Variant) p_mesh).get_wasgo_id(), p_surface, p_offset, ((Variant) p_data).get_wasgo_id());
}
void VisualServer::multimesh_allocate(RID p_multimesh, int p_instances, VisualServer::MultimeshTransformFormat p_transform_format, VisualServer::MultimeshColorFormat p_color_format, VisualServer::MultimeshCustomDataFormat p_custom_data_format = (VisualServer::MultimeshCustomDataFormat) 0){
	_wasgo_VisualServer_wrapper_multimesh_allocate(wasgo_id, ((Variant) p_multimesh).get_wasgo_id(), p_instances, ((Variant) p_transform_format).get_wasgo_id(), ((Variant) p_color_format).get_wasgo_id(), ((Variant) p_custom_data_format).get_wasgo_id());
}
RID VisualServer::multimesh_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_multimesh_create(wasgo_id));
}
::AABB VisualServer::multimesh_get_aabb(RID p_multimesh){
	return ::AABB::from_wasgo_id(_wasgo_VisualServer_wrapper_multimesh_get_aabb(wasgo_id, ((Variant) p_multimesh).get_wasgo_id()));
}
int VisualServer::multimesh_get_instance_count(RID p_multimesh){
	return (int) _wasgo_VisualServer_wrapper_multimesh_get_instance_count(wasgo_id, ((Variant) p_multimesh).get_wasgo_id());
}
RID VisualServer::multimesh_get_mesh(RID p_multimesh){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_multimesh_get_mesh(wasgo_id, ((Variant) p_multimesh).get_wasgo_id()));
}
int VisualServer::multimesh_get_visible_instances(RID p_multimesh){
	return (int) _wasgo_VisualServer_wrapper_multimesh_get_visible_instances(wasgo_id, ((Variant) p_multimesh).get_wasgo_id());
}
Color VisualServer::multimesh_instance_get_color(RID p_multimesh, int p_index){
	return Color::from_wasgo_id(_wasgo_VisualServer_wrapper_multimesh_instance_get_color(wasgo_id, ((Variant) p_multimesh).get_wasgo_id(), p_index));
}
Color VisualServer::multimesh_instance_get_custom_data(RID p_multimesh, int p_index){
	return Color::from_wasgo_id(_wasgo_VisualServer_wrapper_multimesh_instance_get_custom_data(wasgo_id, ((Variant) p_multimesh).get_wasgo_id(), p_index));
}
Transform VisualServer::multimesh_instance_get_transform(RID p_multimesh, int p_index){
	return Transform::from_wasgo_id(_wasgo_VisualServer_wrapper_multimesh_instance_get_transform(wasgo_id, ((Variant) p_multimesh).get_wasgo_id(), p_index));
}
Transform2D VisualServer::multimesh_instance_get_transform_2d(RID p_multimesh, int p_index){
	return Transform2D::from_wasgo_id(_wasgo_VisualServer_wrapper_multimesh_instance_get_transform_2d(wasgo_id, ((Variant) p_multimesh).get_wasgo_id(), p_index));
}
void VisualServer::multimesh_instance_set_color(RID p_multimesh, int p_index, Color p_color){
	_wasgo_VisualServer_wrapper_multimesh_instance_set_color(wasgo_id, ((Variant) p_multimesh).get_wasgo_id(), p_index, ((Variant) p_color).get_wasgo_id());
}
void VisualServer::multimesh_instance_set_custom_data(RID p_multimesh, int p_index, Color p_custom_data){
	_wasgo_VisualServer_wrapper_multimesh_instance_set_custom_data(wasgo_id, ((Variant) p_multimesh).get_wasgo_id(), p_index, ((Variant) p_custom_data).get_wasgo_id());
}
void VisualServer::multimesh_instance_set_transform(RID p_multimesh, int p_index, Transform p_transform){
	_wasgo_VisualServer_wrapper_multimesh_instance_set_transform(wasgo_id, ((Variant) p_multimesh).get_wasgo_id(), p_index, ((Variant) p_transform).get_wasgo_id());
}
void VisualServer::multimesh_instance_set_transform_2d(RID p_multimesh, int p_index, Transform2D p_transform){
	_wasgo_VisualServer_wrapper_multimesh_instance_set_transform_2d(wasgo_id, ((Variant) p_multimesh).get_wasgo_id(), p_index, ((Variant) p_transform).get_wasgo_id());
}
void VisualServer::multimesh_set_as_bulk_array(RID p_multimesh, PoolRealArray p_array){
	_wasgo_VisualServer_wrapper_multimesh_set_as_bulk_array(wasgo_id, ((Variant) p_multimesh).get_wasgo_id(), ((Variant) p_array).get_wasgo_id());
}
void VisualServer::multimesh_set_mesh(RID p_multimesh, RID p_mesh){
	_wasgo_VisualServer_wrapper_multimesh_set_mesh(wasgo_id, ((Variant) p_multimesh).get_wasgo_id(), ((Variant) p_mesh).get_wasgo_id());
}
void VisualServer::multimesh_set_visible_instances(RID p_multimesh, int p_visible){
	_wasgo_VisualServer_wrapper_multimesh_set_visible_instances(wasgo_id, ((Variant) p_multimesh).get_wasgo_id(), p_visible);
}
RID VisualServer::omni_light_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_omni_light_create(wasgo_id));
}
RID VisualServer::particles_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_particles_create(wasgo_id));
}
::AABB VisualServer::particles_get_current_aabb(RID p_particles){
	return ::AABB::from_wasgo_id(_wasgo_VisualServer_wrapper_particles_get_current_aabb(wasgo_id, ((Variant) p_particles).get_wasgo_id()));
}
bool VisualServer::particles_get_emitting(RID p_particles){
	return (bool) _wasgo_VisualServer_wrapper_particles_get_emitting(wasgo_id, ((Variant) p_particles).get_wasgo_id());
}
bool VisualServer::particles_is_inactive(RID p_particles){
	return (bool) _wasgo_VisualServer_wrapper_particles_is_inactive(wasgo_id, ((Variant) p_particles).get_wasgo_id());
}
void VisualServer::particles_request_process(RID p_particles){
	_wasgo_VisualServer_wrapper_particles_request_process(wasgo_id, ((Variant) p_particles).get_wasgo_id());
}
void VisualServer::particles_restart(RID p_particles){
	_wasgo_VisualServer_wrapper_particles_restart(wasgo_id, ((Variant) p_particles).get_wasgo_id());
}
void VisualServer::particles_set_amount(RID p_particles, int p_amount){
	_wasgo_VisualServer_wrapper_particles_set_amount(wasgo_id, ((Variant) p_particles).get_wasgo_id(), p_amount);
}
void VisualServer::particles_set_custom_aabb(RID p_particles, ::AABB p_aabb){
	_wasgo_VisualServer_wrapper_particles_set_custom_aabb(wasgo_id, ((Variant) p_particles).get_wasgo_id(), ((Variant) p_aabb).get_wasgo_id());
}
void VisualServer::particles_set_draw_order(RID p_particles, VisualServer::ParticlesDrawOrder p_order){
	_wasgo_VisualServer_wrapper_particles_set_draw_order(wasgo_id, ((Variant) p_particles).get_wasgo_id(), ((Variant) p_order).get_wasgo_id());
}
void VisualServer::particles_set_draw_pass_mesh(RID p_particles, int p_pass, RID p_mesh){
	_wasgo_VisualServer_wrapper_particles_set_draw_pass_mesh(wasgo_id, ((Variant) p_particles).get_wasgo_id(), p_pass, ((Variant) p_mesh).get_wasgo_id());
}
void VisualServer::particles_set_draw_passes(RID p_particles, int p_count){
	_wasgo_VisualServer_wrapper_particles_set_draw_passes(wasgo_id, ((Variant) p_particles).get_wasgo_id(), p_count);
}
void VisualServer::particles_set_emission_transform(RID p_particles, Transform p_transform){
	_wasgo_VisualServer_wrapper_particles_set_emission_transform(wasgo_id, ((Variant) p_particles).get_wasgo_id(), ((Variant) p_transform).get_wasgo_id());
}
void VisualServer::particles_set_emitting(RID p_particles, bool p_emitting){
	_wasgo_VisualServer_wrapper_particles_set_emitting(wasgo_id, ((Variant) p_particles).get_wasgo_id(), p_emitting);
}
void VisualServer::particles_set_explosiveness_ratio(RID p_particles, float p_ratio){
	_wasgo_VisualServer_wrapper_particles_set_explosiveness_ratio(wasgo_id, ((Variant) p_particles).get_wasgo_id(), p_ratio);
}
void VisualServer::particles_set_fixed_fps(RID p_particles, int p_fps){
	_wasgo_VisualServer_wrapper_particles_set_fixed_fps(wasgo_id, ((Variant) p_particles).get_wasgo_id(), p_fps);
}
void VisualServer::particles_set_fractional_delta(RID p_particles, bool p_enable){
	_wasgo_VisualServer_wrapper_particles_set_fractional_delta(wasgo_id, ((Variant) p_particles).get_wasgo_id(), p_enable);
}
void VisualServer::particles_set_lifetime(RID p_particles, float p_lifetime){
	_wasgo_VisualServer_wrapper_particles_set_lifetime(wasgo_id, ((Variant) p_particles).get_wasgo_id(), p_lifetime);
}
void VisualServer::particles_set_one_shot(RID p_particles, bool p_one_shot){
	_wasgo_VisualServer_wrapper_particles_set_one_shot(wasgo_id, ((Variant) p_particles).get_wasgo_id(), p_one_shot);
}
void VisualServer::particles_set_pre_process_time(RID p_particles, float p_time){
	_wasgo_VisualServer_wrapper_particles_set_pre_process_time(wasgo_id, ((Variant) p_particles).get_wasgo_id(), p_time);
}
void VisualServer::particles_set_process_material(RID p_particles, RID p_material){
	_wasgo_VisualServer_wrapper_particles_set_process_material(wasgo_id, ((Variant) p_particles).get_wasgo_id(), ((Variant) p_material).get_wasgo_id());
}
void VisualServer::particles_set_randomness_ratio(RID p_particles, float p_ratio){
	_wasgo_VisualServer_wrapper_particles_set_randomness_ratio(wasgo_id, ((Variant) p_particles).get_wasgo_id(), p_ratio);
}
void VisualServer::particles_set_speed_scale(RID p_particles, float p_scale){
	_wasgo_VisualServer_wrapper_particles_set_speed_scale(wasgo_id, ((Variant) p_particles).get_wasgo_id(), p_scale);
}
void VisualServer::particles_set_use_local_coordinates(RID p_particles, bool p_enable){
	_wasgo_VisualServer_wrapper_particles_set_use_local_coordinates(wasgo_id, ((Variant) p_particles).get_wasgo_id(), p_enable);
}
RID VisualServer::reflection_probe_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_reflection_probe_create(wasgo_id));
}
void VisualServer::reflection_probe_set_as_interior(RID p_probe, bool p_enable){
	_wasgo_VisualServer_wrapper_reflection_probe_set_as_interior(wasgo_id, ((Variant) p_probe).get_wasgo_id(), p_enable);
}
void VisualServer::reflection_probe_set_cull_mask(RID p_probe, int p_layers){
	_wasgo_VisualServer_wrapper_reflection_probe_set_cull_mask(wasgo_id, ((Variant) p_probe).get_wasgo_id(), p_layers);
}
void VisualServer::reflection_probe_set_enable_box_projection(RID p_probe, bool p_enable){
	_wasgo_VisualServer_wrapper_reflection_probe_set_enable_box_projection(wasgo_id, ((Variant) p_probe).get_wasgo_id(), p_enable);
}
void VisualServer::reflection_probe_set_enable_shadows(RID p_probe, bool p_enable){
	_wasgo_VisualServer_wrapper_reflection_probe_set_enable_shadows(wasgo_id, ((Variant) p_probe).get_wasgo_id(), p_enable);
}
void VisualServer::reflection_probe_set_extents(RID p_probe, Vector3 p_extents){
	_wasgo_VisualServer_wrapper_reflection_probe_set_extents(wasgo_id, ((Variant) p_probe).get_wasgo_id(), ((Variant) p_extents).get_wasgo_id());
}
void VisualServer::reflection_probe_set_intensity(RID p_probe, float p_intensity){
	_wasgo_VisualServer_wrapper_reflection_probe_set_intensity(wasgo_id, ((Variant) p_probe).get_wasgo_id(), p_intensity);
}
void VisualServer::reflection_probe_set_interior_ambient(RID p_probe, Color p_color){
	_wasgo_VisualServer_wrapper_reflection_probe_set_interior_ambient(wasgo_id, ((Variant) p_probe).get_wasgo_id(), ((Variant) p_color).get_wasgo_id());
}
void VisualServer::reflection_probe_set_interior_ambient_energy(RID p_probe, float p_energy){
	_wasgo_VisualServer_wrapper_reflection_probe_set_interior_ambient_energy(wasgo_id, ((Variant) p_probe).get_wasgo_id(), p_energy);
}
void VisualServer::reflection_probe_set_interior_ambient_probe_contribution(RID p_probe, float p_contrib){
	_wasgo_VisualServer_wrapper_reflection_probe_set_interior_ambient_probe_contribution(wasgo_id, ((Variant) p_probe).get_wasgo_id(), p_contrib);
}
void VisualServer::reflection_probe_set_max_distance(RID p_probe, float p_distance){
	_wasgo_VisualServer_wrapper_reflection_probe_set_max_distance(wasgo_id, ((Variant) p_probe).get_wasgo_id(), p_distance);
}
void VisualServer::reflection_probe_set_origin_offset(RID p_probe, Vector3 p_offset){
	_wasgo_VisualServer_wrapper_reflection_probe_set_origin_offset(wasgo_id, ((Variant) p_probe).get_wasgo_id(), ((Variant) p_offset).get_wasgo_id());
}
void VisualServer::reflection_probe_set_update_mode(RID p_probe, VisualServer::ReflectionProbeUpdateMode p_mode){
	_wasgo_VisualServer_wrapper_reflection_probe_set_update_mode(wasgo_id, ((Variant) p_probe).get_wasgo_id(), ((Variant) p_mode).get_wasgo_id());
}
void VisualServer::request_frame_drawn_callback(Object p_where, String p_method, Variant p_userdata){
	_wasgo_VisualServer_wrapper_request_frame_drawn_callback(wasgo_id, ((Variant) p_where).get_wasgo_id(), ((Variant) p_method).get_wasgo_id(), ((Variant) p_userdata).get_wasgo_id());
}
RID VisualServer::scenario_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_scenario_create(wasgo_id));
}
void VisualServer::scenario_set_debug(RID p_scenario, VisualServer::ScenarioDebugMode p_debug_mode){
	_wasgo_VisualServer_wrapper_scenario_set_debug(wasgo_id, ((Variant) p_scenario).get_wasgo_id(), ((Variant) p_debug_mode).get_wasgo_id());
}
void VisualServer::scenario_set_environment(RID p_scenario, RID p_environment){
	_wasgo_VisualServer_wrapper_scenario_set_environment(wasgo_id, ((Variant) p_scenario).get_wasgo_id(), ((Variant) p_environment).get_wasgo_id());
}
void VisualServer::scenario_set_fallback_environment(RID p_scenario, RID p_environment){
	_wasgo_VisualServer_wrapper_scenario_set_fallback_environment(wasgo_id, ((Variant) p_scenario).get_wasgo_id(), ((Variant) p_environment).get_wasgo_id());
}
void VisualServer::scenario_set_reflection_atlas_size(RID p_scenario, int p_size, int p_subdiv){
	_wasgo_VisualServer_wrapper_scenario_set_reflection_atlas_size(wasgo_id, ((Variant) p_scenario).get_wasgo_id(), p_size, p_subdiv);
}
void VisualServer::set_boot_image(Image p_image, Color p_color, bool p_scale, bool p_use_filter = (bool) true){
	_wasgo_VisualServer_wrapper_set_boot_image(wasgo_id, ((Variant) p_image).get_wasgo_id(), ((Variant) p_color).get_wasgo_id(), p_scale, p_use_filter);
}
void VisualServer::set_debug_generate_wireframes(bool p_generate){
	_wasgo_VisualServer_wrapper_set_debug_generate_wireframes(wasgo_id, p_generate);
}
void VisualServer::set_default_clear_color(Color p_color){
	_wasgo_VisualServer_wrapper_set_default_clear_color(wasgo_id, ((Variant) p_color).get_wasgo_id());
}
void VisualServer::set_render_loop_enabled(bool p_enabled){
	_wasgo_VisualServer_wrapper_set_render_loop_enabled(wasgo_id, p_enabled);
}
void VisualServer::set_shader_time_scale(float p_scale){
	_wasgo_VisualServer_wrapper_set_shader_time_scale(wasgo_id, p_scale);
}
RID VisualServer::shader_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_shader_create(wasgo_id));
}
String VisualServer::shader_get_code(RID p_shader){
	return String::from_wasgo_id(_wasgo_VisualServer_wrapper_shader_get_code(wasgo_id, ((Variant) p_shader).get_wasgo_id()));
}
RID VisualServer::shader_get_default_texture_param(RID p_shader, String p_name){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_shader_get_default_texture_param(wasgo_id, ((Variant) p_shader).get_wasgo_id(), ((Variant) p_name).get_wasgo_id()));
}
Array VisualServer::shader_get_param_list(RID p_shader){
	return Array::from_wasgo_id(_wasgo_VisualServer_wrapper_shader_get_param_list(wasgo_id, ((Variant) p_shader).get_wasgo_id()));
}
void VisualServer::shader_set_code(RID p_shader, String p_code){
	_wasgo_VisualServer_wrapper_shader_set_code(wasgo_id, ((Variant) p_shader).get_wasgo_id(), ((Variant) p_code).get_wasgo_id());
}
void VisualServer::shader_set_default_texture_param(RID p_shader, String p_name, RID p_texture){
	_wasgo_VisualServer_wrapper_shader_set_default_texture_param(wasgo_id, ((Variant) p_shader).get_wasgo_id(), ((Variant) p_name).get_wasgo_id(), ((Variant) p_texture).get_wasgo_id());
}
void VisualServer::skeleton_allocate(RID p_skeleton, int p_bones, bool p_is_2d_skeleton = (bool) false){
	_wasgo_VisualServer_wrapper_skeleton_allocate(wasgo_id, ((Variant) p_skeleton).get_wasgo_id(), p_bones, p_is_2d_skeleton);
}
Transform VisualServer::skeleton_bone_get_transform(RID p_skeleton, int p_bone){
	return Transform::from_wasgo_id(_wasgo_VisualServer_wrapper_skeleton_bone_get_transform(wasgo_id, ((Variant) p_skeleton).get_wasgo_id(), p_bone));
}
Transform2D VisualServer::skeleton_bone_get_transform_2d(RID p_skeleton, int p_bone){
	return Transform2D::from_wasgo_id(_wasgo_VisualServer_wrapper_skeleton_bone_get_transform_2d(wasgo_id, ((Variant) p_skeleton).get_wasgo_id(), p_bone));
}
void VisualServer::skeleton_bone_set_transform(RID p_skeleton, int p_bone, Transform p_transform){
	_wasgo_VisualServer_wrapper_skeleton_bone_set_transform(wasgo_id, ((Variant) p_skeleton).get_wasgo_id(), p_bone, ((Variant) p_transform).get_wasgo_id());
}
void VisualServer::skeleton_bone_set_transform_2d(RID p_skeleton, int p_bone, Transform2D p_transform){
	_wasgo_VisualServer_wrapper_skeleton_bone_set_transform_2d(wasgo_id, ((Variant) p_skeleton).get_wasgo_id(), p_bone, ((Variant) p_transform).get_wasgo_id());
}
RID VisualServer::skeleton_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_skeleton_create(wasgo_id));
}
int VisualServer::skeleton_get_bone_count(RID p_skeleton){
	return (int) _wasgo_VisualServer_wrapper_skeleton_get_bone_count(wasgo_id, ((Variant) p_skeleton).get_wasgo_id());
}
RID VisualServer::sky_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_sky_create(wasgo_id));
}
void VisualServer::sky_set_texture(RID p_sky, RID p_cube_map, int p_radiance_size){
	_wasgo_VisualServer_wrapper_sky_set_texture(wasgo_id, ((Variant) p_sky).get_wasgo_id(), ((Variant) p_cube_map).get_wasgo_id(), p_radiance_size);
}
RID VisualServer::spot_light_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_spot_light_create(wasgo_id));
}
void VisualServer::sync(){
	_wasgo_VisualServer_wrapper_sync(wasgo_id);
}
void VisualServer::texture_allocate(RID p_texture, int p_width, int p_height, int p_depth_3d, Image::Format p_format, VisualServer::TextureType p_type, int p_flags = (int) 7){
	_wasgo_VisualServer_wrapper_texture_allocate(wasgo_id, ((Variant) p_texture).get_wasgo_id(), p_width, p_height, p_depth_3d, ((Variant) p_format).get_wasgo_id(), ((Variant) p_type).get_wasgo_id(), p_flags);
}
void VisualServer::texture_bind(RID p_texture, int p_number){
	_wasgo_VisualServer_wrapper_texture_bind(wasgo_id, ((Variant) p_texture).get_wasgo_id(), p_number);
}
RID VisualServer::texture_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_texture_create(wasgo_id));
}
RID VisualServer::texture_create_from_image(Image p_image, int p_flags = (int) 7){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_texture_create_from_image(wasgo_id, ((Variant) p_image).get_wasgo_id(), p_flags));
}
Array VisualServer::texture_debug_usage(){
	return Array::from_wasgo_id(_wasgo_VisualServer_wrapper_texture_debug_usage(wasgo_id));
}
Image VisualServer::texture_get_data(RID p_texture, int p_cube_side = (int) 0){
	return Image::from_wasgo_id(_wasgo_VisualServer_wrapper_texture_get_data(wasgo_id, ((Variant) p_texture).get_wasgo_id(), p_cube_side));
}
int VisualServer::texture_get_depth(RID p_texture){
	return (int) _wasgo_VisualServer_wrapper_texture_get_depth(wasgo_id, ((Variant) p_texture).get_wasgo_id());
}
int VisualServer::texture_get_flags(RID p_texture){
	return (int) _wasgo_VisualServer_wrapper_texture_get_flags(wasgo_id, ((Variant) p_texture).get_wasgo_id());
}
Image::Format VisualServer::texture_get_format(RID p_texture){
	return Image::Format::from_wasgo_id(_wasgo_VisualServer_wrapper_texture_get_format(wasgo_id, ((Variant) p_texture).get_wasgo_id()));
}
int VisualServer::texture_get_height(RID p_texture){
	return (int) _wasgo_VisualServer_wrapper_texture_get_height(wasgo_id, ((Variant) p_texture).get_wasgo_id());
}
String VisualServer::texture_get_path(RID p_texture){
	return String::from_wasgo_id(_wasgo_VisualServer_wrapper_texture_get_path(wasgo_id, ((Variant) p_texture).get_wasgo_id()));
}
int VisualServer::texture_get_texid(RID p_texture){
	return (int) _wasgo_VisualServer_wrapper_texture_get_texid(wasgo_id, ((Variant) p_texture).get_wasgo_id());
}
VisualServer::TextureType VisualServer::texture_get_type(RID p_texture){
	return VisualServer::TextureType::from_wasgo_id(_wasgo_VisualServer_wrapper_texture_get_type(wasgo_id, ((Variant) p_texture).get_wasgo_id()));
}
int VisualServer::texture_get_width(RID p_texture){
	return (int) _wasgo_VisualServer_wrapper_texture_get_width(wasgo_id, ((Variant) p_texture).get_wasgo_id());
}
void VisualServer::texture_set_data(RID p_texture, Image p_image, int p_layer = (int) 0){
	_wasgo_VisualServer_wrapper_texture_set_data(wasgo_id, ((Variant) p_texture).get_wasgo_id(), ((Variant) p_image).get_wasgo_id(), p_layer);
}
void VisualServer::texture_set_data_partial(RID p_texture, Image p_image, int p_src_x, int p_src_y, int p_src_w, int p_src_h, int p_dst_x, int p_dst_y, int p_dst_mip, int p_layer = (int) 0){
	_wasgo_VisualServer_wrapper_texture_set_data_partial(wasgo_id, ((Variant) p_texture).get_wasgo_id(), ((Variant) p_image).get_wasgo_id(), p_src_x, p_src_y, p_src_w, p_src_h, p_dst_x, p_dst_y, p_dst_mip, p_layer);
}
void VisualServer::texture_set_flags(RID p_texture, int p_flags){
	_wasgo_VisualServer_wrapper_texture_set_flags(wasgo_id, ((Variant) p_texture).get_wasgo_id(), p_flags);
}
void VisualServer::texture_set_path(RID p_texture, String p_path){
	_wasgo_VisualServer_wrapper_texture_set_path(wasgo_id, ((Variant) p_texture).get_wasgo_id(), ((Variant) p_path).get_wasgo_id());
}
void VisualServer::texture_set_shrink_all_x2_on_set_data(bool p_shrink){
	_wasgo_VisualServer_wrapper_texture_set_shrink_all_x2_on_set_data(wasgo_id, p_shrink);
}
void VisualServer::texture_set_size_override(RID p_texture, int p_width, int p_height, int p_depth){
	_wasgo_VisualServer_wrapper_texture_set_size_override(wasgo_id, ((Variant) p_texture).get_wasgo_id(), p_width, p_height, p_depth);
}
void VisualServer::textures_keep_original(bool p_enable){
	_wasgo_VisualServer_wrapper_textures_keep_original(wasgo_id, p_enable);
}
void VisualServer::viewport_attach_camera(RID p_viewport, RID p_camera){
	_wasgo_VisualServer_wrapper_viewport_attach_camera(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), ((Variant) p_camera).get_wasgo_id());
}
void VisualServer::viewport_attach_canvas(RID p_viewport, RID p_canvas){
	_wasgo_VisualServer_wrapper_viewport_attach_canvas(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), ((Variant) p_canvas).get_wasgo_id());
}
void VisualServer::viewport_attach_to_screen(RID p_viewport, Rect2 p_rect = Rect2((0, 0, 0, 0)), int p_screen = (int) 0){
	_wasgo_VisualServer_wrapper_viewport_attach_to_screen(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), ((Variant) p_rect).get_wasgo_id(), p_screen);
}
RID VisualServer::viewport_create(){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_viewport_create(wasgo_id));
}
void VisualServer::viewport_detach(RID p_viewport){
	_wasgo_VisualServer_wrapper_viewport_detach(wasgo_id, ((Variant) p_viewport).get_wasgo_id());
}
int VisualServer::viewport_get_render_info(RID p_viewport, VisualServer::ViewportRenderInfo p_info){
	return (int) _wasgo_VisualServer_wrapper_viewport_get_render_info(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), ((Variant) p_info).get_wasgo_id());
}
RID VisualServer::viewport_get_texture(RID p_viewport){
	return RID::from_wasgo_id(_wasgo_VisualServer_wrapper_viewport_get_texture(wasgo_id, ((Variant) p_viewport).get_wasgo_id()));
}
void VisualServer::viewport_remove_canvas(RID p_viewport, RID p_canvas){
	_wasgo_VisualServer_wrapper_viewport_remove_canvas(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), ((Variant) p_canvas).get_wasgo_id());
}
void VisualServer::viewport_set_active(RID p_viewport, bool p_active){
	_wasgo_VisualServer_wrapper_viewport_set_active(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), p_active);
}
void VisualServer::viewport_set_canvas_stacking(RID p_viewport, RID p_canvas, int p_layer, int p_sublayer){
	_wasgo_VisualServer_wrapper_viewport_set_canvas_stacking(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), ((Variant) p_canvas).get_wasgo_id(), p_layer, p_sublayer);
}
void VisualServer::viewport_set_canvas_transform(RID p_viewport, RID p_canvas, Transform2D p_offset){
	_wasgo_VisualServer_wrapper_viewport_set_canvas_transform(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), ((Variant) p_canvas).get_wasgo_id(), ((Variant) p_offset).get_wasgo_id());
}
void VisualServer::viewport_set_clear_mode(RID p_viewport, VisualServer::ViewportClearMode p_clear_mode){
	_wasgo_VisualServer_wrapper_viewport_set_clear_mode(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), ((Variant) p_clear_mode).get_wasgo_id());
}
void VisualServer::viewport_set_debug_draw(RID p_viewport, VisualServer::ViewportDebugDraw p_draw){
	_wasgo_VisualServer_wrapper_viewport_set_debug_draw(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), ((Variant) p_draw).get_wasgo_id());
}
void VisualServer::viewport_set_disable_3d(RID p_viewport, bool p_disabled){
	_wasgo_VisualServer_wrapper_viewport_set_disable_3d(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), p_disabled);
}
void VisualServer::viewport_set_disable_environment(RID p_viewport, bool p_disabled){
	_wasgo_VisualServer_wrapper_viewport_set_disable_environment(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), p_disabled);
}
void VisualServer::viewport_set_global_canvas_transform(RID p_viewport, Transform2D p_transform){
	_wasgo_VisualServer_wrapper_viewport_set_global_canvas_transform(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), ((Variant) p_transform).get_wasgo_id());
}
void VisualServer::viewport_set_hdr(RID p_viewport, bool p_enabled){
	_wasgo_VisualServer_wrapper_viewport_set_hdr(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), p_enabled);
}
void VisualServer::viewport_set_hide_canvas(RID p_viewport, bool p_hidden){
	_wasgo_VisualServer_wrapper_viewport_set_hide_canvas(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), p_hidden);
}
void VisualServer::viewport_set_hide_scenario(RID p_viewport, bool p_hidden){
	_wasgo_VisualServer_wrapper_viewport_set_hide_scenario(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), p_hidden);
}
void VisualServer::viewport_set_msaa(RID p_viewport, VisualServer::ViewportMSAA p_msaa){
	_wasgo_VisualServer_wrapper_viewport_set_msaa(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), ((Variant) p_msaa).get_wasgo_id());
}
void VisualServer::viewport_set_parent_viewport(RID p_viewport, RID p_parent_viewport){
	_wasgo_VisualServer_wrapper_viewport_set_parent_viewport(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), ((Variant) p_parent_viewport).get_wasgo_id());
}
void VisualServer::viewport_set_render_direct_to_screen(RID p_viewport, bool p_enabled){
	_wasgo_VisualServer_wrapper_viewport_set_render_direct_to_screen(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), p_enabled);
}
void VisualServer::viewport_set_scenario(RID p_viewport, RID p_scenario){
	_wasgo_VisualServer_wrapper_viewport_set_scenario(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), ((Variant) p_scenario).get_wasgo_id());
}
void VisualServer::viewport_set_shadow_atlas_quadrant_subdivision(RID p_viewport, int p_quadrant, int p_subdivision){
	_wasgo_VisualServer_wrapper_viewport_set_shadow_atlas_quadrant_subdivision(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), p_quadrant, p_subdivision);
}
void VisualServer::viewport_set_shadow_atlas_size(RID p_viewport, int p_size){
	_wasgo_VisualServer_wrapper_viewport_set_shadow_atlas_size(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), p_size);
}
void VisualServer::viewport_set_size(RID p_viewport, int p_width, int p_height){
	_wasgo_VisualServer_wrapper_viewport_set_size(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), p_width, p_height);
}
void VisualServer::viewport_set_transparent_background(RID p_viewport, bool p_enabled){
	_wasgo_VisualServer_wrapper_viewport_set_transparent_background(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), p_enabled);
}
void VisualServer::viewport_set_update_mode(RID p_viewport, VisualServer::ViewportUpdateMode p_update_mode){
	_wasgo_VisualServer_wrapper_viewport_set_update_mode(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), ((Variant) p_update_mode).get_wasgo_id());
}
void VisualServer::viewport_set_usage(RID p_viewport, VisualServer::ViewportUsage p_usage){
	_wasgo_VisualServer_wrapper_viewport_set_usage(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), ((Variant) p_usage).get_wasgo_id());
}
void VisualServer::viewport_set_use_arvr(RID p_viewport, bool p_use_arvr){
	_wasgo_VisualServer_wrapper_viewport_set_use_arvr(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), p_use_arvr);
}
void VisualServer::viewport_set_use_debanding(RID p_viewport, bool p_debanding){
	_wasgo_VisualServer_wrapper_viewport_set_use_debanding(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), p_debanding);
}
void VisualServer::viewport_set_use_fxaa(RID p_viewport, bool p_fxaa){
	_wasgo_VisualServer_wrapper_viewport_set_use_fxaa(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), p_fxaa);
}
void VisualServer::viewport_set_vflip(RID p_viewport, bool p_enabled){
	_wasgo_VisualServer_wrapper_viewport_set_vflip(wasgo_id, ((Variant) p_viewport).get_wasgo_id(), p_enabled);
}