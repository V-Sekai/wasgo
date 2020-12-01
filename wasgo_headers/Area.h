/* THIS FILE IS GENERATED */
#ifndef AREA_H
#define AREA_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "CollisionObject.h"
class Area : public CollisionObject{
public:
enum SpaceOverride{
SPACE_OVERRIDE_DISABLED,
SPACE_OVERRIDE_COMBINE,
SPACE_OVERRIDE_COMBINE_REPLACE,
SPACE_OVERRIDE_REPLACE,
SPACE_OVERRIDE_REPLACE_COMBINE
};

Area(WasGoId p_wasgo_id);
~Area();
            
};


//Wrapper Functions
extern "C"{
}
#endif