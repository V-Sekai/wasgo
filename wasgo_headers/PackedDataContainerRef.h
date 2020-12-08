/* THIS FILE IS GENERATED */
#ifndef PACKEDDATACONTAINERREF_H
#define PACKEDDATACONTAINERREF_H

#include "wasgo\wasgoid.h"

#include "Reference.h"
class PackedDataContainerRef : public Reference{
public:
int size();

protected:
public:
explicit PackedDataContainerRef(WasGoID p_wasgo_id);
explicit PackedDataContainerRef(Reference other);
PackedDataContainerRef();
PackedDataContainerRef new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_PackedDataContainerRef_wrapper_size(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_PackedDataContainerRef_constructor();
            
}
#endif