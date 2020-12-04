/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PointMesh.h"

PointMesh::PointMesh(WasGoID p_wasgo_id) : PrimitiveMesh(p_wasgo_id){
}
PointMesh::PointMesh(PrimitiveMesh other) : PrimitiveMesh(other._get_wasgo_id()){
    wasgo_id = _wasgo_PointMesh_constructor();
}
PointMesh::new_instance(){
    return PointMesh(_wasgo_PointMesh_constructor());
}