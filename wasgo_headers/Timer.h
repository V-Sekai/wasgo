/* THIS FILE IS GENERATED */
#ifndef TIMER_H
#define TIMER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Node.h"
class Timer : public Node{
public:
enum TimerProcessMode{
TIMER_PROCESS_PHYSICS,
TIMER_PROCESS_IDLE
};
float get_time_left();
Timer::TimerProcessMode get_timer_process_mode();
float get_wait_time();
bool has_autostart();
bool is_one_shot();
bool is_paused();
bool is_stopped();
void set_autostart(bool p_enable);
void set_one_shot(bool p_enable);
void set_paused(bool p_paused);
void set_timer_process_mode(Timer::TimerProcessMode p_mode);
void set_wait_time(float p_time_sec);
void start(float p_time_sec = (float) -1);
void stop();

Timer(WasGoId p_wasgo_id);
~Timer();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_Timer_wrapper_get_time_left(WasGoId wasgo_id);
WasGoId _wasgo_Timer_wrapper_get_timer_process_mode(WasGoId wasgo_id);
float _wasgo_Timer_wrapper_get_wait_time(WasGoId wasgo_id);
int _wasgo_Timer_wrapper_has_autostart(WasGoId wasgo_id);
int _wasgo_Timer_wrapper_is_one_shot(WasGoId wasgo_id);
int _wasgo_Timer_wrapper_is_paused(WasGoId wasgo_id);
int _wasgo_Timer_wrapper_is_stopped(WasGoId wasgo_id);
void _wasgo_Timer_wrapper_set_autostart(WasGoId wasgo_id, bool p_enable);
void _wasgo_Timer_wrapper_set_one_shot(WasGoId wasgo_id, bool p_enable);
void _wasgo_Timer_wrapper_set_paused(WasGoId wasgo_id, bool p_paused);
void _wasgo_Timer_wrapper_set_timer_process_mode(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_Timer_wrapper_set_wait_time(WasGoId wasgo_id, float p_time_sec);
void _wasgo_Timer_wrapper_start(WasGoId wasgo_id, float p_time_sec);
void _wasgo_Timer_wrapper_stop(WasGoId wasgo_id);
}
#endif