/* THIS FILE IS GENERATED */
#ifndef CANVASITEM_H
#define CANVASITEM_H

#include "wasgo\wasgo.h"

#include "Color.h"
#include "Vector2.h"
#include "Font.h"
#include "RID.h"
#include "MultiMesh.h"
#include "StyleBox.h"
#include "Material.h"
#include "Variant.h"
#include "Texture.h"
#include "Transform2D.h"
#include "Node.h"
#include "ustring.h"
#include "Rect2.h"
#include "Mesh.h"
#include "World2D.h"
#include "InputEvent.h"
class CanvasItem : public Node{
public:
enum BlendMode{
BLEND_MODE_MIX,
BLEND_MODE_ADD,
BLEND_MODE_SUB,
BLEND_MODE_MUL,
BLEND_MODE_PREMULT_ALPHA,
BLEND_MODE_DISABLED
};
void draw_arc(Vector2 p_center, float p_radius, float p_start_angle, float p_end_angle, int p_point_count, Color p_color, float p_width = (float) 1, bool p_antialiased = (bool) false);
float draw_char(Font p_font, Vector2 p_position, String p_char, String p_next, Color p_modulate = Color(1,1,1,1));
void draw_circle(Vector2 p_position, float p_radius, Color p_color);
void draw_colored_polygon(PoolVector2Array p_points, Color p_color, PoolVector2Array p_uvs = (PoolVector2Array) [], Texture p_texture = (Texture) "", Texture p_normal_map = (Texture) "", bool p_antialiased = (bool) false);
void draw_line(Vector2 p_from, Vector2 p_to, Color p_color, float p_width = (float) 1, bool p_antialiased = (bool) false);
void draw_mesh(Mesh p_mesh, Texture p_texture, Texture p_normal_map = (Texture) [object:null], Transform2D p_transform = Transform2D(((1, 0), (0, 1), (0, 0))), Color p_modulate = Color(1,1,1,1));
void draw_multiline(PoolVector2Array p_points, Color p_color, float p_width = (float) 1, bool p_antialiased = (bool) false);
void draw_multiline_colors(PoolVector2Array p_points, PoolColorArray p_colors, float p_width = (float) 1, bool p_antialiased = (bool) false);
void draw_multimesh(MultiMesh p_multimesh, Texture p_texture, Texture p_normal_map = (Texture) [object:null]);
void draw_polygon(PoolVector2Array p_points, PoolColorArray p_colors, PoolVector2Array p_uvs = (PoolVector2Array) [], Texture p_texture = (Texture) "", Texture p_normal_map = (Texture) "", bool p_antialiased = (bool) false);
void draw_polyline(PoolVector2Array p_points, Color p_color, float p_width = (float) 1, bool p_antialiased = (bool) false);
void draw_polyline_colors(PoolVector2Array p_points, PoolColorArray p_colors, float p_width = (float) 1, bool p_antialiased = (bool) false);
void draw_primitive(PoolVector2Array p_points, PoolColorArray p_colors, PoolVector2Array p_uvs, Texture p_texture = (Texture) "", float p_width = (float) 1, Texture p_normal_map = (Texture) "");
void draw_rect(Rect2 p_rect, Color p_color, bool p_filled = (bool) true, float p_width = (float) 1, bool p_antialiased = (bool) false);
void draw_set_transform(Vector2 p_position, float p_rotation, Vector2 p_scale);
void draw_set_transform_matrix(Transform2D p_xform);
void draw_string(Font p_font, Vector2 p_position, String p_text, Color p_modulate = Color(1,1,1,1), int p_clip_w = (int) -1);
void draw_style_box(StyleBox p_style_box, Rect2 p_rect);
void draw_texture(Texture p_texture, Vector2 p_position, Color p_modulate = Color(1,1,1,1), Texture p_normal_map = (Texture) "");
void draw_texture_rect(Texture p_texture, Rect2 p_rect, bool p_tile, Color p_modulate = Color(1,1,1,1), bool p_transpose = (bool) false, Texture p_normal_map = (Texture) "");
void draw_texture_rect_region(Texture p_texture, Rect2 p_rect, Rect2 p_src_rect, Color p_modulate = Color(1,1,1,1), bool p_transpose = (bool) false, Texture p_normal_map = (Texture) "", bool p_clip_uv = (bool) true);
void force_update_transform();
RID get_canvas();
RID get_canvas_item();
Transform2D get_canvas_transform();
Vector2 get_global_mouse_position();
Transform2D get_global_transform();
Transform2D get_global_transform_with_canvas();
int get_light_mask();
Vector2 get_local_mouse_position();
Material get_material();
Color get_modulate();
Color get_self_modulate();
Transform2D get_transform();
bool get_use_parent_material();
Rect2 get_viewport_rect();
Transform2D get_viewport_transform();
World2D get_world_2d();
void hide();
bool is_draw_behind_parent_enabled();
bool is_local_transform_notification_enabled();
bool is_set_as_toplevel();
bool is_transform_notification_enabled();
bool is_visible();
bool is_visible_in_tree();
Vector2 make_canvas_position_local(Vector2 p_screen_point);
InputEvent make_input_local(InputEvent p_event);
void set_as_toplevel(bool p_enable);
void set_draw_behind_parent(bool p_enable);
void set_light_mask(int p_light_mask);
void set_material(Material p_material);
void set_modulate(Color p_modulate);
void set_notify_local_transform(bool p_enable);
void set_notify_transform(bool p_enable);
void set_self_modulate(Color p_self_modulate);
void set_use_parent_material(bool p_enable);
void set_visible(bool p_visible);
void show();
void update();
};


//Wrapper Functions
extern "C"{
void _wasgo_CanvasItem_wrapper_draw_arc(WasGoId wasgo_id, const uint8_t * p_center, int p_center_wasgo_buffer_size, float p_radius, float p_start_angle, float p_end_angle, int p_point_count, const uint8_t * p_color, int p_color_wasgo_buffer_size, float p_width, bool p_antialiased);
float _wasgo_CanvasItem_wrapper_draw_char(WasGoId wasgo_id, WasGoId p_font, const uint8_t * p_position, int p_position_wasgo_buffer_size, const uint8_t * p_char, int p_char_wasgo_buffer_size, const uint8_t * p_next, int p_next_wasgo_buffer_size, const uint8_t * p_modulate, int p_modulate_wasgo_buffer_size);
void _wasgo_CanvasItem_wrapper_draw_circle(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, float p_radius, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_CanvasItem_wrapper_draw_colored_polygon(WasGoId wasgo_id, WasGoId p_points, const uint8_t * p_color, int p_color_wasgo_buffer_size, WasGoId p_uvs, WasGoId p_texture, WasGoId p_normal_map, bool p_antialiased);
void _wasgo_CanvasItem_wrapper_draw_line(WasGoId wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, const uint8_t * p_to, int p_to_wasgo_buffer_size, const uint8_t * p_color, int p_color_wasgo_buffer_size, float p_width, bool p_antialiased);
void _wasgo_CanvasItem_wrapper_draw_mesh(WasGoId wasgo_id, WasGoId p_mesh, WasGoId p_texture, WasGoId p_normal_map, const uint8_t * p_transform, int p_transform_wasgo_buffer_size, const uint8_t * p_modulate, int p_modulate_wasgo_buffer_size);
void _wasgo_CanvasItem_wrapper_draw_multiline(WasGoId wasgo_id, WasGoId p_points, const uint8_t * p_color, int p_color_wasgo_buffer_size, float p_width, bool p_antialiased);
void _wasgo_CanvasItem_wrapper_draw_multiline_colors(WasGoId wasgo_id, WasGoId p_points, WasGoId p_colors, float p_width, bool p_antialiased);
void _wasgo_CanvasItem_wrapper_draw_multimesh(WasGoId wasgo_id, WasGoId p_multimesh, WasGoId p_texture, WasGoId p_normal_map);
void _wasgo_CanvasItem_wrapper_draw_polygon(WasGoId wasgo_id, WasGoId p_points, WasGoId p_colors, WasGoId p_uvs, WasGoId p_texture, WasGoId p_normal_map, bool p_antialiased);
void _wasgo_CanvasItem_wrapper_draw_polyline(WasGoId wasgo_id, WasGoId p_points, const uint8_t * p_color, int p_color_wasgo_buffer_size, float p_width, bool p_antialiased);
void _wasgo_CanvasItem_wrapper_draw_polyline_colors(WasGoId wasgo_id, WasGoId p_points, WasGoId p_colors, float p_width, bool p_antialiased);
void _wasgo_CanvasItem_wrapper_draw_primitive(WasGoId wasgo_id, WasGoId p_points, WasGoId p_colors, WasGoId p_uvs, WasGoId p_texture, float p_width, WasGoId p_normal_map);
void _wasgo_CanvasItem_wrapper_draw_rect(WasGoId wasgo_id, const uint8_t * p_rect, int p_rect_wasgo_buffer_size, const uint8_t * p_color, int p_color_wasgo_buffer_size, bool p_filled, float p_width, bool p_antialiased);
void _wasgo_CanvasItem_wrapper_draw_set_transform(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, float p_rotation, const uint8_t * p_scale, int p_scale_wasgo_buffer_size);
void _wasgo_CanvasItem_wrapper_draw_set_transform_matrix(WasGoId wasgo_id, const uint8_t * p_xform, int p_xform_wasgo_buffer_size);
void _wasgo_CanvasItem_wrapper_draw_string(WasGoId wasgo_id, WasGoId p_font, const uint8_t * p_position, int p_position_wasgo_buffer_size, const uint8_t * p_text, int p_text_wasgo_buffer_size, const uint8_t * p_modulate, int p_modulate_wasgo_buffer_size, int p_clip_w);
void _wasgo_CanvasItem_wrapper_draw_style_box(WasGoId wasgo_id, WasGoId p_style_box, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);
void _wasgo_CanvasItem_wrapper_draw_texture(WasGoId wasgo_id, WasGoId p_texture, const uint8_t * p_position, int p_position_wasgo_buffer_size, const uint8_t * p_modulate, int p_modulate_wasgo_buffer_size, WasGoId p_normal_map);
void _wasgo_CanvasItem_wrapper_draw_texture_rect(WasGoId wasgo_id, WasGoId p_texture, const uint8_t * p_rect, int p_rect_wasgo_buffer_size, bool p_tile, const uint8_t * p_modulate, int p_modulate_wasgo_buffer_size, bool p_transpose, WasGoId p_normal_map);
void _wasgo_CanvasItem_wrapper_draw_texture_rect_region(WasGoId wasgo_id, WasGoId p_texture, const uint8_t * p_rect, int p_rect_wasgo_buffer_size, const uint8_t * p_src_rect, int p_src_rect_wasgo_buffer_size, const uint8_t * p_modulate, int p_modulate_wasgo_buffer_size, bool p_transpose, WasGoId p_normal_map, bool p_clip_uv);
void _wasgo_CanvasItem_wrapper_force_update_transform(WasGoId wasgo_id);
void _wasgo_CanvasItem_wrapper_get_canvas(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_CanvasItem_wrapper_get_canvas_item(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_CanvasItem_wrapper_get_canvas_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_CanvasItem_wrapper_get_global_mouse_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_CanvasItem_wrapper_get_global_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_CanvasItem_wrapper_get_global_transform_with_canvas(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_CanvasItem_wrapper_get_light_mask(WasGoId wasgo_id);
void _wasgo_CanvasItem_wrapper_get_local_mouse_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_CanvasItem_wrapper_get_material(WasGoId wasgo_id);
void _wasgo_CanvasItem_wrapper_get_modulate(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_CanvasItem_wrapper_get_self_modulate(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_CanvasItem_wrapper_get_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_CanvasItem_wrapper_get_use_parent_material(WasGoId wasgo_id);
void _wasgo_CanvasItem_wrapper_get_viewport_rect(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_CanvasItem_wrapper_get_viewport_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_CanvasItem_wrapper_get_world_2d(WasGoId wasgo_id);
void _wasgo_CanvasItem_wrapper_hide(WasGoId wasgo_id);
int _wasgo_CanvasItem_wrapper_is_draw_behind_parent_enabled(WasGoId wasgo_id);
int _wasgo_CanvasItem_wrapper_is_local_transform_notification_enabled(WasGoId wasgo_id);
int _wasgo_CanvasItem_wrapper_is_set_as_toplevel(WasGoId wasgo_id);
int _wasgo_CanvasItem_wrapper_is_transform_notification_enabled(WasGoId wasgo_id);
int _wasgo_CanvasItem_wrapper_is_visible(WasGoId wasgo_id);
int _wasgo_CanvasItem_wrapper_is_visible_in_tree(WasGoId wasgo_id);
void _wasgo_CanvasItem_wrapper_make_canvas_position_local(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_screen_point, int p_screen_point_wasgo_buffer_size);
WasGoId _wasgo_CanvasItem_wrapper_make_input_local(WasGoId wasgo_id, WasGoId p_event);
void _wasgo_CanvasItem_wrapper_set_as_toplevel(WasGoId wasgo_id, bool p_enable);
void _wasgo_CanvasItem_wrapper_set_draw_behind_parent(WasGoId wasgo_id, bool p_enable);
void _wasgo_CanvasItem_wrapper_set_light_mask(WasGoId wasgo_id, int p_light_mask);
void _wasgo_CanvasItem_wrapper_set_material(WasGoId wasgo_id, WasGoId p_material);
void _wasgo_CanvasItem_wrapper_set_modulate(WasGoId wasgo_id, const uint8_t * p_modulate, int p_modulate_wasgo_buffer_size);
void _wasgo_CanvasItem_wrapper_set_notify_local_transform(WasGoId wasgo_id, bool p_enable);
void _wasgo_CanvasItem_wrapper_set_notify_transform(WasGoId wasgo_id, bool p_enable);
void _wasgo_CanvasItem_wrapper_set_self_modulate(WasGoId wasgo_id, const uint8_t * p_self_modulate, int p_self_modulate_wasgo_buffer_size);
void _wasgo_CanvasItem_wrapper_set_use_parent_material(WasGoId wasgo_id, bool p_enable);
void _wasgo_CanvasItem_wrapper_set_visible(WasGoId wasgo_id, bool p_visible);
void _wasgo_CanvasItem_wrapper_show(WasGoId wasgo_id);
void _wasgo_CanvasItem_wrapper_update(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_CanvasItem_constructor();
    void _wasgo_CanvasItem_destructor(WasGoId p_wasgo_id);
            
}
#endif