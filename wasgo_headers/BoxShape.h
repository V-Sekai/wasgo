/* THIS FILE IS GENERATED */
#ifndef BOXSHAPE_H
#define BOXSHAPE_H

#include <stdint.h>

#include "Shape.h"
#include "Vector3.h"
class BoxShape : public Shape{
public: BoxShape();
Vector3  get_extents();
Vector3  get_extents();
void  set_extents(Vector3 extents);
};
#endif