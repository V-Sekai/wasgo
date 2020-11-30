/* THIS FILE IS GENERATED */
#ifndef RIGIDBODY2D_H
#define RIGIDBODY2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "PhysicsBody2D.h"
class RigidBody2D : public PhysicsBody2D{
enum CCDMode{
CCD_MODE_DISABLED,
CCD_MODE_CAST_RAY,
CCD_MODE_CAST_SHAPE
};
enum Mode{
MODE_RIGID,
MODE_STATIC,
MODE_CHARACTER,
MODE_KINEMATIC
};

RigidBody2D(WasGoId p_wasgo_id);
~RigidBody2D();
            
};


//Wrapper Functions
extern "C"{
}
#endif