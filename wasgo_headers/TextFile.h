/* THIS FILE IS GENERATED */
#ifndef TEXTFILE_H
#define TEXTFILE_H

#include "wasgo\wasgo.h"

#include "Resource.h"
class TextFile : public Resource{
public:

protected:
public:
explicit TextFile(WasGoId p_wasgo_id);
explicit TextFile(Resource other);
TextFile new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_TextFile_constructor();
            
}
#endif