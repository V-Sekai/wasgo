/* THIS FILE IS GENERATED */
#ifndef CYLINDERMESH_H
#define CYLINDERMESH_H

#include "stdint.h"

#include "PrimitiveMesh.h"
class CylinderMesh : public PrimitiveMesh{
public: CylinderMesh();
float get_bottom_radius();
float get_height();
int get_radial_segments();
int get_rings();
float get_top_radius();
void set_bottom_radius(float p_radius);
void set_height(float p_height);
void set_radial_segments(int p_segments);
void set_rings(int p_rings);
void set_top_radius(float p_radius);
};
#endif