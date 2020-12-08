/* THIS FILE IS GENERATED */
#ifndef SEPARATOR_H
#define SEPARATOR_H

#include "wasgo\wasgoid.h"

#include "Control.h"
class Separator : public Control{
public:

protected:
public:
explicit Separator(WasGoID p_wasgo_id);
explicit Separator(Control other);
Separator();
Separator new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_Separator_constructor();
            
}
#endif