/* THIS FILE IS GENERATED */
#ifndef SKINREFERENCE_H
#define SKINREFERENCE_H

#include "wasgo\wasgoid.h"

#include "Skin.h"
#include "RID.h"
#include "Reference.h"
class SkinReference : public Reference{
public:
RID get_skeleton();
Skin get_skin();

protected:
public:
explicit SkinReference(WasGoID p_wasgo_id);
explicit SkinReference(Reference other);
SkinReference();
SkinReference new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_SkinReference_wrapper_get_skeleton(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_SkinReference_wrapper_get_skin(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_SkinReference_constructor();
            
}
#endif