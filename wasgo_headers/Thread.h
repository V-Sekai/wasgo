/* THIS FILE IS GENERATED */
#ifndef THREAD_H
#define THREAD_H

#include "stdint.h"

#include "Error.h"
#include "Variant.h"
#include "Reference.h"
#include "Object.h"
class Thread : public Reference{
public: Thread();
enum Priority{
PRIORITY_LOW,
PRIORITY_NORMAL,
PRIORITY_HIGH
};
String get_id();
bool is_active();
Error start(Object p_instance, String p_method, Variant p_userdata = (Variant) "", Thread::Priority p_priority = (Thread::Priority) 1);
Variant wait_to_finish();
};
#endif