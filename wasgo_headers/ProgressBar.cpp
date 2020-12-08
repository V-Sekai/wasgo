/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ProgressBar.h"
bool ProgressBar::is_percent_visible(){
	return (bool) _wasgo_ProgressBar_wrapper_is_percent_visible(wasgo_id);
}
void ProgressBar::set_percent_visible(bool p_visible){
	_wasgo_ProgressBar_wrapper_set_percent_visible(wasgo_id, p_visible);
}

ProgressBar::ProgressBar(WasGoID p_wasgo_id) : Range(p_wasgo_id){
}
ProgressBar::ProgressBar(Range other) : Range(other._get_wasgo_id()){
}
ProgressBar::ProgressBar():Range(){
}
ProgressBar ProgressBar::new_instance(){
    return ProgressBar(_wasgo_ProgressBar_constructor());
}
WasGoID ProgressBar::_get_wasgo_id(){
    return wasgo_id;
}
ProgressBar::operator bool(){
    return (bool) wasgo_id;
}
