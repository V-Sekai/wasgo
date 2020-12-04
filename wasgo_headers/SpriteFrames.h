/* THIS FILE IS GENERATED */
#ifndef SPRITEFRAMES_H
#define SPRITEFRAMES_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "Variant.h"
#include "Texture.h"
#include "ustring.h"
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

protected:
public:
explicit SpriteFrames(WasGoID p_wasgo_id);
explicit SpriteFrames(Resource other);
SpriteFrames new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_SpriteFrames_wrapper_add_animation(WasGoID wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size);
void _wasgo_SpriteFrames_wrapper_add_frame(WasGoID wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size, WasGoID p_frame, int p_at_position);
void _wasgo_SpriteFrames_wrapper_clear(WasGoID wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size);
void _wasgo_SpriteFrames_wrapper_clear_all(WasGoID wasgo_id);
int _wasgo_SpriteFrames_wrapper_get_animation_loop(WasGoID wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size);
WasGoID _wasgo_SpriteFrames_wrapper_get_animation_names(WasGoID wasgo_id);
float _wasgo_SpriteFrames_wrapper_get_animation_speed(WasGoID wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size);
WasGoID _wasgo_SpriteFrames_wrapper_get_frame(WasGoID wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size, int p_idx);
int _wasgo_SpriteFrames_wrapper_get_frame_count(WasGoID wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size);
int _wasgo_SpriteFrames_wrapper_has_animation(WasGoID wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size);
void _wasgo_SpriteFrames_wrapper_remove_animation(WasGoID wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size);
void _wasgo_SpriteFrames_wrapper_remove_frame(WasGoID wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size, int p_idx);
void _wasgo_SpriteFrames_wrapper_rename_animation(WasGoID wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size, const uint8_t * p_newname, int p_newname_wasgo_buffer_size);
void _wasgo_SpriteFrames_wrapper_set_animation_loop(WasGoID wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size, bool p_loop);
void _wasgo_SpriteFrames_wrapper_set_animation_speed(WasGoID wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size, float p_speed);
void _wasgo_SpriteFrames_wrapper_set_frame(WasGoID wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size, int p_idx, WasGoID p_txt);

    //constructor wrappers
    WasGoID _wasgo_SpriteFrames_constructor();
            
}
#endif