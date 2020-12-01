/* THIS FILE IS GENERATED */
#include "PhysicalBone.h"
void PhysicalBone::apply_central_impulse(Vector3 p_impulse){
	_wasgo_PhysicalBone_wrapper_apply_central_impulse(wasgo_id, ((Variant) p_impulse).get_wasgo_id());
}
void PhysicalBone::apply_impulse(Vector3 p_position, Vector3 p_impulse){
	_wasgo_PhysicalBone_wrapper_apply_impulse(wasgo_id, ((Variant) p_position).get_wasgo_id(), ((Variant) p_impulse).get_wasgo_id());
}