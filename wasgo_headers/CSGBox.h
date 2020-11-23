/* THIS FILE IS GENERATED */
#ifndef CSGBOX_H
#define CSGBOX_H

#include <stdint.h>

#include "Material.h"
#include "CSGPrimitive.h"
class CSGBox : public CSGPrimitive{
public: CSGBox();
float  get_depth();
float  get_depth();
float  get_height();
float  get_height();
Material  get_material();
Material  get_material();
float  get_width();
float  get_width();
void  set_depth(float depth);
void  set_height(float height);
void  set_material(Material material);
void  set_width(float width);
};
#endif