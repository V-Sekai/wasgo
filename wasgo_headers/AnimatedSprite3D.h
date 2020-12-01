/* THIS FILE IS GENERATED */
#ifndef ANIMATEDSPRITE3D_H
#define ANIMATEDSPRITE3D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "SpriteFrames.h"
#include "ustring.h"
#include "SpriteBase3D.h"
class AnimatedSprite3D : public SpriteBase3D{
public:
String get_animation();
SpriteFrames get_sprite_frames();
void set_animation(String p_animation);
void set_sprite_frames(SpriteFrames p_sprite_frames);

AnimatedSprite3D(WasGoId p_wasgo_id);
~AnimatedSprite3D();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_AnimatedSprite3D_wrapper_get_animation(WasGoId wasgo_id);
WasGoId _wasgo_AnimatedSprite3D_wrapper_get_sprite_frames(WasGoId wasgo_id);
void _wasgo_AnimatedSprite3D_wrapper_set_animation(WasGoId wasgo_id, WasGoId p_animation);
void _wasgo_AnimatedSprite3D_wrapper_set_sprite_frames(WasGoId wasgo_id, WasGoId p_sprite_frames);
}
#endif