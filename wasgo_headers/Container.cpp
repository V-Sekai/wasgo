/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Container.h"
void Container::fit_child_in_rect(Control p_child, Rect2 p_rect){

    Variant wasgo_var_rect = p_rect;
    uint8_t wasgo_buffer_rect[20];
    int wasgo_size_rect = 20;
    encode_variant(wasgo_var_rect, wasgo_buffer_rect, wasgo_size_rect);
    
	_wasgo_Container_wrapper_fit_child_in_rect(wasgo_id, p_child._get_wasgo_id(), wasgo_buffer_rect, wasgo_size_rect);
}
void Container::queue_sort(){
	_wasgo_Container_wrapper_queue_sort(wasgo_id);
}

Container::Container(WasGoId p_wasgo_id) : Control(p_wasgo_id){
}
Container::Container(Control other) : Control(other._get_wasgo_id()){
    wasgo_id = _wasgo_Container_constructor();
}
Container::new_instance(){
    return Container(_wasgo_Container_constructor());
}