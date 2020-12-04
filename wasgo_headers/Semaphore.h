/* THIS FILE IS GENERATED */
#ifndef SEMAPHORE_H
#define SEMAPHORE_H

#include "wasgo\wasgo.h"

#include "Reference.h"
#include "error_list.h"
class Semaphore : public Reference{
public:
Error post();
Error wait();

protected:
public:
explicit Semaphore(WasGoId p_wasgo_id);
explicit Semaphore(Reference other);
Semaphore new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_Semaphore_wrapper_post(WasGoId wasgo_id);
WasGoId _wasgo_Semaphore_wrapper_wait(WasGoId wasgo_id);

    //constructor wrappers
    WasGoId _wasgo_Semaphore_constructor();
            
}
#endif