/* THIS FILE IS GENERATED */
#ifndef MUTEX_H
#define MUTEX_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Reference.h"
#include "Error.h"
class Mutex : public Reference{
void lock();
Error try_lock();
void unlock();

Mutex(WasGoId p_wasgo_id);
~Mutex();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Mutex_wrapper_lock(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Mutex_wrapper_try_lock(WasGoId wasgo_id);
void _wasgo_Mutex_wrapper_unlock(WasGoId wasgo_id);
}
#endif