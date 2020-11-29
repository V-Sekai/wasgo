/* THIS FILE IS GENERATED */
#ifndef RESOURCEFORMATSAVER_H
#define RESOURCEFORMATSAVER_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
#include "Resource.h"
class ResourceFormatSaver : public Reference{
public: ResourceFormatSaver();
PoolStringArray get_recognized_extensions(Resource p_resource);
bool recognize(Resource p_resource);
int save(String p_path, Resource p_resource, int p_flags);
};
#endif