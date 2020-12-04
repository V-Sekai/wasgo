/* THIS FILE IS GENERATED */
#ifndef MULTIMESHINSTANCE_H
#define MULTIMESHINSTANCE_H

#include "wasgo\wasgo.h"

#include "GeometryInstance.h"
#include "MultiMesh.h"
class MultiMeshInstance : public GeometryInstance{
public:
MultiMesh get_multimesh();
void set_multimesh(MultiMesh p_multimesh);

protected:
public:
explicit MultiMeshInstance(WasGoID p_wasgo_id);
explicit MultiMeshInstance(GeometryInstance other);
MultiMeshInstance new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_MultiMeshInstance_wrapper_get_multimesh(WasGoID wasgo_id);
void _wasgo_MultiMeshInstance_wrapper_set_multimesh(WasGoID wasgo_id, WasGoID p_multimesh);

    //constructor wrappers
    WasGoID _wasgo_MultiMeshInstance_constructor();
            
}
#endif