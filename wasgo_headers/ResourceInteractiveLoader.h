/* THIS FILE IS GENERATED */
#ifndef RESOURCEINTERACTIVELOADER_H
#define RESOURCEINTERACTIVELOADER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Resource.h"
#include "Reference.h"
#include "Error.h"
class ResourceInteractiveLoader : public Reference{
Resource get_resource();
int get_stage();
int get_stage_count();
Error poll();
Error wait();
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_ResourceInteractiveLoader_wrapper_get_resource(WasGoId wasgo_id);
int _wasgo_ResourceInteractiveLoader_wrapper_get_stage(WasGoId wasgo_id);
int _wasgo_ResourceInteractiveLoader_wrapper_get_stage_count(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ResourceInteractiveLoader_wrapper_poll(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ResourceInteractiveLoader_wrapper_wait(WasGoId wasgo_id);
}
#endif