/* THIS FILE IS GENERATED */
#ifndef MUTEX_H
#define MUTEX_H

#include "wasgo\wasgoid.h"

#include "Reference.h"
#include "error_list.h"
class Mutex : public Reference{
public:
void lock();
Error try_lock();
void unlock();

protected:
public:
explicit Mutex(WasGoID p_wasgo_id);
explicit Mutex(Reference other);
Mutex();
Mutex new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Mutex_wrapper_lock(WasGoID wasgo_id);
WasGoID _wasgo_Mutex_wrapper_try_lock(WasGoID wasgo_id);
void _wasgo_Mutex_wrapper_unlock(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_Mutex_constructor();
            
}
#endif