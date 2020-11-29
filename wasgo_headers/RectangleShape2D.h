/* THIS FILE IS GENERATED */
#ifndef RECTANGLESHAPE2D_H
#define RECTANGLESHAPE2D_H

#include "stdint.h"

#include "Variant.h"
#include "Shape2D.h"
class RectangleShape2D : public Shape2D{
public: RectangleShape2D();
Vector2 get_extents();
void set_extents(Vector2 p_extents);
};
#endif