/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "PackedScene.h"
#include "Node.h"
#include "String.h"
#include "Dictionary.h"
class InstancePlaceholder : public Node{
public: InstancePlaceholder();
Node  create_instance(bool replace = false, PackedScene custom_scene = null);
String  get_instance_path();
String  get_instance_path();
Dictionary  get_stored_values(bool with_order = false);
void  replace_by_instance(PackedScene custom_scene = null);
};