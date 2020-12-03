/* THIS FILE IS GENERATED */
#ifndef JNISINGLETON_H
#define JNISINGLETON_H

#include "wasgo\wasgo.h"

#include "Object.h"
class JNISingleton : public Object{
public:

protected:
JNISingleton(WasGoId p_wasgo_id);
public:
JNISingleton();
~JNISingleton();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_JNISingleton_constructor();
    void _wasgo_JNISingleton_destructor(WasGoId p_wasgo_id);
            
}
#endif