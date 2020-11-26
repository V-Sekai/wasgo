/* THIS FILE IS GENERATED */
#ifndef CSGTORUS_H
#define CSGTORUS_H

#include <stdint.h>

#include "CSGPrimitive.h"
#include "Material.h"
class CSGTorus : public CSGPrimitive{
public: CSGTorus();
float  get_inner_radius();
float  get_inner_radius();
Material  get_material();
Material  get_material();
float  get_outer_radius();
float  get_outer_radius();
int  get_ring_sides();
int  get_ring_sides();
int  get_sides();
int  get_sides();
bool  get_smooth_faces();
bool  get_smooth_faces();
void  set_inner_radius(float radius);
void  set_material(Material material);
void  set_outer_radius(float radius);
void  set_ring_sides(int sides);
void  set_sides(int sides);
void  set_smooth_faces(bool smooth_faces);
};
#endif