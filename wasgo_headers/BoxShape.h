/* THIS FILE IS GENERATED */
#ifndef BOXSHAPE_H
#define BOXSHAPE_H

#include "stdint.h"

#include "Variant.h"
#include "Shape.h"
class BoxShape : public Shape{
public: BoxShape();
Vector3 get_extents();
void set_extents(Vector3 p_extents);
};
#endif