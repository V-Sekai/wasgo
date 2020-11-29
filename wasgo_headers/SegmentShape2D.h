/* THIS FILE IS GENERATED */
#ifndef SEGMENTSHAPE2D_H
#define SEGMENTSHAPE2D_H

#include "stdint.h"

#include "Variant.h"
#include "Shape2D.h"
class SegmentShape2D : public Shape2D{
public: SegmentShape2D();
Vector2 get_a();
Vector2 get_b();
void set_a(Vector2 p_a);
void set_b(Vector2 p_b);
};
#endif