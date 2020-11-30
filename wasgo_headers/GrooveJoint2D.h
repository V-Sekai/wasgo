/* THIS FILE IS GENERATED */
#ifndef GROOVEJOINT2D_H
#define GROOVEJOINT2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Joint2D.h"
class GrooveJoint2D : public Joint2D{
float get_initial_offset();
float get_length();
void set_initial_offset(float p_offset);
void set_length(float p_length);

GrooveJoint2D(WasGoId p_wasgo_id);
~GrooveJoint2D();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_GrooveJoint2D_wrapper_get_initial_offset(WasGoId wasgo_id);
float _wasgo_GrooveJoint2D_wrapper_get_length(WasGoId wasgo_id);
void _wasgo_GrooveJoint2D_wrapper_set_initial_offset(WasGoId wasgo_id, float p_offset);
void _wasgo_GrooveJoint2D_wrapper_set_length(WasGoId wasgo_id, float p_length);
}
#endif