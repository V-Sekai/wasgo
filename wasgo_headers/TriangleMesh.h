/* THIS FILE IS GENERATED */
#ifndef TRIANGLEMESH_H
#define TRIANGLEMESH_H

#include "wasgo\wasgo.h"

#include "Reference.h"
class TriangleMesh : public Reference{
public:

protected:
public:
explicit TriangleMesh(WasGoID p_wasgo_id);
explicit TriangleMesh(Reference other);
TriangleMesh new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_TriangleMesh_constructor();
            
}
#endif