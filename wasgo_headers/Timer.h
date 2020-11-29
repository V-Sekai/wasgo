/* THIS FILE IS GENERATED */
#ifndef TIMER_H
#define TIMER_H

#include "stdint.h"

#include "Node.h"
class Timer : public Node{
public: Timer();
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
};
#endif