/* THIS FILE IS GENERATED */
#ifndef ANIMATEDSPRITE3D_H
#define ANIMATEDSPRITE3D_H

#include "wasgo\wasgo.h"

#include "SpriteBase3D.h"
#include "ustring.h"
#include "SpriteFrames.h"
class AnimatedSprite3D : public SpriteBase3D{
public:
String get_animation();
int get_frame();
SpriteFrames get_sprite_frames();
bool is_playing();
void play(String p_anim = (String) );
void set_animation(String p_animation);
void set_frame(int p_frame);
void set_sprite_frames(SpriteFrames p_sprite_frames);
void stop();

protected:
AnimatedSprite3D(WasGoId p_wasgo_id);
public:
AnimatedSprite3D();
~AnimatedSprite3D();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimatedSprite3D_wrapper_get_animation(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_AnimatedSprite3D_wrapper_get_frame(WasGoId wasgo_id);
WasGoId _wasgo_AnimatedSprite3D_wrapper_get_sprite_frames(WasGoId wasgo_id);
int _wasgo_AnimatedSprite3D_wrapper_is_playing(WasGoId wasgo_id);
void _wasgo_AnimatedSprite3D_wrapper_play(WasGoId wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size);
void _wasgo_AnimatedSprite3D_wrapper_set_animation(WasGoId wasgo_id, const uint8_t * p_animation, int p_animation_wasgo_buffer_size);
void _wasgo_AnimatedSprite3D_wrapper_set_frame(WasGoId wasgo_id, int p_frame);
void _wasgo_AnimatedSprite3D_wrapper_set_sprite_frames(WasGoId wasgo_id, WasGoId p_sprite_frames);
void _wasgo_AnimatedSprite3D_wrapper_stop(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_AnimatedSprite3D_constructor();
    void _wasgo_AnimatedSprite3D_destructor(WasGoId p_wasgo_id);
            
}
#endif