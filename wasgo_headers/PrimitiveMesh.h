/* THIS FILE IS GENERATED */
#ifndef PRIMITIVEMESH_H
#define PRIMITIVEMESH_H

#include "wasgo\wasgoid.h"

#include "Mesh.h"
#include "AABB.h"
#include "Variant.h"
#include "Material.h"
class PrimitiveMesh : public Mesh{
public:
AABB get_custom_aabb();
bool get_flip_faces();
Material get_material();
Array get_mesh_arrays();
void set_custom_aabb(AABB p_aabb);
void set_flip_faces(bool p_flip_faces);
void set_material(Material p_material);

protected:
public:
explicit PrimitiveMesh(WasGoID p_wasgo_id);
explicit PrimitiveMesh(Mesh other);
PrimitiveMesh();
PrimitiveMesh new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_PrimitiveMesh_wrapper_get_custom_aabb(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_PrimitiveMesh_wrapper_get_flip_faces(WasGoID wasgo_id);
WasGoID _wasgo_PrimitiveMesh_wrapper_get_material(WasGoID wasgo_id);
WasGoID _wasgo_PrimitiveMesh_wrapper_get_mesh_arrays(WasGoID wasgo_id);
void _wasgo_PrimitiveMesh_wrapper_set_custom_aabb(WasGoID wasgo_id, const uint8_t * p_aabb, int p_aabb_wasgo_buffer_size);
void _wasgo_PrimitiveMesh_wrapper_set_flip_faces(WasGoID wasgo_id, bool p_flip_faces);
void _wasgo_PrimitiveMesh_wrapper_set_material(WasGoID wasgo_id, WasGoID p_material);

    //constructor wrappers
    WasGoID _wasgo_PrimitiveMesh_constructor();
            
}
#endif