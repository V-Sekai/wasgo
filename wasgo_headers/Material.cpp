/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Material.h"
Material Material::get_next_pass(){
	return Material(_wasgo_Material_wrapper_get_next_pass(wasgo_id));
}
int Material::get_render_priority(){
	return (int) _wasgo_Material_wrapper_get_render_priority(wasgo_id);
}
void Material::set_next_pass(Material p_next_pass){
	_wasgo_Material_wrapper_set_next_pass(wasgo_id, p_next_pass._get_wasgo_id());
}
void Material::set_render_priority(int p_priority){
	_wasgo_Material_wrapper_set_render_priority(wasgo_id, p_priority);
}

Material::Material(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
Material::Material(Resource other) : Resource(other._get_wasgo_id()){
}
Material::Material():Resource(){
}
Material Material::new_instance(){
    return Material(_wasgo_Material_constructor());
}
WasGoID Material::_get_wasgo_id(){
    return wasgo_id;
}
Material::operator bool(){
    return (bool) wasgo_id;
}
