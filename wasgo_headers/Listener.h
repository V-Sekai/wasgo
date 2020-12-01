/* THIS FILE IS GENERATED */
#ifndef LISTENER_H
#define LISTENER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Transform.h"
#include "Spatial.h"
class Listener : public Spatial{
public:
void clear_current();
Transform get_listener_transform();
bool is_current();
void make_current();

Listener(WasGoId p_wasgo_id);
~Listener();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Listener_wrapper_clear_current(WasGoId wasgo_id);
WasGoId _wasgo_Listener_wrapper_get_listener_transform(WasGoId wasgo_id);
int _wasgo_Listener_wrapper_is_current(WasGoId wasgo_id);
void _wasgo_Listener_wrapper_make_current(WasGoId wasgo_id);
}
#endif