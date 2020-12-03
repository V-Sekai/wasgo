/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "YSort.h"
bool YSort::is_sort_enabled(){
	return (bool) _wasgo_YSort_wrapper_is_sort_enabled(wasgo_id);
}
void YSort::set_sort_enabled(bool p_enabled){
	_wasgo_YSort_wrapper_set_sort_enabled(wasgo_id, p_enabled);
}

YSort::YSort(WasGoId p_wasgo_id) : Node2D(p_wasgo_id){
}
YSort::YSort(){
    wasgo_id = _wasgo_YSort_constructor();
}
YSort::~YSort(){
    _wasgo_YSort_destructor(wasgo_id);
}