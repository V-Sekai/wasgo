/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "InputEvent.h"
class InputEventMIDI : public InputEvent{
public: InputEventMIDI();
int  get_channel();
int  get_channel();
int  get_controller_number();
int  get_controller_number();
int  get_controller_value();
int  get_controller_value();
int  get_instrument();
int  get_instrument();
int  get_message();
int  get_message();
int  get_pitch();
int  get_pitch();
int  get_pressure();
int  get_pressure();
int  get_velocity();
int  get_velocity();
void  set_channel(int channel);
void  set_controller_number(int controller_number);
void  set_controller_value(int controller_value);
void  set_instrument(int instrument);
void  set_message(int message);
void  set_pitch(int pitch);
void  set_pressure(int pressure);
void  set_velocity(int velocity);
};