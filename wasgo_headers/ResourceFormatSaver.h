/* THIS FILE IS GENERATED */
#ifndef RESOURCEFORMATSAVER_H
#define RESOURCEFORMATSAVER_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Reference.h"
#include "Variant.h"
#include "Resource.h"
class ResourceFormatSaver : public Reference{
public:
PoolStringArray get_recognized_extensions(Resource p_resource);
bool recognize(Resource p_resource);
int save(String p_path, Resource p_resource, int p_flags);

protected:
public:
explicit ResourceFormatSaver(WasGoId p_wasgo_id);
explicit ResourceFormatSaver(Reference other);
ResourceFormatSaver new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ResourceFormatSaver_wrapper_get_recognized_extensions(WasGoId wasgo_id, WasGoId p_resource);
int _wasgo_ResourceFormatSaver_wrapper_recognize(WasGoId wasgo_id, WasGoId p_resource);
int _wasgo_ResourceFormatSaver_wrapper_save(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, WasGoId p_resource, int p_flags);

    //constructor wrappers
    WasGoId _wasgo_ResourceFormatSaver_constructor();
            
}
#endif