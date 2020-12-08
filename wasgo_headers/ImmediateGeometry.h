/* THIS FILE IS GENERATED */
#ifndef IMMEDIATEGEOMETRY_H
#define IMMEDIATEGEOMETRY_H

#include "wasgo\wasgoid.h"

#include "Color.h"
#include "Vector3.h"
#include "Vector2.h"
#include "Mesh.h"
#include "GeometryInstance.h"
#include "Plane.h"
#include "Texture.h"
class ImmediateGeometry : public GeometryInstance{
public:
void add_sphere(int p_lats, int p_lons, float p_radius, bool p_add_uv = (bool) true);
void add_vertex(Vector3 p_position);
void begin(Mesh::PrimitiveType p_primitive, Texture p_texture = Texture());
void clear();
void end();
void set_color(Color p_color);
void set_normal(Vector3 p_normal);
void set_tangent(Plane p_tangent);
void set_uv(Vector2 p_uv);
void set_uv2(Vector2 p_uv);

protected:
public:
explicit ImmediateGeometry(WasGoID p_wasgo_id);
explicit ImmediateGeometry(GeometryInstance other);
ImmediateGeometry();
ImmediateGeometry new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ImmediateGeometry_wrapper_add_sphere(WasGoID wasgo_id, int p_lats, int p_lons, float p_radius, bool p_add_uv);
void _wasgo_ImmediateGeometry_wrapper_add_vertex(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_ImmediateGeometry_wrapper_begin(WasGoID wasgo_id, WasGoID p_primitive, WasGoID p_texture);
void _wasgo_ImmediateGeometry_wrapper_clear(WasGoID wasgo_id);
void _wasgo_ImmediateGeometry_wrapper_end(WasGoID wasgo_id);
void _wasgo_ImmediateGeometry_wrapper_set_color(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_ImmediateGeometry_wrapper_set_normal(WasGoID wasgo_id, const uint8_t * p_normal, int p_normal_wasgo_buffer_size);
void _wasgo_ImmediateGeometry_wrapper_set_tangent(WasGoID wasgo_id, const uint8_t * p_tangent, int p_tangent_wasgo_buffer_size);
void _wasgo_ImmediateGeometry_wrapper_set_uv(WasGoID wasgo_id, const uint8_t * p_uv, int p_uv_wasgo_buffer_size);
void _wasgo_ImmediateGeometry_wrapper_set_uv2(WasGoID wasgo_id, const uint8_t * p_uv, int p_uv_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_ImmediateGeometry_constructor();
            
}
#endif