/* THIS FILE IS GENERATED */
#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <stdint.h>

#include "Basis.h"
#include "Resource.h"
#include "Texture.h"
#include "Sky.h"
#include "Vector3.h"
#include "Variant.h"
class Environment : public Resource{
public: Environment();
enum SSAOBlur{
SSAO_BLUR_DISABLED: 0,
SSAO_BLUR_1x1: 1,
SSAO_BLUR_2x2: 2,
};
enum ToneMapper{
TONE_MAPPER_LINEAR: 0,
TONE_MAPPER_REINHARDT: 1,
TONE_MAPPER_FILMIC: 2,
};
enum GlowBlendMode{
GLOW_BLEND_MODE_ADDITIVE: 0,
GLOW_BLEND_MODE_SCREEN: 1,
GLOW_BLEND_MODE_SOFTLIGHT: 2,
};
enum BGMode{
BG_CLEAR_COLOR: 0,
BG_COLOR: 1,
BG_SKY: 2,
BG_COLOR_SKY: 3,
BG_CANVAS: 4,
BG_KEEP: 5,
BG_CAMERA_FEED: 6,
};
enum SSAOQuality{
SSAO_QUALITY_LOW: 0,
SSAO_QUALITY_MEDIUM: 1,
};
enum DOFBlurQuality{
DOF_BLUR_QUALITY_LOW: 0,
DOF_BLUR_QUALITY_MEDIUM: 1,
};
float  get_adjustment_brightness();
float  get_adjustment_brightness();
Texture  get_adjustment_color_correction();
Texture  get_adjustment_color_correction();
float  get_adjustment_contrast();
float  get_adjustment_contrast();
float  get_adjustment_saturation();
float  get_adjustment_saturation();
Color  get_ambient_light_color();
Color  get_ambient_light_color();
float  get_ambient_light_energy();
float  get_ambient_light_energy();
float  get_ambient_light_sky_contribution();
float  get_ambient_light_sky_contribution();
enum.Environment::BGMode  get_background();
enum.Environment::BGMode  get_background();
Color  get_bg_color();
Color  get_bg_color();
float  get_bg_energy();
float  get_bg_energy();
int  get_camera_feed_id();
int  get_camera_feed_id();
int  get_canvas_max_layer();
int  get_canvas_max_layer();
float  get_dof_blur_far_amount();
float  get_dof_blur_far_amount();
float  get_dof_blur_far_distance();
float  get_dof_blur_far_distance();
enum.Environment::DOFBlurQuality  get_dof_blur_far_quality();
enum.Environment::DOFBlurQuality  get_dof_blur_far_quality();
float  get_dof_blur_far_transition();
float  get_dof_blur_far_transition();
float  get_dof_blur_near_amount();
float  get_dof_blur_near_amount();
float  get_dof_blur_near_distance();
float  get_dof_blur_near_distance();
enum.Environment::DOFBlurQuality  get_dof_blur_near_quality();
enum.Environment::DOFBlurQuality  get_dof_blur_near_quality();
float  get_dof_blur_near_transition();
float  get_dof_blur_near_transition();
Color  get_fog_color();
Color  get_fog_color();
float  get_fog_depth_begin();
float  get_fog_depth_begin();
float  get_fog_depth_curve();
float  get_fog_depth_curve();
float  get_fog_depth_end();
float  get_fog_depth_end();
float  get_fog_height_curve();
float  get_fog_height_curve();
float  get_fog_height_max();
float  get_fog_height_max();
float  get_fog_height_min();
float  get_fog_height_min();
float  get_fog_sun_amount();
float  get_fog_sun_amount();
Color  get_fog_sun_color();
Color  get_fog_sun_color();
float  get_fog_transmit_curve();
float  get_fog_transmit_curve();
enum.Environment::GlowBlendMode  get_glow_blend_mode();
enum.Environment::GlowBlendMode  get_glow_blend_mode();
float  get_glow_bloom();
float  get_glow_bloom();
float  get_glow_hdr_bleed_scale();
float  get_glow_hdr_bleed_scale();
float  get_glow_hdr_bleed_threshold();
float  get_glow_hdr_bleed_threshold();
float  get_glow_hdr_luminance_cap();
float  get_glow_hdr_luminance_cap();
float  get_glow_intensity();
float  get_glow_intensity();
float  get_glow_strength();
float  get_glow_strength();
Sky  get_sky();
Sky  get_sky();
float  get_sky_custom_fov();
float  get_sky_custom_fov();
Basis  get_sky_orientation();
Basis  get_sky_orientation();
Vector3  get_sky_rotation();
Vector3  get_sky_rotation();
Vector3  get_sky_rotation_degrees();
Vector3  get_sky_rotation_degrees();
float  get_ssao_ao_channel_affect();
float  get_ssao_ao_channel_affect();
float  get_ssao_bias();
float  get_ssao_bias();
enum.Environment::SSAOBlur  get_ssao_blur();
enum.Environment::SSAOBlur  get_ssao_blur();
Color  get_ssao_color();
Color  get_ssao_color();
float  get_ssao_direct_light_affect();
float  get_ssao_direct_light_affect();
float  get_ssao_edge_sharpness();
float  get_ssao_edge_sharpness();
float  get_ssao_intensity();
float  get_ssao_intensity();
float  get_ssao_intensity2();
float  get_ssao_intensity2();
enum.Environment::SSAOQuality  get_ssao_quality();
enum.Environment::SSAOQuality  get_ssao_quality();
float  get_ssao_radius();
float  get_ssao_radius();
float  get_ssao_radius2();
float  get_ssao_radius2();
float  get_ssr_depth_tolerance();
float  get_ssr_depth_tolerance();
float  get_ssr_fade_in();
float  get_ssr_fade_in();
float  get_ssr_fade_out();
float  get_ssr_fade_out();
int  get_ssr_max_steps();
int  get_ssr_max_steps();
bool  get_tonemap_auto_exposure();
bool  get_tonemap_auto_exposure();
float  get_tonemap_auto_exposure_grey();
float  get_tonemap_auto_exposure_grey();
float  get_tonemap_auto_exposure_max();
float  get_tonemap_auto_exposure_max();
float  get_tonemap_auto_exposure_min();
float  get_tonemap_auto_exposure_min();
float  get_tonemap_auto_exposure_speed();
float  get_tonemap_auto_exposure_speed();
float  get_tonemap_exposure();
float  get_tonemap_exposure();
float  get_tonemap_white();
float  get_tonemap_white();
enum.Environment::ToneMapper  get_tonemapper();
enum.Environment::ToneMapper  get_tonemapper();
bool  is_adjustment_enabled();
bool  is_adjustment_enabled();
bool  is_dof_blur_far_enabled();
bool  is_dof_blur_far_enabled();
bool  is_dof_blur_near_enabled();
bool  is_dof_blur_near_enabled();
bool  is_fog_depth_enabled();
bool  is_fog_depth_enabled();
bool  is_fog_enabled();
bool  is_fog_enabled();
bool  is_fog_height_enabled();
bool  is_fog_height_enabled();
bool  is_fog_transmit_enabled();
bool  is_fog_transmit_enabled();
bool  is_glow_bicubic_upscale_enabled();
bool  is_glow_bicubic_upscale_enabled();
bool  is_glow_enabled();
bool  is_glow_enabled();
bool  is_glow_level_enabled(int idx);
bool  is_ssao_enabled();
bool  is_ssao_enabled();
bool  is_ssr_enabled();
bool  is_ssr_enabled();
bool  is_ssr_rough();
bool  is_ssr_rough();
void  set_adjustment_brightness(float brightness);
void  set_adjustment_color_correction(Texture color_correction);
void  set_adjustment_contrast(float contrast);
void  set_adjustment_enable(bool enabled);
void  set_adjustment_saturation(float saturation);
void  set_ambient_light_color(Color color);
void  set_ambient_light_energy(float energy);
void  set_ambient_light_sky_contribution(float energy);
void  set_background(int mode);
void  set_bg_color(Color color);
void  set_bg_energy(float energy);
void  set_camera_feed_id(int camera_feed_id);
void  set_canvas_max_layer(int layer);
void  set_dof_blur_far_amount(float intensity);
void  set_dof_blur_far_distance(float intensity);
void  set_dof_blur_far_enabled(bool enabled);
void  set_dof_blur_far_quality(int intensity);
void  set_dof_blur_far_transition(float intensity);
void  set_dof_blur_near_amount(float intensity);
void  set_dof_blur_near_distance(float intensity);
void  set_dof_blur_near_enabled(bool enabled);
void  set_dof_blur_near_quality(int level);
void  set_dof_blur_near_transition(float intensity);
void  set_fog_color(Color color);
void  set_fog_depth_begin(float distance);
void  set_fog_depth_curve(float curve);
void  set_fog_depth_enabled(bool enabled);
void  set_fog_depth_end(float distance);
void  set_fog_enabled(bool enabled);
void  set_fog_height_curve(float curve);
void  set_fog_height_enabled(bool enabled);
void  set_fog_height_max(float height);
void  set_fog_height_min(float height);
void  set_fog_sun_amount(float amount);
void  set_fog_sun_color(Color color);
void  set_fog_transmit_curve(float curve);
void  set_fog_transmit_enabled(bool enabled);
void  set_glow_bicubic_upscale(bool enabled);
void  set_glow_blend_mode(int mode);
void  set_glow_bloom(float amount);
void  set_glow_enabled(bool enabled);
void  set_glow_hdr_bleed_scale(float scale);
void  set_glow_hdr_bleed_threshold(float threshold);
void  set_glow_hdr_luminance_cap(float amount);
void  set_glow_intensity(float intensity);
void  set_glow_level(int idx, bool enabled);
void  set_glow_strength(float strength);
void  set_sky(Sky sky);
void  set_sky_custom_fov(float scale);
void  set_sky_orientation(Basis orientation);
void  set_sky_rotation(Vector3 euler_radians);
void  set_sky_rotation_degrees(Vector3 euler_degrees);
void  set_ssao_ao_channel_affect(float amount);
void  set_ssao_bias(float bias);
void  set_ssao_blur(int mode);
void  set_ssao_color(Color color);
void  set_ssao_direct_light_affect(float amount);
void  set_ssao_edge_sharpness(float edge_sharpness);
void  set_ssao_enabled(bool enabled);
void  set_ssao_intensity(float intensity);
void  set_ssao_intensity2(float intensity);
void  set_ssao_quality(int quality);
void  set_ssao_radius(float radius);
void  set_ssao_radius2(float radius);
void  set_ssr_depth_tolerance(float depth_tolerance);
void  set_ssr_enabled(bool enabled);
void  set_ssr_fade_in(float fade_in);
void  set_ssr_fade_out(float fade_out);
void  set_ssr_max_steps(int max_steps);
void  set_ssr_rough(bool rough);
void  set_tonemap_auto_exposure(bool auto_exposure);
void  set_tonemap_auto_exposure_grey(float exposure_grey);
void  set_tonemap_auto_exposure_max(float exposure_max);
void  set_tonemap_auto_exposure_min(float exposure_min);
void  set_tonemap_auto_exposure_speed(float exposure_speed);
void  set_tonemap_exposure(float exposure);
void  set_tonemap_white(float white);
void  set_tonemapper(int mode);
};
#endif