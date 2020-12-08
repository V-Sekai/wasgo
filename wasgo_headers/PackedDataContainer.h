/* THIS FILE IS GENERATED */
#ifndef PACKEDDATACONTAINER_H
#define PACKEDDATACONTAINER_H

#include "wasgo\wasgoid.h"

#include "Resource.h"
#include "Variant.h"
#include "error_list.h"
class PackedDataContainer : public Resource{
public:
Error pack(Variant p_value);
int size();

protected:
public:
explicit PackedDataContainer(WasGoID p_wasgo_id);
explicit PackedDataContainer(Resource other);
PackedDataContainer();
PackedDataContainer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_PackedDataContainer_wrapper_pack(WasGoID wasgo_id, WasGoID p_value);
int _wasgo_PackedDataContainer_wrapper_size(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_PackedDataContainer_constructor();
            
}
#endif