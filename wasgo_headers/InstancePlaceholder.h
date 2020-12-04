/* THIS FILE IS GENERATED */
#ifndef INSTANCEPLACEHOLDER_H
#define INSTANCEPLACEHOLDER_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Node.h"
#include "Variant.h"
#include "PackedScene.h"
class InstancePlaceholder : public Node{
public:
Node create_instance(bool p_replace = (bool) false, PackedScene p_custom_scene = (PackedScene) "");
String get_instance_path();
Dictionary get_stored_values(bool p_with_order = (bool) false);
void replace_by_instance(PackedScene p_custom_scene = (PackedScene) "");
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_InstancePlaceholder_wrapper_create_instance(WasGoID wasgo_id, bool p_replace, WasGoID p_custom_scene);
void _wasgo_InstancePlaceholder_wrapper_get_instance_path(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_InstancePlaceholder_wrapper_get_stored_values(WasGoID wasgo_id, bool p_with_order);
void _wasgo_InstancePlaceholder_wrapper_replace_by_instance(WasGoID wasgo_id, WasGoID p_custom_scene);

    //constructor wrappers
    WasGoID _wasgo_InstancePlaceholder_constructor();
            
}
#endif