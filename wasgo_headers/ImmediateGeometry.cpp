/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ImmediateGeometry.h"
void ImmediateGeometry::add_sphere(int p_lats, int p_lons, float p_radius, bool p_add_uv = (bool) true){
	_wasgo_ImmediateGeometry_wrapper_add_sphere(wasgo_id, p_lats, p_lons, p_radius, p_add_uv);
}
void ImmediateGeometry::add_vertex(Vector3 p_position){

    Variant wasgo_var_position = p_position;
    uint8_t wasgo_buffer_position[16];
    int wasgo_size_position = 16;
    encode_variant(wasgo_var_position, wasgo_buffer_position, wasgo_size_position);
    
	_wasgo_ImmediateGeometry_wrapper_add_vertex(wasgo_id, wasgo_buffer_position, wasgo_size_position);
}
void ImmediateGeometry::begin(Mesh::PrimitiveType p_primitive, Texture p_texture = (Texture) [object:null]){
	_wasgo_ImmediateGeometry_wrapper_begin(wasgo_id, p_primitive._get_wasgo_id(), p_texture._get_wasgo_id());
}
void ImmediateGeometry::clear(){
	_wasgo_ImmediateGeometry_wrapper_clear(wasgo_id);
}
void ImmediateGeometry::end(){
	_wasgo_ImmediateGeometry_wrapper_end(wasgo_id);
}
void ImmediateGeometry::set_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_ImmediateGeometry_wrapper_set_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void ImmediateGeometry::set_normal(Vector3 p_normal){

    Variant wasgo_var_normal = p_normal;
    uint8_t wasgo_buffer_normal[16];
    int wasgo_size_normal = 16;
    encode_variant(wasgo_var_normal, wasgo_buffer_normal, wasgo_size_normal);
    
	_wasgo_ImmediateGeometry_wrapper_set_normal(wasgo_id, wasgo_buffer_normal, wasgo_size_normal);
}
void ImmediateGeometry::set_tangent(Plane p_tangent){

    Variant wasgo_var_tangent = p_tangent;
    uint8_t wasgo_buffer_tangent[20];
    int wasgo_size_tangent = 20;
    encode_variant(wasgo_var_tangent, wasgo_buffer_tangent, wasgo_size_tangent);
    
	_wasgo_ImmediateGeometry_wrapper_set_tangent(wasgo_id, wasgo_buffer_tangent, wasgo_size_tangent);
}
void ImmediateGeometry::set_uv(Vector2 p_uv){

    Variant wasgo_var_uv = p_uv;
    uint8_t wasgo_buffer_uv[12];
    int wasgo_size_uv = 12;
    encode_variant(wasgo_var_uv, wasgo_buffer_uv, wasgo_size_uv);
    
	_wasgo_ImmediateGeometry_wrapper_set_uv(wasgo_id, wasgo_buffer_uv, wasgo_size_uv);
}
void ImmediateGeometry::set_uv2(Vector2 p_uv){

    Variant wasgo_var_uv = p_uv;
    uint8_t wasgo_buffer_uv[12];
    int wasgo_size_uv = 12;
    encode_variant(wasgo_var_uv, wasgo_buffer_uv, wasgo_size_uv);
    
	_wasgo_ImmediateGeometry_wrapper_set_uv2(wasgo_id, wasgo_buffer_uv, wasgo_size_uv);
}

ImmediateGeometry::ImmediateGeometry(WasGoId p_wasgo_id) : GeometryInstance(p_wasgo_id){
}
ImmediateGeometry::ImmediateGeometry(GeometryInstance other) : GeometryInstance(other._get_wasgo_id()){
    wasgo_id = _wasgo_ImmediateGeometry_constructor();
}
ImmediateGeometry::new_instance(){
    return ImmediateGeometry(_wasgo_ImmediateGeometry_constructor());
}