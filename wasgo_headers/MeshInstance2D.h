/* THIS FILE IS GENERATED */
#ifndef MESHINSTANCE2D_H
#define MESHINSTANCE2D_H

#include "wasgo\wasgo.h"

#include "Texture.h"
#include "Node2D.h"
#include "Mesh.h"
class MeshInstance2D : public Node2D{
public:
Mesh get_mesh();
Texture get_normal_map();
Texture get_texture();
void set_mesh(Mesh p_mesh);
void set_normal_map(Texture p_normal_map);
void set_texture(Texture p_texture);

protected:
public:
explicit MeshInstance2D(WasGoId p_wasgo_id);
explicit MeshInstance2D(Node2D other);
MeshInstance2D new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_MeshInstance2D_wrapper_get_mesh(WasGoId wasgo_id);
WasGoId _wasgo_MeshInstance2D_wrapper_get_normal_map(WasGoId wasgo_id);
WasGoId _wasgo_MeshInstance2D_wrapper_get_texture(WasGoId wasgo_id);
void _wasgo_MeshInstance2D_wrapper_set_mesh(WasGoId wasgo_id, WasGoId p_mesh);
void _wasgo_MeshInstance2D_wrapper_set_normal_map(WasGoId wasgo_id, WasGoId p_normal_map);
void _wasgo_MeshInstance2D_wrapper_set_texture(WasGoId wasgo_id, WasGoId p_texture);

    //constructor wrappers
    WasGoId _wasgo_MeshInstance2D_constructor();
            
}
#endif