/* THIS FILE IS GENERATED */
#ifndef SKIN_H
#define SKIN_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class Skin : public Resource{
public: Skin();
void add_bind(int p_bone, Transform p_pose);
void clear_binds();
int get_bind_bone(int p_bind_index);
int get_bind_count();
String get_bind_name(int p_bind_index);
Transform get_bind_pose(int p_bind_index);
void set_bind_bone(int p_bind_index, int p_bone);
void set_bind_count(int p_bind_count);
void set_bind_name(int p_bind_index, String p_name);
void set_bind_pose(int p_bind_index, Transform p_pose);
};
#endif