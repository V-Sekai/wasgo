/* THIS FILE IS GENERATED */
#ifndef ANIMATEDSPRITE3D_H
#define ANIMATEDSPRITE3D_H

#include <stdint.h>

#include "SpriteFrames.h"
#include "SpriteBase3D.h"
#include "String.h"
class AnimatedSprite3D : public SpriteBase3D{
public: AnimatedSprite3D();
bool  _is_playing();
bool  _is_playing();
void  _res_changed();
void  _res_changed();
void  _set_playing(bool playing);
String  get_animation();
String  get_animation();
int  get_frame();
int  get_frame();
SpriteFrames  get_sprite_frames();
SpriteFrames  get_sprite_frames();
bool  is_playing();
bool  is_playing();
void  play(String anim = "");
void  set_animation(String animation);
void  set_frame(int frame);
void  set_sprite_frames(SpriteFrames sprite_frames);
void  stop();
void  stop();
};
#endif