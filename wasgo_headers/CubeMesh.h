/* THIS FILE IS GENERATED */
#ifndef CUBEMESH_H
#define CUBEMESH_H

#include <stdint.h>

#include "PrimitiveMesh.h"
#include "Vector3.h"
class CubeMesh : public PrimitiveMesh{
public: CubeMesh();
Vector3  get_size();
Vector3  get_size();
int  get_subdivide_depth();
int  get_subdivide_depth();
int  get_subdivide_height();
int  get_subdivide_height();
int  get_subdivide_width();
int  get_subdivide_width();
void  set_size(Vector3 size);
void  set_subdivide_depth(int divisions);
void  set_subdivide_height(int divisions);
void  set_subdivide_width(int subdivide);
};
#endif