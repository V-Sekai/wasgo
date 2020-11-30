/* THIS FILE IS GENERATED */
#include "ProximityGroup.h"
void ProximityGroup::broadcast(String p_name, Variant p_parameters){
	_wasgo_ProximityGroup_wrapper_broadcast(wasgo_id, ((Variant) name).get_wasgo_id(), ((Variant) parameters).get_wasgo_id());
}
ProximityGroup::DispatchMode ProximityGroup::get_dispatch_mode(){
	return ProximityGroup::DispatchMode::from_wasgo_id(_wasgo_ProximityGroup_wrapper_get_dispatch_mode(wasgo_id));
}
Vector3 ProximityGroup::get_grid_radius(){
	return Vector3::from_wasgo_id(_wasgo_ProximityGroup_wrapper_get_grid_radius(wasgo_id));
}
String ProximityGroup::get_group_name(){
	return String::from_wasgo_id(_wasgo_ProximityGroup_wrapper_get_group_name(wasgo_id));
}
void ProximityGroup::set_dispatch_mode(ProximityGroup::DispatchMode p_mode){
	_wasgo_ProximityGroup_wrapper_set_dispatch_mode(wasgo_id, ((Variant) mode).get_wasgo_id());
}
void ProximityGroup::set_grid_radius(Vector3 p_radius){
	_wasgo_ProximityGroup_wrapper_set_grid_radius(wasgo_id, ((Variant) radius).get_wasgo_id());
}
void ProximityGroup::set_group_name(String p_name){
	_wasgo_ProximityGroup_wrapper_set_group_name(wasgo_id, ((Variant) name).get_wasgo_id());
}

ProximityGroup::ProximityGroup(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ProximityGroup::~ProximityGroup(){
}