/* THIS FILE IS GENERATED */
#ifndef ANIMATEDTEXTURE_H
#define ANIMATEDTEXTURE_H

#include "wasgo\wasgoid.h"

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

protected:
public:
explicit AnimatedTexture(WasGoID p_wasgo_id);
explicit AnimatedTexture(Texture other);
AnimatedTexture();
AnimatedTexture new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_AnimatedTexture_wrapper_get_current_frame(WasGoID wasgo_id);
float _wasgo_AnimatedTexture_wrapper_get_fps(WasGoID wasgo_id);
float _wasgo_AnimatedTexture_wrapper_get_frame_delay(WasGoID wasgo_id, int p_frame);
WasGoID _wasgo_AnimatedTexture_wrapper_get_frame_texture(WasGoID wasgo_id, int p_frame);
int _wasgo_AnimatedTexture_wrapper_get_frames(WasGoID wasgo_id);
int _wasgo_AnimatedTexture_wrapper_get_oneshot(WasGoID wasgo_id);
int _wasgo_AnimatedTexture_wrapper_get_pause(WasGoID wasgo_id);
void _wasgo_AnimatedTexture_wrapper_set_current_frame(WasGoID wasgo_id, int p_frame);
void _wasgo_AnimatedTexture_wrapper_set_fps(WasGoID wasgo_id, float p_fps);
void _wasgo_AnimatedTexture_wrapper_set_frame_delay(WasGoID wasgo_id, int p_frame, float p_delay);
void _wasgo_AnimatedTexture_wrapper_set_frame_texture(WasGoID wasgo_id, int p_frame, WasGoID p_texture);
void _wasgo_AnimatedTexture_wrapper_set_frames(WasGoID wasgo_id, int p_frames);
void _wasgo_AnimatedTexture_wrapper_set_oneshot(WasGoID wasgo_id, bool p_oneshot);
void _wasgo_AnimatedTexture_wrapper_set_pause(WasGoID wasgo_id, bool p_pause);

    //constructor wrappers
    WasGoID _wasgo_AnimatedTexture_constructor();
            
}
#endif