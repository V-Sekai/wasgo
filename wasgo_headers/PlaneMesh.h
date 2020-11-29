/* THIS FILE IS GENERATED */
#ifndef PLANEMESH_H
#define PLANEMESH_H

#include "stdint.h"

#include "Variant.h"
#include "PrimitiveMesh.h"
class PlaneMesh : public PrimitiveMesh{
public: PlaneMesh();
Vector2 get_size();
int get_subdivide_depth();
int get_subdivide_width();
void set_size(Vector2 p_size);
void set_subdivide_depth(int p_subdivide);
void set_subdivide_width(int p_subdivide);
};
#endif