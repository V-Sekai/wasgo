/* THIS FILE IS GENERATED */
#ifndef RESOURCEFORMATLOADER_H
#define RESOURCEFORMATLOADER_H

#include <stdint.h>

#include "PoolStringArray.h"
#include "Reference.h"
#include "String.h"
#include "Variant.h"
class ResourceFormatLoader : public Reference{
public: ResourceFormatLoader();
void  get_dependencies(String path, String add_types);
PoolStringArray  get_recognized_extensions();
PoolStringArray  get_recognized_extensions();
String  get_resource_type(String path);
bool  handles_type(String typename);
Variant  load(String path, String original_path);
int  rename_dependencies(String path, String renames);
};
#endif