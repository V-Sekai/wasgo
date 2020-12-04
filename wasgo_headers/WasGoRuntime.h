/* THIS FILE IS GENERATED */
#ifndef WASGORUNTIME_H
#define WASGORUNTIME_H

#include "wasgo\wasgo.h"

#include "Object.h"
class WasGoRuntime : public Object{
public:

protected:
public:
explicit WasGoRuntime(WasGoId p_wasgo_id);
explicit WasGoRuntime(Object other);
WasGoRuntime new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_WasGoRuntime_constructor();
            
}
#endif