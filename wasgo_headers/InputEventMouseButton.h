/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTMOUSEBUTTON_H
#define INPUTEVENTMOUSEBUTTON_H

#include "wasgo\wasgo.h"

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
InputEventMouseButton(WasGoId p_wasgo_id);
public:
InputEventMouseButton();
~InputEventMouseButton();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_InputEventMouseButton_wrapper_get_button_index(WasGoId wasgo_id);
float _wasgo_InputEventMouseButton_wrapper_get_factor(WasGoId wasgo_id);
int _wasgo_InputEventMouseButton_wrapper_is_doubleclick(WasGoId wasgo_id);
void _wasgo_InputEventMouseButton_wrapper_set_button_index(WasGoId wasgo_id, int p_button_index);
void _wasgo_InputEventMouseButton_wrapper_set_doubleclick(WasGoId wasgo_id, bool p_doubleclick);
void _wasgo_InputEventMouseButton_wrapper_set_factor(WasGoId wasgo_id, float p_factor);
void _wasgo_InputEventMouseButton_wrapper_set_pressed(WasGoId wasgo_id, bool p_pressed);

    //constructor and destructor wrappers
    WasGoId _wasgo_InputEventMouseButton_constructor();
    void _wasgo_InputEventMouseButton_destructor(WasGoId p_wasgo_id);
            
}
#endif