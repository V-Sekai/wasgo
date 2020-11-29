/* THIS FILE IS GENERATED */
#ifndef RESOURCEFORMATLOADER_H
#define RESOURCEFORMATLOADER_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
class ResourceFormatLoader : public Reference{
public: ResourceFormatLoader();
void get_dependencies(String p_path, String p_add_types);
PoolStringArray get_recognized_extensions();
String get_resource_type(String p_path);
bool handles_type(String p_typename);
Variant load(String p_path, String p_original_path);
int rename_dependencies(String p_path, String p_renames);
};
#endif