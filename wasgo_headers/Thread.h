/* THIS FILE IS GENERATED */
#ifndef THREAD_H
#define THREAD_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Object.h"
#include "Reference.h"
#include "Error.h"
class Thread : public Reference{
enum Priority{
PRIORITY_LOW,
PRIORITY_NORMAL,
PRIORITY_HIGH
};
String get_id();
bool is_active();
Error start(Object p_instance, String p_method, Variant p_userdata = (Variant) "", Thread::Priority p_priority = (Thread::Priority) 1);
Variant wait_to_finish();

Thread(WasGoId p_wasgo_id);
~Thread();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_Thread_wrapper_get_id(WasGoId wasgo_id);
int _wasgo_Thread_wrapper_is_active(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Thread_wrapper_start(WasGoId wasgo_id, WasGo::WasGoId p_instance, WasGo::WasGoId p_method, WasGo::WasGoId p_userdata, WasGo::WasGoId p_priority);
WasGo::WasGoId _wasgo_Thread_wrapper_wait_to_finish(WasGoId wasgo_id);
}
#endif