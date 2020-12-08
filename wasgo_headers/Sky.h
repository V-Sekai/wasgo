/* THIS FILE IS GENERATED */
#ifndef SKY_H
#define SKY_H

#include "wasgo\wasgoid.h"

#include "Resource.h"
class Sky : public Resource{
public:
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

protected:
public:
explicit Sky(WasGoID p_wasgo_id);
explicit Sky(Resource other);
Sky();
Sky new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_Sky_wrapper_get_radiance_size(WasGoID wasgo_id);
void _wasgo_Sky_wrapper_set_radiance_size(WasGoID wasgo_id, WasGoID p_size);

    //constructor wrappers
    WasGoID _wasgo_Sky_constructor();
            
}
#endif