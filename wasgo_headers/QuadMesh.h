/* THIS FILE IS GENERATED */
#ifndef QUADMESH_H
#define QUADMESH_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "PrimitiveMesh.h"
class QuadMesh : public PrimitiveMesh{
public:
Vector2 get_size();
void set_size(Vector2 p_size);

QuadMesh(WasGoId p_wasgo_id);
~QuadMesh();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_QuadMesh_wrapper_get_size(WasGoId wasgo_id);
void _wasgo_QuadMesh_wrapper_set_size(WasGoId wasgo_id, WasGoId p_size);
}
#endif