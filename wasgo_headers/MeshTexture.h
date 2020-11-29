/* THIS FILE IS GENERATED */
#ifndef MESHTEXTURE_H
#define MESHTEXTURE_H

#include "stdint.h"

#include "Variant.h"
#include "Texture.h"
#include "Mesh.h"
class MeshTexture : public Texture{
public: MeshTexture();
Texture get_base_texture();
Vector2 get_image_size();
Mesh get_mesh();
void set_base_texture(Texture p_texture);
void set_image_size(Vector2 p_size);
void set_mesh(Mesh p_mesh);
};
#endif