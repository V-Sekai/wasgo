/* THIS FILE IS GENERATED */
#include "YSort.h"
bool YSort::is_sort_enabled(){
	return (bool) _wasgo_YSort_wrapper_is_sort_enabled(wasgo_id));
}
void YSort::set_sort_enabled(bool p_enabled){
	_wasgo_YSort_wrapper_set_sort_enabled(wasgo_id, enabled);
}

YSort::YSort(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
YSort::~YSort(){
}