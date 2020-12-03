/* THIS FILE IS GENERATED */
#ifndef SKINREFERENCE_H
#define SKINREFERENCE_H

#include "wasgo\wasgo.h"

#include "RID.h"
#include "Skin.h"
#include "Reference.h"
class SkinReference : public Reference{
public:
RID get_skeleton();
Skin get_skin();
};


//Wrapper Functions
extern "C"{
void _wasgo_SkinReference_wrapper_get_skeleton(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_SkinReference_wrapper_get_skin(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_SkinReference_constructor();
    void _wasgo_SkinReference_destructor(WasGoId p_wasgo_id);
            
}
#endif