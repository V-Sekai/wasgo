/* THIS FILE IS GENERATED */
#ifndef PANORAMASKY_H
#define PANORAMASKY_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Texture.h"
#include "Sky.h"
class PanoramaSky : public Sky{
public:
Texture get_panorama();
void set_panorama(Texture p_texture);

PanoramaSky(WasGoId p_wasgo_id);
~PanoramaSky();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_PanoramaSky_wrapper_get_panorama(WasGoId wasgo_id);
void _wasgo_PanoramaSky_wrapper_set_panorama(WasGoId wasgo_id, WasGoId p_texture);
}
#endif