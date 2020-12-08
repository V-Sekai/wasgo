/* THIS FILE IS GENERATED */
#ifndef ANIMATEDSPRITE3D_H
#define ANIMATEDSPRITE3D_H

#include "wasgo\wasgoid.h"

#include "SpriteFrames.h"
#include "SpriteBase3D.h"
#include "Ustring.h"
class AnimatedSprite3D : public SpriteBase3D{
public:
String get_animation();
int get_frame();
SpriteFrames get_sprite_frames();
bool is_playing();
void play(String p_anim = String());
void set_animation(String p_animation);
void set_frame(int p_frame);
void set_sprite_frames(SpriteFrames p_sprite_frames);
void stop();

protected:
public:
explicit AnimatedSprite3D(WasGoID p_wasgo_id);
explicit AnimatedSprite3D(SpriteBase3D other);
AnimatedSprite3D();
AnimatedSprite3D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimatedSprite3D_wrapper_get_animation(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_AnimatedSprite3D_wrapper_get_frame(WasGoID wasgo_id);
WasGoID _wasgo_AnimatedSprite3D_wrapper_get_sprite_frames(WasGoID wasgo_id);
int _wasgo_AnimatedSprite3D_wrapper_is_playing(WasGoID wasgo_id);
void _wasgo_AnimatedSprite3D_wrapper_play(WasGoID wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size);
void _wasgo_AnimatedSprite3D_wrapper_set_animation(WasGoID wasgo_id, const uint8_t * p_animation, int p_animation_wasgo_buffer_size);
void _wasgo_AnimatedSprite3D_wrapper_set_frame(WasGoID wasgo_id, int p_frame);
void _wasgo_AnimatedSprite3D_wrapper_set_sprite_frames(WasGoID wasgo_id, WasGoID p_sprite_frames);
void _wasgo_AnimatedSprite3D_wrapper_stop(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_AnimatedSprite3D_constructor();
            
}
#endif