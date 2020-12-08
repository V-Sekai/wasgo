/* THIS FILE IS GENERATED */
#ifndef THREAD_H
#define THREAD_H

#include "wasgo\wasgoid.h"

#include "Object.h"
#include "Reference.h"
#include "error_list.h"
#include "Variant.h"
#include "Ustring.h"
class Thread : public Reference{
public:
enum Priority{
PRIORITY_LOW,
PRIORITY_NORMAL,
PRIORITY_HIGH
};
String get_id();
bool is_active();
Error start(Object p_instance, String p_method, Variant p_userdata = Variant(), Thread::Priority p_priority = (Thread::Priority) 1);
Variant wait_to_finish();

protected:
public:
explicit Thread(WasGoID p_wasgo_id);
explicit Thread(Reference other);
Thread();
Thread new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Thread_wrapper_get_id(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Thread_wrapper_is_active(WasGoID wasgo_id);
WasGoID _wasgo_Thread_wrapper_start(WasGoID wasgo_id, WasGoID p_instance, const uint8_t * p_method, int p_method_wasgo_buffer_size, WasGoID p_userdata, WasGoID p_priority);
WasGoID _wasgo_Thread_wrapper_wait_to_finish(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_Thread_constructor();
            
}
#endif