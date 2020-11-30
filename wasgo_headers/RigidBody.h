/* THIS FILE IS GENERATED */
#ifndef RIGIDBODY_H
#define RIGIDBODY_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "PhysicsBody.h"
class RigidBody : public PhysicsBody{
enum Mode{
MODE_RIGID,
MODE_STATIC,
MODE_CHARACTER,
MODE_KINEMATIC
};

RigidBody(WasGoId p_wasgo_id);
~RigidBody();
            
};


//Wrapper Functions
extern "C"{
}
#endif