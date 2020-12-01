/* THIS FILE IS GENERATED */
#ifndef AREA2D_H
#define AREA2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "CollisionObject2D.h"
class Area2D : public CollisionObject2D{
public:
enum SpaceOverride{
SPACE_OVERRIDE_DISABLED,
SPACE_OVERRIDE_COMBINE,
SPACE_OVERRIDE_COMBINE_REPLACE,
SPACE_OVERRIDE_REPLACE,
SPACE_OVERRIDE_REPLACE_COMBINE
};

Area2D(WasGoId p_wasgo_id);
~Area2D();
            
};


//Wrapper Functions
extern "C"{
}
#endif