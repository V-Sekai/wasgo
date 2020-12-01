/* THIS FILE IS GENERATED */
#ifndef ANIMATEDTEXTURE_H
#define ANIMATEDTEXTURE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Texture.h"
class AnimatedTexture : public Texture{
public:
int get_current_frame();
float get_fps();
float get_frame_delay(int p_frame);
Texture get_frame_texture(int p_frame);
int get_frames();
bool get_oneshot();
bool get_pause();
void set_current_frame(int p_frame);
void set_fps(float p_fps);
void set_frame_delay(int p_frame, float p_delay);
void set_frame_texture(int p_frame, Texture p_texture);
void set_frames(int p_frames);
void set_oneshot(bool p_oneshot);
void set_pause(bool p_pause);

AnimatedTexture(WasGoId p_wasgo_id);
~AnimatedTexture();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_AnimatedTexture_wrapper_get_current_frame(WasGoId wasgo_id);
float _wasgo_AnimatedTexture_wrapper_get_fps(WasGoId wasgo_id);
float _wasgo_AnimatedTexture_wrapper_get_frame_delay(WasGoId wasgo_id, int p_frame);
WasGoId _wasgo_AnimatedTexture_wrapper_get_frame_texture(WasGoId wasgo_id, int p_frame);
int _wasgo_AnimatedTexture_wrapper_get_frames(WasGoId wasgo_id);
int _wasgo_AnimatedTexture_wrapper_get_oneshot(WasGoId wasgo_id);
int _wasgo_AnimatedTexture_wrapper_get_pause(WasGoId wasgo_id);
void _wasgo_AnimatedTexture_wrapper_set_current_frame(WasGoId wasgo_id, int p_frame);
void _wasgo_AnimatedTexture_wrapper_set_fps(WasGoId wasgo_id, float p_fps);
void _wasgo_AnimatedTexture_wrapper_set_frame_delay(WasGoId wasgo_id, int p_frame, float p_delay);
void _wasgo_AnimatedTexture_wrapper_set_frame_texture(WasGoId wasgo_id, int p_frame, WasGoId p_texture);
void _wasgo_AnimatedTexture_wrapper_set_frames(WasGoId wasgo_id, int p_frames);
void _wasgo_AnimatedTexture_wrapper_set_oneshot(WasGoId wasgo_id, bool p_oneshot);
void _wasgo_AnimatedTexture_wrapper_set_pause(WasGoId wasgo_id, bool p_pause);
}
#endif