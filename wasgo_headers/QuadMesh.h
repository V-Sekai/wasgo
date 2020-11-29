/* THIS FILE IS GENERATED */
#ifndef QUADMESH_H
#define QUADMESH_H

#include "stdint.h"

#include "Variant.h"
#include "PrimitiveMesh.h"
class QuadMesh : public PrimitiveMesh{
public: QuadMesh();
Vector2 get_size();
void set_size(Vector2 p_size);
};
#endif