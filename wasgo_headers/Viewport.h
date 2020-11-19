/* THIS FILE IS GENERATED */
#ifndef VIEWPORT_H
#define VIEWPORT_H

#include <stdint.h>

#include "Vector2.h"
#include "String.h"
#include "Control.h"
#include "ViewportTexture.h"
#include "Node.h"
#include "Rect2.h"
#include "World2D.h"
#include "Camera.h"
#include "Transform2D.h"
#include "World.h"
#include "InputEvent.h"
#include "Variant.h"
#include "RID.h"
class Viewport : public Node{
public: Viewport();
enum ClearMode{
CLEAR_MODE_ALWAYS: 0,
CLEAR_MODE_NEVER: 1,
};
enum RenderInfo{
RENDER_INFO_OBJECTS_IN_FRAME: 0,
RENDER_INFO_VERTICES_IN_FRAME: 1,
RENDER_INFO_MATERIAL_CHANGES_IN_FRAME: 2,
RENDER_INFO_SHADER_CHANGES_IN_FRAME: 3,
RENDER_INFO_SURFACE_CHANGES_IN_FRAME: 4,
RENDER_INFO_DRAW_CALLS_IN_FRAME: 5,
};
enum Usage{
USAGE_2D: 0,
USAGE_2D_NO_SAMPLING: 1,
USAGE_3D: 2,
};
enum DebugDraw{
DEBUG_DRAW_DISABLED: 0,
DEBUG_DRAW_UNSHADED: 1,
DEBUG_DRAW_OVERDRAW: 2,
};
enum ShadowAtlasQuadrantSubdiv{
SHADOW_ATLAS_QUADRANT_SUBDIV_DISABLED: 0,
SHADOW_ATLAS_QUADRANT_SUBDIV_1: 1,
SHADOW_ATLAS_QUADRANT_SUBDIV_4: 2,
SHADOW_ATLAS_QUADRANT_SUBDIV_16: 3,
SHADOW_ATLAS_QUADRANT_SUBDIV_64: 4,
SHADOW_ATLAS_QUADRANT_SUBDIV_256: 5,
SHADOW_ATLAS_QUADRANT_SUBDIV_1024: 6,
};
enum UpdateMode{
UPDATE_DISABLED: 0,
UPDATE_ONCE: 1,
UPDATE_WHEN_VISIBLE: 2,
};
enum MSAA{
MSAA_DISABLED: 0,
MSAA_2X: 1,
MSAA_4X: 2,
MSAA_8X: 3,
};
void  _gui_remove_focus();
void  _gui_remove_focus();
void  _gui_show_tooltip();
void  _gui_show_tooltip();
void  _own_world_changed();
void  _own_world_changed();
void  _post_gui_grab_click_focus();
void  _post_gui_grab_click_focus();
void  _subwindow_visibility_changed();
void  _subwindow_visibility_changed();
void  _vp_input(InputEvent arg0);
void  _vp_input_text(String text);
void  _vp_unhandled_input(InputEvent arg0);
World  find_world();
World  find_world();
World2D  find_world_2d();
World2D  find_world_2d();
Camera  get_camera();
Camera  get_camera();
Transform2D  get_canvas_transform();
Transform2D  get_canvas_transform();
enum.Viewport::ClearMode  get_clear_mode();
enum.Viewport::ClearMode  get_clear_mode();
enum.Viewport::DebugDraw  get_debug_draw();
enum.Viewport::DebugDraw  get_debug_draw();
Transform2D  get_final_transform();
Transform2D  get_final_transform();
Transform2D  get_global_canvas_transform();
Transform2D  get_global_canvas_transform();
bool  get_hdr();
bool  get_hdr();
bool  get_keep_3d_linear();
bool  get_keep_3d_linear();
Control  get_modal_stack_top();
Control  get_modal_stack_top();
Vector2  get_mouse_position();
Vector2  get_mouse_position();
enum.Viewport::MSAA  get_msaa();
enum.Viewport::MSAA  get_msaa();
bool  get_physics_object_picking();
bool  get_physics_object_picking();
int  get_render_info(int info);
enum.Viewport::ShadowAtlasQuadrantSubdiv  get_shadow_atlas_quadrant_subdiv(int quadrant);
int  get_shadow_atlas_size();
int  get_shadow_atlas_size();
Vector2  get_size();
Vector2  get_size();
Vector2  get_size_override();
Vector2  get_size_override();
ViewportTexture  get_texture();
ViewportTexture  get_texture();
enum.Viewport::UpdateMode  get_update_mode();
enum.Viewport::UpdateMode  get_update_mode();
enum.Viewport::Usage  get_usage();
enum.Viewport::Usage  get_usage();
bool  get_vflip();
bool  get_vflip();
RID  get_viewport_rid();
RID  get_viewport_rid();
Rect2  get_visible_rect();
Rect2  get_visible_rect();
World  get_world();
World  get_world();
World2D  get_world_2d();
World2D  get_world_2d();
Variant  gui_get_drag_data();
Variant  gui_get_drag_data();
bool  gui_has_modal_stack();
bool  gui_has_modal_stack();
bool  gui_is_dragging();
bool  gui_is_dragging();
bool  has_transparent_background();
bool  has_transparent_background();
void  input(InputEvent local_event);
bool  is_3d_disabled();
bool  is_3d_disabled();
bool  is_audio_listener();
bool  is_audio_listener();
bool  is_audio_listener_2d();
bool  is_audio_listener_2d();
bool  is_handling_input_locally();
bool  is_handling_input_locally();
bool  is_input_disabled();
bool  is_input_disabled();
bool  is_input_handled();
bool  is_input_handled();
bool  is_size_override_enabled();
bool  is_size_override_enabled();
bool  is_size_override_stretch_enabled();
bool  is_size_override_stretch_enabled();
bool  is_snap_controls_to_pixels_enabled();
bool  is_snap_controls_to_pixels_enabled();
bool  is_using_own_world();
bool  is_using_own_world();
bool  is_using_render_direct_to_screen();
bool  is_using_render_direct_to_screen();
void  set_as_audio_listener(bool enable);
void  set_as_audio_listener_2d(bool enable);
void  set_attach_to_screen_rect(Rect2 rect);
void  set_canvas_transform(Transform2D xform);
void  set_clear_mode(int mode);
void  set_debug_draw(int debug_draw);
void  set_disable_3d(bool disable);
void  set_disable_input(bool disable);
void  set_global_canvas_transform(Transform2D xform);
void  set_handle_input_locally(bool enable);
void  set_hdr(bool enable);
void  set_input_as_handled();
void  set_input_as_handled();
void  set_keep_3d_linear(bool keep_3d_linear);
void  set_msaa(int msaa);
void  set_physics_object_picking(bool enable);
void  set_shadow_atlas_quadrant_subdiv(int quadrant, int subdiv);
void  set_shadow_atlas_size(int size);
void  set_size(Vector2 size);
void  set_size_override(bool enable, Vector2 size = (-1, -1), Vector2 margin = (0, 0));
void  set_size_override_stretch(bool enabled);
void  set_snap_controls_to_pixels(bool enabled);
void  set_transparent_background(bool enable);
void  set_update_mode(int mode);
void  set_usage(int usage);
void  set_use_arvr(bool use);
void  set_use_own_world(bool enable);
void  set_use_render_direct_to_screen(bool enable);
void  set_vflip(bool enable);
void  set_world(World world);
void  set_world_2d(World2D world_2d);
void  unhandled_input(InputEvent local_event);
void  update_worlds();
void  update_worlds();
bool  use_arvr();
bool  use_arvr();
void  warp_mouse(Vector2 to_position);
};
#endif