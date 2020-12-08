/* THIS FILE IS GENERATED */
#ifndef JNISINGLETON_H
#define JNISINGLETON_H

#include "wasgo\wasgoid.h"

#include "Object.h"
class JNISingleton : public Object{
public:

protected:
public:
explicit JNISingleton(WasGoID p_wasgo_id);
explicit JNISingleton(Object other);
JNISingleton();
JNISingleton new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_JNISingleton_constructor();
            
}
#endif