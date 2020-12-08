/* THIS FILE IS GENERATED */
#ifndef RESOURCE_H
#define RESOURCE_H

#include "wasgo\wasgoid.h"

class Node;
#include "RID.h"
#include "Ustring.h"
#include "Reference.h"
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
explicit Resource(WasGoID p_wasgo_id);
explicit Resource(Reference other);
Resource();
Resource new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_Resource_wrapper_duplicate(WasGoID wasgo_id, bool p_subresources);
WasGoID _wasgo_Resource_wrapper_get_local_scene(WasGoID wasgo_id);
void _wasgo_Resource_wrapper_get_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Resource_wrapper_get_path(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Resource_wrapper_get_rid(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Resource_wrapper_is_local_to_scene(WasGoID wasgo_id);
void _wasgo_Resource_wrapper_set_local_to_scene(WasGoID wasgo_id, bool p_enable);
void _wasgo_Resource_wrapper_set_name(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_Resource_wrapper_set_path(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
void _wasgo_Resource_wrapper_setup_local_to_scene(WasGoID wasgo_id);
void _wasgo_Resource_wrapper_take_over_path(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_Resource_constructor();
            
}
#endif