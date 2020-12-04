/* THIS FILE IS GENERATED */
#ifndef MULTIMESHINSTANCE2D_H
#define MULTIMESHINSTANCE2D_H

#include "wasgo\wasgo.h"

#include "Node2D.h"
#include "MultiMesh.h"
#include "Texture.h"
class MultiMeshInstance2D : public Node2D{
public:
MultiMesh get_multimesh();
Texture get_normal_map();
Texture get_texture();
void set_multimesh(MultiMesh p_multimesh);
void set_normal_map(Texture p_normal_map);
void set_texture(Texture p_texture);

protected:
public:
explicit MultiMeshInstance2D(WasGoID p_wasgo_id);
explicit MultiMeshInstance2D(Node2D other);
MultiMeshInstance2D new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_MultiMeshInstance2D_wrapper_get_multimesh(WasGoID wasgo_id);
WasGoID _wasgo_MultiMeshInstance2D_wrapper_get_normal_map(WasGoID wasgo_id);
WasGoID _wasgo_MultiMeshInstance2D_wrapper_get_texture(WasGoID wasgo_id);
void _wasgo_MultiMeshInstance2D_wrapper_set_multimesh(WasGoID wasgo_id, WasGoID p_multimesh);
void _wasgo_MultiMeshInstance2D_wrapper_set_normal_map(WasGoID wasgo_id, WasGoID p_normal_map);
void _wasgo_MultiMeshInstance2D_wrapper_set_texture(WasGoID wasgo_id, WasGoID p_texture);

    //constructor wrappers
    WasGoID _wasgo_MultiMeshInstance2D_constructor();
            
}
#endif