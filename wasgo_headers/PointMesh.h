/* THIS FILE IS GENERATED */
#ifndef POINTMESH_H
#define POINTMESH_H

#include "wasgo\wasgo.h"

#include "PrimitiveMesh.h"
class PointMesh : public PrimitiveMesh{
public:

protected:
public:
explicit PointMesh(WasGoId p_wasgo_id);
explicit PointMesh(PrimitiveMesh other);
PointMesh new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_PointMesh_constructor();
            
}
#endif