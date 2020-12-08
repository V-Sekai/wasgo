/* THIS FILE IS GENERATED */
#ifndef RESOURCEPRELOADER_H
#define RESOURCEPRELOADER_H

#include "wasgo\wasgoid.h"

#include "Resource.h"
#include "Variant.h"
#include "Node.h"
#include "Ustring.h"
class ResourcePreloader : public Node{
public:
void add_resource(String p_name, Resource p_resource);
Resource get_resource(String p_name);
PoolStringArray get_resource_list();
bool has_resource(String p_name);
void remove_resource(String p_name);
void rename_resource(String p_name, String p_newname);

protected:
public:
explicit ResourcePreloader(WasGoID p_wasgo_id);
explicit ResourcePreloader(Node other);
ResourcePreloader();
ResourcePreloader new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ResourcePreloader_wrapper_add_resource(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, WasGoID p_resource);
WasGoID _wasgo_ResourcePreloader_wrapper_get_resource(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
WasGoID _wasgo_ResourcePreloader_wrapper_get_resource_list(WasGoID wasgo_id);
int _wasgo_ResourcePreloader_wrapper_has_resource(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_ResourcePreloader_wrapper_remove_resource(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_ResourcePreloader_wrapper_rename_resource(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_newname, int p_newname_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_ResourcePreloader_constructor();
            
}
#endif