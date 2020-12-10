/* THIS FILE IS GENERATED */
#ifndef MESHINSTANCE_H
#define MESHINSTANCE_H

#include "wasgo\wasgoid.h"

#include "NodePath.h"
#include "Mesh.h"
#include "Skin.h"
#include "Material.h"
#include "GeometryInstance.h"
class MeshInstance : public GeometryInstance{
public:
void create_convex_collision();
void create_debug_tangents();
void create_trimesh_collision();
Mesh get_mesh();
NodePath get_skeleton_path();
Skin get_skin();
Material get_surface_material(int p_surface);
int get_surface_material_count();
void set_mesh(Mesh p_mesh);
void set_skeleton_path(NodePath p_skeleton_path);
void set_skin(Skin p_skin);
void set_surface_material(int p_surface, Material p_material);

protected:
public:
explicit MeshInstance(WasGoID p_wasgo_id);
explicit MeshInstance(GeometryInstance other);
MeshInstance();
MeshInstance new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_MeshInstance_wrapper_create_convex_collision(WasGoID wasgo_id);
void _wasgo_MeshInstance_wrapper_create_debug_tangents(WasGoID wasgo_id);
void _wasgo_MeshInstance_wrapper_create_trimesh_collision(WasGoID wasgo_id);
WasGoID _wasgo_MeshInstance_wrapper_get_mesh(WasGoID wasgo_id);
void _wasgo_MeshInstance_wrapper_get_skeleton_path(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_MeshInstance_wrapper_get_skin(WasGoID wasgo_id);
WasGoID _wasgo_MeshInstance_wrapper_get_surface_material(WasGoID wasgo_id, int p_surface);
int _wasgo_MeshInstance_wrapper_get_surface_material_count(WasGoID wasgo_id);
void _wasgo_MeshInstance_wrapper_set_mesh(WasGoID wasgo_id, WasGoID p_mesh);
void _wasgo_MeshInstance_wrapper_set_skeleton_path(WasGoID wasgo_id, const uint8_t * p_skeleton_path, int p_skeleton_path_wasgo_buffer_size);
void _wasgo_MeshInstance_wrapper_set_skin(WasGoID wasgo_id, WasGoID p_skin);
void _wasgo_MeshInstance_wrapper_set_surface_material(WasGoID wasgo_id, int p_surface, WasGoID p_material);

    //constructor wrappers
    WasGoID _wasgo_MeshInstance_constructor();
            
}
#endif