/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SceneTreeTimer.h"
float SceneTreeTimer::get_time_left(){
	return (float) _wasgo_SceneTreeTimer_wrapper_get_time_left(wasgo_id);
}
void SceneTreeTimer::set_time_left(float p_time){
	_wasgo_SceneTreeTimer_wrapper_set_time_left(wasgo_id, p_time);
}

SceneTreeTimer::SceneTreeTimer(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
SceneTreeTimer::SceneTreeTimer(Reference other) : Reference(other._get_wasgo_id()){
}
SceneTreeTimer::SceneTreeTimer():Reference(){
}
SceneTreeTimer SceneTreeTimer::new_instance(){
    return SceneTreeTimer(_wasgo_SceneTreeTimer_constructor());
}
WasGoID SceneTreeTimer::_get_wasgo_id(){
    return wasgo_id;
}
SceneTreeTimer::operator bool(){
    return (bool) wasgo_id;
}
