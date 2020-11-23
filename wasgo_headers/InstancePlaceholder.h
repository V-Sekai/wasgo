/* THIS FILE IS GENERATED */
#ifndef INSTANCEPLACEHOLDER_H
#define INSTANCEPLACEHOLDER_H

#include <stdint.h>

#include "String.h"
#include "Node.h"
#include "Dictionary.h"
#include "PackedScene.h"
class InstancePlaceholder : public Node{
public: InstancePlaceholder();
Node  create_instance(bool replace = false, PackedScene custom_scene = null);
String  get_instance_path();
String  get_instance_path();
Dictionary  get_stored_values(bool with_order = false);
void  replace_by_instance(PackedScene custom_scene = null);
};
#endif