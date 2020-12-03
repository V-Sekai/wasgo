/* THIS FILE IS GENERATED */
#ifndef VSEPARATOR_H
#define VSEPARATOR_H

#include "wasgo\wasgo.h"

#include "Separator.h"
class VSeparator : public Separator{
public:

protected:
VSeparator(WasGoId p_wasgo_id);
public:
VSeparator();
~VSeparator();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VSeparator_constructor();
    void _wasgo_VSeparator_destructor(WasGoId p_wasgo_id);
            
}
#endif