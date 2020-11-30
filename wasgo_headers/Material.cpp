/* THIS FILE IS GENERATED */
#include "Material.h"
Material Material::get_next_pass(){
	return Material::from_wasgo_id(_wasgo_Material_wrapper_get_next_pass(wasgo_id));
}
int Material::get_render_priority(){
	return (int) _wasgo_Material_wrapper_get_render_priority(wasgo_id));
}
void Material::set_next_pass(Material p_next_pass){
	_wasgo_Material_wrapper_set_next_pass(wasgo_id, ((Variant) next_pass).get_wasgo_id());
}
void Material::set_render_priority(int p_priority){
	_wasgo_Material_wrapper_set_render_priority(wasgo_id, priority);
}