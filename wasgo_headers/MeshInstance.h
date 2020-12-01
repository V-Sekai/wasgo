/* THIS FILE IS GENERATED */
#ifndef MESHINSTANCE_H
#define MESHINSTANCE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Skin.h"
#include "NodePath.h"
#include "Material.h"
#include "GeometryInstance.h"
#include "Mesh.h"
class MeshInstance : public GeometryInstance{
public:
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

MeshInstance(WasGoId p_wasgo_id);
~MeshInstance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_MeshInstance_wrapper_create_convex_collision(WasGoId wasgo_id);
void _wasgo_MeshInstance_wrapper_create_trimesh_collision(WasGoId wasgo_id);
WasGoId _wasgo_MeshInstance_wrapper_get_active_material(WasGoId wasgo_id, int p_surface);
WasGoId _wasgo_MeshInstance_wrapper_get_mesh(WasGoId wasgo_id);
WasGoId _wasgo_MeshInstance_wrapper_get_skeleton_path(WasGoId wasgo_id);
WasGoId _wasgo_MeshInstance_wrapper_get_skin(WasGoId wasgo_id);
WasGoId _wasgo_MeshInstance_wrapper_get_surface_material(WasGoId wasgo_id, int p_surface);
int _wasgo_MeshInstance_wrapper_get_surface_material_count(WasGoId wasgo_id);
int _wasgo_MeshInstance_wrapper_is_software_skinning_transform_normals_enabled(WasGoId wasgo_id);
void _wasgo_MeshInstance_wrapper_set_mesh(WasGoId wasgo_id, WasGoId p_mesh);
void _wasgo_MeshInstance_wrapper_set_skeleton_path(WasGoId wasgo_id, WasGoId p_skeleton_path);
void _wasgo_MeshInstance_wrapper_set_skin(WasGoId wasgo_id, WasGoId p_skin);
void _wasgo_MeshInstance_wrapper_set_software_skinning_transform_normals(WasGoId wasgo_id, bool p_enabled);
void _wasgo_MeshInstance_wrapper_set_surface_material(WasGoId wasgo_id, int p_surface, WasGoId p_material);
}
#endif