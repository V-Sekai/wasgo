/* THIS FILE IS GENERATED */
#ifndef PANORAMASKY_H
#define PANORAMASKY_H

#include "wasgo\wasgo.h"

#include "Texture.h"
#include "Sky.h"
class PanoramaSky : public Sky{
public:
Texture get_panorama();
void set_panorama(Texture p_texture);

protected:
public:
explicit PanoramaSky(WasGoId p_wasgo_id);
explicit PanoramaSky(Sky other);
PanoramaSky new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_PanoramaSky_wrapper_get_panorama(WasGoId wasgo_id);
void _wasgo_PanoramaSky_wrapper_set_panorama(WasGoId wasgo_id, WasGoId p_texture);

    //constructor wrappers
    WasGoId _wasgo_PanoramaSky_constructor();
            
}
#endif