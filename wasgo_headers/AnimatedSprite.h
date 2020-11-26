/* THIS FILE IS GENERATED */
#ifndef ANIMATEDSPRITE_H
#define ANIMATEDSPRITE_H

#include <stdint.h>

#include "Vector2.h"
#include "SpriteFrames.h"
#include "Node2D.h"
#include "String.h"
class AnimatedSprite : public Node2D{
public: AnimatedSprite();
bool  _is_playing();
bool  _is_playing();
void  _res_changed();
void  _res_changed();
void  _set_playing(bool playing);
String  get_animation();
String  get_animation();
int  get_frame();
int  get_frame();
Vector2  get_offset();
Vector2  get_offset();
float  get_speed_scale();
float  get_speed_scale();
SpriteFrames  get_sprite_frames();
SpriteFrames  get_sprite_frames();
bool  is_centered();
bool  is_centered();
bool  is_flipped_h();
bool  is_flipped_h();
bool  is_flipped_v();
bool  is_flipped_v();
bool  is_playing();
bool  is_playing();
void  play(String anim = "", bool backwards = false);
void  set_animation(String animation);
void  set_centered(bool centered);
void  set_flip_h(bool flip_h);
void  set_flip_v(bool flip_v);
void  set_frame(int frame);
void  set_offset(Vector2 offset);
void  set_speed_scale(float speed_scale);
void  set_sprite_frames(SpriteFrames sprite_frames);
void  stop();
void  stop();
};
#endif