/* THIS FILE IS GENERATED */
#ifndef CSGSPHERE_H
#define CSGSPHERE_H

#include <stdint.h>

#include "CSGPrimitive.h"
#include "Material.h"
class CSGSphere : public CSGPrimitive{
public: CSGSphere();
Material  get_material();
Material  get_material();
int  get_radial_segments();
int  get_radial_segments();
float  get_radius();
float  get_radius();
int  get_rings();
int  get_rings();
bool  get_smooth_faces();
bool  get_smooth_faces();
void  set_material(Material material);
void  set_radial_segments(int radial_segments);
void  set_radius(float radius);
void  set_rings(int rings);
void  set_smooth_faces(bool smooth_faces);
};
#endif