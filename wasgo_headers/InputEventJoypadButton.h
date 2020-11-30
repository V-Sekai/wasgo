/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTJOYPADBUTTON_H
#define INPUTEVENTJOYPADBUTTON_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "InputEvent.h"
class InputEventJoypadButton : public InputEvent{
int get_button_index();
float get_pressure();
void set_button_index(int p_button_index);
void set_pressed(bool p_pressed);
void set_pressure(float p_pressure);

InputEventJoypadButton(WasGoId p_wasgo_id);
~InputEventJoypadButton();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_InputEventJoypadButton_wrapper_get_button_index(WasGoId wasgo_id);
float _wasgo_InputEventJoypadButton_wrapper_get_pressure(WasGoId wasgo_id);
void _wasgo_InputEventJoypadButton_wrapper_set_button_index(WasGoId wasgo_id, int p_button_index);
void _wasgo_InputEventJoypadButton_wrapper_set_pressed(WasGoId wasgo_id, bool p_pressed);
void _wasgo_InputEventJoypadButton_wrapper_set_pressure(WasGoId wasgo_id, float p_pressure);
}
#endif