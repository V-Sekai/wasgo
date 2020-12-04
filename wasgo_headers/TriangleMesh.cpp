/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TriangleMesh.h"

TriangleMesh::TriangleMesh(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
TriangleMesh::TriangleMesh(Reference other) : Reference(other._get_wasgo_id()){
    wasgo_id = _wasgo_TriangleMesh_constructor();
}
TriangleMesh::new_instance(){
    return TriangleMesh(_wasgo_TriangleMesh_constructor());
}