/* THIS FILE IS GENERATED */
#ifndef MESHTEXTURE_H
#define MESHTEXTURE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Mesh.h"
#include "Texture.h"
class MeshTexture : public Texture{
Texture get_base_texture();
Vector2 get_image_size();
Mesh get_mesh();
void set_base_texture(Texture p_texture);
void set_image_size(Vector2 p_size);
void set_mesh(Mesh p_mesh);

MeshTexture(WasGoId p_wasgo_id);
~MeshTexture();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_MeshTexture_wrapper_get_base_texture(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_MeshTexture_wrapper_get_image_size(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_MeshTexture_wrapper_get_mesh(WasGoId wasgo_id);
void _wasgo_MeshTexture_wrapper_set_base_texture(WasGoId wasgo_id, WasGo::WasGoId p_texture);
void _wasgo_MeshTexture_wrapper_set_image_size(WasGoId wasgo_id, WasGo::WasGoId p_size);
void _wasgo_MeshTexture_wrapper_set_mesh(WasGoId wasgo_id, WasGo::WasGoId p_mesh);
}
#endif