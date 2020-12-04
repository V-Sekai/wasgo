/* THIS FILE IS GENERATED */
#ifndef MUTEX_H
#define MUTEX_H

#include "wasgo\wasgo.h"

#include "Reference.h"
#include "error_list.h"
class Mutex : public Reference{
public:
void lock();
Error try_lock();
void unlock();

protected:
public:
explicit Mutex(WasGoId p_wasgo_id);
explicit Mutex(Reference other);
Mutex new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Mutex_wrapper_lock(WasGoId wasgo_id);
WasGoId _wasgo_Mutex_wrapper_try_lock(WasGoId wasgo_id);
void _wasgo_Mutex_wrapper_unlock(WasGoId wasgo_id);

    //constructor wrappers
    WasGoId _wasgo_Mutex_constructor();
            
}
#endif