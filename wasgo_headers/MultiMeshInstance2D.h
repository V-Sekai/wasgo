/* THIS FILE IS GENERATED */
#ifndef MULTIMESHINSTANCE2D_H
#define MULTIMESHINSTANCE2D_H

#include "wasgo\wasgo.h"

#include "Texture.h"
#include "MultiMesh.h"
#include "Node2D.h"
class MultiMeshInstance2D : public Node2D{
public:
MultiMesh get_multimesh();
Texture get_normal_map();
Texture get_texture();
void set_multimesh(MultiMesh p_multimesh);
void set_normal_map(Texture p_normal_map);
void set_texture(Texture p_texture);

protected:
MultiMeshInstance2D(WasGoId p_wasgo_id);
public:
MultiMeshInstance2D();
~MultiMeshInstance2D();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_MultiMeshInstance2D_wrapper_get_multimesh(WasGoId wasgo_id);
WasGoId _wasgo_MultiMeshInstance2D_wrapper_get_normal_map(WasGoId wasgo_id);
WasGoId _wasgo_MultiMeshInstance2D_wrapper_get_texture(WasGoId wasgo_id);
void _wasgo_MultiMeshInstance2D_wrapper_set_multimesh(WasGoId wasgo_id, WasGoId p_multimesh);
void _wasgo_MultiMeshInstance2D_wrapper_set_normal_map(WasGoId wasgo_id, WasGoId p_normal_map);
void _wasgo_MultiMeshInstance2D_wrapper_set_texture(WasGoId wasgo_id, WasGoId p_texture);

    //constructor and destructor wrappers
    WasGoId _wasgo_MultiMeshInstance2D_constructor();
    void _wasgo_MultiMeshInstance2D_destructor(WasGoId p_wasgo_id);
            
}
#endif