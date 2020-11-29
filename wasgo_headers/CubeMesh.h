/* THIS FILE IS GENERATED */
#ifndef CUBEMESH_H
#define CUBEMESH_H

#include "stdint.h"

#include "Variant.h"
#include "PrimitiveMesh.h"
class CubeMesh : public PrimitiveMesh{
public: CubeMesh();
Vector3 get_size();
int get_subdivide_depth();
int get_subdivide_height();
int get_subdivide_width();
void set_size(Vector3 p_size);
void set_subdivide_depth(int p_divisions);
void set_subdivide_height(int p_divisions);
void set_subdivide_width(int p_subdivide);
};
#endif