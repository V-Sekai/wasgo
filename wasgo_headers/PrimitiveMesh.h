/* THIS FILE IS GENERATED */
#ifndef PRIMITIVEMESH_H
#define PRIMITIVEMESH_H

#include "wasgo\wasgo.h"

#include "Mesh.h"
#include "Material.h"
#include "Variant.h"
#include "AABB.h"
class PrimitiveMesh : public Mesh{
public:
AABB get_custom_aabb();
bool get_flip_faces();
Material get_material();
Array get_mesh_arrays();
void set_custom_aabb(AABB p_aabb);
void set_flip_faces(bool p_flip_faces);
void set_material(Material p_material);
};


//Wrapper Functions
extern "C"{
void _wasgo_PrimitiveMesh_wrapper_get_custom_aabb(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_PrimitiveMesh_wrapper_get_flip_faces(WasGoId wasgo_id);
WasGoId _wasgo_PrimitiveMesh_wrapper_get_material(WasGoId wasgo_id);
WasGoId _wasgo_PrimitiveMesh_wrapper_get_mesh_arrays(WasGoId wasgo_id);
void _wasgo_PrimitiveMesh_wrapper_set_custom_aabb(WasGoId wasgo_id, const uint8_t * p_aabb, int p_aabb_wasgo_buffer_size);
void _wasgo_PrimitiveMesh_wrapper_set_flip_faces(WasGoId wasgo_id, bool p_flip_faces);
void _wasgo_PrimitiveMesh_wrapper_set_material(WasGoId wasgo_id, WasGoId p_material);

    //constructor and destructor wrappers
    WasGoId _wasgo_PrimitiveMesh_constructor();
    void _wasgo_PrimitiveMesh_destructor(WasGoId p_wasgo_id);
            
}
#endif