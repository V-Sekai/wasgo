/* THIS FILE IS GENERATED */
#ifndef MULTIMESHINSTANCE_H
#define MULTIMESHINSTANCE_H

#include "wasgo\wasgoid.h"

#include "MultiMesh.h"
#include "GeometryInstance.h"
class MultiMeshInstance : public GeometryInstance{
public:
MultiMesh get_multimesh();
void set_multimesh(MultiMesh p_multimesh);

protected:
public:
explicit MultiMeshInstance(WasGoID p_wasgo_id);
explicit MultiMeshInstance(GeometryInstance other);
MultiMeshInstance();
MultiMeshInstance new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_MultiMeshInstance_wrapper_get_multimesh(WasGoID wasgo_id);
void _wasgo_MultiMeshInstance_wrapper_set_multimesh(WasGoID wasgo_id, WasGoID p_multimesh);

    //constructor wrappers
    WasGoID _wasgo_MultiMeshInstance_constructor();
            
}
#endif