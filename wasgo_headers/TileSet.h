/* THIS FILE IS GENERATED */
#ifndef TILESET_H
#define TILESET_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Resource.h"
class TileSet : public Resource{
enum AutotileBindings{
BIND_TOPLEFT,
BIND_TOP,
BIND_TOPRIGHT,
BIND_LEFT,
BIND_CENTER,
BIND_RIGHT,
BIND_BOTTOMLEFT,
BIND_BOTTOM,
BIND_BOTTOMRIGHT
};
enum BitmaskMode{
BITMASK_2X2,
BITMASK_3X3_MINIMAL,
BITMASK_3X3
};
enum TileMode{
SINGLE_TILE,
AUTO_TILE,
ATLAS_TILE
};

TileSet(WasGoId p_wasgo_id);
~TileSet();
            
};


//Wrapper Functions
extern "C"{
}
#endif