/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTMIDI_H
#define INPUTEVENTMIDI_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "InputEvent.h"
class InputEventMIDI : public InputEvent{
int get_channel();
int get_controller_number();
int get_controller_value();
int get_instrument();
int get_message();
int get_pitch();
int get_pressure();
int get_velocity();
void set_channel(int p_channel);
void set_controller_number(int p_controller_number);
void set_controller_value(int p_controller_value);
void set_instrument(int p_instrument);
void set_message(int p_message);
void set_pitch(int p_pitch);
void set_pressure(int p_pressure);
void set_velocity(int p_velocity);

InputEventMIDI(WasGoId p_wasgo_id);
~InputEventMIDI();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_InputEventMIDI_wrapper_get_channel(WasGoId wasgo_id);
int _wasgo_InputEventMIDI_wrapper_get_controller_number(WasGoId wasgo_id);
int _wasgo_InputEventMIDI_wrapper_get_controller_value(WasGoId wasgo_id);
int _wasgo_InputEventMIDI_wrapper_get_instrument(WasGoId wasgo_id);
int _wasgo_InputEventMIDI_wrapper_get_message(WasGoId wasgo_id);
int _wasgo_InputEventMIDI_wrapper_get_pitch(WasGoId wasgo_id);
int _wasgo_InputEventMIDI_wrapper_get_pressure(WasGoId wasgo_id);
int _wasgo_InputEventMIDI_wrapper_get_velocity(WasGoId wasgo_id);
void _wasgo_InputEventMIDI_wrapper_set_channel(WasGoId wasgo_id, int p_channel);
void _wasgo_InputEventMIDI_wrapper_set_controller_number(WasGoId wasgo_id, int p_controller_number);
void _wasgo_InputEventMIDI_wrapper_set_controller_value(WasGoId wasgo_id, int p_controller_value);
void _wasgo_InputEventMIDI_wrapper_set_instrument(WasGoId wasgo_id, int p_instrument);
void _wasgo_InputEventMIDI_wrapper_set_message(WasGoId wasgo_id, int p_message);
void _wasgo_InputEventMIDI_wrapper_set_pitch(WasGoId wasgo_id, int p_pitch);
void _wasgo_InputEventMIDI_wrapper_set_pressure(WasGoId wasgo_id, int p_pressure);
void _wasgo_InputEventMIDI_wrapper_set_velocity(WasGoId wasgo_id, int p_velocity);
}
#endif