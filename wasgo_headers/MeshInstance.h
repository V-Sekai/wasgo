/* THIS FILE IS GENERATED */
#ifndef MESHINSTANCE_H
#define MESHINSTANCE_H

#include "stdint.h"

#include "Material.h"
#include "GeometryInstance.h"
#include "Variant.h"
#include "Skin.h"
#include "Mesh.h"
class MeshInstance : public GeometryInstance{
public: MeshInstance();
void create_convex_collision();
void create_trimesh_collision();
Material get_active_material(int p_surface);
Mesh get_mesh();
NodePath get_skeleton_path();
Skin get_skin();
Material get_surface_material(int p_surface);
int get_surface_material_count();
bool is_software_skinning_transform_normals_enabled();
void set_mesh(Mesh p_mesh);
void set_skeleton_path(NodePath p_skeleton_path);
void set_skin(Skin p_skin);
void set_software_skinning_transform_normals(bool p_enabled);
void set_surface_material(int p_surface, Material p_material);
};
#endif