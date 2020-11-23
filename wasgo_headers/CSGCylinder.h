/* THIS FILE IS GENERATED */
#ifndef CSGCYLINDER_H
#define CSGCYLINDER_H

#include <stdint.h>

#include "Material.h"
#include "CSGPrimitive.h"
class CSGCylinder : public CSGPrimitive{
public: CSGCylinder();
float  get_height();
float  get_height();
Material  get_material();
Material  get_material();
float  get_radius();
float  get_radius();
int  get_sides();
int  get_sides();
bool  get_smooth_faces();
bool  get_smooth_faces();
bool  is_cone();
bool  is_cone();
void  set_cone(bool cone);
void  set_height(float height);
void  set_material(Material material);
void  set_radius(float radius);
void  set_sides(int sides);
void  set_smooth_faces(bool smooth_faces);
};
#endif