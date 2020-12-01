/* THIS FILE IS GENERATED */
#ifndef SEMAPHORE_H
#define SEMAPHORE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Reference.h"
#include "error_list.h"
class Semaphore : public Reference{
public:
Error post();
Error wait();

Semaphore(WasGoId p_wasgo_id);
~Semaphore();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_Semaphore_wrapper_post(WasGoId wasgo_id);
WasGoId _wasgo_Semaphore_wrapper_wait(WasGoId wasgo_id);
}
#endif