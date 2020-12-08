/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SurfaceTool.h"
void SurfaceTool::add_bones(PoolIntArray p_bones){
	_wasgo_SurfaceTool_wrapper_add_bones(wasgo_id, p_bones._get_wasgo_id());
}
void SurfaceTool::add_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_SurfaceTool_wrapper_add_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void SurfaceTool::add_index(int p_index){
	_wasgo_SurfaceTool_wrapper_add_index(wasgo_id, p_index);
}
void SurfaceTool::add_normal(Vector3 p_normal){

    Variant wasgo_var_normal = p_normal;
    uint8_t wasgo_buffer_normal[16];
    int wasgo_size_normal = 16;
    encode_variant(wasgo_var_normal, wasgo_buffer_normal, wasgo_size_normal);
    
	_wasgo_SurfaceTool_wrapper_add_normal(wasgo_id, wasgo_buffer_normal, wasgo_size_normal);
}
void SurfaceTool::add_smooth_group(bool p_smooth){
	_wasgo_SurfaceTool_wrapper_add_smooth_group(wasgo_id, p_smooth);
}
void SurfaceTool::add_tangent(Plane p_tangent){

    Variant wasgo_var_tangent = p_tangent;
    uint8_t wasgo_buffer_tangent[20];
    int wasgo_size_tangent = 20;
    encode_variant(wasgo_var_tangent, wasgo_buffer_tangent, wasgo_size_tangent);
    
	_wasgo_SurfaceTool_wrapper_add_tangent(wasgo_id, wasgo_buffer_tangent, wasgo_size_tangent);
}
void SurfaceTool::add_triangle_fan(PoolVector3Array p_vertices, PoolVector2Array p_uvs, PoolColorArray p_colors, PoolVector2Array p_uv2s, PoolVector3Array p_normals, Array p_tangents){
	_wasgo_SurfaceTool_wrapper_add_triangle_fan(wasgo_id, p_vertices._get_wasgo_id(), p_uvs._get_wasgo_id(), p_colors._get_wasgo_id(), p_uv2s._get_wasgo_id(), p_normals._get_wasgo_id(), p_tangents._get_wasgo_id());
}
void SurfaceTool::add_uv(Vector2 p_uv){

    Variant wasgo_var_uv = p_uv;
    uint8_t wasgo_buffer_uv[12];
    int wasgo_size_uv = 12;
    encode_variant(wasgo_var_uv, wasgo_buffer_uv, wasgo_size_uv);
    
	_wasgo_SurfaceTool_wrapper_add_uv(wasgo_id, wasgo_buffer_uv, wasgo_size_uv);
}
void SurfaceTool::add_uv2(Vector2 p_uv2){

    Variant wasgo_var_uv2 = p_uv2;
    uint8_t wasgo_buffer_uv2[12];
    int wasgo_size_uv2 = 12;
    encode_variant(wasgo_var_uv2, wasgo_buffer_uv2, wasgo_size_uv2);
    
	_wasgo_SurfaceTool_wrapper_add_uv2(wasgo_id, wasgo_buffer_uv2, wasgo_size_uv2);
}
void SurfaceTool::add_vertex(Vector3 p_vertex){

    Variant wasgo_var_vertex = p_vertex;
    uint8_t wasgo_buffer_vertex[16];
    int wasgo_size_vertex = 16;
    encode_variant(wasgo_var_vertex, wasgo_buffer_vertex, wasgo_size_vertex);
    
	_wasgo_SurfaceTool_wrapper_add_vertex(wasgo_id, wasgo_buffer_vertex, wasgo_size_vertex);
}
void SurfaceTool::add_weights(PoolRealArray p_weights){
	_wasgo_SurfaceTool_wrapper_add_weights(wasgo_id, p_weights._get_wasgo_id());
}
void SurfaceTool::append_from(Mesh p_existing, int p_surface, Transform p_transform){

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[52];
    int wasgo_size_transform = 52;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_SurfaceTool_wrapper_append_from(wasgo_id, p_existing._get_wasgo_id(), p_surface, wasgo_buffer_transform, wasgo_size_transform);
}
void SurfaceTool::begin(Mesh::PrimitiveType p_primitive){
	_wasgo_SurfaceTool_wrapper_begin(wasgo_id, p_primitive._get_wasgo_id());
}
void SurfaceTool::clear(){
	_wasgo_SurfaceTool_wrapper_clear(wasgo_id);
}
ArrayMesh SurfaceTool::commit(ArrayMesh p_existing, int p_flags){
	return ArrayMesh(_wasgo_SurfaceTool_wrapper_commit(wasgo_id, p_existing._get_wasgo_id(), p_flags));
}
Array SurfaceTool::commit_to_arrays(){
	return Array(_wasgo_SurfaceTool_wrapper_commit_to_arrays(wasgo_id));
}
void SurfaceTool::create_from(Mesh p_existing, int p_surface){
	_wasgo_SurfaceTool_wrapper_create_from(wasgo_id, p_existing._get_wasgo_id(), p_surface);
}
void SurfaceTool::create_from_blend_shape(Mesh p_existing, int p_surface, String p_blend_shape){

    Variant wasgo_var_blend_shape = p_blend_shape;
    int wasgo_size_blend_shape = String(p_blend_shape).size();
    uint8_t wasgo_buffer_blend_shape[wasgo_size_blend_shape];
    encode_variant(wasgo_var_blend_shape, wasgo_buffer_blend_shape, wasgo_size_blend_shape);
    
	_wasgo_SurfaceTool_wrapper_create_from_blend_shape(wasgo_id, p_existing._get_wasgo_id(), p_surface, wasgo_buffer_blend_shape, wasgo_size_blend_shape);
}
void SurfaceTool::deindex(){
	_wasgo_SurfaceTool_wrapper_deindex(wasgo_id);
}
void SurfaceTool::generate_normals(bool p_flip){
	_wasgo_SurfaceTool_wrapper_generate_normals(wasgo_id, p_flip);
}
void SurfaceTool::generate_tangents(){
	_wasgo_SurfaceTool_wrapper_generate_tangents(wasgo_id);
}
void SurfaceTool::index(){
	_wasgo_SurfaceTool_wrapper_index(wasgo_id);
}
void SurfaceTool::set_material(Material p_material){
	_wasgo_SurfaceTool_wrapper_set_material(wasgo_id, p_material._get_wasgo_id());
}

SurfaceTool::SurfaceTool(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
SurfaceTool::SurfaceTool(Reference other) : Reference(other._get_wasgo_id()){
}
SurfaceTool::SurfaceTool():Reference(){
}
SurfaceTool SurfaceTool::new_instance(){
    return SurfaceTool(_wasgo_SurfaceTool_constructor());
}
WasGoID SurfaceTool::_get_wasgo_id(){
    return wasgo_id;
}
SurfaceTool::operator bool(){
    return (bool) wasgo_id;
}
