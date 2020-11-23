/* THIS FILE IS GENERATED */
#ifndef CANVASITEM_H
#define CANVASITEM_H

#include <stdint.h>

#include "Material.h"
#include "String.h"
#include "Node.h"
#include "StyleBox.h"
#include "Rect2.h"
#include "Mesh.h"
#include "InputEvent.h"
#include "Vector2.h"
#include "RID.h"
#include "PoolVector2Array.h"
#include "Dictionary.h"
#include "Variant.h"
#include "Font.h"
#include "MultiMesh.h"
#include "World2D.h"
#include "Transform2D.h"
#include "Texture.h"
class CanvasItem : public Node{
public: CanvasItem();
enum BlendMode{
BLEND_MODE_MIX: 0,
BLEND_MODE_ADD: 1,
BLEND_MODE_SUB: 2,
BLEND_MODE_MUL: 3,
BLEND_MODE_PREMULT_ALPHA: 4,
};
void  _draw();
void  _draw();
Vector2  _edit_get_pivot();
Vector2  _edit_get_pivot();
Vector2  _edit_get_position();
Vector2  _edit_get_position();
Rect2  _edit_get_rect();
Rect2  _edit_get_rect();
float  _edit_get_rotation();
float  _edit_get_rotation();
Vector2  _edit_get_scale();
Vector2  _edit_get_scale();
Dictionary  _edit_get_state();
Dictionary  _edit_get_state();
Transform2D  _edit_get_transform();
Transform2D  _edit_get_transform();
void  _edit_set_pivot(Vector2 pivot);
void  _edit_set_position(Vector2 position);
void  _edit_set_rect(Rect2 rect);
void  _edit_set_rotation(float degrees);
void  _edit_set_scale(Vector2 scale);
void  _edit_set_state(Dictionary state);
bool  _edit_use_pivot();
bool  _edit_use_pivot();
bool  _edit_use_rect();
bool  _edit_use_rect();
bool  _edit_use_rotation();
bool  _edit_use_rotation();
bool  _is_on_top();
bool  _is_on_top();
void  _set_on_top(bool on_top);
void  _toplevel_raise_self();
void  _toplevel_raise_self();
void  _update_callback();
void  _update_callback();
void  draw_arc(Vector2 center, float radius, float start_angle, float end_angle, int point_count, Color color, float width = 1, bool antialiased = false);
float  draw_char(Font font, Vector2 position, String char, String next, Color modulate = 1,1,1,1);
void  draw_circle(Vector2 position, float radius, Color color);
void  draw_colored_polygon(PoolVector2Array points, Color color, PoolVector2Array uvs = [], Texture texture = null, Texture normal_map = null, bool antialiased = false);
void  draw_line(Vector2 from, Vector2 to, Color color, float width = 1, bool antialiased = false);
void  draw_mesh(Mesh mesh, Texture texture, Texture normal_map = [object:null], Transform2D transform = ((1, 0), (0, 1), (0, 0)), Color modulate = 1,1,1,1);
void  draw_multiline(PoolVector2Array points, Color color, float width = 1, bool antialiased = false);
void  draw_multiline_colors(PoolVector2Array points, PoolColorArray colors, float width = 1, bool antialiased = false);
void  draw_multimesh(MultiMesh multimesh, Texture texture, Texture normal_map = [object:null]);
void  draw_polygon(PoolVector2Array points, PoolColorArray colors, PoolVector2Array uvs = [], Texture texture = null, Texture normal_map = null, bool antialiased = false);
void  draw_polyline(PoolVector2Array points, Color color, float width = 1, bool antialiased = false);
void  draw_polyline_colors(PoolVector2Array points, PoolColorArray colors, float width = 1, bool antialiased = false);
void  draw_primitive(PoolVector2Array points, PoolColorArray colors, PoolVector2Array uvs, Texture texture = null, float width = 1, Texture normal_map = null);
void  draw_rect(Rect2 rect, Color color, bool filled = true, float width = 1, bool antialiased = false);
void  draw_set_transform(Vector2 position, float rotation, Vector2 scale);
void  draw_set_transform_matrix(Transform2D xform);
void  draw_string(Font font, Vector2 position, String text, Color modulate = 1,1,1,1, int clip_w = -1);
void  draw_style_box(StyleBox style_box, Rect2 rect);
void  draw_texture(Texture texture, Vector2 position, Color modulate = 1,1,1,1, Texture normal_map = null);
void  draw_texture_rect(Texture texture, Rect2 rect, bool tile, Color modulate = 1,1,1,1, bool transpose = false, Texture normal_map = null);
void  draw_texture_rect_region(Texture texture, Rect2 rect, Rect2 src_rect, Color modulate = 1,1,1,1, bool transpose = false, Texture normal_map = null, bool clip_uv = true);
void  force_update_transform();
void  force_update_transform();
RID  get_canvas();
RID  get_canvas();
RID  get_canvas_item();
RID  get_canvas_item();
Transform2D  get_canvas_transform();
Transform2D  get_canvas_transform();
Vector2  get_global_mouse_position();
Vector2  get_global_mouse_position();
Transform2D  get_global_transform();
Transform2D  get_global_transform();
Transform2D  get_global_transform_with_canvas();
Transform2D  get_global_transform_with_canvas();
int  get_light_mask();
int  get_light_mask();
Vector2  get_local_mouse_position();
Vector2  get_local_mouse_position();
Material  get_material();
Material  get_material();
Color  get_modulate();
Color  get_modulate();
Color  get_self_modulate();
Color  get_self_modulate();
Transform2D  get_transform();
Transform2D  get_transform();
bool  get_use_parent_material();
bool  get_use_parent_material();
Rect2  get_viewport_rect();
Rect2  get_viewport_rect();
Transform2D  get_viewport_transform();
Transform2D  get_viewport_transform();
World2D  get_world_2d();
World2D  get_world_2d();
void  hide();
void  hide();
bool  is_draw_behind_parent_enabled();
bool  is_draw_behind_parent_enabled();
bool  is_local_transform_notification_enabled();
bool  is_local_transform_notification_enabled();
bool  is_set_as_toplevel();
bool  is_set_as_toplevel();
bool  is_transform_notification_enabled();
bool  is_transform_notification_enabled();
bool  is_visible();
bool  is_visible();
bool  is_visible_in_tree();
bool  is_visible_in_tree();
Vector2  make_canvas_position_local(Vector2 screen_point);
InputEvent  make_input_local(InputEvent event);
void  set_as_toplevel(bool enable);
void  set_draw_behind_parent(bool enable);
void  set_light_mask(int light_mask);
void  set_material(Material material);
void  set_modulate(Color modulate);
void  set_notify_local_transform(bool enable);
void  set_notify_transform(bool enable);
void  set_self_modulate(Color self_modulate);
void  set_use_parent_material(bool enable);
void  set_visible(bool visible);
void  show();
void  show();
void  update();
void  update();
};
#endif