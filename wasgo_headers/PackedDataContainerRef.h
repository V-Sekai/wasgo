/* THIS FILE IS GENERATED */
#ifndef PACKEDDATACONTAINERREF_H
#define PACKEDDATACONTAINERREF_H

#include <stdint.h>

#include "Reference.h"
#include "Variant.h"
class PackedDataContainerRef : public Reference{
public: PackedDataContainerRef();
bool  _is_dictionary();
bool  _is_dictionary();
Variant  _iter_get(Variant arg0);
Variant  _iter_init(Array arg0);
Variant  _iter_next(Array arg0);
int  size();
int  size();
};
#endif