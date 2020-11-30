/* THIS FILE IS GENERATED */
#include "World2D.h"
RID World2D::get_canvas(){
	return RID::from_wasgo_id(_wasgo_World2D_wrapper_get_canvas(wasgo_id));
}
Physics2DDirectSpaceState World2D::get_direct_space_state(){
	return Physics2DDirectSpaceState::from_wasgo_id(_wasgo_World2D_wrapper_get_direct_space_state(wasgo_id));
}
RID World2D::get_space(){
	return RID::from_wasgo_id(_wasgo_World2D_wrapper_get_space(wasgo_id));
}

World2D::World2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
World2D::~World2D(){
}