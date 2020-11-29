/* THIS FILE IS GENERATED */
#ifndef SPRITEFRAMES_H
#define SPRITEFRAMES_H

#include "stdint.h"

#include "Resource.h"
#include "Variant.h"
#include "Texture.h"
class SpriteFrames : public Resource{
public: SpriteFrames();
void add_animation(String p_anim);
void add_frame(String p_anim, Texture p_frame, int p_at_position = (int) -1);
void clear(String p_anim);
void clear_all();
bool get_animation_loop(String p_anim);
PoolStringArray get_animation_names();
float get_animation_speed(String p_anim);
Texture get_frame(String p_anim, int p_idx);
int get_frame_count(String p_anim);
bool has_animation(String p_anim);
void remove_animation(String p_anim);
void remove_frame(String p_anim, int p_idx);
void rename_animation(String p_anim, String p_newname);
void set_animation_loop(String p_anim, bool p_loop);
void set_animation_speed(String p_anim, float p_speed);
void set_frame(String p_anim, int p_idx, Texture p_txt);
};
#endif