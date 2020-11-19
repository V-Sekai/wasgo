/* THIS FILE IS GENERATED */
#ifndef MESHTEXTURE_H
#define MESHTEXTURE_H

#include <stdint.h>

#include "Vector2.h"
#include "Texture.h"
#include "Mesh.h"
class MeshTexture : public Texture{
public: MeshTexture();
Texture  get_base_texture();
Texture  get_base_texture();
Vector2  get_image_size();
Vector2  get_image_size();
Mesh  get_mesh();
Mesh  get_mesh();
void  set_base_texture(Texture texture);
void  set_image_size(Vector2 size);
void  set_mesh(Mesh mesh);
};
#endif