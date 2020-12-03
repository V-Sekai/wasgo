/* THIS FILE IS GENERATED */
#ifndef QUADMESH_H
#define QUADMESH_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "PrimitiveMesh.h"
class QuadMesh : public PrimitiveMesh{
public:
Vector2 get_size();
void set_size(Vector2 p_size);

protected:
QuadMesh(WasGoId p_wasgo_id);
public:
QuadMesh();
~QuadMesh();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_QuadMesh_wrapper_get_size(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_QuadMesh_wrapper_set_size(WasGoId wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_QuadMesh_constructor();
    void _wasgo_QuadMesh_destructor(WasGoId p_wasgo_id);
            
}
#endif