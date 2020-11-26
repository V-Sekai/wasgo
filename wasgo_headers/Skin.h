/* THIS FILE IS GENERATED */
#ifndef SKIN_H
#define SKIN_H

#include <stdint.h>

#include "Transform.h"
#include "Resource.h"
class Skin : public Resource{
public: Skin();
void  add_bind(int bone, Transform pose);
void  clear_binds();
void  clear_binds();
int  get_bind_bone(int bind_index);
int  get_bind_count();
int  get_bind_count();
Transform  get_bind_pose(int bind_index);
void  set_bind_bone(int bind_index, int bone);
void  set_bind_count(int bind_count);
void  set_bind_pose(int bind_index, Transform pose);
};
#endif