/* THIS FILE IS GENERATED */
#ifndef INPUTDEFAULT_H
#define INPUTDEFAULT_H

#include "wasgo\wasgoid.h"

#include "Input.h"
class InputDefault : public Input{
public:

protected:
public:
explicit InputDefault(WasGoID p_wasgo_id);
explicit InputDefault(Input other);
InputDefault();
InputDefault new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_InputDefault_constructor();
            
}
#endif