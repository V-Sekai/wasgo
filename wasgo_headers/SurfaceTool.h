/* THIS FILE IS GENERATED */
#ifndef SURFACETOOL_H
#define SURFACETOOL_H

#include <stdint.h>

#include "Vector2.h"
#include "Material.h"
#include "PoolRealArray.h"
#include "Mesh.h"
#include "PoolVector2Array.h"
#include "Reference.h"
#include "String.h"
#include "PoolIntArray.h"
#include "ArrayMesh.h"
#include "Transform.h"
#include "PoolVector3Array.h"
#include "Plane.h"
#include "Vector3.h"
#include "Variant.h"
class SurfaceTool : public Reference{
public: SurfaceTool();
void  add_bones(PoolIntArray bones);
void  add_color(Color color);
void  add_index(int index);
void  add_normal(Vector3 normal);
void  add_smooth_group(bool smooth);
void  add_tangent(Plane tangent);
void  add_triangle_fan(PoolVector3Array vertices, PoolVector2Array uvs = [], PoolColorArray colors = [poolcolorarray], PoolVector2Array uv2s = [], PoolVector3Array normals = [], Array tangents = []);
void  add_uv(Vector2 uv);
void  add_uv2(Vector2 uv2);
void  add_vertex(Vector3 vertex);
void  add_weights(PoolRealArray weights);
void  append_from(Mesh existing, int surface, Transform transform);
void  begin(int primitive);
void  clear();
void  clear();
ArrayMesh  commit(ArrayMesh existing = null, int flags = 97280);
Array  commit_to_arrays();
Array  commit_to_arrays();
void  create_from(Mesh existing, int surface);
void  create_from_blend_shape(Mesh existing, int surface, String blend_shape);
void  deindex();
void  deindex();
void  generate_normals(bool flip = false);
void  generate_tangents();
void  generate_tangents();
void  index();
void  index();
void  set_material(Material material);
};
#endif