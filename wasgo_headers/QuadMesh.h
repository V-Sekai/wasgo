/* THIS FILE IS GENERATED */
#ifndef QUADMESH_H
#define QUADMESH_H

#include "wasgo\wasgoid.h"

#include "Vector2.h"
#include "PrimitiveMesh.h"
class QuadMesh : public PrimitiveMesh{
public:
Vector2 get_size();
void set_size(Vector2 p_size);

protected:
public:
explicit QuadMesh(WasGoID p_wasgo_id);
explicit QuadMesh(PrimitiveMesh other);
QuadMesh();
QuadMesh new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_QuadMesh_wrapper_get_size(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_QuadMesh_wrapper_set_size(WasGoID wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_QuadMesh_constructor();
            
}
#endif