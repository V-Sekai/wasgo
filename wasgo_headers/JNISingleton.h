/* THIS FILE IS GENERATED */
#ifndef JNISINGLETON_H
#define JNISINGLETON_H

#include "wasgo\wasgo.h"

#include "Object.h"
class JNISingleton : public Object{
public:

protected:
public:
explicit JNISingleton(WasGoID p_wasgo_id);
explicit JNISingleton(Object other);
JNISingleton new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_JNISingleton_constructor();
            
}
#endif