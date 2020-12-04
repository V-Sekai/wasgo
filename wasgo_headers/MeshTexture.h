/* THIS FILE IS GENERATED */
#ifndef MESHTEXTURE_H
#define MESHTEXTURE_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Texture.h"
#include "Mesh.h"
class MeshTexture : public Texture{
public:
Texture get_base_texture();
Vector2 get_image_size();
Mesh get_mesh();
void set_base_texture(Texture p_texture);
void set_image_size(Vector2 p_size);
void set_mesh(Mesh p_mesh);

protected:
public:
explicit MeshTexture(WasGoID p_wasgo_id);
explicit MeshTexture(Texture other);
MeshTexture new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_MeshTexture_wrapper_get_base_texture(WasGoID wasgo_id);
void _wasgo_MeshTexture_wrapper_get_image_size(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_MeshTexture_wrapper_get_mesh(WasGoID wasgo_id);
void _wasgo_MeshTexture_wrapper_set_base_texture(WasGoID wasgo_id, WasGoID p_texture);
void _wasgo_MeshTexture_wrapper_set_image_size(WasGoID wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);
void _wasgo_MeshTexture_wrapper_set_mesh(WasGoID wasgo_id, WasGoID p_mesh);

    //constructor wrappers
    WasGoID _wasgo_MeshTexture_constructor();
            
}
#endif