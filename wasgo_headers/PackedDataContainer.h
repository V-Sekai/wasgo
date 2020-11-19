/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "PoolByteArray.h"
#include "Erro.h"
#include "Resource.h"
#include "Variant.h"
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