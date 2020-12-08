/* THIS FILE IS GENERATED */
#ifndef TIMER_H
#define TIMER_H

#include "wasgo\wasgoid.h"

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

protected:
public:
explicit Timer(WasGoID p_wasgo_id);
explicit Timer(Node other);
Timer();
Timer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_Timer_wrapper_get_time_left(WasGoID wasgo_id);
WasGoID _wasgo_Timer_wrapper_get_timer_process_mode(WasGoID wasgo_id);
float _wasgo_Timer_wrapper_get_wait_time(WasGoID wasgo_id);
int _wasgo_Timer_wrapper_has_autostart(WasGoID wasgo_id);
int _wasgo_Timer_wrapper_is_one_shot(WasGoID wasgo_id);
int _wasgo_Timer_wrapper_is_paused(WasGoID wasgo_id);
int _wasgo_Timer_wrapper_is_stopped(WasGoID wasgo_id);
void _wasgo_Timer_wrapper_set_autostart(WasGoID wasgo_id, bool p_enable);
void _wasgo_Timer_wrapper_set_one_shot(WasGoID wasgo_id, bool p_enable);
void _wasgo_Timer_wrapper_set_paused(WasGoID wasgo_id, bool p_paused);
void _wasgo_Timer_wrapper_set_timer_process_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_Timer_wrapper_set_wait_time(WasGoID wasgo_id, float p_time_sec);
void _wasgo_Timer_wrapper_start(WasGoID wasgo_id, float p_time_sec);
void _wasgo_Timer_wrapper_stop(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_Timer_constructor();
            
}
#endif