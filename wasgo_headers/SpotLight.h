/* THIS FILE IS GENERATED */
#ifndef SPOTLIGHT_H
#define SPOTLIGHT_H

#include "wasgo\wasgo.h"

#include "Light.h"
class SpotLight : public Light{
public:

protected:
SpotLight(WasGoId p_wasgo_id);
public:
SpotLight();
~SpotLight();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_SpotLight_constructor();
    void _wasgo_SpotLight_destructor(WasGoId p_wasgo_id);
            
}
#endif