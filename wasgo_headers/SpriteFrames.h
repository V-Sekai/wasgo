/* THIS FILE IS GENERATED */
#ifndef SPRITEFRAMES_H
#define SPRITEFRAMES_H

#include <stdint.h>

#include "String.h"
#include "Resource.h"
#include "PoolStringArray.h"
#include "Texture.h"
#include "Variant.h"
class SpriteFrames : public Resource{
public: SpriteFrames();
Array  _get_animations();
Array  _get_animations();
Array  _get_frames();
Array  _get_frames();
void  _set_animations(Array arg0);
void  _set_frames(Array arg0);
void  add_animation(String anim);
void  add_frame(String anim, Texture frame, int at_position = -1);
void  clear(String anim);
void  clear_all();
void  clear_all();
bool  get_animation_loop(String anim);
PoolStringArray  get_animation_names();
PoolStringArray  get_animation_names();
float  get_animation_speed(String anim);
Texture  get_frame(String anim, int idx);
int  get_frame_count(String anim);
bool  has_animation(String anim);
void  remove_animation(String anim);
void  remove_frame(String anim, int idx);
void  rename_animation(String anim, String newname);
void  set_animation_loop(String anim, bool loop);
void  set_animation_speed(String anim, float speed);
void  set_frame(String anim, int idx, Texture txt);
};
#endif