/* THIS FILE IS GENERATED */
#ifndef PROCEDURALSKY_H
#define PROCEDURALSKY_H

#include "wasgo\wasgo.h"

#include "Sky.h"
#include "Color.h"
class ProceduralSky : public Sky{
public:
enum TextureSize{
TEXTURE_SIZE_256,
TEXTURE_SIZE_512,
TEXTURE_SIZE_1024,
TEXTURE_SIZE_2048,
TEXTURE_SIZE_4096,
TEXTURE_SIZE_MAX
};
Color get_ground_bottom_color();
float get_ground_curve();
float get_ground_energy();
Color get_ground_horizon_color();
float get_sky_curve();
float get_sky_energy();
Color get_sky_horizon_color();
Color get_sky_top_color();
float get_sun_angle_max();
float get_sun_angle_min();
Color get_sun_color();
float get_sun_curve();
float get_sun_energy();
float get_sun_latitude();
float get_sun_longitude();
ProceduralSky::TextureSize get_texture_size();
void set_ground_bottom_color(Color p_color);
void set_ground_curve(float p_curve);
void set_ground_energy(float p_energy);
void set_ground_horizon_color(Color p_color);
void set_sky_curve(float p_curve);
void set_sky_energy(float p_energy);
void set_sky_horizon_color(Color p_color);
void set_sky_top_color(Color p_color);
void set_sun_angle_max(float p_degrees);
void set_sun_angle_min(float p_degrees);
void set_sun_color(Color p_color);
void set_sun_curve(float p_curve);
void set_sun_energy(float p_energy);
void set_sun_latitude(float p_degrees);
void set_sun_longitude(float p_degrees);
void set_texture_size(ProceduralSky::TextureSize p_size);

protected:
ProceduralSky(WasGoId p_wasgo_id);
public:
ProceduralSky();
~ProceduralSky();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ProceduralSky_wrapper_get_ground_bottom_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_ProceduralSky_wrapper_get_ground_curve(WasGoId wasgo_id);
float _wasgo_ProceduralSky_wrapper_get_ground_energy(WasGoId wasgo_id);
void _wasgo_ProceduralSky_wrapper_get_ground_horizon_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_ProceduralSky_wrapper_get_sky_curve(WasGoId wasgo_id);
float _wasgo_ProceduralSky_wrapper_get_sky_energy(WasGoId wasgo_id);
void _wasgo_ProceduralSky_wrapper_get_sky_horizon_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ProceduralSky_wrapper_get_sky_top_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_ProceduralSky_wrapper_get_sun_angle_max(WasGoId wasgo_id);
float _wasgo_ProceduralSky_wrapper_get_sun_angle_min(WasGoId wasgo_id);
void _wasgo_ProceduralSky_wrapper_get_sun_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_ProceduralSky_wrapper_get_sun_curve(WasGoId wasgo_id);
float _wasgo_ProceduralSky_wrapper_get_sun_energy(WasGoId wasgo_id);
float _wasgo_ProceduralSky_wrapper_get_sun_latitude(WasGoId wasgo_id);
float _wasgo_ProceduralSky_wrapper_get_sun_longitude(WasGoId wasgo_id);
WasGoId _wasgo_ProceduralSky_wrapper_get_texture_size(WasGoId wasgo_id);
void _wasgo_ProceduralSky_wrapper_set_ground_bottom_color(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_ProceduralSky_wrapper_set_ground_curve(WasGoId wasgo_id, float p_curve);
void _wasgo_ProceduralSky_wrapper_set_ground_energy(WasGoId wasgo_id, float p_energy);
void _wasgo_ProceduralSky_wrapper_set_ground_horizon_color(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_ProceduralSky_wrapper_set_sky_curve(WasGoId wasgo_id, float p_curve);
void _wasgo_ProceduralSky_wrapper_set_sky_energy(WasGoId wasgo_id, float p_energy);
void _wasgo_ProceduralSky_wrapper_set_sky_horizon_color(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_ProceduralSky_wrapper_set_sky_top_color(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_ProceduralSky_wrapper_set_sun_angle_max(WasGoId wasgo_id, float p_degrees);
void _wasgo_ProceduralSky_wrapper_set_sun_angle_min(WasGoId wasgo_id, float p_degrees);
void _wasgo_ProceduralSky_wrapper_set_sun_color(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_ProceduralSky_wrapper_set_sun_curve(WasGoId wasgo_id, float p_curve);
void _wasgo_ProceduralSky_wrapper_set_sun_energy(WasGoId wasgo_id, float p_energy);
void _wasgo_ProceduralSky_wrapper_set_sun_latitude(WasGoId wasgo_id, float p_degrees);
void _wasgo_ProceduralSky_wrapper_set_sun_longitude(WasGoId wasgo_id, float p_degrees);
void _wasgo_ProceduralSky_wrapper_set_texture_size(WasGoId wasgo_id, WasGoId p_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_ProceduralSky_constructor();
    void _wasgo_ProceduralSky_destructor(WasGoId p_wasgo_id);
            
}
#endif