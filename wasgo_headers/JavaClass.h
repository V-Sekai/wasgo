/* THIS FILE IS GENERATED */
#ifndef JAVACLASS_H
#define JAVACLASS_H

#include "wasgo\wasgoid.h"

#include "Reference.h"
class JavaClass : public Reference{
public:

protected:
public:
explicit JavaClass(WasGoID p_wasgo_id);
explicit JavaClass(Reference other);
JavaClass();
JavaClass new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_JavaClass_constructor();
            
}
#endif