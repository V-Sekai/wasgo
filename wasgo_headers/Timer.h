/* THIS FILE IS GENERATED */
#ifndef TIMER_H
#define TIMER_H

#include <stdint.h>

#include "Node.h"
class Timer : public Node{
public: Timer();
enum TimerProcessMode{
TIMER_PROCESS_PHYSICS: 0,
};
float  get_time_left();
float  get_time_left();
enum.Timer::TimerProcessMode  get_timer_process_mode();
enum.Timer::TimerProcessMode  get_timer_process_mode();
float  get_wait_time();
float  get_wait_time();
bool  has_autostart();
bool  has_autostart();
bool  is_one_shot();
bool  is_one_shot();
bool  is_paused();
bool  is_paused();
bool  is_stopped();
bool  is_stopped();
void  set_autostart(bool enable);
void  set_one_shot(bool enable);
void  set_paused(bool paused);
void  set_timer_process_mode(int mode);
void  set_wait_time(float time_sec);
void  start(float time_sec = -1);
void  stop();
void  stop();
};
#endif