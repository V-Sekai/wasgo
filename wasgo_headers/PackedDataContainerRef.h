/* THIS FILE IS GENERATED */
#ifndef PACKEDDATACONTAINERREF_H
#define PACKEDDATACONTAINERREF_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Reference.h"
class PackedDataContainerRef : public Reference{
int size();
};


//Wrapper Functions
extern "C"{
int _wasgo_PackedDataContainerRef_wrapper_size(WasGoId wasgo_id);
}
#endif