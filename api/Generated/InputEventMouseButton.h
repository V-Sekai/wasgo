/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTMOUSEBUTTON_H
#define INPUTEVENTMOUSEBUTTON_H

#include "wasgo\wasgoid.h"

#include "InputEventMouse.h"
class InputEventMouseButton : public InputEventMouse{
public:
int get_button_index();
float get_factor();
bool is_doubleclick();
void set_button_index(int p_button_index);
void set_doubleclick(bool p_doubleclick);
void set_factor(float p_factor);
void set_pressed(bool p_pressed);

protected:
public:
explicit InputEventMouseButton(WasGoID p_wasgo_id);
explicit InputEventMouseButton(InputEventMouse other);
InputEventMouseButton();
InputEventMouseButton new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_InputEventMouseButton_wrapper_get_button_index(WasGoID wasgo_id);
float _wasgo_InputEventMouseButton_wrapper_get_factor(WasGoID wasgo_id);
int _wasgo_InputEventMouseButton_wrapper_is_doubleclick(WasGoID wasgo_id);
void _wasgo_InputEventMouseButton_wrapper_set_button_index(WasGoID wasgo_id, int p_button_index);
void _wasgo_InputEventMouseButton_wrapper_set_doubleclick(WasGoID wasgo_id, bool p_doubleclick);
void _wasgo_InputEventMouseButton_wrapper_set_factor(WasGoID wasgo_id, float p_factor);
void _wasgo_InputEventMouseButton_wrapper_set_pressed(WasGoID wasgo_id, bool p_pressed);

    //constructor wrappers
    WasGoID _wasgo_InputEventMouseButton_constructor();
            
}
#endif