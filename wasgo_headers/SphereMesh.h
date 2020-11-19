/* THIS FILE IS GENERATED */
#ifndef SPHEREMESH_H
#define SPHEREMESH_H

#include <stdint.h>

#include "PrimitiveMesh.h"
class SphereMesh : public PrimitiveMesh{
public: SphereMesh();
float  get_height();
float  get_height();
bool  get_is_hemisphere();
bool  get_is_hemisphere();
int  get_radial_segments();
int  get_radial_segments();
float  get_radius();
float  get_radius();
int  get_rings();
int  get_rings();
void  set_height(float height);
void  set_is_hemisphere(bool is_hemisphere);
void  set_radial_segments(int radial_segments);
void  set_radius(float radius);
void  set_rings(int rings);
};
#endif