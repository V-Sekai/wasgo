/* THIS FILE IS GENERATED */
#ifndef RESOURCEINTERACTIVELOADER_H
#define RESOURCEINTERACTIVELOADER_H

#include "wasgo\wasgoid.h"

#include "Resource.h"
#include "Reference.h"
#include "error_list.h"
class ResourceInteractiveLoader : public Reference{
public:
Resource get_resource();
int get_stage();
int get_stage_count();
Error poll();
Error wait();

protected:
public:
explicit ResourceInteractiveLoader(WasGoID p_wasgo_id);
explicit ResourceInteractiveLoader(Reference other);
ResourceInteractiveLoader();
ResourceInteractiveLoader new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_ResourceInteractiveLoader_wrapper_get_resource(WasGoID wasgo_id);
int _wasgo_ResourceInteractiveLoader_wrapper_get_stage(WasGoID wasgo_id);
int _wasgo_ResourceInteractiveLoader_wrapper_get_stage_count(WasGoID wasgo_id);
WasGoID _wasgo_ResourceInteractiveLoader_wrapper_poll(WasGoID wasgo_id);
WasGoID _wasgo_ResourceInteractiveLoader_wrapper_wait(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_ResourceInteractiveLoader_constructor();
            
}
#endif