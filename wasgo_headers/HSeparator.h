/* THIS FILE IS GENERATED */
#ifndef HSEPARATOR_H
#define HSEPARATOR_H

#include "wasgo\wasgo.h"

#include "Separator.h"
class HSeparator : public Separator{
public:

protected:
public:
explicit HSeparator(WasGoId p_wasgo_id);
explicit HSeparator(Separator other);
HSeparator new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_HSeparator_constructor();
            
}
#endif