/* THIS FILE IS GENERATED */
#ifndef ANIMATEDTEXTURE_H
#define ANIMATEDTEXTURE_H

#include "stdint.h"

#include "Texture.h"
class AnimatedTexture : public Texture{
public: AnimatedTexture();
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
};
#endif