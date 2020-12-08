/* THIS FILE IS GENERATED */
#ifndef WASGORUNTIME_H
#define WASGORUNTIME_H

#include "wasgo\wasgoid.h"

#include "Object.h"
class WasGoRuntime : public Object{
public:

protected:
public:
explicit WasGoRuntime(WasGoID p_wasgo_id);
explicit WasGoRuntime(Object other);
WasGoRuntime();
WasGoRuntime new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_WasGoRuntime_constructor();
            
}
#endif