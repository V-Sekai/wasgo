/* THIS FILE IS GENERATED */
#ifndef SKY_H
#define SKY_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Resource.h"
class Sky : public Resource{
enum RadianceSize{
RADIANCE_SIZE_32,
RADIANCE_SIZE_64,
RADIANCE_SIZE_128,
RADIANCE_SIZE_256,
RADIANCE_SIZE_512,
RADIANCE_SIZE_1024,
RADIANCE_SIZE_2048,
RADIANCE_SIZE_MAX
};
Sky::RadianceSize get_radiance_size();
void set_radiance_size(Sky::RadianceSize p_size);
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_Sky_wrapper_get_radiance_size(WasGoId wasgo_id);
void _wasgo_Sky_wrapper_set_radiance_size(WasGoId wasgo_id, WasGo::WasGoId p_size);
}
#endif