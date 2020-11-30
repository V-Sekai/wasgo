/* THIS FILE IS GENERATED */
#ifndef IMMEDIATEGEOMETRY_H
#define IMMEDIATEGEOMETRY_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Mesh.h"
#include "GeometryInstance.h"
#include "Texture.h"
class ImmediateGeometry : public GeometryInstance{
void add_sphere(int p_lats, int p_lons, float p_radius, bool p_add_uv = (bool) True);
void add_vertex(Vector3 p_position);
void begin(Mesh::PrimitiveType p_primitive, Texture p_texture = (Texture) [Object:null]);
void clear();
void end();
void set_color(Color p_color);
void set_normal(Vector3 p_normal);
void set_tangent(Plane p_tangent);
void set_uv(Vector2 p_uv);
void set_uv2(Vector2 p_uv);

ImmediateGeometry(WasGoId p_wasgo_id);
~ImmediateGeometry();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ImmediateGeometry_wrapper_add_sphere(WasGoId wasgo_id, int p_lats, int p_lons, float p_radius, bool p_add_uv);
void _wasgo_ImmediateGeometry_wrapper_add_vertex(WasGoId wasgo_id, WasGo::WasGoId p_position);
void _wasgo_ImmediateGeometry_wrapper_begin(WasGoId wasgo_id, WasGo::WasGoId p_primitive, WasGo::WasGoId p_texture);
void _wasgo_ImmediateGeometry_wrapper_clear(WasGoId wasgo_id);
void _wasgo_ImmediateGeometry_wrapper_end(WasGoId wasgo_id);
void _wasgo_ImmediateGeometry_wrapper_set_color(WasGoId wasgo_id, WasGo::WasGoId p_color);
void _wasgo_ImmediateGeometry_wrapper_set_normal(WasGoId wasgo_id, WasGo::WasGoId p_normal);
void _wasgo_ImmediateGeometry_wrapper_set_tangent(WasGoId wasgo_id, WasGo::WasGoId p_tangent);
void _wasgo_ImmediateGeometry_wrapper_set_uv(WasGoId wasgo_id, WasGo::WasGoId p_uv);
void _wasgo_ImmediateGeometry_wrapper_set_uv2(WasGoId wasgo_id, WasGo::WasGoId p_uv);
}
#endif