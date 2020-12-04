/* THIS FILE IS GENERATED */
#ifndef RESOURCEINTERACTIVELOADER_H
#define RESOURCEINTERACTIVELOADER_H

#include "wasgo\wasgo.h"

#include "Reference.h"
#include "error_list.h"
#include "Resource.h"
class ResourceInteractiveLoader : public Reference{
public:
Resource get_resource();
int get_stage();
int get_stage_count();
Error poll();
Error wait();
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ResourceInteractiveLoader_wrapper_get_resource(WasGoId wasgo_id);
int _wasgo_ResourceInteractiveLoader_wrapper_get_stage(WasGoId wasgo_id);
int _wasgo_ResourceInteractiveLoader_wrapper_get_stage_count(WasGoId wasgo_id);
WasGoId _wasgo_ResourceInteractiveLoader_wrapper_poll(WasGoId wasgo_id);
WasGoId _wasgo_ResourceInteractiveLoader_wrapper_wait(WasGoId wasgo_id);

    //constructor wrappers
    WasGoId _wasgo_ResourceInteractiveLoader_constructor();
            
}
#endif