/* THIS FILE IS GENERATED */
#ifndef LINESHAPE2D_H
#define LINESHAPE2D_H

#include "stdint.h"

#include "Variant.h"
#include "Shape2D.h"
class LineShape2D : public Shape2D{
public: LineShape2D();
float get_d();
Vector2 get_normal();
void set_d(float p_d);
void set_normal(Vector2 p_normal);
};
#endif