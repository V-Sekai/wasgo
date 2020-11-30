/* THIS FILE IS GENERATED */
#ifndef MESHINSTANCE2D_H
#define MESHINSTANCE2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Mesh.h"
#include "Node2D.h"
#include "Texture.h"
class MeshInstance2D : public Node2D{
Mesh get_mesh();
Texture get_normal_map();
Texture get_texture();
void set_mesh(Mesh p_mesh);
void set_normal_map(Texture p_normal_map);
void set_texture(Texture p_texture);

MeshInstance2D(WasGoId p_wasgo_id);
~MeshInstance2D();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_MeshInstance2D_wrapper_get_mesh(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_MeshInstance2D_wrapper_get_normal_map(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_MeshInstance2D_wrapper_get_texture(WasGoId wasgo_id);
void _wasgo_MeshInstance2D_wrapper_set_mesh(WasGoId wasgo_id, WasGo::WasGoId p_mesh);
void _wasgo_MeshInstance2D_wrapper_set_normal_map(WasGoId wasgo_id, WasGo::WasGoId p_normal_map);
void _wasgo_MeshInstance2D_wrapper_set_texture(WasGoId wasgo_id, WasGo::WasGoId p_texture);
}
#endif