/* THIS FILE IS GENERATED */
#ifndef WASGORUNTIME_H
#define WASGORUNTIME_H

#include "wasgo\wasgo.h"

#include "Object.h"
class WasGoRuntime : public Object{
public:

protected:
WasGoRuntime(WasGoId p_wasgo_id);
public:
WasGoRuntime();
~WasGoRuntime();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_WasGoRuntime_constructor();
    void _wasgo_WasGoRuntime_destructor(WasGoId p_wasgo_id);
            
}
#endif