/* THIS FILE IS GENERATED */
#ifndef ANIMATEDTEXTURE_H
#define ANIMATEDTEXTURE_H

#include <stdint.h>

#include "Texture.h"
class AnimatedTexture : public Texture{
public: AnimatedTexture();
void  _update_proxy();
void  _update_proxy();
float  get_fps();
float  get_fps();
float  get_frame_delay(int frame);
Texture  get_frame_texture(int frame);
int  get_frames();
int  get_frames();
void  set_fps(float fps);
void  set_frame_delay(int frame, float delay);
void  set_frame_texture(int frame, Texture texture);
void  set_frames(int frames);
};
#endif