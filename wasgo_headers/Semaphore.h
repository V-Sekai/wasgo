/* THIS FILE IS GENERATED */
#ifndef SEMAPHORE_H
#define SEMAPHORE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Reference.h"
#include "Error.h"
class Semaphore : public Reference{
Error post();
Error wait();

Semaphore(WasGoId p_wasgo_id);
~Semaphore();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_Semaphore_wrapper_post(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Semaphore_wrapper_wait(WasGoId wasgo_id);
}
#endif