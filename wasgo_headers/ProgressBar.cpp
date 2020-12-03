/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ProgressBar.h"
bool ProgressBar::is_percent_visible(){
	return (bool) _wasgo_ProgressBar_wrapper_is_percent_visible(wasgo_id);
}
void ProgressBar::set_percent_visible(bool p_visible){
	_wasgo_ProgressBar_wrapper_set_percent_visible(wasgo_id, p_visible);
}

ProgressBar::ProgressBar(WasGoId p_wasgo_id) : Range(p_wasgo_id){
}
ProgressBar::ProgressBar(){
    wasgo_id = _wasgo_ProgressBar_constructor();
}
ProgressBar::~ProgressBar(){
    _wasgo_ProgressBar_destructor(wasgo_id);
}