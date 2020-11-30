/* THIS FILE IS GENERATED */
#ifndef ARVRORIGIN_H
#define ARVRORIGIN_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Spatial.h"
class ARVROrigin : public Spatial{
float get_world_scale();
void set_world_scale(float p_world_scale);

ARVROrigin(WasGoId p_wasgo_id);
~ARVROrigin();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_ARVROrigin_wrapper_get_world_scale(WasGoId wasgo_id);
void _wasgo_ARVROrigin_wrapper_set_world_scale(WasGoId wasgo_id, float p_world_scale);
}
#endif