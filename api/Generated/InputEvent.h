/* THIS FILE IS GENERATED */
#ifndef INPUTEVENT_H
#define INPUTEVENT_H

#include "wasgo\wasgoid.h"

#include "Resource.h"
#include "Vector2.h"
#include "Transform2D.h"
#include "Ustring.h"
class InputEvent : public Resource{
public:
bool accumulate(InputEvent p_with_event);
String as_text();
float get_action_strength(String p_action);
int get_device();
bool is_action(String p_action);
bool is_action_pressed(String p_action, bool p_allow_echo = (bool) false);
bool is_action_released(String p_action);
bool is_action_type();
bool is_echo();
bool is_pressed();
void set_device(int p_device);
bool shortcut_match(InputEvent p_event);
InputEvent xformed_by(Transform2D p_xform, Vector2 p_local_ofs = Vector2(0, 0));

protected:
public:
explicit InputEvent(WasGoID p_wasgo_id);
explicit InputEvent(Resource other);
InputEvent();
InputEvent new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_InputEvent_wrapper_accumulate(WasGoID wasgo_id, WasGoID p_with_event);
void _wasgo_InputEvent_wrapper_as_text(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_InputEvent_wrapper_get_action_strength(WasGoID wasgo_id, const uint8_t * p_action, int p_action_wasgo_buffer_size);
int _wasgo_InputEvent_wrapper_get_device(WasGoID wasgo_id);
int _wasgo_InputEvent_wrapper_is_action(WasGoID wasgo_id, const uint8_t * p_action, int p_action_wasgo_buffer_size);
int _wasgo_InputEvent_wrapper_is_action_pressed(WasGoID wasgo_id, const uint8_t * p_action, int p_action_wasgo_buffer_size, bool p_allow_echo);
int _wasgo_InputEvent_wrapper_is_action_released(WasGoID wasgo_id, const uint8_t * p_action, int p_action_wasgo_buffer_size);
int _wasgo_InputEvent_wrapper_is_action_type(WasGoID wasgo_id);
int _wasgo_InputEvent_wrapper_is_echo(WasGoID wasgo_id);
int _wasgo_InputEvent_wrapper_is_pressed(WasGoID wasgo_id);
void _wasgo_InputEvent_wrapper_set_device(WasGoID wasgo_id, int p_device);
int _wasgo_InputEvent_wrapper_shortcut_match(WasGoID wasgo_id, WasGoID p_event);
WasGoID _wasgo_InputEvent_wrapper_xformed_by(WasGoID wasgo_id, const uint8_t * p_xform, int p_xform_wasgo_buffer_size, const uint8_t * p_local_ofs, int p_local_ofs_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_InputEvent_constructor();
            
}
#endif