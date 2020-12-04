/* THIS FILE IS GENERATED */
#ifndef SPOTLIGHT_H
#define SPOTLIGHT_H

#include "wasgo\wasgo.h"

#include "Light.h"
class SpotLight : public Light{
public:

protected:
public:
explicit SpotLight(WasGoId p_wasgo_id);
explicit SpotLight(Light other);
SpotLight new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_SpotLight_constructor();
            
}
#endif