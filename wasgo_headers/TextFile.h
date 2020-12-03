/* THIS FILE IS GENERATED */
#ifndef TEXTFILE_H
#define TEXTFILE_H

#include "wasgo\wasgo.h"

#include "Resource.h"
class TextFile : public Resource{
public:

protected:
TextFile(WasGoId p_wasgo_id);
public:
TextFile();
~TextFile();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_TextFile_constructor();
    void _wasgo_TextFile_destructor(WasGoId p_wasgo_id);
            
}
#endif