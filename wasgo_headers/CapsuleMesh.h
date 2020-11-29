/* THIS FILE IS GENERATED */
#ifndef CAPSULEMESH_H
#define CAPSULEMESH_H

#include "stdint.h"

#include "PrimitiveMesh.h"
class CapsuleMesh : public PrimitiveMesh{
public: CapsuleMesh();
float get_mid_height();
int get_radial_segments();
float get_radius();
int get_rings();
void set_mid_height(float p_mid_height);
void set_radial_segments(int p_segments);
void set_radius(float p_radius);
void set_rings(int p_rings);
};
#endif