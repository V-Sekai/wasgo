/* THIS FILE IS GENERATED */
#ifndef INSTANCEPLACEHOLDER_H
#define INSTANCEPLACEHOLDER_H

#include "stdint.h"

#include "PackedScene.h"
#include "Node.h"
#include "Variant.h"
class InstancePlaceholder : public Node{
public: InstancePlaceholder();
Node create_instance(bool p_replace = (bool) False, PackedScene p_custom_scene = (PackedScene) "");
String get_instance_path();
Dictionary get_stored_values(bool p_with_order = (bool) False);
void replace_by_instance(PackedScene p_custom_scene = (PackedScene) "");
};
#endif