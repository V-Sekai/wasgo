/* THIS FILE IS GENERATED */
#ifndef VSEPARATOR_H
#define VSEPARATOR_H

#include "wasgo\wasgo.h"

#include "Separator.h"
class VSeparator : public Separator{
public:

protected:
public:
explicit VSeparator(WasGoID p_wasgo_id);
explicit VSeparator(Separator other);
VSeparator new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VSeparator_constructor();
            
}
#endif