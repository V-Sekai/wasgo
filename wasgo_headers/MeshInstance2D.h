/* THIS FILE IS GENERATED */
#ifndef MESHINSTANCE2D_H
#define MESHINSTANCE2D_H

#include "wasgo\wasgoid.h"

#include "Mesh.h"
#include "Texture.h"
#include "Node2D.h"
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
explicit MeshInstance2D(WasGoID p_wasgo_id);
explicit MeshInstance2D(Node2D other);
MeshInstance2D();
MeshInstance2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_MeshInstance2D_wrapper_get_mesh(WasGoID wasgo_id);
WasGoID _wasgo_MeshInstance2D_wrapper_get_normal_map(WasGoID wasgo_id);
WasGoID _wasgo_MeshInstance2D_wrapper_get_texture(WasGoID wasgo_id);
void _wasgo_MeshInstance2D_wrapper_set_mesh(WasGoID wasgo_id, WasGoID p_mesh);
void _wasgo_MeshInstance2D_wrapper_set_normal_map(WasGoID wasgo_id, WasGoID p_normal_map);
void _wasgo_MeshInstance2D_wrapper_set_texture(WasGoID wasgo_id, WasGoID p_texture);

    //constructor wrappers
    WasGoID _wasgo_MeshInstance2D_constructor();
            
}
#endif