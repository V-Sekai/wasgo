/* THIS FILE IS GENERATED */
#ifndef NOISETEXTURE_H
#define NOISETEXTURE_H

#include <stdint.h>

#include "Image.h"
#include "Texture.h"
#include "OpenSimplexNoise.h"
class NoiseTexture : public Texture{
public: NoiseTexture();
Image  _generate_texture();
Image  _generate_texture();
void  _queue_update();
void  _queue_update();
void  _thread_done(Image image);
void  _update_texture();
void  _update_texture();
float  get_bump_strength();
float  get_bump_strength();
OpenSimplexNoise  get_noise();
OpenSimplexNoise  get_noise();
bool  get_seamless();
bool  get_seamless();
bool  is_normalmap();
bool  is_normalmap();
void  set_as_normalmap(bool as_normalmap);
void  set_bump_strength(float bump_strength);
void  set_height(int height);
void  set_noise(OpenSimplexNoise noise);
void  set_seamless(bool seamless);
void  set_width(int width);
};
#endif