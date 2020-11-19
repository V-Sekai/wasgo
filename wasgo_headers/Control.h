/* THIS FILE IS GENERATED */
#ifndef CONTROL_H
#define CONTROL_H

#include <stdint.h>

#include "Vector2.h"
#include "String.h"
#include "Theme.h"
#include "NodePath.h"
#include "Rect2.h"
#include "CanvasItem.h"
#include "Object.h"
#include "Font.h"
#include "Shader.h"
#include "Texture.h"
#include "StyleBox.h"
#include "InputEvent.h"
#include "Variant.h"
class Control : public CanvasItem{
public: Control();
enum Anchor{
ANCHOR_BEGIN: 0,
};
enum FocusMode{
FOCUS_NONE: 0,
FOCUS_CLICK: 1,
};
enum LayoutPresetMode{
PRESET_MODE_MINSIZE: 0,
PRESET_MODE_KEEP_WIDTH: 1,
PRESET_MODE_KEEP_HEIGHT: 2,
};
enum MouseFilter{
MOUSE_FILTER_STOP: 0,
MOUSE_FILTER_PASS: 1,
};
enum CursorShape{
CURSOR_ARROW: 0,
CURSOR_IBEAM: 1,
CURSOR_POINTING_HAND: 2,
CURSOR_CROSS: 3,
CURSOR_WAIT: 4,
CURSOR_BUSY: 5,
CURSOR_DRAG: 6,
CURSOR_CAN_DROP: 7,
CURSOR_FORBIDDEN: 8,
CURSOR_VSIZE: 9,
CURSOR_HSIZE: 10,
CURSOR_BDIAGSIZE: 11,
CURSOR_FDIAGSIZE: 12,
CURSOR_MOVE: 13,
CURSOR_VSPLIT: 14,
CURSOR_HSPLIT: 15,
};
enum GrowDirection{
GROW_DIRECTION_BEGIN: 0,
GROW_DIRECTION_END: 1,
};
enum SizeFlags{
SIZE_FILL: 1,
SIZE_EXPAND: 2,
SIZE_EXPAND_FILL: 3,
SIZE_SHRINK_CENTER: 4,
};
enum LayoutPreset{
PRESET_TOP_LEFT: 0,
PRESET_TOP_RIGHT: 1,
PRESET_BOTTOM_LEFT: 2,
PRESET_BOTTOM_RIGHT: 3,
PRESET_CENTER_LEFT: 4,
PRESET_CENTER_TOP: 5,
PRESET_CENTER_RIGHT: 6,
PRESET_CENTER_BOTTOM: 7,
PRESET_CENTER: 8,
PRESET_LEFT_WIDE: 9,
PRESET_TOP_WIDE: 10,
PRESET_RIGHT_WIDE: 11,
PRESET_BOTTOM_WIDE: 12,
PRESET_VCENTER_WIDE: 13,
PRESET_HCENTER_WIDE: 14,
};
bool  _clips_input();
bool  _clips_input();
Vector2  _get_minimum_size();
Vector2  _get_minimum_size();
String  _get_tooltip();
String  _get_tooltip();
void  _gui_input(InputEvent event);
Object  _make_custom_tooltip(String for_text);
void  _override_changed();
void  _override_changed();
void  _set_anchor(int margin, float anchor);
void  _set_global_position(Vector2 position);
void  _set_position(Vector2 margin);
void  _set_size(Vector2 size);
void  _size_changed();
void  _size_changed();
void  _theme_changed();
void  _theme_changed();
void  _update_minimum_size();
void  _update_minimum_size();
void  accept_event();
void  accept_event();
void  add_color_override(String name, Color color);
void  add_constant_override(String name, int constant);
void  add_font_override(String name, Font font);
void  add_icon_override(String name, Texture texture);
void  add_shader_override(String name, Shader shader);
void  add_stylebox_override(String name, StyleBox stylebox);
bool  can_drop_data(Vector2 position, Variant data);
void  drop_data(Vector2 position, Variant data);
void  force_drag(Variant data, Control preview);
float  get_anchor(int margin);
Vector2  get_begin();
Vector2  get_begin();
Color  get_color(String name, String type = "");
Vector2  get_combined_minimum_size();
Vector2  get_combined_minimum_size();
int  get_constant(String name, String type = "");
enum.Control::CursorShape  get_cursor_shape(Vector2 position = (0, 0));
Vector2  get_custom_minimum_size();
Vector2  get_custom_minimum_size();
enum.Control::CursorShape  get_default_cursor_shape();
enum.Control::CursorShape  get_default_cursor_shape();
Variant  get_drag_data(Vector2 position);
Vector2  get_end();
Vector2  get_end();
enum.Control::FocusMode  get_focus_mode();
enum.Control::FocusMode  get_focus_mode();
NodePath  get_focus_neighbour(int margin);
NodePath  get_focus_next();
NodePath  get_focus_next();
Control  get_focus_owner();
Control  get_focus_owner();
NodePath  get_focus_previous();
NodePath  get_focus_previous();
Font  get_font(String name, String type = "");
Vector2  get_global_position();
Vector2  get_global_position();
Rect2  get_global_rect();
Rect2  get_global_rect();
enum.Control::GrowDirection  get_h_grow_direction();
enum.Control::GrowDirection  get_h_grow_direction();
int  get_h_size_flags();
int  get_h_size_flags();
Texture  get_icon(String name, String type = "");
float  get_margin(int margin);
Vector2  get_minimum_size();
Vector2  get_minimum_size();
enum.Control::MouseFilter  get_mouse_filter();
enum.Control::MouseFilter  get_mouse_filter();
Vector2  get_parent_area_size();
Vector2  get_parent_area_size();
Control  get_parent_control();
Control  get_parent_control();
Vector2  get_pivot_offset();
Vector2  get_pivot_offset();
Vector2  get_position();
Vector2  get_position();
Rect2  get_rect();
Rect2  get_rect();
float  get_rotation();
float  get_rotation();
float  get_rotation_degrees();
float  get_rotation_degrees();
Vector2  get_scale();
Vector2  get_scale();
Vector2  get_size();
Vector2  get_size();
float  get_stretch_ratio();
float  get_stretch_ratio();
StyleBox  get_stylebox(String name, String type = "");
Theme  get_theme();
Theme  get_theme();
String  get_tooltip(Vector2 at_position = (0, 0));
enum.Control::GrowDirection  get_v_grow_direction();
enum.Control::GrowDirection  get_v_grow_direction();
int  get_v_size_flags();
int  get_v_size_flags();
void  grab_click_focus();
void  grab_click_focus();
void  grab_focus();
void  grab_focus();
bool  has_color(String name, String type = "");
bool  has_color_override(String name);
bool  has_constant(String name, String type = "");
bool  has_constant_override(String name);
bool  has_focus();
bool  has_focus();
bool  has_font(String name, String type = "");
bool  has_font_override(String name);
bool  has_icon(String name, String type = "");
bool  has_icon_override(String name);
bool  has_point(Vector2 point);
bool  has_shader_override(String name);
bool  has_stylebox(String name, String type = "");
bool  has_stylebox_override(String name);
bool  is_clipping_contents();
bool  is_clipping_contents();
void  minimum_size_changed();
void  minimum_size_changed();
void  release_focus();
void  release_focus();
void  set_anchor(int margin, float anchor, bool keep_margin = false, bool push_opposite_anchor = true);
void  set_anchor_and_margin(int margin, float anchor, float offset, bool push_opposite_anchor = false);
void  set_anchors_and_margins_preset(int preset, int resize_mode = 0, int margin = 0);
void  set_anchors_preset(int preset, bool keep_margins = false);
void  set_begin(Vector2 position);
void  set_clip_contents(bool enable);
void  set_custom_minimum_size(Vector2 size);
void  set_default_cursor_shape(int shape);
void  set_drag_forwarding(Control target);
void  set_drag_preview(Control control);
void  set_end(Vector2 position);
void  set_focus_mode(int mode);
void  set_focus_neighbour(int margin, NodePath neighbour);
void  set_focus_next(NodePath next);
void  set_focus_previous(NodePath previous);
void  set_global_position(Vector2 position, bool keep_margins = false);
void  set_h_grow_direction(int direction);
void  set_h_size_flags(int flags);
void  set_margin(int margin, float offset);
void  set_margins_preset(int preset, int resize_mode = 0, int margin = 0);
void  set_mouse_filter(int filter);
void  set_pivot_offset(Vector2 pivot_offset);
void  set_position(Vector2 position, bool keep_margins = false);
void  set_rotation(float radians);
void  set_rotation_degrees(float degrees);
void  set_scale(Vector2 scale);
void  set_size(Vector2 size, bool keep_margins = false);
void  set_stretch_ratio(float ratio);
void  set_theme(Theme theme);
void  set_tooltip(String tooltip);
void  set_v_grow_direction(int direction);
void  set_v_size_flags(int flags);
void  show_modal(bool exclusive = false);
void  warp_mouse(Vector2 to_position);
};
#endif