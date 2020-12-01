/* THIS FILE IS GENERATED */
#ifndef SPRITEFRAMES_H
#define SPRITEFRAMES_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Texture.h"
#include "Resource.h"
#include "Variant.h"
class SpriteFrames : public Resource{
public:
void add_animation(String p_anim);
void add_frame(String p_anim, Texture p_frame, int p_at_position = (int) -1);
void clear(String p_anim);
void clear_all();
bool get_animation_loop(String p_anim);
PoolStringArray get_animation_names();
float get_animation_speed(String p_anim);
Texture get_frame(String p_anim, int p_idx);
int get_frame_count(String p_anim);
bool has_animation(String p_anim);
void remove_animation(String p_anim);
void remove_frame(String p_anim, int p_idx);
void rename_animation(String p_anim, String p_newname);
void set_animation_loop(String p_anim, bool p_loop);
void set_animation_speed(String p_anim, float p_speed);
void set_frame(String p_anim, int p_idx, Texture p_txt);

SpriteFrames(WasGoId p_wasgo_id);
~SpriteFrames();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_SpriteFrames_wrapper_add_animation(WasGoId wasgo_id, WasGoId p_anim);
void _wasgo_SpriteFrames_wrapper_add_frame(WasGoId wasgo_id, WasGoId p_anim, WasGoId p_frame, int p_at_position);
void _wasgo_SpriteFrames_wrapper_clear(WasGoId wasgo_id, WasGoId p_anim);
void _wasgo_SpriteFrames_wrapper_clear_all(WasGoId wasgo_id);
int _wasgo_SpriteFrames_wrapper_get_animation_loop(WasGoId wasgo_id, WasGoId p_anim);
WasGoId _wasgo_SpriteFrames_wrapper_get_animation_names(WasGoId wasgo_id);
float _wasgo_SpriteFrames_wrapper_get_animation_speed(WasGoId wasgo_id, WasGoId p_anim);
WasGoId _wasgo_SpriteFrames_wrapper_get_frame(WasGoId wasgo_id, WasGoId p_anim, int p_idx);
int _wasgo_SpriteFrames_wrapper_get_frame_count(WasGoId wasgo_id, WasGoId p_anim);
int _wasgo_SpriteFrames_wrapper_has_animation(WasGoId wasgo_id, WasGoId p_anim);
void _wasgo_SpriteFrames_wrapper_remove_animation(WasGoId wasgo_id, WasGoId p_anim);
void _wasgo_SpriteFrames_wrapper_remove_frame(WasGoId wasgo_id, WasGoId p_anim, int p_idx);
void _wasgo_SpriteFrames_wrapper_rename_animation(WasGoId wasgo_id, WasGoId p_anim, WasGoId p_newname);
void _wasgo_SpriteFrames_wrapper_set_animation_loop(WasGoId wasgo_id, WasGoId p_anim, bool p_loop);
void _wasgo_SpriteFrames_wrapper_set_animation_speed(WasGoId wasgo_id, WasGoId p_anim, float p_speed);
void _wasgo_SpriteFrames_wrapper_set_frame(WasGoId wasgo_id, WasGoId p_anim, int p_idx, WasGoId p_txt);
}
#endif