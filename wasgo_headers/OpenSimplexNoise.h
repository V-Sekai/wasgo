/* THIS FILE IS GENERATED */
#ifndef OPENSIMPLEXNOISE_H
#define OPENSIMPLEXNOISE_H

#include <stdint.h>

#include "Vector2.h"
#include "Image.h"
#include "Resource.h"
#include "Vector3.h"
class OpenSimplexNoise : public Resource{
public: OpenSimplexNoise();
Image  get_image(int width, int height);
float  get_lacunarity();
float  get_lacunarity();
float  get_noise_1d(float x);
float  get_noise_2d(float x, float y);
float  get_noise_2dv(Vector2 pos);
float  get_noise_3d(float x, float y, float z);
float  get_noise_3dv(Vector3 pos);
float  get_noise_4d(float x, float y, float z, float w);
int  get_octaves();
int  get_octaves();
float  get_period();
float  get_period();
float  get_persistence();
float  get_persistence();
Image  get_seamless_image(int size);
int  get_seed();
int  get_seed();
void  set_lacunarity(float lacunarity);
void  set_octaves(int octave_count);
void  set_period(float period);
void  set_persistence(float persistence);
void  set_seed(int seed);
};
#endif