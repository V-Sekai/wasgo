/* THIS FILE IS GENERATED */
#ifndef RESOURCE_H
#define RESOURCE_H

#include "wasgo\wasgo.h"

#include "Node.h"
#include "Reference.h"
#include "RID.h"
#include "ustring.h"
class Resource : public Reference{
public:
Resource duplicate(bool p_subresources = (bool) false);
Node get_local_scene();
String get_name();
String get_path();
RID get_rid();
bool is_local_to_scene();
void set_local_to_scene(bool p_enable);
void set_name(String p_name);
void set_path(String p_path);
void setup_local_to_scene();
void take_over_path(String p_path);

protected:
public:
explicit Resource(WasGoId p_wasgo_id);
explicit Resource(Reference other);
Resource new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_Resource_wrapper_duplicate(WasGoId wasgo_id, bool p_subresources);
WasGoId _wasgo_Resource_wrapper_get_local_scene(WasGoId wasgo_id);
void _wasgo_Resource_wrapper_get_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Resource_wrapper_get_path(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Resource_wrapper_get_rid(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Resource_wrapper_is_local_to_scene(WasGoId wasgo_id);
void _wasgo_Resource_wrapper_set_local_to_scene(WasGoId wasgo_id, bool p_enable);
void _wasgo_Resource_wrapper_set_name(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_Resource_wrapper_set_path(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
void _wasgo_Resource_wrapper_setup_local_to_scene(WasGoId wasgo_id);
void _wasgo_Resource_wrapper_take_over_path(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_Resource_constructor();
            
}
#endif