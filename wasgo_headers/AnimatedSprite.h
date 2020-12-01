/* THIS FILE IS GENERATED */
#ifndef ANIMATEDSPRITE_H
#define ANIMATEDSPRITE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "SpriteFrames.h"
#include "ustring.h"
#include "Node2D.h"
class AnimatedSprite : public Node2D{
public:
String get_animation();
SpriteFrames get_sprite_frames();
void set_animation(String p_animation);
void set_sprite_frames(SpriteFrames p_sprite_frames);

AnimatedSprite(WasGoId p_wasgo_id);
~AnimatedSprite();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_AnimatedSprite_wrapper_get_animation(WasGoId wasgo_id);
WasGoId _wasgo_AnimatedSprite_wrapper_get_sprite_frames(WasGoId wasgo_id);
void _wasgo_AnimatedSprite_wrapper_set_animation(WasGoId wasgo_id, WasGoId p_animation);
void _wasgo_AnimatedSprite_wrapper_set_sprite_frames(WasGoId wasgo_id, WasGoId p_sprite_frames);
}
#endif