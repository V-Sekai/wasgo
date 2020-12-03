/* THIS FILE IS GENERATED */
#ifndef POINTMESH_H
#define POINTMESH_H

#include "wasgo\wasgo.h"

#include "PrimitiveMesh.h"
class PointMesh : public PrimitiveMesh{
public:

protected:
PointMesh(WasGoId p_wasgo_id);
public:
PointMesh();
~PointMesh();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_PointMesh_constructor();
    void _wasgo_PointMesh_destructor(WasGoId p_wasgo_id);
            
}
#endif