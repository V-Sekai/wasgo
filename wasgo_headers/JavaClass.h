/* THIS FILE IS GENERATED */
#ifndef JAVACLASS_H
#define JAVACLASS_H

#include "wasgo\wasgo.h"

#include "Reference.h"
class JavaClass : public Reference{
public:

protected:
public:
explicit JavaClass(WasGoId p_wasgo_id);
explicit JavaClass(Reference other);
JavaClass new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_JavaClass_constructor();
            
}
#endif