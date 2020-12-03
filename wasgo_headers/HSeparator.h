/* THIS FILE IS GENERATED */
#ifndef HSEPARATOR_H
#define HSEPARATOR_H

#include "wasgo\wasgo.h"

#include "Separator.h"
class HSeparator : public Separator{
public:

protected:
HSeparator(WasGoId p_wasgo_id);
public:
HSeparator();
~HSeparator();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_HSeparator_constructor();
    void _wasgo_HSeparator_destructor(WasGoId p_wasgo_id);
            
}
#endif