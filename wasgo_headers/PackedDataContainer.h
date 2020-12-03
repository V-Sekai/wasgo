/* THIS FILE IS GENERATED */
#ifndef PACKEDDATACONTAINER_H
#define PACKEDDATACONTAINER_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "error_list.h"
#include "Variant.h"
class PackedDataContainer : public Resource{
public:
Error pack(Variant p_value);
int size();

protected:
PackedDataContainer(WasGoId p_wasgo_id);
public:
PackedDataContainer();
~PackedDataContainer();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_PackedDataContainer_wrapper_pack(WasGoId wasgo_id, WasGoId p_value);
int _wasgo_PackedDataContainer_wrapper_size(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_PackedDataContainer_constructor();
    void _wasgo_PackedDataContainer_destructor(WasGoId p_wasgo_id);
            
}
#endif