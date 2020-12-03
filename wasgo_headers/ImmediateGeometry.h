/* THIS FILE IS GENERATED */
#ifndef IMMEDIATEGEOMETRY_H
#define IMMEDIATEGEOMETRY_H

#include "wasgo\wasgo.h"

#include "Color.h"
#include "Vector2.h"
#include "GeometryInstance.h"
#include "Texture.h"
#include "Vector3.h"
#include "Mesh.h"
#include "Plane.h"
class ImmediateGeometry : public GeometryInstance{
public:
void add_sphere(int p_lats, int p_lons, float p_radius, bool p_add_uv = (bool) true);
void add_vertex(Vector3 p_position);
void begin(Mesh::PrimitiveType p_primitive, Texture p_texture = (Texture) [object:null]);
void clear();
void end();
void set_color(Color p_color);
void set_normal(Vector3 p_normal);
void set_tangent(Plane p_tangent);
void set_uv(Vector2 p_uv);
void set_uv2(Vector2 p_uv);

protected:
ImmediateGeometry(WasGoId p_wasgo_id);
public:
ImmediateGeometry();
~ImmediateGeometry();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ImmediateGeometry_wrapper_add_sphere(WasGoId wasgo_id, int p_lats, int p_lons, float p_radius, bool p_add_uv);
void _wasgo_ImmediateGeometry_wrapper_add_vertex(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_ImmediateGeometry_wrapper_begin(WasGoId wasgo_id, WasGoId p_primitive, WasGoId p_texture);
void _wasgo_ImmediateGeometry_wrapper_clear(WasGoId wasgo_id);
void _wasgo_ImmediateGeometry_wrapper_end(WasGoId wasgo_id);
void _wasgo_ImmediateGeometry_wrapper_set_color(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_ImmediateGeometry_wrapper_set_normal(WasGoId wasgo_id, const uint8_t * p_normal, int p_normal_wasgo_buffer_size);
void _wasgo_ImmediateGeometry_wrapper_set_tangent(WasGoId wasgo_id, const uint8_t * p_tangent, int p_tangent_wasgo_buffer_size);
void _wasgo_ImmediateGeometry_wrapper_set_uv(WasGoId wasgo_id, const uint8_t * p_uv, int p_uv_wasgo_buffer_size);
void _wasgo_ImmediateGeometry_wrapper_set_uv2(WasGoId wasgo_id, const uint8_t * p_uv, int p_uv_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_ImmediateGeometry_constructor();
    void _wasgo_ImmediateGeometry_destructor(WasGoId p_wasgo_id);
            
}
#endif