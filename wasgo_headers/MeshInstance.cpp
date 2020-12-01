/* THIS FILE IS GENERATED */
#include "MeshInstance.h"
void MeshInstance::create_convex_collision(){
	_wasgo_MeshInstance_wrapper_create_convex_collision(wasgo_id);
}
void MeshInstance::create_trimesh_collision(){
	_wasgo_MeshInstance_wrapper_create_trimesh_collision(wasgo_id);
}
Material MeshInstance::get_active_material(int p_surface){
	return Material::from_wasgo_id(_wasgo_MeshInstance_wrapper_get_active_material(wasgo_id, p_surface));
}
Mesh MeshInstance::get_mesh(){
	return Mesh::from_wasgo_id(_wasgo_MeshInstance_wrapper_get_mesh(wasgo_id));
}
NodePath MeshInstance::get_skeleton_path(){
	return NodePath::from_wasgo_id(_wasgo_MeshInstance_wrapper_get_skeleton_path(wasgo_id));
}
Skin MeshInstance::get_skin(){
	return Skin::from_wasgo_id(_wasgo_MeshInstance_wrapper_get_skin(wasgo_id));
}
Material MeshInstance::get_surface_material(int p_surface){
	return Material::from_wasgo_id(_wasgo_MeshInstance_wrapper_get_surface_material(wasgo_id, p_surface));
}
int MeshInstance::get_surface_material_count(){
	return (int) _wasgo_MeshInstance_wrapper_get_surface_material_count(wasgo_id);
}
bool MeshInstance::is_software_skinning_transform_normals_enabled(){
	return (bool) _wasgo_MeshInstance_wrapper_is_software_skinning_transform_normals_enabled(wasgo_id);
}
void MeshInstance::set_mesh(Mesh p_mesh){
	_wasgo_MeshInstance_wrapper_set_mesh(wasgo_id, ((Variant) p_mesh).get_wasgo_id());
}
void MeshInstance::set_skeleton_path(NodePath p_skeleton_path){
	_wasgo_MeshInstance_wrapper_set_skeleton_path(wasgo_id, ((Variant) p_skeleton_path).get_wasgo_id());
}
void MeshInstance::set_skin(Skin p_skin){
	_wasgo_MeshInstance_wrapper_set_skin(wasgo_id, ((Variant) p_skin).get_wasgo_id());
}
void MeshInstance::set_software_skinning_transform_normals(bool p_enabled){
	_wasgo_MeshInstance_wrapper_set_software_skinning_transform_normals(wasgo_id, p_enabled);
}
void MeshInstance::set_surface_material(int p_surface, Material p_material){
	_wasgo_MeshInstance_wrapper_set_surface_material(wasgo_id, p_surface, ((Variant) p_material).get_wasgo_id());
}