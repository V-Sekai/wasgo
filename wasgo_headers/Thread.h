/* THIS FILE IS GENERATED */
#ifndef THREAD_H
#define THREAD_H

#include "wasgo\wasgo.h"

#include "error_list.h"
#include "ustring.h"
#include "Variant.h"
#include "Reference.h"
#include "Object.h"
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
Thread(WasGoId p_wasgo_id);
public:
Thread();
~Thread();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Thread_wrapper_get_id(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Thread_wrapper_is_active(WasGoId wasgo_id);
WasGoId _wasgo_Thread_wrapper_start(WasGoId wasgo_id, WasGoId p_instance, const uint8_t * p_method, int p_method_wasgo_buffer_size, WasGoId p_userdata, WasGoId p_priority);
WasGoId _wasgo_Thread_wrapper_wait_to_finish(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_Thread_constructor();
    void _wasgo_Thread_destructor(WasGoId p_wasgo_id);
            
}
#endif