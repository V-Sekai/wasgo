/* THIS FILE IS GENERATED */
#ifndef GROOVEJOINT2D_H
#define GROOVEJOINT2D_H

#include "stdint.h"

#include "Joint2D.h"
class GrooveJoint2D : public Joint2D{
public: GrooveJoint2D();
float get_initial_offset();
float get_length();
void set_initial_offset(float p_offset);
void set_length(float p_length);
};
#endif