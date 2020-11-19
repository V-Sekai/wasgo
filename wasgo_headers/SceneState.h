/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Reference.h"
#include "PackedScene.h"
#include "Variant.h"
#include "NodePath.h"
#include "PoolStringArray.h"
class SceneState : public Reference{
public: SceneState();
enum GenEditState{
GEN_EDIT_STATE_DISABLED: 0,
GEN_EDIT_STATE_INSTANCE: 1,
};
Array  get_connection_binds(int idx);
int  get_connection_count();
int  get_connection_count();
int  get_connection_flags(int idx);
String  get_connection_method(int idx);
String  get_connection_signal(int idx);
NodePath  get_connection_source(int idx);
NodePath  get_connection_target(int idx);
int  get_node_count();
int  get_node_count();
PoolStringArray  get_node_groups(int idx);
int  get_node_index(int idx);
PackedScene  get_node_instance(int idx);
String  get_node_instance_placeholder(int idx);
String  get_node_name(int idx);
NodePath  get_node_owner_path(int idx);
NodePath  get_node_path(int idx, bool for_parent = false);
int  get_node_property_count(int idx);
String  get_node_property_name(int idx, int prop_idx);
Variant  get_node_property_value(int idx, int prop_idx);
String  get_node_type(int idx);
bool  is_node_instance_placeholder(int idx);
};