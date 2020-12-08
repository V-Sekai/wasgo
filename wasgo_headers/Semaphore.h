/* THIS FILE IS GENERATED */
#ifndef SEMAPHORE_H
#define SEMAPHORE_H

#include "wasgo\wasgoid.h"

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
Semaphore();
Semaphore new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_Semaphore_wrapper_post(WasGoID wasgo_id);
WasGoID _wasgo_Semaphore_wrapper_wait(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_Semaphore_constructor();
            
}
#endif