/* THIS FILE IS GENERATED */
#ifndef PACKEDDATACONTAINER_H
#define PACKEDDATACONTAINER_H

#include <stdint.h>

#include "Resource.h"
#include "Erro.h"
#include "Variant.h"
#include "PoolByteArray.h"
class PackedDataContainer : public Resource{
public: PackedDataContainer();
PoolByteArray  _get_data();
PoolByteArray  _get_data();
Variant  _iter_get(Variant arg0);
Variant  _iter_init(Array arg0);
Variant  _iter_next(Array arg0);
void  _set_data(PoolByteArray arg0);
enum.Error  pack(Variant value);
int  size();
int  size();
};
#endif