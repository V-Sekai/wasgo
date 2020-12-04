/* THIS FILE IS GENERATED */
#ifndef THREAD_H
#define THREAD_H

#include "wasgo\wasgo.h"

#include "error_list.h"
#include "ustring.h"
#include "Reference.h"
#include "Object.h"
#include "Variant.h"
class Thread : public Reference{
public:
enum Priority{
PRIORITY_LOW,
PRIORITY_NORMAL,
PRIORITY_HIGH
};
String get_id();
bool is_active();
Error start(Object p_instance, String p_method, Variant p_userdata = (Variant) "", Thread::Priority p_priority = (Thread::Priority) 1);
Variant wait_to_finish();

protected:
public:
explicit Thread(WasGoId p_wasgo_id);
explicit Thread(Reference other);
Thread new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Thread_wrapper_get_id(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Thread_wrapper_is_active(WasGoId wasgo_id);
WasGoId _wasgo_Thread_wrapper_start(WasGoId wasgo_id, WasGoId p_instance, const uint8_t * p_method, int p_method_wasgo_buffer_size, WasGoId p_userdata, WasGoId p_priority);
WasGoId _wasgo_Thread_wrapper_wait_to_finish(WasGoId wasgo_id);

    //constructor wrappers
    WasGoId _wasgo_Thread_constructor();
            
}
#endif