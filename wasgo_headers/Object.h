/* THIS FILE IS GENERATED */
#ifndef OBJECT_H
#define OBJECT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
class Object : public Variant{
public:
enum ConnectFlags{
CONNECT_DEFERRED,
CONNECT_PERSIST,
CONNECT_ONESHOT,
CONNECT_REFERENCE_COUNTED
};
void free();

Object(WasGoId p_wasgo_id);
~Object();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Object_wrapper_free(WasGoId wasgo_id);
}
#endif