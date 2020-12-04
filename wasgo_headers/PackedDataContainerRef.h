/* THIS FILE IS GENERATED */
#ifndef PACKEDDATACONTAINERREF_H
#define PACKEDDATACONTAINERREF_H

#include "wasgo\wasgo.h"

#include "Reference.h"
class PackedDataContainerRef : public Reference{
public:
int size();
};


//Wrapper Functions
extern "C"{
int _wasgo_PackedDataContainerRef_wrapper_size(WasGoId wasgo_id);

    //constructor wrappers
    WasGoId _wasgo_PackedDataContainerRef_constructor();
            
}
#endif