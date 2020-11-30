/* THIS FILE IS GENERATED */
#include "InstancePlaceholder.h"
Node InstancePlaceholder::create_instance(bool p_replace = (bool) False, PackedScene p_custom_scene = (PackedScene) ""){
	return Node::from_wasgo_id(_wasgo_InstancePlaceholder_wrapper_create_instance(wasgo_id, replace, ((Variant) custom_scene).get_wasgo_id()));
}
String InstancePlaceholder::get_instance_path(){
	return String::from_wasgo_id(_wasgo_InstancePlaceholder_wrapper_get_instance_path(wasgo_id));
}
Dictionary InstancePlaceholder::get_stored_values(bool p_with_order = (bool) False){
	return Dictionary::from_wasgo_id(_wasgo_InstancePlaceholder_wrapper_get_stored_values(wasgo_id, with_order));
}
void InstancePlaceholder::replace_by_instance(PackedScene p_custom_scene = (PackedScene) ""){
	_wasgo_InstancePlaceholder_wrapper_replace_by_instance(wasgo_id, ((Variant) custom_scene).get_wasgo_id());
}