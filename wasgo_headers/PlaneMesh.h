/* THIS FILE IS GENERATED */
#ifndef PLANEMESH_H
#define PLANEMESH_H

#include <stdint.h>

#include "Vector2.h"
#include "PrimitiveMesh.h"
class PlaneMesh : public PrimitiveMesh{
public: PlaneMesh();
Vector2  get_size();
Vector2  get_size();
int  get_subdivide_depth();
int  get_subdivide_depth();
int  get_subdivide_width();
int  get_subdivide_width();
void  set_size(Vector2 size);
void  set_subdivide_depth(int subdivide);
void  set_subdivide_width(int subdivide);
};
#endif