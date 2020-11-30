/* THIS FILE IS GENERATED */
#ifndef RESOURCEFORMATSAVER_H
#define RESOURCEFORMATSAVER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Resource.h"
#include "Reference.h"
class ResourceFormatSaver : public Reference{
PoolStringArray get_recognized_extensions(Resource p_resource);
bool recognize(Resource p_resource);
int save(String p_path, Resource p_resource, int p_flags);

ResourceFormatSaver(WasGoId p_wasgo_id);
~ResourceFormatSaver();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_ResourceFormatSaver_wrapper_get_recognized_extensions(WasGoId wasgo_id, WasGo::WasGoId p_resource);
int _wasgo_ResourceFormatSaver_wrapper_recognize(WasGoId wasgo_id, WasGo::WasGoId p_resource);
int _wasgo_ResourceFormatSaver_wrapper_save(WasGoId wasgo_id, WasGo::WasGoId p_path, WasGo::WasGoId p_resource, int p_flags);
}
#endif