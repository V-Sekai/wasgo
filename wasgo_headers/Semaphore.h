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
explicit Semaphore(WasGoID p_wasgo_id);
explicit Semaphore(Reference other);
Semaphore new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_Semaphore_wrapper_post(WasGoID wasgo_id);
WasGoID _wasgo_Semaphore_wrapper_wait(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_Semaphore_constructor();
            
}
#endif