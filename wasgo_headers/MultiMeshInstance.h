/* THIS FILE IS GENERATED */
#ifndef MULTIMESHINSTANCE_H
#define MULTIMESHINSTANCE_H

#include "wasgo\wasgo.h"

#include "MultiMesh.h"
#include "GeometryInstance.h"
class MultiMeshInstance : public GeometryInstance{
public:
MultiMesh get_multimesh();
void set_multimesh(MultiMesh p_multimesh);

protected:
MultiMeshInstance(WasGoId p_wasgo_id);
public:
MultiMeshInstance();
~MultiMeshInstance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_MultiMeshInstance_wrapper_get_multimesh(WasGoId wasgo_id);
void _wasgo_MultiMeshInstance_wrapper_set_multimesh(WasGoId wasgo_id, WasGoId p_multimesh);

    //constructor and destructor wrappers
    WasGoId _wasgo_MultiMeshInstance_constructor();
    void _wasgo_MultiMeshInstance_destructor(WasGoId p_wasgo_id);
            
}
#endif