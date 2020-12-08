/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Timer.h"
float Timer::get_time_left(){
	return (float) _wasgo_Timer_wrapper_get_time_left(wasgo_id);
}
Timer::TimerProcessMode Timer::get_timer_process_mode(){
	return Timer::TimerProcessMode(_wasgo_Timer_wrapper_get_timer_process_mode(wasgo_id));
}
float Timer::get_wait_time(){
	return (float) _wasgo_Timer_wrapper_get_wait_time(wasgo_id);
}
bool Timer::has_autostart(){
	return (bool) _wasgo_Timer_wrapper_has_autostart(wasgo_id);
}
bool Timer::is_one_shot(){
	return (bool) _wasgo_Timer_wrapper_is_one_shot(wasgo_id);
}
bool Timer::is_paused(){
	return (bool) _wasgo_Timer_wrapper_is_paused(wasgo_id);
}
bool Timer::is_stopped(){
	return (bool) _wasgo_Timer_wrapper_is_stopped(wasgo_id);
}
void Timer::set_autostart(bool p_enable){
	_wasgo_Timer_wrapper_set_autostart(wasgo_id, p_enable);
}
void Timer::set_one_shot(bool p_enable){
	_wasgo_Timer_wrapper_set_one_shot(wasgo_id, p_enable);
}
void Timer::set_paused(bool p_paused){
	_wasgo_Timer_wrapper_set_paused(wasgo_id, p_paused);
}
void Timer::set_timer_process_mode(Timer::TimerProcessMode p_mode){
	_wasgo_Timer_wrapper_set_timer_process_mode(wasgo_id, p_mode._get_wasgo_id());
}
void Timer::set_wait_time(float p_time_sec){
	_wasgo_Timer_wrapper_set_wait_time(wasgo_id, p_time_sec);
}
void Timer::start(float p_time_sec){
	_wasgo_Timer_wrapper_start(wasgo_id, p_time_sec);
}
void Timer::stop(){
	_wasgo_Timer_wrapper_stop(wasgo_id);
}

Timer::Timer(WasGoID p_wasgo_id) : Node(p_wasgo_id){
}
Timer::Timer(Node other) : Node(other._get_wasgo_id()){
}
Timer::Timer():Node(){
}
Timer Timer::new_instance(){
    return Timer(_wasgo_Timer_constructor());
}
WasGoID Timer::_get_wasgo_id(){
    return wasgo_id;
}
Timer::operator bool(){
    return (bool) wasgo_id;
}
