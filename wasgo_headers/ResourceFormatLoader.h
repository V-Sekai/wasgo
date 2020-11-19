/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "PoolStringArray.h"
#include "Variant.h"
#include "Reference.h"
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