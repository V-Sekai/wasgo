/* THIS FILE IS GENERATED */
#ifndef INPUT_H
#define INPUT_H

#include <stdint.h>

#include "Vector2.h"
#include "String.h"
#include "Resource.h"
#include "Object.h"
#include "Vector3.h"
#include "Variant.h"
#include "InputEvent.h"
class Input : public Object{
public: Input();
enum MouseMode{
MOUSE_MODE_VISIBLE: 0,
MOUSE_MODE_HIDDEN: 1,
MOUSE_MODE_CAPTURED: 2,
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
void  action_press(String action, float strength = 1);
void  action_release(String action);
void  add_joy_mapping(String mapping, bool update_existing = false);
Vector3  get_accelerometer();
Vector3  get_accelerometer();
float  get_action_strength(String action);
Array  get_connected_joypads();
Array  get_connected_joypads();
enum.Input::CursorShape  get_current_cursor_shape();
enum.Input::CursorShape  get_current_cursor_shape();
Vector3  get_gravity();
Vector3  get_gravity();
Vector3  get_gyroscope();
Vector3  get_gyroscope();
float  get_joy_axis(int device, int axis);
int  get_joy_axis_index_from_string(String axis);
String  get_joy_axis_string(int axis_index);
int  get_joy_button_index_from_string(String button);
String  get_joy_button_string(int button_index);
String  get_joy_guid(int device);
String  get_joy_name(int device);
float  get_joy_vibration_duration(int device);
Vector2  get_joy_vibration_strength(int device);
Vector2  get_last_mouse_speed();
Vector2  get_last_mouse_speed();
Vector3  get_magnetometer();
Vector3  get_magnetometer();
int  get_mouse_button_mask();
int  get_mouse_button_mask();
enum.Input::MouseMode  get_mouse_mode();
enum.Input::MouseMode  get_mouse_mode();
bool  is_action_just_pressed(String action);
bool  is_action_just_released(String action);
bool  is_action_pressed(String action);
bool  is_joy_button_pressed(int device, int button);
bool  is_joy_known(int device);
bool  is_key_pressed(int scancode);
bool  is_mouse_button_pressed(int button);
void  joy_connection_changed(int device, bool connected, String name, String guid);
void  parse_input_event(InputEvent event);
void  remove_joy_mapping(String guid);
void  set_custom_mouse_cursor(Resource image, int shape = 0, Vector2 hotspot = (0, 0));
void  set_default_cursor_shape(int shape = 0);
void  set_mouse_mode(int mode);
void  set_use_accumulated_input(bool enable);
void  start_joy_vibration(int device, float weak_magnitude, float strong_magnitude, float duration = 0);
void  stop_joy_vibration(int device);
void  vibrate_handheld(int duration_ms = 500);
void  warp_mouse_position(Vector2 to);
};
#endif