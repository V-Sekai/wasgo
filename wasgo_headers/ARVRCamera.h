/* THIS FILE IS GENERATED */
#ifndef ARVRCAMERA_H
#define ARVRCAMERA_H

#include "wasgo\wasgo.h"

#include "Camera.h"
class ARVRCamera : public Camera{
public:

protected:
public:
explicit ARVRCamera(WasGoID p_wasgo_id);
explicit ARVRCamera(Camera other);
ARVRCamera new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_ARVRCamera_constructor();
            
}
#endif