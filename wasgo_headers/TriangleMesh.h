/* THIS FILE IS GENERATED */
#ifndef TRIANGLEMESH_H
#define TRIANGLEMESH_H

#include "wasgo\wasgo.h"

#include "Reference.h"
class TriangleMesh : public Reference{
public:

protected:
TriangleMesh(WasGoId p_wasgo_id);
public:
TriangleMesh();
~TriangleMesh();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_TriangleMesh_constructor();
    void _wasgo_TriangleMesh_destructor(WasGoId p_wasgo_id);
            
}
#endif