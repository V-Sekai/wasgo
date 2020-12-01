/* THIS FILE IS GENERATED */
#ifndef THREAD_H
#define THREAD_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "error_list.h"
#include "Reference.h"
#include "Object.h"
#include "ustring.h"
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

Thread(WasGoId p_wasgo_id);
~Thread();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_Thread_wrapper_get_id(WasGoId wasgo_id);
int _wasgo_Thread_wrapper_is_active(WasGoId wasgo_id);
WasGoId _wasgo_Thread_wrapper_start(WasGoId wasgo_id, WasGoId p_instance, WasGoId p_method, WasGoId p_userdata, WasGoId p_priority);
WasGoId _wasgo_Thread_wrapper_wait_to_finish(WasGoId wasgo_id);
}
#endif