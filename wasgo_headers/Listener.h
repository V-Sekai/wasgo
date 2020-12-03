/* THIS FILE IS GENERATED */
#ifndef LISTENER_H
#define LISTENER_H

#include "wasgo\wasgo.h"

#include "Spatial.h"
#include "Transform.h"
class Listener : public Spatial{
public:
void clear_current();
Transform get_listener_transform();
bool is_current();
void make_current();

protected:
Listener(WasGoId p_wasgo_id);
public:
Listener();
~Listener();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Listener_wrapper_clear_current(WasGoId wasgo_id);
void _wasgo_Listener_wrapper_get_listener_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Listener_wrapper_is_current(WasGoId wasgo_id);
void _wasgo_Listener_wrapper_make_current(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_Listener_constructor();
    void _wasgo_Listener_destructor(WasGoId p_wasgo_id);
            
}
#endif