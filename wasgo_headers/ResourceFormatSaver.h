/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Resource.h"
#include "PoolStringArray.h"
#include "Reference.h"
class ResourceFormatSaver : public Reference{
public: ResourceFormatSaver();
PoolStringArray  get_recognized_extensions(Resource resource);
bool  recognize(Resource resource);
int  save(String path, Resource resource, int flags);
};