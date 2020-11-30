/* THIS FILE IS GENERATED */
#ifndef PROCEDURALSKY_H
#define PROCEDURALSKY_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Sky.h"
class ProceduralSky : public Sky{
enum TextureSize{
TEXTURE_SIZE_256,
TEXTURE_SIZE_512,
TEXTURE_SIZE_1024,
TEXTURE_SIZE_2048,
TEXTURE_SIZE_4096,
TEXTURE_SIZE_MAX
};

ProceduralSky(WasGoId p_wasgo_id);
~ProceduralSky();
            
};


//Wrapper Functions
extern "C"{
}
#endif