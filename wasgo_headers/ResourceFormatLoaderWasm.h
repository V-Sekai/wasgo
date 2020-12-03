/* THIS FILE IS GENERATED */
#ifndef RESOURCEFORMATLOADERWASM_H
#define RESOURCEFORMATLOADERWASM_H

#include "wasgo\wasgo.h"

#include "ResourceFormatLoader.h"
class ResourceFormatLoaderWasm : public ResourceFormatLoader{
public:

protected:
ResourceFormatLoaderWasm(WasGoId p_wasgo_id);
public:
ResourceFormatLoaderWasm();
~ResourceFormatLoaderWasm();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_ResourceFormatLoaderWasm_constructor();
    void _wasgo_ResourceFormatLoaderWasm_destructor(WasGoId p_wasgo_id);
            
}
#endif