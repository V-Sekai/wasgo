/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "MeshDataTool.h"
void MeshDataTool::clear(){
	_wasgo_MeshDataTool_wrapper_clear(wasgo_id);
}
Error MeshDataTool::commit_to_surface(ArrayMesh p_mesh){
	return Error(_wasgo_MeshDataTool_wrapper_commit_to_surface(wasgo_id, p_mesh._get_wasgo_id()));
}
Error MeshDataTool::create_from_surface(ArrayMesh p_mesh, int p_surface){
	return Error(_wasgo_MeshDataTool_wrapper_create_from_surface(wasgo_id, p_mesh._get_wasgo_id(), p_surface));
}
int MeshDataTool::get_edge_count(){
	return (int) _wasgo_MeshDataTool_wrapper_get_edge_count(wasgo_id);
}
PoolIntArray MeshDataTool::get_edge_faces(int p_idx){
	return PoolIntArray(_wasgo_MeshDataTool_wrapper_get_edge_faces(wasgo_id, p_idx));
}
Variant MeshDataTool::get_edge_meta(int p_idx){
	return Variant(_wasgo_MeshDataTool_wrapper_get_edge_meta(wasgo_id, p_idx));
}
int MeshDataTool::get_edge_vertex(int p_idx, int p_vertex){
	return (int) _wasgo_MeshDataTool_wrapper_get_edge_vertex(wasgo_id, p_idx, p_vertex);
}
int MeshDataTool::get_face_count(){
	return (int) _wasgo_MeshDataTool_wrapper_get_face_count(wasgo_id);
}
int MeshDataTool::get_face_edge(int p_idx, int p_edge){
	return (int) _wasgo_MeshDataTool_wrapper_get_face_edge(wasgo_id, p_idx, p_edge);
}
Variant MeshDataTool::get_face_meta(int p_idx){
	return Variant(_wasgo_MeshDataTool_wrapper_get_face_meta(wasgo_id, p_idx));
}
Vector3 MeshDataTool::get_face_normal(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_MeshDataTool_wrapper_get_face_normal(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
int MeshDataTool::get_face_vertex(int p_idx, int p_vertex){
	return (int) _wasgo_MeshDataTool_wrapper_get_face_vertex(wasgo_id, p_idx, p_vertex);
}
int MeshDataTool::get_format(){
	return (int) _wasgo_MeshDataTool_wrapper_get_format(wasgo_id);
}
Material MeshDataTool::get_material(){
	return Material(_wasgo_MeshDataTool_wrapper_get_material(wasgo_id));
}
Vector3 MeshDataTool::get_vertex(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_MeshDataTool_wrapper_get_vertex(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
PoolIntArray MeshDataTool::get_vertex_bones(int p_idx){
	return PoolIntArray(_wasgo_MeshDataTool_wrapper_get_vertex_bones(wasgo_id, p_idx));
}
Color MeshDataTool::get_vertex_color(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_MeshDataTool_wrapper_get_vertex_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
int MeshDataTool::get_vertex_count(){
	return (int) _wasgo_MeshDataTool_wrapper_get_vertex_count(wasgo_id);
}
PoolIntArray MeshDataTool::get_vertex_edges(int p_idx){
	return PoolIntArray(_wasgo_MeshDataTool_wrapper_get_vertex_edges(wasgo_id, p_idx));
}
PoolIntArray MeshDataTool::get_vertex_faces(int p_idx){
	return PoolIntArray(_wasgo_MeshDataTool_wrapper_get_vertex_faces(wasgo_id, p_idx));
}
Variant MeshDataTool::get_vertex_meta(int p_idx){
	return Variant(_wasgo_MeshDataTool_wrapper_get_vertex_meta(wasgo_id, p_idx));
}
Vector3 MeshDataTool::get_vertex_normal(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_MeshDataTool_wrapper_get_vertex_normal(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Plane MeshDataTool::get_vertex_tangent(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_MeshDataTool_wrapper_get_vertex_tangent(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Plane) wasgo_ret;
    
}
Vector2 MeshDataTool::get_vertex_uv(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_MeshDataTool_wrapper_get_vertex_uv(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
Vector2 MeshDataTool::get_vertex_uv2(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_MeshDataTool_wrapper_get_vertex_uv2(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}
PoolRealArray MeshDataTool::get_vertex_weights(int p_idx){
	return PoolRealArray(_wasgo_MeshDataTool_wrapper_get_vertex_weights(wasgo_id, p_idx));
}
void MeshDataTool::set_edge_meta(int p_idx, Variant p_meta){
	_wasgo_MeshDataTool_wrapper_set_edge_meta(wasgo_id, p_idx, p_meta._get_wasgo_id());
}
void MeshDataTool::set_face_meta(int p_idx, Variant p_meta){
	_wasgo_MeshDataTool_wrapper_set_face_meta(wasgo_id, p_idx, p_meta._get_wasgo_id());
}
void MeshDataTool::set_material(Material p_material){
	_wasgo_MeshDataTool_wrapper_set_material(wasgo_id, p_material._get_wasgo_id());
}
void MeshDataTool::set_vertex(int p_idx, Vector3 p_vertex){

    Variant wasgo_var_vertex = p_vertex;
    uint8_t wasgo_buffer_vertex[16];
    int wasgo_size_vertex = 16;
    encode_variant(wasgo_var_vertex, wasgo_buffer_vertex, wasgo_size_vertex);
    
	_wasgo_MeshDataTool_wrapper_set_vertex(wasgo_id, p_idx, wasgo_buffer_vertex, wasgo_size_vertex);
}
void MeshDataTool::set_vertex_bones(int p_idx, PoolIntArray p_bones){
	_wasgo_MeshDataTool_wrapper_set_vertex_bones(wasgo_id, p_idx, p_bones._get_wasgo_id());
}
void MeshDataTool::set_vertex_color(int p_idx, Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_MeshDataTool_wrapper_set_vertex_color(wasgo_id, p_idx, wasgo_buffer_color, wasgo_size_color);
}
void MeshDataTool::set_vertex_meta(int p_idx, Variant p_meta){
	_wasgo_MeshDataTool_wrapper_set_vertex_meta(wasgo_id, p_idx, p_meta._get_wasgo_id());
}
void MeshDataTool::set_vertex_normal(int p_idx, Vector3 p_normal){

    Variant wasgo_var_normal = p_normal;
    uint8_t wasgo_buffer_normal[16];
    int wasgo_size_normal = 16;
    encode_variant(wasgo_var_normal, wasgo_buffer_normal, wasgo_size_normal);
    
	_wasgo_MeshDataTool_wrapper_set_vertex_normal(wasgo_id, p_idx, wasgo_buffer_normal, wasgo_size_normal);
}
void MeshDataTool::set_vertex_tangent(int p_idx, Plane p_tangent){

    Variant wasgo_var_tangent = p_tangent;
    uint8_t wasgo_buffer_tangent[20];
    int wasgo_size_tangent = 20;
    encode_variant(wasgo_var_tangent, wasgo_buffer_tangent, wasgo_size_tangent);
    
	_wasgo_MeshDataTool_wrapper_set_vertex_tangent(wasgo_id, p_idx, wasgo_buffer_tangent, wasgo_size_tangent);
}
void MeshDataTool::set_vertex_uv(int p_idx, Vector2 p_uv){

    Variant wasgo_var_uv = p_uv;
    uint8_t wasgo_buffer_uv[12];
    int wasgo_size_uv = 12;
    encode_variant(wasgo_var_uv, wasgo_buffer_uv, wasgo_size_uv);
    
	_wasgo_MeshDataTool_wrapper_set_vertex_uv(wasgo_id, p_idx, wasgo_buffer_uv, wasgo_size_uv);
}
void MeshDataTool::set_vertex_uv2(int p_idx, Vector2 p_uv2){

    Variant wasgo_var_uv2 = p_uv2;
    uint8_t wasgo_buffer_uv2[12];
    int wasgo_size_uv2 = 12;
    encode_variant(wasgo_var_uv2, wasgo_buffer_uv2, wasgo_size_uv2);
    
	_wasgo_MeshDataTool_wrapper_set_vertex_uv2(wasgo_id, p_idx, wasgo_buffer_uv2, wasgo_size_uv2);
}
void MeshDataTool::set_vertex_weights(int p_idx, PoolRealArray p_weights){
	_wasgo_MeshDataTool_wrapper_set_vertex_weights(wasgo_id, p_idx, p_weights._get_wasgo_id());
}

MeshDataTool::MeshDataTool(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
MeshDataTool::MeshDataTool(){
    wasgo_id = _wasgo_MeshDataTool_constructor();
}
MeshDataTool::~MeshDataTool(){
    _wasgo_MeshDataTool_destructor(wasgo_id);
}