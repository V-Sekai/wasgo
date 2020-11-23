/* THIS FILE IS GENERATED */
#ifndef PROCEDURALSKY_H
#define PROCEDURALSKY_H

#include <stdint.h>

#include "Sky.h"
#include "Image.h"
#include "Variant.h"
class ProceduralSky : public Sky{
public: ProceduralSky();
enum TextureSize{
TEXTURE_SIZE_256: 0,
TEXTURE_SIZE_512: 1,
TEXTURE_SIZE_1024: 2,
TEXTURE_SIZE_2048: 3,
TEXTURE_SIZE_4096: 4,
};
void  _thread_done(Image image);
void  _update_sky();
void  _update_sky();
Color  get_ground_bottom_color();
Color  get_ground_bottom_color();
float  get_ground_curve();
float  get_ground_curve();
float  get_ground_energy();
float  get_ground_energy();
Color  get_ground_horizon_color();
Color  get_ground_horizon_color();
float  get_sky_curve();
float  get_sky_curve();
float  get_sky_energy();
float  get_sky_energy();
Color  get_sky_horizon_color();
Color  get_sky_horizon_color();
Color  get_sky_top_color();
Color  get_sky_top_color();
float  get_sun_angle_max();
float  get_sun_angle_max();
float  get_sun_angle_min();
float  get_sun_angle_min();
Color  get_sun_color();
Color  get_sun_color();
float  get_sun_curve();
float  get_sun_curve();
float  get_sun_energy();
float  get_sun_energy();
float  get_sun_latitude();
float  get_sun_latitude();
float  get_sun_longitude();
float  get_sun_longitude();
enum.ProceduralSky::TextureSize  get_texture_size();
enum.ProceduralSky::TextureSize  get_texture_size();
void  set_ground_bottom_color(Color color);
void  set_ground_curve(float curve);
void  set_ground_energy(float energy);
void  set_ground_horizon_color(Color color);
void  set_sky_curve(float curve);
void  set_sky_energy(float energy);
void  set_sky_horizon_color(Color color);
void  set_sky_top_color(Color color);
void  set_sun_angle_max(float degrees);
void  set_sun_angle_min(float degrees);
void  set_sun_color(Color color);
void  set_sun_curve(float curve);
void  set_sun_energy(float energy);
void  set_sun_latitude(float degrees);
void  set_sun_longitude(float degrees);
void  set_texture_size(int size);
};
#endif