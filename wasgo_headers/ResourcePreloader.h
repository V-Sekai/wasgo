/* THIS FILE IS GENERATED */
#ifndef RESOURCEPRELOADER_H
#define RESOURCEPRELOADER_H

#include <stdint.h>

#include "PoolStringArray.h"
#include "String.h"
#include "Resource.h"
#include "Node.h"
#include "Variant.h"
class ResourcePreloader : public Node{
public: ResourcePreloader();
Array  _get_resources();
Array  _get_resources();
void  _set_resources(Array arg0);
void  add_resource(String name, Resource resource);
Resource  get_resource(String name);
PoolStringArray  get_resource_list();
PoolStringArray  get_resource_list();
bool  has_resource(String name);
void  remove_resource(String name);
void  rename_resource(String name, String newname);
};
#endif