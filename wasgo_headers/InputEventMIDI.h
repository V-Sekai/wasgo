/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTMIDI_H
#define INPUTEVENTMIDI_H

#include "wasgo\wasgo.h"

#include "InputEvent.h"
class InputEventMIDI : public InputEvent{
public:
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

protected:
public:
explicit InputEventMIDI(WasGoID p_wasgo_id);
explicit InputEventMIDI(InputEvent other);
InputEventMIDI new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_InputEventMIDI_wrapper_get_channel(WasGoID wasgo_id);
int _wasgo_InputEventMIDI_wrapper_get_controller_number(WasGoID wasgo_id);
int _wasgo_InputEventMIDI_wrapper_get_controller_value(WasGoID wasgo_id);
int _wasgo_InputEventMIDI_wrapper_get_instrument(WasGoID wasgo_id);
int _wasgo_InputEventMIDI_wrapper_get_message(WasGoID wasgo_id);
int _wasgo_InputEventMIDI_wrapper_get_pitch(WasGoID wasgo_id);
int _wasgo_InputEventMIDI_wrapper_get_pressure(WasGoID wasgo_id);
int _wasgo_InputEventMIDI_wrapper_get_velocity(WasGoID wasgo_id);
void _wasgo_InputEventMIDI_wrapper_set_channel(WasGoID wasgo_id, int p_channel);
void _wasgo_InputEventMIDI_wrapper_set_controller_number(WasGoID wasgo_id, int p_controller_number);
void _wasgo_InputEventMIDI_wrapper_set_controller_value(WasGoID wasgo_id, int p_controller_value);
void _wasgo_InputEventMIDI_wrapper_set_instrument(WasGoID wasgo_id, int p_instrument);
void _wasgo_InputEventMIDI_wrapper_set_message(WasGoID wasgo_id, int p_message);
void _wasgo_InputEventMIDI_wrapper_set_pitch(WasGoID wasgo_id, int p_pitch);
void _wasgo_InputEventMIDI_wrapper_set_pressure(WasGoID wasgo_id, int p_pressure);
void _wasgo_InputEventMIDI_wrapper_set_velocity(WasGoID wasgo_id, int p_velocity);

    //constructor wrappers
    WasGoID _wasgo_InputEventMIDI_constructor();
            
}
#endif