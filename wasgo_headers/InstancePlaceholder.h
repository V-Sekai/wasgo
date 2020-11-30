/* THIS FILE IS GENERATED */
#ifndef INSTANCEPLACEHOLDER_H
#define INSTANCEPLACEHOLDER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Node.h"
#include "PackedScene.h"
class InstancePlaceholder : public Node{
Node create_instance(bool p_replace = (bool) False, PackedScene p_custom_scene = (PackedScene) "");
String get_instance_path();
Dictionary get_stored_values(bool p_with_order = (bool) False);
void replace_by_instance(PackedScene p_custom_scene = (PackedScene) "");
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_InstancePlaceholder_wrapper_create_instance(WasGoId wasgo_id, bool p_replace, WasGo::WasGoId p_custom_scene);
WasGo::WasGoId _wasgo_InstancePlaceholder_wrapper_get_instance_path(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_InstancePlaceholder_wrapper_get_stored_values(WasGoId wasgo_id, bool p_with_order);
void _wasgo_InstancePlaceholder_wrapper_replace_by_instance(WasGoId wasgo_id, WasGo::WasGoId p_custom_scene);
}
#endif