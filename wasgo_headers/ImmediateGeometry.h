/* THIS FILE IS GENERATED */
#ifndef IMMEDIATEGEOMETRY_H
#define IMMEDIATEGEOMETRY_H

#include <stdint.h>

#include "Vector2.h"
#include "GeometryInstance.h"
#include "Vector3.h"
#include "Texture.h"
#include "Plane.h"
#include "Variant.h"
class ImmediateGeometry : public GeometryInstance{
public: ImmediateGeometry();
void  add_sphere(int lats, int lons, float radius, bool add_uv = true);
void  add_vertex(Vector3 position);
void  begin(int primitive, Texture texture = [object:null]);
void  clear();
void  clear();
void  end();
void  end();
void  set_color(Color color);
void  set_normal(Vector3 normal);
void  set_tangent(Plane tangent);
void  set_uv(Vector2 uv);
void  set_uv2(Vector2 uv);
};
#endif