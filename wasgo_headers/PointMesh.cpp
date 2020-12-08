/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PointMesh.h"

PointMesh::PointMesh(WasGoID p_wasgo_id) : PrimitiveMesh(p_wasgo_id){
}
PointMesh::PointMesh(PrimitiveMesh other) : PrimitiveMesh(other._get_wasgo_id()){
}
PointMesh::PointMesh():PrimitiveMesh(){
}
PointMesh PointMesh::new_instance(){
    return PointMesh(_wasgo_PointMesh_constructor());
}
WasGoID PointMesh::_get_wasgo_id(){
    return wasgo_id;
}
PointMesh::operator bool(){
    return (bool) wasgo_id;
}
