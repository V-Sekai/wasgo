/* THIS FILE IS GENERATED */
#ifndef ARVRCAMERA_H
#define ARVRCAMERA_H

#include "wasgo\wasgo.h"

#include "Camera.h"
class ARVRCamera : public Camera{
public:

protected:
ARVRCamera(WasGoId p_wasgo_id);
public:
ARVRCamera();
~ARVRCamera();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_ARVRCamera_constructor();
    void _wasgo_ARVRCamera_destructor(WasGoId p_wasgo_id);
            
}
#endif