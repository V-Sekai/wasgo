/* THIS FILE IS GENERATED */
#ifndef ARVRCAMERA_H
#define ARVRCAMERA_H

#include "wasgo\wasgoid.h"

#include "Camera.h"
class ARVRCamera : public Camera{
public:

protected:
public:
explicit ARVRCamera(WasGoID p_wasgo_id);
explicit ARVRCamera(Camera other);
ARVRCamera();
ARVRCamera new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_ARVRCamera_constructor();
            
}
#endif