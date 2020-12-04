/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTMOUSEMOTION_H
#define INPUTEVENTMOUSEMOTION_H

#include "wasgo\wasgo.h"

#include "InputEventMouse.h"
#include "Vector2.h"
class InputEventMouseMotion : public InputEventMouse{
public:
float get_pressure();
Vector2 get_relative();
Vector2 get_speed();
Vector2 get_tilt();
void set_pressure(float p_pressure);
void set_relative(Vector2 p_relative);
void set_speed(Vector2 p_speed);
void set_tilt(Vector2 p_tilt);

protected:
public:
explicit InputEventMouseMotion(WasGoID p_wasgo_id);
explicit InputEventMouseMotion(InputEventMouse other);
InputEventMouseMotion new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_InputEventMouseMotion_wrapper_get_pressure(WasGoID wasgo_id);
void _wasgo_InputEventMouseMotion_wrapper_get_relative(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_InputEventMouseMotion_wrapper_get_speed(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_InputEventMouseMotion_wrapper_get_tilt(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_InputEventMouseMotion_wrapper_set_pressure(WasGoID wasgo_id, float p_pressure);
void _wasgo_InputEventMouseMotion_wrapper_set_relative(WasGoID wasgo_id, const uint8_t * p_relative, int p_relative_wasgo_buffer_size);
void _wasgo_InputEventMouseMotion_wrapper_set_speed(WasGoID wasgo_id, const uint8_t * p_speed, int p_speed_wasgo_buffer_size);
void _wasgo_InputEventMouseMotion_wrapper_set_tilt(WasGoID wasgo_id, const uint8_t * p_tilt, int p_tilt_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_InputEventMouseMotion_constructor();
            
}
#endif