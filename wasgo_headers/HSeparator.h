/* THIS FILE IS GENERATED */
#ifndef HSEPARATOR_H
#define HSEPARATOR_H

#include "wasgo\wasgoid.h"

#include "Separator.h"
class HSeparator : public Separator{
public:

protected:
public:
explicit HSeparator(WasGoID p_wasgo_id);
explicit HSeparator(Separator other);
HSeparator();
HSeparator new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_HSeparator_constructor();
            
}
#endif