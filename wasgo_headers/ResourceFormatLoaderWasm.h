/* THIS FILE IS GENERATED */
#ifndef RESOURCEFORMATLOADERWASM_H
#define RESOURCEFORMATLOADERWASM_H

#include "wasgo\wasgoid.h"

#include "ResourceFormatLoader.h"
class ResourceFormatLoaderWasm : public ResourceFormatLoader{
public:

protected:
public:
explicit ResourceFormatLoaderWasm(WasGoID p_wasgo_id);
explicit ResourceFormatLoaderWasm(ResourceFormatLoader other);
ResourceFormatLoaderWasm();
ResourceFormatLoaderWasm new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_ResourceFormatLoaderWasm_constructor();
            
}
#endif