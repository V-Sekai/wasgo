/* THIS FILE IS GENERATED */
#ifndef PRISMMESH_H
#define PRISMMESH_H

#include "stdint.h"

#include "Variant.h"
#include "PrimitiveMesh.h"
class PrismMesh : public PrimitiveMesh{
public: PrismMesh();
float get_left_to_right();
Vector3 get_size();
int get_subdivide_depth();
int get_subdivide_height();
int get_subdivide_width();
void set_left_to_right(float p_left_to_right);
void set_size(Vector3 p_size);
void set_subdivide_depth(int p_segments);
void set_subdivide_height(int p_segments);
void set_subdivide_width(int p_segments);
};
#endif