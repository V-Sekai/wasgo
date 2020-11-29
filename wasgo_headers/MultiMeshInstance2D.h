/* THIS FILE IS GENERATED */
#ifndef MULTIMESHINSTANCE2D_H
#define MULTIMESHINSTANCE2D_H

#include "stdint.h"

#include "MultiMesh.h"
#include "Texture.h"
#include "Node2D.h"
class MultiMeshInstance2D : public Node2D{
public: MultiMeshInstance2D();
MultiMesh get_multimesh();
Texture get_normal_map();
Texture get_texture();
void set_multimesh(MultiMesh p_multimesh);
void set_normal_map(Texture p_normal_map);
void set_texture(Texture p_texture);
};
#endif