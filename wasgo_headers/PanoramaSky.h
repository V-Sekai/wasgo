/* THIS FILE IS GENERATED */
#ifndef PANORAMASKY_H
#define PANORAMASKY_H

#include "wasgo\wasgoid.h"

#include "Sky.h"
#include "Texture.h"
class PanoramaSky : public Sky{
public:
Texture get_panorama();
void set_panorama(Texture p_texture);

protected:
public:
explicit PanoramaSky(WasGoID p_wasgo_id);
explicit PanoramaSky(Sky other);
PanoramaSky();
PanoramaSky new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_PanoramaSky_wrapper_get_panorama(WasGoID wasgo_id);
void _wasgo_PanoramaSky_wrapper_set_panorama(WasGoID wasgo_id, WasGoID p_texture);

    //constructor wrappers
    WasGoID _wasgo_PanoramaSky_constructor();
            
}
#endif