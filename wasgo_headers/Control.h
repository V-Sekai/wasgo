/* THIS FILE IS GENERATED */
#ifndef CONTROL_H
#define CONTROL_H

#include "wasgo\wasgoid.h"

#include "Color.h"
#include "Vector2.h"
#include "Font.h"
#include "Rect2.h"
class StyleBox;
#include "NodePath.h"
#include "Shader.h"
#include "math_defs.h"
#include "CanvasItem.h"
#include "Variant.h"
#include "Theme.h"
#include "Ustring.h"
#include "Texture.h"
class Control : public CanvasItem{
public:
enum Anchor{
ANCHOR_BEGIN,
ANCHOR_END
};
enum CursorShape{
CURSOR_ARROW,
CURSOR_IBEAM,
CURSOR_POINTING_HAND,
CURSOR_CROSS,
CURSOR_WAIT,
CURSOR_BUSY,
CURSOR_DRAG,
CURSOR_CAN_DROP,
CURSOR_FORBIDDEN,
CURSOR_VSIZE,
CURSOR_HSIZE,
CURSOR_BDIAGSIZE,
CURSOR_FDIAGSIZE,
CURSOR_MOVE,
CURSOR_VSPLIT,
CURSOR_HSPLIT,
CURSOR_HELP
};
enum FocusMode{
FOCUS_NONE,
FOCUS_CLICK,
FOCUS_ALL
};
enum GrowDirection{
GROW_DIRECTION_BEGIN,
GROW_DIRECTION_END,
GROW_DIRECTION_BOTH
};
enum LayoutPreset{
PRESET_TOP_LEFT,
PRESET_TOP_RIGHT,
PRESET_BOTTOM_LEFT,
PRESET_BOTTOM_RIGHT,
PRESET_CENTER_LEFT,
PRESET_CENTER_TOP,
PRESET_CENTER_RIGHT,
PRESET_CENTER_BOTTOM,
PRESET_CENTER,
PRESET_LEFT_WIDE,
PRESET_TOP_WIDE,
PRESET_RIGHT_WIDE,
PRESET_BOTTOM_WIDE,
PRESET_VCENTER_WIDE,
PRESET_HCENTER_WIDE,
PRESET_WIDE
};
enum LayoutPresetMode{
PRESET_MODE_MINSIZE,
PRESET_MODE_KEEP_WIDTH,
PRESET_MODE_KEEP_HEIGHT,
PRESET_MODE_KEEP_SIZE
};
enum MouseFilter{
MOUSE_FILTER_STOP,
MOUSE_FILTER_PASS,
MOUSE_FILTER_IGNORE
};
enum SizeFlags{
SIZE_FILL,
SIZE_EXPAND,
SIZE_EXPAND_FILL,
SIZE_SHRINK_CENTER,
SIZE_SHRINK_END
};
void accept_event();
void add_color_override(String p_name, Color p_color);
void add_constant_override(String p_name, int p_constant);
void add_font_override(String p_name, Font p_font);
void add_icon_override(String p_name, Texture p_texture);
void add_shader_override(String p_name, Shader p_shader);
void add_stylebox_override(String p_name, StyleBox p_stylebox);
bool can_drop_data(Vector2 p_position, Variant p_data);
void drop_data(Vector2 p_position, Variant p_data);
void force_drag(Variant p_data, Control p_preview);
float get_anchor(Margin p_margin);
Vector2 get_begin();
Color get_color(String p_name, String p_node_type = String());
Vector2 get_combined_minimum_size();
int get_constant(String p_name, String p_node_type = String());
Control::CursorShape get_cursor_shape(Vector2 p_position = Vector2(0, 0));
Vector2 get_custom_minimum_size();
Control::CursorShape get_default_cursor_shape();
Variant get_drag_data(Vector2 p_position);
Vector2 get_end();
Control::FocusMode get_focus_mode();
NodePath get_focus_neighbour(Margin p_margin);
NodePath get_focus_next();
Control get_focus_owner();
NodePath get_focus_previous();
Font get_font(String p_name, String p_node_type = String());
Vector2 get_global_position();
Rect2 get_global_rect();
Control::GrowDirection get_h_grow_direction();
int get_h_size_flags();
Texture get_icon(String p_name, String p_node_type = String());
float get_margin(Margin p_margin);
Vector2 get_minimum_size();
Control::MouseFilter get_mouse_filter();
Vector2 get_parent_area_size();
Control get_parent_control();
Vector2 get_pivot_offset();
Vector2 get_position();
Rect2 get_rect();
float get_rotation();
float get_rotation_degrees();
Vector2 get_scale();
Vector2 get_size();
float get_stretch_ratio();
StyleBox get_stylebox(String p_name, String p_node_type = String());
Theme get_theme();
String get_tooltip(Vector2 p_at_position = Vector2(0, 0));
Control::GrowDirection get_v_grow_direction();
int get_v_size_flags();
void grab_click_focus();
void grab_focus();
bool has_color(String p_name, String p_node_type = String());
bool has_color_override(String p_name);
bool has_constant(String p_name, String p_node_type = String());
bool has_constant_override(String p_name);
bool has_focus();
bool has_font(String p_name, String p_node_type = String());
bool has_font_override(String p_name);
bool has_icon(String p_name, String p_node_type = String());
bool has_icon_override(String p_name);
bool has_point(Vector2 p_point);
bool has_shader_override(String p_name);
bool has_stylebox(String p_name, String p_node_type = String());
bool has_stylebox_override(String p_name);
bool is_clipping_contents();
void minimum_size_changed();
void release_focus();
void set_anchor(Margin p_margin, float p_anchor, bool p_keep_margin = (bool) false, bool p_push_opposite_anchor = (bool) true);
void set_anchor_and_margin(Margin p_margin, float p_anchor, float p_offset, bool p_push_opposite_anchor = (bool) false);
void set_anchors_and_margins_preset(Control::LayoutPreset p_preset, Control::LayoutPresetMode p_resize_mode = (Control::LayoutPresetMode) 0, int p_margin = (int) 0);
void set_anchors_preset(Control::LayoutPreset p_preset, bool p_keep_margins = (bool) false);
void set_begin(Vector2 p_position);
void set_clip_contents(bool p_enable);
void set_custom_minimum_size(Vector2 p_size);
void set_default_cursor_shape(Control::CursorShape p_shape);
void set_drag_forwarding(Control p_target);
void set_drag_preview(Control p_control);
void set_end(Vector2 p_position);
void set_focus_mode(Control::FocusMode p_mode);
void set_focus_neighbour(Margin p_margin, NodePath p_neighbour);
void set_focus_next(NodePath p_next);
void set_focus_previous(NodePath p_previous);
void set_global_position(Vector2 p_position, bool p_keep_margins = (bool) false);
void set_h_grow_direction(Control::GrowDirection p_direction);
void set_h_size_flags(int p_flags);
void set_margin(Margin p_margin, float p_offset);
void set_margins_preset(Control::LayoutPreset p_preset, Control::LayoutPresetMode p_resize_mode = (Control::LayoutPresetMode) 0, int p_margin = (int) 0);
void set_mouse_filter(Control::MouseFilter p_filter);
void set_pivot_offset(Vector2 p_pivot_offset);
void set_position(Vector2 p_position, bool p_keep_margins = (bool) false);
void set_rotation(float p_radians);
void set_rotation_degrees(float p_degrees);
void set_scale(Vector2 p_scale);
void set_size(Vector2 p_size, bool p_keep_margins = (bool) false);
void set_stretch_ratio(float p_ratio);
void set_theme(Theme p_theme);
void set_tooltip(String p_tooltip);
void set_v_grow_direction(Control::GrowDirection p_direction);
void set_v_size_flags(int p_flags);
void show_modal(bool p_exclusive = (bool) false);
void warp_mouse(Vector2 p_to_position);

protected:
public:
explicit Control(WasGoID p_wasgo_id);
explicit Control(CanvasItem other);
Control();
Control new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Control_wrapper_accept_event(WasGoID wasgo_id);
void _wasgo_Control_wrapper_add_color_override(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_Control_wrapper_add_constant_override(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, int p_constant);
void _wasgo_Control_wrapper_add_font_override(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, WasGoID p_font);
void _wasgo_Control_wrapper_add_icon_override(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, WasGoID p_texture);
void _wasgo_Control_wrapper_add_shader_override(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, WasGoID p_shader);
void _wasgo_Control_wrapper_add_stylebox_override(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, WasGoID p_stylebox);
int _wasgo_Control_wrapper_can_drop_data(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, WasGoID p_data);
void _wasgo_Control_wrapper_drop_data(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, WasGoID p_data);
void _wasgo_Control_wrapper_force_drag(WasGoID wasgo_id, WasGoID p_data, WasGoID p_preview);
float _wasgo_Control_wrapper_get_anchor(WasGoID wasgo_id, WasGoID p_margin);
void _wasgo_Control_wrapper_get_begin(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Control_wrapper_get_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
void _wasgo_Control_wrapper_get_combined_minimum_size(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Control_wrapper_get_constant(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoID _wasgo_Control_wrapper_get_cursor_shape(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_Control_wrapper_get_custom_minimum_size(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Control_wrapper_get_default_cursor_shape(WasGoID wasgo_id);
WasGoID _wasgo_Control_wrapper_get_drag_data(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_Control_wrapper_get_end(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Control_wrapper_get_focus_mode(WasGoID wasgo_id);
void _wasgo_Control_wrapper_get_focus_neighbour(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, WasGoID p_margin);
void _wasgo_Control_wrapper_get_focus_next(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Control_wrapper_get_focus_owner(WasGoID wasgo_id);
void _wasgo_Control_wrapper_get_focus_previous(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Control_wrapper_get_font(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
void _wasgo_Control_wrapper_get_global_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Control_wrapper_get_global_rect(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Control_wrapper_get_h_grow_direction(WasGoID wasgo_id);
int _wasgo_Control_wrapper_get_h_size_flags(WasGoID wasgo_id);
WasGoID _wasgo_Control_wrapper_get_icon(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
float _wasgo_Control_wrapper_get_margin(WasGoID wasgo_id, WasGoID p_margin);
void _wasgo_Control_wrapper_get_minimum_size(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Control_wrapper_get_mouse_filter(WasGoID wasgo_id);
void _wasgo_Control_wrapper_get_parent_area_size(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Control_wrapper_get_parent_control(WasGoID wasgo_id);
void _wasgo_Control_wrapper_get_pivot_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Control_wrapper_get_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Control_wrapper_get_rect(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_Control_wrapper_get_rotation(WasGoID wasgo_id);
float _wasgo_Control_wrapper_get_rotation_degrees(WasGoID wasgo_id);
void _wasgo_Control_wrapper_get_scale(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Control_wrapper_get_size(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_Control_wrapper_get_stretch_ratio(WasGoID wasgo_id);
WasGoID _wasgo_Control_wrapper_get_stylebox(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
WasGoID _wasgo_Control_wrapper_get_theme(WasGoID wasgo_id);
void _wasgo_Control_wrapper_get_tooltip(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_at_position, int p_at_position_wasgo_buffer_size);
WasGoID _wasgo_Control_wrapper_get_v_grow_direction(WasGoID wasgo_id);
int _wasgo_Control_wrapper_get_v_size_flags(WasGoID wasgo_id);
void _wasgo_Control_wrapper_grab_click_focus(WasGoID wasgo_id);
void _wasgo_Control_wrapper_grab_focus(WasGoID wasgo_id);
int _wasgo_Control_wrapper_has_color(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
int _wasgo_Control_wrapper_has_color_override(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_Control_wrapper_has_constant(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
int _wasgo_Control_wrapper_has_constant_override(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_Control_wrapper_has_focus(WasGoID wasgo_id);
int _wasgo_Control_wrapper_has_font(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
int _wasgo_Control_wrapper_has_font_override(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_Control_wrapper_has_icon(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
int _wasgo_Control_wrapper_has_icon_override(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_Control_wrapper_has_point(WasGoID wasgo_id, const uint8_t * p_point, int p_point_wasgo_buffer_size);
int _wasgo_Control_wrapper_has_shader_override(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_Control_wrapper_has_stylebox(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_node_type, int p_node_type_wasgo_buffer_size);
int _wasgo_Control_wrapper_has_stylebox_override(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_Control_wrapper_is_clipping_contents(WasGoID wasgo_id);
void _wasgo_Control_wrapper_minimum_size_changed(WasGoID wasgo_id);
void _wasgo_Control_wrapper_release_focus(WasGoID wasgo_id);
void _wasgo_Control_wrapper_set_anchor(WasGoID wasgo_id, WasGoID p_margin, float p_anchor, bool p_keep_margin, bool p_push_opposite_anchor);
void _wasgo_Control_wrapper_set_anchor_and_margin(WasGoID wasgo_id, WasGoID p_margin, float p_anchor, float p_offset, bool p_push_opposite_anchor);
void _wasgo_Control_wrapper_set_anchors_and_margins_preset(WasGoID wasgo_id, WasGoID p_preset, WasGoID p_resize_mode, int p_margin);
void _wasgo_Control_wrapper_set_anchors_preset(WasGoID wasgo_id, WasGoID p_preset, bool p_keep_margins);
void _wasgo_Control_wrapper_set_begin(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_Control_wrapper_set_clip_contents(WasGoID wasgo_id, bool p_enable);
void _wasgo_Control_wrapper_set_custom_minimum_size(WasGoID wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);
void _wasgo_Control_wrapper_set_default_cursor_shape(WasGoID wasgo_id, WasGoID p_shape);
void _wasgo_Control_wrapper_set_drag_forwarding(WasGoID wasgo_id, WasGoID p_target);
void _wasgo_Control_wrapper_set_drag_preview(WasGoID wasgo_id, WasGoID p_control);
void _wasgo_Control_wrapper_set_end(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_Control_wrapper_set_focus_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_Control_wrapper_set_focus_neighbour(WasGoID wasgo_id, WasGoID p_margin, const uint8_t * p_neighbour, int p_neighbour_wasgo_buffer_size);
void _wasgo_Control_wrapper_set_focus_next(WasGoID wasgo_id, const uint8_t * p_next, int p_next_wasgo_buffer_size);
void _wasgo_Control_wrapper_set_focus_previous(WasGoID wasgo_id, const uint8_t * p_previous, int p_previous_wasgo_buffer_size);
void _wasgo_Control_wrapper_set_global_position(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, bool p_keep_margins);
void _wasgo_Control_wrapper_set_h_grow_direction(WasGoID wasgo_id, WasGoID p_direction);
void _wasgo_Control_wrapper_set_h_size_flags(WasGoID wasgo_id, int p_flags);
void _wasgo_Control_wrapper_set_margin(WasGoID wasgo_id, WasGoID p_margin, float p_offset);
void _wasgo_Control_wrapper_set_margins_preset(WasGoID wasgo_id, WasGoID p_preset, WasGoID p_resize_mode, int p_margin);
void _wasgo_Control_wrapper_set_mouse_filter(WasGoID wasgo_id, WasGoID p_filter);
void _wasgo_Control_wrapper_set_pivot_offset(WasGoID wasgo_id, const uint8_t * p_pivot_offset, int p_pivot_offset_wasgo_buffer_size);
void _wasgo_Control_wrapper_set_position(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, bool p_keep_margins);
void _wasgo_Control_wrapper_set_rotation(WasGoID wasgo_id, float p_radians);
void _wasgo_Control_wrapper_set_rotation_degrees(WasGoID wasgo_id, float p_degrees);
void _wasgo_Control_wrapper_set_scale(WasGoID wasgo_id, const uint8_t * p_scale, int p_scale_wasgo_buffer_size);
void _wasgo_Control_wrapper_set_size(WasGoID wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size, bool p_keep_margins);
void _wasgo_Control_wrapper_set_stretch_ratio(WasGoID wasgo_id, float p_ratio);
void _wasgo_Control_wrapper_set_theme(WasGoID wasgo_id, WasGoID p_theme);
void _wasgo_Control_wrapper_set_tooltip(WasGoID wasgo_id, const uint8_t * p_tooltip, int p_tooltip_wasgo_buffer_size);
void _wasgo_Control_wrapper_set_v_grow_direction(WasGoID wasgo_id, WasGoID p_direction);
void _wasgo_Control_wrapper_set_v_size_flags(WasGoID wasgo_id, int p_flags);
void _wasgo_Control_wrapper_show_modal(WasGoID wasgo_id, bool p_exclusive);
void _wasgo_Control_wrapper_warp_mouse(WasGoID wasgo_id, const uint8_t * p_to_position, int p_to_position_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_Control_constructor();
            
}
#endif