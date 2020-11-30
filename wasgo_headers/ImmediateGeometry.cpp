/* THIS FILE IS GENERATED */
#include "ImmediateGeometry.h"
void ImmediateGeometry::add_sphere(int p_lats, int p_lons, float p_radius, bool p_add_uv = (bool) True){
	_wasgo_ImmediateGeometry_wrapper_add_sphere(wasgo_id, lats, lons, radius, add_uv);
}
void ImmediateGeometry::add_vertex(Vector3 p_position){
	_wasgo_ImmediateGeometry_wrapper_add_vertex(wasgo_id, ((Variant) position).get_wasgo_id());
}
void ImmediateGeometry::begin(Mesh::PrimitiveType p_primitive, Texture p_texture = (Texture) [Object:null]){
	_wasgo_ImmediateGeometry_wrapper_begin(wasgo_id, ((Variant) primitive).get_wasgo_id(), ((Variant) texture).get_wasgo_id());
}
void ImmediateGeometry::clear(){
	_wasgo_ImmediateGeometry_wrapper_clear(wasgo_id);
}
void ImmediateGeometry::end(){
	_wasgo_ImmediateGeometry_wrapper_end(wasgo_id);
}
void ImmediateGeometry::set_color(Color p_color){
	_wasgo_ImmediateGeometry_wrapper_set_color(wasgo_id, ((Variant) color).get_wasgo_id());
}
void ImmediateGeometry::set_normal(Vector3 p_normal){
	_wasgo_ImmediateGeometry_wrapper_set_normal(wasgo_id, ((Variant) normal).get_wasgo_id());
}
void ImmediateGeometry::set_tangent(Plane p_tangent){
	_wasgo_ImmediateGeometry_wrapper_set_tangent(wasgo_id, ((Variant) tangent).get_wasgo_id());
}
void ImmediateGeometry::set_uv(Vector2 p_uv){
	_wasgo_ImmediateGeometry_wrapper_set_uv(wasgo_id, ((Variant) uv).get_wasgo_id());
}
void ImmediateGeometry::set_uv2(Vector2 p_uv){
	_wasgo_ImmediateGeometry_wrapper_set_uv2(wasgo_id, ((Variant) uv).get_wasgo_id());
}

ImmediateGeometry::ImmediateGeometry(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ImmediateGeometry::~ImmediateGeometry(){
}