/* THIS FILE IS GENERATED */
#ifndef IMMEDIATEGEOMETRY_H
#define IMMEDIATEGEOMETRY_H

#include "stdint.h"

#include "Variant.h"
#include "Texture.h"
#include "Mesh.h"
#include "GeometryInstance.h"
class ImmediateGeometry : public GeometryInstance{
public: ImmediateGeometry();
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
};
#endif