/* THIS FILE IS GENERATED */
#ifndef ANIMATEDSPRITE_H
#define ANIMATEDSPRITE_H

#include "wasgo\wasgoid.h"

#include "SpriteFrames.h"
#include "Ustring.h"
#include "Node2D.h"
#include "Vector2.h"
class AnimatedSprite : public Node2D{
public:
String get_animation();
int get_frame();
Vector2 get_offset();
float get_speed_scale();
SpriteFrames get_sprite_frames();
bool is_centered();
bool is_flipped_h();
bool is_flipped_v();
bool is_playing();
void play(String p_anim = String(), bool p_backwards = (bool) false);
void set_animation(String p_animation);
void set_centered(bool p_centered);
void set_flip_h(bool p_flip_h);
void set_flip_v(bool p_flip_v);
void set_frame(int p_frame);
void set_offset(Vector2 p_offset);
void set_speed_scale(float p_speed_scale);
void set_sprite_frames(SpriteFrames p_sprite_frames);
void stop();

protected:
public:
explicit AnimatedSprite(WasGoID p_wasgo_id);
explicit AnimatedSprite(Node2D other);
AnimatedSprite();
AnimatedSprite new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimatedSprite_wrapper_get_animation(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_AnimatedSprite_wrapper_get_frame(WasGoID wasgo_id);
void _wasgo_AnimatedSprite_wrapper_get_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_AnimatedSprite_wrapper_get_speed_scale(WasGoID wasgo_id);
WasGoID _wasgo_AnimatedSprite_wrapper_get_sprite_frames(WasGoID wasgo_id);
int _wasgo_AnimatedSprite_wrapper_is_centered(WasGoID wasgo_id);
int _wasgo_AnimatedSprite_wrapper_is_flipped_h(WasGoID wasgo_id);
int _wasgo_AnimatedSprite_wrapper_is_flipped_v(WasGoID wasgo_id);
int _wasgo_AnimatedSprite_wrapper_is_playing(WasGoID wasgo_id);
void _wasgo_AnimatedSprite_wrapper_play(WasGoID wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size, bool p_backwards);
void _wasgo_AnimatedSprite_wrapper_set_animation(WasGoID wasgo_id, const uint8_t * p_animation, int p_animation_wasgo_buffer_size);
void _wasgo_AnimatedSprite_wrapper_set_centered(WasGoID wasgo_id, bool p_centered);
void _wasgo_AnimatedSprite_wrapper_set_flip_h(WasGoID wasgo_id, bool p_flip_h);
void _wasgo_AnimatedSprite_wrapper_set_flip_v(WasGoID wasgo_id, bool p_flip_v);
void _wasgo_AnimatedSprite_wrapper_set_frame(WasGoID wasgo_id, int p_frame);
void _wasgo_AnimatedSprite_wrapper_set_offset(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_AnimatedSprite_wrapper_set_speed_scale(WasGoID wasgo_id, float p_speed_scale);
void _wasgo_AnimatedSprite_wrapper_set_sprite_frames(WasGoID wasgo_id, WasGoID p_sprite_frames);
void _wasgo_AnimatedSprite_wrapper_stop(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_AnimatedSprite_constructor();
            
}
#endif