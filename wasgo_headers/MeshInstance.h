/* THIS FILE IS GENERATED */
#ifndef MESHINSTANCE_H
#define MESHINSTANCE_H

#include <stdint.h>

#include "GeometryInstance.h"
#include "NodePath.h"
#include "Mesh.h"
#include "Material.h"
#include "Skin.h"
class MeshInstance : public GeometryInstance{
public: MeshInstance();
void  _mesh_changed();
void  _mesh_changed();
void  create_convex_collision();
void  create_convex_collision();
void  create_debug_tangents();
void  create_debug_tangents();
void  create_trimesh_collision();
void  create_trimesh_collision();
Mesh  get_mesh();
Mesh  get_mesh();
NodePath  get_skeleton_path();
NodePath  get_skeleton_path();
Skin  get_skin();
Skin  get_skin();
Material  get_surface_material(int surface);
int  get_surface_material_count();
int  get_surface_material_count();
void  set_mesh(Mesh mesh);
void  set_skeleton_path(NodePath skeleton_path);
void  set_skin(Skin skin);
void  set_surface_material(int surface, Material material);
};
#endif