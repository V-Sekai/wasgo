/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Resource.h"
class Sky : public Resource{
public: Sky();
enum RadianceSize{
RADIANCE_SIZE_32: 0,
RADIANCE_SIZE_64: 1,
RADIANCE_SIZE_128: 2,
RADIANCE_SIZE_256: 3,
RADIANCE_SIZE_512: 4,
RADIANCE_SIZE_1024: 5,
RADIANCE_SIZE_2048: 6,
};
enum.Sky::RadianceSize  get_radiance_size();
enum.Sky::RadianceSize  get_radiance_size();
void  set_radiance_size(int size);
};