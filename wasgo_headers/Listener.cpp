/* THIS FILE IS GENERATED */
#include "Listener.h"
void Listener::clear_current(){
	_wasgo_Listener_wrapper_clear_current(wasgo_id);
}
Transform Listener::get_listener_transform(){
	return Transform::from_wasgo_id(_wasgo_Listener_wrapper_get_listener_transform(wasgo_id));
}
bool Listener::is_current(){
	return (bool) _wasgo_Listener_wrapper_is_current(wasgo_id);
}
void Listener::make_current(){
	_wasgo_Listener_wrapper_make_current(wasgo_id);
}