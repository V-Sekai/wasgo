/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Node2D.h"
#include "Vector2.h"
#include "Node.h"
#include "Object.h"
class Camera2D : public Node2D{
public: Camera2D();
enum Camera2DProcessMode{
CAMERA2D_PROCESS_PHYSICS: 0,
};
enum AnchorMode{
ANCHOR_MODE_FIXED_TOP_LEFT: 0,
};
void  _make_current(Object arg0);
void  _set_current(bool current);
void  _set_old_smoothing(float follow_smoothing);
void  _update_scroll();
void  _update_scroll();
void  align();
void  align();
void  clear_current();
void  clear_current();
void  force_update_scroll();
void  force_update_scroll();
enum.Camera2D::AnchorMode  get_anchor_mode();
enum.Camera2D::AnchorMode  get_anchor_mode();
Vector2  get_camera_position();
Vector2  get_camera_position();
Vector2  get_camera_screen_center();
Vector2  get_camera_screen_center();
Node  get_custom_viewport();
Node  get_custom_viewport();
float  get_drag_margin(int margin);
float  get_follow_smoothing();
float  get_follow_smoothing();
float  get_h_offset();
float  get_h_offset();
int  get_limit(int margin);
Vector2  get_offset();
Vector2  get_offset();
enum.Camera2D::Camera2DProcessMode  get_process_mode();
enum.Camera2D::Camera2DProcessMode  get_process_mode();
float  get_v_offset();
float  get_v_offset();
Vector2  get_zoom();
Vector2  get_zoom();
bool  is_current();
bool  is_current();
bool  is_follow_smoothing_enabled();
bool  is_follow_smoothing_enabled();
bool  is_h_drag_enabled();
bool  is_h_drag_enabled();
bool  is_limit_drawing_enabled();
bool  is_limit_drawing_enabled();
bool  is_limit_smoothing_enabled();
bool  is_limit_smoothing_enabled();
bool  is_margin_drawing_enabled();
bool  is_margin_drawing_enabled();
bool  is_rotating();
bool  is_rotating();
bool  is_screen_drawing_enabled();
bool  is_screen_drawing_enabled();
bool  is_v_drag_enabled();
bool  is_v_drag_enabled();
void  make_current();
void  make_current();
void  reset_smoothing();
void  reset_smoothing();
void  set_anchor_mode(int anchor_mode);
void  set_custom_viewport(Node viewport);
void  set_drag_margin(int margin, float drag_margin);
void  set_enable_follow_smoothing(bool follow_smoothing);
void  set_follow_smoothing(float follow_smoothing);
void  set_h_drag_enabled(bool enabled);
void  set_h_offset(float ofs);
void  set_limit(int margin, int limit);
void  set_limit_drawing_enabled(bool limit_drawing_enabled);
void  set_limit_smoothing_enabled(bool limit_smoothing_enabled);
void  set_margin_drawing_enabled(bool margin_drawing_enabled);
void  set_offset(Vector2 offset);
void  set_process_mode(int mode);
void  set_rotating(bool rotating);
void  set_screen_drawing_enabled(bool screen_drawing_enabled);
void  set_v_drag_enabled(bool enabled);
void  set_v_offset(float ofs);
void  set_zoom(Vector2 zoom);
};