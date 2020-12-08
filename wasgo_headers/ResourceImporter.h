/* THIS FILE IS GENERATED */
#ifndef RESOURCEIMPORTER_H
#define RESOURCEIMPORTER_H

#include "wasgo\wasgoid.h"

#include "Reference.h"
class ResourceImporter : public Reference{
public:

protected:
public:
explicit ResourceImporter(WasGoID p_wasgo_id);
explicit ResourceImporter(Reference other);
ResourceImporter();
ResourceImporter new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_ResourceImporter_constructor();
            
}
#endif