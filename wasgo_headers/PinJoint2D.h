/* THIS FILE IS GENERATED */
#ifndef PINJOINT2D_H
#define PINJOINT2D_H

#include "stdint.h"

#include "Joint2D.h"
class PinJoint2D : public Joint2D{
public: PinJoint2D();
float get_softness();
void set_softness(float p_softness);
};
#endif