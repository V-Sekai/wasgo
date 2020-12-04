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
Semaphore(WasGoId p_wasgo_id);
public:
Semaphore();
~Semaphore();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_Semaphore_wrapper_post(WasGoId wasgo_id);
WasGoId _wasgo_Semaphore_wrapper_wait(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_Semaphore_constructor();
    void _wasgo_Semaphore_destructor(WasGoId p_wasgo_id);
            
}
#endif