/* THIS FILE IS GENERATED */
#ifndef POINTMESH_H
#define POINTMESH_H

#include "wasgo\wasgo.h"

#include "PrimitiveMesh.h"
class PointMesh : public PrimitiveMesh{
public:

protected:
public:
explicit PointMesh(WasGoID p_wasgo_id);
explicit PointMesh(PrimitiveMesh other);
PointMesh new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_PointMesh_constructor();
            
}
#endif