/* THIS FILE IS GENERATED */
#ifndef MULTIMESHINSTANCE2D_H
#define MULTIMESHINSTANCE2D_H

#include <stdint.h>

#include "Texture.h"
#include "Node2D.h"
#include "MultiMesh.h"
class MultiMeshInstance2D : public Node2D{
public: MultiMeshInstance2D();
MultiMesh  get_multimesh();
MultiMesh  get_multimesh();
Texture  get_normal_map();
Texture  get_normal_map();
Texture  get_texture();
Texture  get_texture();
void  set_multimesh(MultiMesh multimesh);
void  set_normal_map(Texture normal_map);
void  set_texture(Texture texture);
};
#endif