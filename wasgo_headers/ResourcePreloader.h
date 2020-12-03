/* THIS FILE IS GENERATED */
#ifndef RESOURCEPRELOADER_H
#define RESOURCEPRELOADER_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Node.h"
#include "Variant.h"
#include "Resource.h"
class ResourcePreloader : public Node{
public:
void add_resource(String p_name, Resource p_resource);
Resource get_resource(String p_name);
PoolStringArray get_resource_list();
bool has_resource(String p_name);
void remove_resource(String p_name);
void rename_resource(String p_name, String p_newname);

protected:
ResourcePreloader(WasGoId p_wasgo_id);
public:
ResourcePreloader();
~ResourcePreloader();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ResourcePreloader_wrapper_add_resource(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, WasGoId p_resource);
WasGoId _wasgo_ResourcePreloader_wrapper_get_resource(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
WasGoId _wasgo_ResourcePreloader_wrapper_get_resource_list(WasGoId wasgo_id);
int _wasgo_ResourcePreloader_wrapper_has_resource(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_ResourcePreloader_wrapper_remove_resource(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_ResourcePreloader_wrapper_rename_resource(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, const uint8_t * p_newname, int p_newname_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_ResourcePreloader_constructor();
    void _wasgo_ResourcePreloader_destructor(WasGoId p_wasgo_id);
            
}
#endif