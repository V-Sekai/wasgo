/* THIS FILE IS GENERATED */
#ifndef ANIMATEDSPRITE3D_H
#define ANIMATEDSPRITE3D_H

#include "stdint.h"

#include "SpriteFrames.h"
#include "Variant.h"
#include "SpriteBase3D.h"
class AnimatedSprite3D : public SpriteBase3D{
public: AnimatedSprite3D();
String get_animation();
SpriteFrames get_sprite_frames();
void set_animation(String p_animation);
void set_sprite_frames(SpriteFrames p_sprite_frames);
};
#endif