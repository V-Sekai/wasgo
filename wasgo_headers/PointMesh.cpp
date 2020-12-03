/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PointMesh.h"

PointMesh::PointMesh(WasGoId p_wasgo_id) : PrimitiveMesh(p_wasgo_id){
}
PointMesh::PointMesh(){
    wasgo_id = _wasgo_PointMesh_constructor();
}
PointMesh::~PointMesh(){
    _wasgo_PointMesh_destructor(wasgo_id);
}