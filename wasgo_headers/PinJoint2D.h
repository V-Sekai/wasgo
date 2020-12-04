/* THIS FILE IS GENERATED */
#ifndef PINJOINT2D_H
#define PINJOINT2D_H

#include "wasgo\wasgo.h"

#include "Joint2D.h"
class PinJoint2D : public Joint2D{
public:
float get_softness();
void set_softness(float p_softness);

protected:
public:
explicit PinJoint2D(WasGoID p_wasgo_id);
explicit PinJoint2D(Joint2D other);
PinJoint2D new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_PinJoint2D_wrapper_get_softness(WasGoID wasgo_id);
void _wasgo_PinJoint2D_wrapper_set_softness(WasGoID wasgo_id, float p_softness);

    //constructor wrappers
    WasGoID _wasgo_PinJoint2D_constructor();
            
}
#endif