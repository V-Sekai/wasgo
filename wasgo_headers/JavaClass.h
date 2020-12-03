/* THIS FILE IS GENERATED */
#ifndef JAVACLASS_H
#define JAVACLASS_H

#include "wasgo\wasgo.h"

#include "Reference.h"
class JavaClass : public Reference{
public:

protected:
JavaClass(WasGoId p_wasgo_id);
public:
JavaClass();
~JavaClass();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_JavaClass_constructor();
    void _wasgo_JavaClass_destructor(WasGoId p_wasgo_id);
            
}
#endif