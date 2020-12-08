/* THIS FILE IS GENERATED */
#ifndef POINTMESH_H
#define POINTMESH_H

#include "wasgo\wasgoid.h"

#include "PrimitiveMesh.h"
class PointMesh : public PrimitiveMesh{
public:

protected:
public:
explicit PointMesh(WasGoID p_wasgo_id);
explicit PointMesh(PrimitiveMesh other);
PointMesh();
PointMesh new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_PointMesh_constructor();
            
}
#endif