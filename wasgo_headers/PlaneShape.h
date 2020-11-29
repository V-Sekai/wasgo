/* THIS FILE IS GENERATED */
#ifndef PLANESHAPE_H
#define PLANESHAPE_H

#include "stdint.h"

#include "Variant.h"
#include "Shape.h"
class PlaneShape : public Shape{
public: PlaneShape();
Plane get_plane();
void set_plane(Plane p_plane);
};
#endif