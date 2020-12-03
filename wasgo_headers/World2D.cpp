/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "World2D.h"
RID World2D::get_canvas(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_World2D_wrapper_get_canvas(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
Physics2DDirectSpaceState World2D::get_direct_space_state(){
	return Physics2DDirectSpaceState(_wasgo_World2D_wrapper_get_direct_space_state(wasgo_id));
}
RID World2D::get_space(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_World2D_wrapper_get_space(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}

World2D::World2D(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
World2D::World2D(){
    wasgo_id = _wasgo_World2D_constructor();
}
World2D::~World2D(){
    _wasgo_World2D_destructor(wasgo_id);
}