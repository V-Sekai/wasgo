/* THIS FILE IS GENERATED */
#ifndef SPOTLIGHT_H
#define SPOTLIGHT_H

#include "wasgo\wasgoid.h"

#include "Light.h"
class SpotLight : public Light{
public:

protected:
public:
explicit SpotLight(WasGoID p_wasgo_id);
explicit SpotLight(Light other);
SpotLight();
SpotLight new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_SpotLight_constructor();
            
}
#endif