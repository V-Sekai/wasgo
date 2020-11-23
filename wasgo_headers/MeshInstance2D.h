/* THIS FILE IS GENERATED */
#ifndef MESHINSTANCE2D_H
#define MESHINSTANCE2D_H

#include <stdint.h>

#include "Node2D.h"
#include "Texture.h"
#include "Mesh.h"
class MeshInstance2D : public Node2D{
public: MeshInstance2D();
Mesh  get_mesh();
Mesh  get_mesh();
Texture  get_normal_map();
Texture  get_normal_map();
Texture  get_texture();
Texture  get_texture();
void  set_mesh(Mesh mesh);
void  set_normal_map(Texture normal_map);
void  set_texture(Texture texture);
};
#endif