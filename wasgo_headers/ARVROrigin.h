/* THIS FILE IS GENERATED */
#ifndef ARVRORIGIN_H
#define ARVRORIGIN_H

#include "wasgo\wasgoid.h"

#include "Spatial.h"
class ARVROrigin : public Spatial{
public:
float get_world_scale();
void set_world_scale(float p_world_scale);

protected:
public:
explicit ARVROrigin(WasGoID p_wasgo_id);
explicit ARVROrigin(Spatial other);
ARVROrigin();
ARVROrigin new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_ARVROrigin_wrapper_get_world_scale(WasGoID wasgo_id);
void _wasgo_ARVROrigin_wrapper_set_world_scale(WasGoID wasgo_id, float p_world_scale);

    //constructor wrappers
    WasGoID _wasgo_ARVROrigin_constructor();
            
}
#endif