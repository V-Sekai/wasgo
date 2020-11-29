/* THIS FILE IS GENERATED */
#ifndef BONE2D_H
#define BONE2D_H

#include "stdint.h"

#include "Node2D.h"
#include "Variant.h"
class Bone2D : public Node2D{
public: Bone2D();
void apply_rest();
float get_default_length();
int get_index_in_skeleton();
Transform2D get_rest();
Transform2D get_skeleton_rest();
void set_default_length(float p_default_length);
void set_rest(Transform2D p_rest);
};
#endif