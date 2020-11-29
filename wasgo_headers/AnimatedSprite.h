/* THIS FILE IS GENERATED */
#ifndef ANIMATEDSPRITE_H
#define ANIMATEDSPRITE_H

#include "stdint.h"

#include "SpriteFrames.h"
#include "Variant.h"
#include "Node2D.h"
class AnimatedSprite : public Node2D{
public: AnimatedSprite();
String get_animation();
SpriteFrames get_sprite_frames();
void set_animation(String p_animation);
void set_sprite_frames(SpriteFrames p_sprite_frames);
};
#endif