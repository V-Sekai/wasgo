/* THIS FILE IS GENERATED */
#ifndef SPHEREMESH_H
#define SPHEREMESH_H

#include "stdint.h"

#include "PrimitiveMesh.h"
class SphereMesh : public PrimitiveMesh{
public: SphereMesh();
float get_height();
bool get_is_hemisphere();
int get_radial_segments();
float get_radius();
int get_rings();
void set_height(float p_height);
void set_is_hemisphere(bool p_is_hemisphere);
void set_radial_segments(int p_radial_segments);
void set_radius(float p_radius);
void set_rings(int p_rings);
};
#endif