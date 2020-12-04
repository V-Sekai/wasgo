/* THIS FILE IS GENERATED */
#ifndef VIEWPORT_H
#define VIEWPORT_H

#include "wasgo\wasgo.h"

#include "RID.h"
#include "World2D.h"
#include "Transform2D.h"
#include "Variant.h"
#include "Rect2.h"
#include "Node.h"
#include "InputEvent.h"
#include "World.h"
#include "ViewportTexture.h"
#include "Camera.h"
#include "Vector2.h"
#include "Control.h"
class Viewport : public Node{
public:
enum ClearMode{
CLEAR_MODE_ALWAYS,
CLEAR_MODE_NEVER,
CLEAR_MODE_ONLY_NEXT_FRAME
};
enum DebugDraw{
DEBUG_DRAW_DISABLED,
DEBUG_DRAW_UNSHADED,
DEBUG_DRAW_OVERDRAW,
DEBUG_DRAW_WIREFRAME
};
enum MSAA{
MSAA_DISABLED,
MSAA_2X,
MSAA_4X,
MSAA_8X,
MSAA_16X
};
enum RenderInfo{
RENDER_INFO_OBJECTS_IN_FRAME,
RENDER_INFO_VERTICES_IN_FRAME,
RENDER_INFO_MATERIAL_CHANGES_IN_FRAME,
RENDER_INFO_SHADER_CHANGES_IN_FRAME,
RENDER_INFO_SURFACE_CHANGES_IN_FRAME,
RENDER_INFO_DRAW_CALLS_IN_FRAME,
RENDER_INFO_2D_ITEMS_IN_FRAME,
RENDER_INFO_2D_DRAW_CALLS_IN_FRAME,
RENDER_INFO_MAX
};
enum ShadowAtlasQuadrantSubdiv{
SHADOW_ATLAS_QUADRANT_SUBDIV_DISABLED,
SHADOW_ATLAS_QUADRANT_SUBDIV_1,
SHADOW_ATLAS_QUADRANT_SUBDIV_4,
SHADOW_ATLAS_QUADRANT_SUBDIV_16,
SHADOW_ATLAS_QUADRANT_SUBDIV_64,
SHADOW_ATLAS_QUADRANT_SUBDIV_256,
SHADOW_ATLAS_QUADRANT_SUBDIV_1024,
SHADOW_ATLAS_QUADRANT_SUBDIV_MAX
};
enum UpdateMode{
UPDATE_DISABLED,
UPDATE_ONCE,
UPDATE_WHEN_VISIBLE,
UPDATE_ALWAYS
};
enum Usage{
USAGE_2D,
USAGE_2D_NO_SAMPLING,
USAGE_3D,
USAGE_3D_NO_EFFECTS
};
World find_world();
World2D find_world_2d();
Camera get_camera();
Transform2D get_canvas_transform();
Viewport::ClearMode get_clear_mode();
Viewport::DebugDraw get_debug_draw();
Transform2D get_final_transform();
Transform2D get_global_canvas_transform();
bool get_hdr();
bool get_keep_3d_linear();
Control get_modal_stack_top();
Vector2 get_mouse_position();
Viewport::MSAA get_msaa();
bool get_physics_object_picking();
int get_render_info(Viewport::RenderInfo p_info);
Viewport::ShadowAtlasQuadrantSubdiv get_shadow_atlas_quadrant_subdiv(int p_quadrant);
int get_shadow_atlas_size();
Vector2 get_size();
Vector2 get_size_override();
ViewportTexture get_texture();
Viewport::UpdateMode get_update_mode();
Viewport::Usage get_usage();
bool get_use_debanding();
bool get_use_fxaa();
bool get_vflip();
RID get_viewport_rid();
Rect2 get_visible_rect();
World get_world();
World2D get_world_2d();
Variant gui_get_drag_data();
bool gui_has_modal_stack();
bool gui_is_dragging();
bool has_transparent_background();
void input(InputEvent p_local_event);
bool is_3d_disabled();
bool is_audio_listener();
bool is_audio_listener_2d();
bool is_handling_input_locally();
bool is_input_disabled();
bool is_input_handled();
bool is_size_override_enabled();
bool is_size_override_stretch_enabled();
bool is_snap_controls_to_pixels_enabled();
bool is_using_own_world();
bool is_using_render_direct_to_screen();
void set_as_audio_listener(bool p_enable);
void set_as_audio_listener_2d(bool p_enable);
void set_attach_to_screen_rect(Rect2 p_rect);
void set_canvas_transform(Transform2D p_xform);
void set_clear_mode(Viewport::ClearMode p_mode);
void set_debug_draw(Viewport::DebugDraw p_debug_draw);
void set_disable_3d(bool p_disable);
void set_disable_input(bool p_disable);
void set_global_canvas_transform(Transform2D p_xform);
void set_handle_input_locally(bool p_enable);
void set_hdr(bool p_enable);
void set_input_as_handled();
void set_keep_3d_linear(bool p_keep_3d_linear);
void set_msaa(Viewport::MSAA p_msaa);
void set_physics_object_picking(bool p_enable);
void set_shadow_atlas_quadrant_subdiv(int p_quadrant, Viewport::ShadowAtlasQuadrantSubdiv p_subdiv);
void set_shadow_atlas_size(int p_size);
void set_size(Vector2 p_size);
void set_size_override(bool p_enable, Vector2 p_size = Vector2((-1, -1)), Vector2 p_margin = Vector2((0, 0)));
void set_size_override_stretch(bool p_enabled);
void set_snap_controls_to_pixels(bool p_enabled);
void set_transparent_background(bool p_enable);
void set_update_mode(Viewport::UpdateMode p_mode);
void set_usage(Viewport::Usage p_usage);
void set_use_arvr(bool p_use);
void set_use_debanding(bool p_enable);
void set_use_fxaa(bool p_enable);
void set_use_own_world(bool p_enable);
void set_use_render_direct_to_screen(bool p_enable);
void set_vflip(bool p_enable);
void set_world(World p_world);
void set_world_2d(World2D p_world_2d);
void unhandled_input(InputEvent p_local_event);
void update_worlds();
bool use_arvr();
void warp_mouse(Vector2 p_to_position);

protected:
Viewport(WasGoId p_wasgo_id);
public:
Viewport();
~Viewport();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_Viewport_wrapper_find_world(WasGoId wasgo_id);
WasGoId _wasgo_Viewport_wrapper_find_world_2d(WasGoId wasgo_id);
WasGoId _wasgo_Viewport_wrapper_get_camera(WasGoId wasgo_id);
void _wasgo_Viewport_wrapper_get_canvas_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_Viewport_wrapper_get_clear_mode(WasGoId wasgo_id);
WasGoId _wasgo_Viewport_wrapper_get_debug_draw(WasGoId wasgo_id);
void _wasgo_Viewport_wrapper_get_final_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Viewport_wrapper_get_global_canvas_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Viewport_wrapper_get_hdr(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_get_keep_3d_linear(WasGoId wasgo_id);
WasGoId _wasgo_Viewport_wrapper_get_modal_stack_top(WasGoId wasgo_id);
void _wasgo_Viewport_wrapper_get_mouse_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_Viewport_wrapper_get_msaa(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_get_physics_object_picking(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_get_render_info(WasGoId wasgo_id, WasGoId p_info);
WasGoId _wasgo_Viewport_wrapper_get_shadow_atlas_quadrant_subdiv(WasGoId wasgo_id, int p_quadrant);
int _wasgo_Viewport_wrapper_get_shadow_atlas_size(WasGoId wasgo_id);
void _wasgo_Viewport_wrapper_get_size(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Viewport_wrapper_get_size_override(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_Viewport_wrapper_get_texture(WasGoId wasgo_id);
WasGoId _wasgo_Viewport_wrapper_get_update_mode(WasGoId wasgo_id);
WasGoId _wasgo_Viewport_wrapper_get_usage(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_get_use_debanding(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_get_use_fxaa(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_get_vflip(WasGoId wasgo_id);
void _wasgo_Viewport_wrapper_get_viewport_rid(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Viewport_wrapper_get_visible_rect(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_Viewport_wrapper_get_world(WasGoId wasgo_id);
WasGoId _wasgo_Viewport_wrapper_get_world_2d(WasGoId wasgo_id);
WasGoId _wasgo_Viewport_wrapper_gui_get_drag_data(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_gui_has_modal_stack(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_gui_is_dragging(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_has_transparent_background(WasGoId wasgo_id);
void _wasgo_Viewport_wrapper_input(WasGoId wasgo_id, WasGoId p_local_event);
int _wasgo_Viewport_wrapper_is_3d_disabled(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_is_audio_listener(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_is_audio_listener_2d(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_is_handling_input_locally(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_is_input_disabled(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_is_input_handled(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_is_size_override_enabled(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_is_size_override_stretch_enabled(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_is_snap_controls_to_pixels_enabled(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_is_using_own_world(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_is_using_render_direct_to_screen(WasGoId wasgo_id);
void _wasgo_Viewport_wrapper_set_as_audio_listener(WasGoId wasgo_id, bool p_enable);
void _wasgo_Viewport_wrapper_set_as_audio_listener_2d(WasGoId wasgo_id, bool p_enable);
void _wasgo_Viewport_wrapper_set_attach_to_screen_rect(WasGoId wasgo_id, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);
void _wasgo_Viewport_wrapper_set_canvas_transform(WasGoId wasgo_id, const uint8_t * p_xform, int p_xform_wasgo_buffer_size);
void _wasgo_Viewport_wrapper_set_clear_mode(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_Viewport_wrapper_set_debug_draw(WasGoId wasgo_id, WasGoId p_debug_draw);
void _wasgo_Viewport_wrapper_set_disable_3d(WasGoId wasgo_id, bool p_disable);
void _wasgo_Viewport_wrapper_set_disable_input(WasGoId wasgo_id, bool p_disable);
void _wasgo_Viewport_wrapper_set_global_canvas_transform(WasGoId wasgo_id, const uint8_t * p_xform, int p_xform_wasgo_buffer_size);
void _wasgo_Viewport_wrapper_set_handle_input_locally(WasGoId wasgo_id, bool p_enable);
void _wasgo_Viewport_wrapper_set_hdr(WasGoId wasgo_id, bool p_enable);
void _wasgo_Viewport_wrapper_set_input_as_handled(WasGoId wasgo_id);
void _wasgo_Viewport_wrapper_set_keep_3d_linear(WasGoId wasgo_id, bool p_keep_3d_linear);
void _wasgo_Viewport_wrapper_set_msaa(WasGoId wasgo_id, WasGoId p_msaa);
void _wasgo_Viewport_wrapper_set_physics_object_picking(WasGoId wasgo_id, bool p_enable);
void _wasgo_Viewport_wrapper_set_shadow_atlas_quadrant_subdiv(WasGoId wasgo_id, int p_quadrant, WasGoId p_subdiv);
void _wasgo_Viewport_wrapper_set_shadow_atlas_size(WasGoId wasgo_id, int p_size);
void _wasgo_Viewport_wrapper_set_size(WasGoId wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);
void _wasgo_Viewport_wrapper_set_size_override(WasGoId wasgo_id, bool p_enable, const uint8_t * p_size, int p_size_wasgo_buffer_size, const uint8_t * p_margin, int p_margin_wasgo_buffer_size);
void _wasgo_Viewport_wrapper_set_size_override_stretch(WasGoId wasgo_id, bool p_enabled);
void _wasgo_Viewport_wrapper_set_snap_controls_to_pixels(WasGoId wasgo_id, bool p_enabled);
void _wasgo_Viewport_wrapper_set_transparent_background(WasGoId wasgo_id, bool p_enable);
void _wasgo_Viewport_wrapper_set_update_mode(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_Viewport_wrapper_set_usage(WasGoId wasgo_id, WasGoId p_usage);
void _wasgo_Viewport_wrapper_set_use_arvr(WasGoId wasgo_id, bool p_use);
void _wasgo_Viewport_wrapper_set_use_debanding(WasGoId wasgo_id, bool p_enable);
void _wasgo_Viewport_wrapper_set_use_fxaa(WasGoId wasgo_id, bool p_enable);
void _wasgo_Viewport_wrapper_set_use_own_world(WasGoId wasgo_id, bool p_enable);
void _wasgo_Viewport_wrapper_set_use_render_direct_to_screen(WasGoId wasgo_id, bool p_enable);
void _wasgo_Viewport_wrapper_set_vflip(WasGoId wasgo_id, bool p_enable);
void _wasgo_Viewport_wrapper_set_world(WasGoId wasgo_id, WasGoId p_world);
void _wasgo_Viewport_wrapper_set_world_2d(WasGoId wasgo_id, WasGoId p_world_2d);
void _wasgo_Viewport_wrapper_unhandled_input(WasGoId wasgo_id, WasGoId p_local_event);
void _wasgo_Viewport_wrapper_update_worlds(WasGoId wasgo_id);
int _wasgo_Viewport_wrapper_use_arvr(WasGoId wasgo_id);
void _wasgo_Viewport_wrapper_warp_mouse(WasGoId wasgo_id, const uint8_t * p_to_position, int p_to_position_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_Viewport_constructor();
    void _wasgo_Viewport_destructor(WasGoId p_wasgo_id);
            
}
#endif