/* THIS FILE IS GENERATED */
#ifndef RESOURCEFORMATLOADERWASM_H
#define RESOURCEFORMATLOADERWASM_H

#include "wasgo\wasgo.h"

#include "ResourceFormatLoader.h"
class ResourceFormatLoaderWasm : public ResourceFormatLoader{
public:

protected:
public:
explicit ResourceFormatLoaderWasm(WasGoID p_wasgo_id);
explicit ResourceFormatLoaderWasm(ResourceFormatLoader other);
ResourceFormatLoaderWasm new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_ResourceFormatLoaderWasm_constructor();
            
}
#endif