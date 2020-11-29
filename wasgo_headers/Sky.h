/* THIS FILE IS GENERATED */
#ifndef SKY_H
#define SKY_H

#include "stdint.h"

#include "Resource.h"
class Sky : public Resource{
public: Sky();
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
#endif