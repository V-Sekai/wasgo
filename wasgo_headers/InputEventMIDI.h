/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTMIDI_H
#define INPUTEVENTMIDI_H

#include "stdint.h"

#include "InputEvent.h"
class InputEventMIDI : public InputEvent{
public: InputEventMIDI();
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
};
#endif