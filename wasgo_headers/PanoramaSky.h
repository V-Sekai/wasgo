/* THIS FILE IS GENERATED */
#ifndef PANORAMASKY_H
#define PANORAMASKY_H

#include "wasgo\wasgo.h"

#include "Sky.h"
#include "Texture.h"
class PanoramaSky : public Sky{
public:
Texture get_panorama();
void set_panorama(Texture p_texture);

protected:
PanoramaSky(WasGoId p_wasgo_id);
public:
PanoramaSky();
~PanoramaSky();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_PanoramaSky_wrapper_get_panorama(WasGoId wasgo_id);
void _wasgo_PanoramaSky_wrapper_set_panorama(WasGoId wasgo_id, WasGoId p_texture);

    //constructor and destructor wrappers
    WasGoId _wasgo_PanoramaSky_constructor();
    void _wasgo_PanoramaSky_destructor(WasGoId p_wasgo_id);
            
}
#endif