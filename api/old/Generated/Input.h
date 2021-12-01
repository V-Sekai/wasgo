/* THIS FILE IS GENERATED */
#ifndef INPUT_H
#define INPUT_H

#include "wasgo/wasgoid.h"

#include "Vector3.h"
#include "InputEvent.h"
#include "Object.h"
#include "Resource.h"
#include "Ustring.h"
#include "Variant.h"
#include "Vector2.h"
class Input : public Object{
public:
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
enum MouseMode{
MOUSE_MODE_VISIBLE,
MOUSE_MODE_HIDDEN,
MOUSE_MODE_CAPTURED,
MOUSE_MODE_CONFINED
};
static void action_press(String p_action, float p_strength = (float) 1);
static void action_release(String p_action);
static void add_joy_mapping(String p_mapping, bool p_update_existing = (bool) false);
static Vector3 get_accelerometer();
static float get_action_strength(String p_action);
// static Array get_connected_joypads();
static Input::CursorShape get_current_cursor_shape();
static Vector3 get_gravity();
static Vector3 get_gyroscope();
static float get_joy_axis(int p_device, int p_axis);
static int get_joy_axis_index_from_string(String p_axis);
static String get_joy_axis_string(int p_axis_index);
static int get_joy_button_index_from_string(String p_button);
static String get_joy_button_string(int p_button_index);
static String get_joy_guid(int p_device);
static String get_joy_name(int p_device);
static float get_joy_vibration_duration(int p_device);
static Vector2 get_joy_vibration_strength(int p_device);
static Vector2 get_last_mouse_speed();
static Vector3 get_magnetometer();
static int get_mouse_button_mask();
static Input::MouseMode get_mouse_mode();
static bool is_action_just_pressed(String p_action);
static bool is_action_just_released(String p_action);
static bool is_action_pressed(String p_action);
static bool is_joy_button_pressed(int p_device, int p_button);
static bool is_joy_known(int p_device);
static bool is_key_pressed(int p_scancode);
static bool is_mouse_button_pressed(int p_button);
static void joy_connection_changed(int p_device, bool p_connected, String p_name, String p_guid);
static void parse_input_event(InputEvent p_event);
static void remove_joy_mapping(String p_guid);
static void set_custom_mouse_cursor(Resource p_image, Input::CursorShape p_shape = (Input::CursorShape) 0, Vector2 p_hotspot = Vector2(0, 0));
static void set_default_cursor_shape(Input::CursorShape p_shape = (Input::CursorShape) 0);
static void set_mouse_mode(Input::MouseMode p_mode);
static void set_use_accumulated_input(bool p_enable);
static void start_joy_vibration(int p_device, float p_weak_magnitude, float p_strong_magnitude, float p_duration = (float) 0);
static void stop_joy_vibration(int p_device);
static void vibrate_handheld(int p_duration_ms = (int) 500);
static void warp_mouse_position(Vector2 p_to);
};


//Wrapper Functions
extern "C"{
void _wasgo_Input_wrapper_action_press(const uint8_t * p_action, int p_action_wasgo_buffer_size, float p_strength);
void _wasgo_Input_wrapper_action_release(const uint8_t * p_action, int p_action_wasgo_buffer_size);
void _wasgo_Input_wrapper_add_joy_mapping(const uint8_t * p_mapping, int p_mapping_wasgo_buffer_size, bool p_update_existing);
void _wasgo_Input_wrapper_get_accelerometer(uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_Input_wrapper_get_action_strength(const uint8_t * p_action, int p_action_wasgo_buffer_size);
WasGoID _wasgo_Input_wrapper_get_connected_joypads();
WasGoID _wasgo_Input_wrapper_get_current_cursor_shape();
void _wasgo_Input_wrapper_get_gravity(uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Input_wrapper_get_gyroscope(uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_Input_wrapper_get_joy_axis(int p_device, int p_axis);
int _wasgo_Input_wrapper_get_joy_axis_index_from_string(const uint8_t * p_axis, int p_axis_wasgo_buffer_size);
void _wasgo_Input_wrapper_get_joy_axis_string(uint8_t * wasgo_ret, int wasgo_ret_size, int p_axis_index);
int _wasgo_Input_wrapper_get_joy_button_index_from_string(const uint8_t * p_button, int p_button_wasgo_buffer_size);
void _wasgo_Input_wrapper_get_joy_button_string(uint8_t * wasgo_ret, int wasgo_ret_size, int p_button_index);
void _wasgo_Input_wrapper_get_joy_guid(uint8_t * wasgo_ret, int wasgo_ret_size, int p_device);
void _wasgo_Input_wrapper_get_joy_name(uint8_t * wasgo_ret, int wasgo_ret_size, int p_device);
float _wasgo_Input_wrapper_get_joy_vibration_duration(int p_device);
void _wasgo_Input_wrapper_get_joy_vibration_strength(uint8_t * wasgo_ret, int wasgo_ret_size, int p_device);
void _wasgo_Input_wrapper_get_last_mouse_speed(uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Input_wrapper_get_magnetometer(uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Input_wrapper_get_mouse_button_mask();
WasGoID _wasgo_Input_wrapper_get_mouse_mode();
int _wasgo_Input_wrapper_is_action_just_pressed(const uint8_t * p_action, int p_action_wasgo_buffer_size);
int _wasgo_Input_wrapper_is_action_just_released(const uint8_t * p_action, int p_action_wasgo_buffer_size);
int _wasgo_Input_wrapper_is_action_pressed(const uint8_t * p_action, int p_action_wasgo_buffer_size);
int _wasgo_Input_wrapper_is_joy_button_pressed(int p_device, int p_button);
int _wasgo_Input_wrapper_is_joy_known(int p_device);
int _wasgo_Input_wrapper_is_key_pressed(int p_scancode);
int _wasgo_Input_wrapper_is_mouse_button_pressed(int p_button);
void _wasgo_Input_wrapper_joy_connection_changed(int p_device, bool p_connected, const uint8_t * p_name, int wasgo_throwaway, int p_name_wasgo_buffer_size, const uint8_t * p_guid, int p_guid_wasgo_buffer_size);
void _wasgo_Input_wrapper_parse_input_event(WasGoID p_event);
void _wasgo_Input_wrapper_remove_joy_mapping(const uint8_t * p_guid, int p_guid_wasgo_buffer_size);
void _wasgo_Input_wrapper_set_custom_mouse_cursor(WasGoID p_image, WasGoID p_shape, const uint8_t * p_hotspot, int wasgo_throwaway, int p_hotspot_wasgo_buffer_size);
void _wasgo_Input_wrapper_set_default_cursor_shape(WasGoID p_shape);
void _wasgo_Input_wrapper_set_mouse_mode(WasGoID p_mode);
void _wasgo_Input_wrapper_set_use_accumulated_input(bool p_enable);
void _wasgo_Input_wrapper_start_joy_vibration(int p_device, float p_weak_magnitude, float p_strong_magnitude, int wasgo_throwaway, float p_duration);
void _wasgo_Input_wrapper_stop_joy_vibration(int p_device);
void _wasgo_Input_wrapper_vibrate_handheld(int p_duration_ms);
void _wasgo_Input_wrapper_warp_mouse_position(const uint8_t * p_to, int p_to_wasgo_buffer_size);
            
}
#endif