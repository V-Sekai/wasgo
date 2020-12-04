/* THIS FILE IS GENERATED */
#ifndef SKINREFERENCE_H
#define SKINREFERENCE_H

#include "wasgo\wasgo.h"

#include "Skin.h"
#include "Reference.h"
#include "RID.h"
class SkinReference : public Reference{
public:
RID get_skeleton();
Skin get_skin();
};


//Wrapper Functions
extern "C"{
void _wasgo_SkinReference_wrapper_get_skeleton(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_SkinReference_wrapper_get_skin(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_SkinReference_constructor();
            
}
#endif