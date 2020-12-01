/* THIS FILE IS GENERATED */
#include "MultiMesh.h"
::AABB MultiMesh::get_aabb(){
	return ::AABB::from_wasgo_id(_wasgo_MultiMesh_wrapper_get_aabb(wasgo_id));
}
MultiMesh::ColorFormat MultiMesh::get_color_format(){
	return MultiMesh::ColorFormat::from_wasgo_id(_wasgo_MultiMesh_wrapper_get_color_format(wasgo_id));
}
MultiMesh::CustomDataFormat MultiMesh::get_custom_data_format(){
	return MultiMesh::CustomDataFormat::from_wasgo_id(_wasgo_MultiMesh_wrapper_get_custom_data_format(wasgo_id));
}
Color MultiMesh::get_instance_color(int p_instance){
	return Color::from_wasgo_id(_wasgo_MultiMesh_wrapper_get_instance_color(wasgo_id, p_instance));
}
int MultiMesh::get_instance_count(){
	return (int) _wasgo_MultiMesh_wrapper_get_instance_count(wasgo_id);
}
Color MultiMesh::get_instance_custom_data(int p_instance){
	return Color::from_wasgo_id(_wasgo_MultiMesh_wrapper_get_instance_custom_data(wasgo_id, p_instance));
}
Transform MultiMesh::get_instance_transform(int p_instance){
	return Transform::from_wasgo_id(_wasgo_MultiMesh_wrapper_get_instance_transform(wasgo_id, p_instance));
}
Transform2D MultiMesh::get_instance_transform_2d(int p_instance){
	return Transform2D::from_wasgo_id(_wasgo_MultiMesh_wrapper_get_instance_transform_2d(wasgo_id, p_instance));
}
Mesh MultiMesh::get_mesh(){
	return Mesh::from_wasgo_id(_wasgo_MultiMesh_wrapper_get_mesh(wasgo_id));
}
MultiMesh::TransformFormat MultiMesh::get_transform_format(){
	return MultiMesh::TransformFormat::from_wasgo_id(_wasgo_MultiMesh_wrapper_get_transform_format(wasgo_id));
}
int MultiMesh::get_visible_instance_count(){
	return (int) _wasgo_MultiMesh_wrapper_get_visible_instance_count(wasgo_id);
}
void MultiMesh::set_as_bulk_array(PoolRealArray p_array){
	_wasgo_MultiMesh_wrapper_set_as_bulk_array(wasgo_id, ((Variant) p_array).get_wasgo_id());
}
void MultiMesh::set_color_format(MultiMesh::ColorFormat p_format){
	_wasgo_MultiMesh_wrapper_set_color_format(wasgo_id, ((Variant) p_format).get_wasgo_id());
}
void MultiMesh::set_custom_data_format(MultiMesh::CustomDataFormat p_format){
	_wasgo_MultiMesh_wrapper_set_custom_data_format(wasgo_id, ((Variant) p_format).get_wasgo_id());
}
void MultiMesh::set_instance_color(int p_instance, Color p_color){
	_wasgo_MultiMesh_wrapper_set_instance_color(wasgo_id, p_instance, ((Variant) p_color).get_wasgo_id());
}
void MultiMesh::set_instance_count(int p_count){
	_wasgo_MultiMesh_wrapper_set_instance_count(wasgo_id, p_count);
}
void MultiMesh::set_instance_custom_data(int p_instance, Color p_custom_data){
	_wasgo_MultiMesh_wrapper_set_instance_custom_data(wasgo_id, p_instance, ((Variant) p_custom_data).get_wasgo_id());
}
void MultiMesh::set_instance_transform(int p_instance, Transform p_transform){
	_wasgo_MultiMesh_wrapper_set_instance_transform(wasgo_id, p_instance, ((Variant) p_transform).get_wasgo_id());
}
void MultiMesh::set_instance_transform_2d(int p_instance, Transform2D p_transform){
	_wasgo_MultiMesh_wrapper_set_instance_transform_2d(wasgo_id, p_instance, ((Variant) p_transform).get_wasgo_id());
}
void MultiMesh::set_mesh(Mesh p_mesh){
	_wasgo_MultiMesh_wrapper_set_mesh(wasgo_id, ((Variant) p_mesh).get_wasgo_id());
}
void MultiMesh::set_transform_format(MultiMesh::TransformFormat p_format){
	_wasgo_MultiMesh_wrapper_set_transform_format(wasgo_id, ((Variant) p_format).get_wasgo_id());
}
void MultiMesh::set_visible_instance_count(int p_count){
	_wasgo_MultiMesh_wrapper_set_visible_instance_count(wasgo_id, p_count);
}