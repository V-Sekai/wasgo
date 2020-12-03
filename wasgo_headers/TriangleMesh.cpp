/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "TriangleMesh.h"

TriangleMesh::TriangleMesh(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
TriangleMesh::TriangleMesh(){
    wasgo_id = _wasgo_TriangleMesh_constructor();
}
TriangleMesh::~TriangleMesh(){
    _wasgo_TriangleMesh_destructor(wasgo_id);
}