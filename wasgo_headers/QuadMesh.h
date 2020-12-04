/* THIS FILE IS GENERATED */
#ifndef QUADMESH_H
#define QUADMESH_H

#include "wasgo\wasgo.h"

#include "PrimitiveMesh.h"
#include "Vector2.h"
class QuadMesh : public PrimitiveMesh{
public:
Vector2 get_size();
void set_size(Vector2 p_size);

protected:
public:
explicit QuadMesh(WasGoId p_wasgo_id);
explicit QuadMesh(PrimitiveMesh other);
QuadMesh new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_QuadMesh_wrapper_get_size(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_QuadMesh_wrapper_set_size(WasGoId wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_QuadMesh_constructor();
            
}
#endif