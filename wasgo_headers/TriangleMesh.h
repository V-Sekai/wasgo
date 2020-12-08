/* THIS FILE IS GENERATED */
#ifndef TRIANGLEMESH_H
#define TRIANGLEMESH_H

#include "wasgo\wasgoid.h"

#include "Reference.h"
class TriangleMesh : public Reference{
public:

protected:
public:
explicit TriangleMesh(WasGoID p_wasgo_id);
explicit TriangleMesh(Reference other);
TriangleMesh();
TriangleMesh new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_TriangleMesh_constructor();
            
}
#endif