/* THIS FILE IS GENERATED */
#include "ProgressBar.h"
bool ProgressBar::is_percent_visible(){
	return (bool) _wasgo_ProgressBar_wrapper_is_percent_visible(wasgo_id);
}
void ProgressBar::set_percent_visible(bool p_visible){
	_wasgo_ProgressBar_wrapper_set_percent_visible(wasgo_id, p_visible);
}