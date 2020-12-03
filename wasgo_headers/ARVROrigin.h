/* THIS FILE IS GENERATED */
#ifndef ARVRORIGIN_H
#define ARVRORIGIN_H

#include "wasgo\wasgo.h"

#include "Spatial.h"
class ARVROrigin : public Spatial{
public:
float get_world_scale();
void set_world_scale(float p_world_scale);

protected:
ARVROrigin(WasGoId p_wasgo_id);
public:
ARVROrigin();
~ARVROrigin();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_ARVROrigin_wrapper_get_world_scale(WasGoId wasgo_id);
void _wasgo_ARVROrigin_wrapper_set_world_scale(WasGoId wasgo_id, float p_world_scale);

    //constructor and destructor wrappers
    WasGoId _wasgo_ARVROrigin_constructor();
    void _wasgo_ARVROrigin_destructor(WasGoId p_wasgo_id);
            
}
#endif