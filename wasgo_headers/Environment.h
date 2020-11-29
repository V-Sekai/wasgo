/* THIS FILE IS GENERATED */
#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include "stdint.h"

#include "Resource.h"
#include "Variant.h"
#include "Texture.h"
#include "Sky.h"
class Environment : public Resource{
public: Environment();
enum BGMode{
BG_KEEP,
BG_CLEAR_COLOR,
BG_COLOR,
BG_SKY,
BG_COLOR_SKY,
BG_CANVAS,
BG_CAMERA_FEED,
BG_MAX
};
enum DOFBlurQuality{
DOF_BLUR_QUALITY_LOW,
DOF_BLUR_QUALITY_MEDIUM,
DOF_BLUR_QUALITY_HIGH
};
enum GlowBlendMode{
GLOW_BLEND_MODE_ADDITIVE,
GLOW_BLEND_MODE_SCREEN,
GLOW_BLEND_MODE_SOFTLIGHT,
GLOW_BLEND_MODE_REPLACE
};
enum SSAOBlur{
SSAO_BLUR_DISABLED,
SSAO_BLUR_1x1,
SSAO_BLUR_2x2,
SSAO_BLUR_3x3
};
enum SSAOQuality{
SSAO_QUALITY_LOW,
SSAO_QUALITY_MEDIUM,
SSAO_QUALITY_HIGH
};
enum ToneMapper{
TONE_MAPPER_LINEAR,
TONE_MAPPER_REINHARDT,
TONE_MAPPER_FILMIC,
TONE_MAPPER_ACES
};
float get_adjustment_brightness();
Texture get_adjustment_color_correction();
float get_adjustment_contrast();
float get_adjustment_saturation();
Color get_ambient_light_color();
float get_ambient_light_energy();
float get_ambient_light_sky_contribution();
Environment::BGMode get_background();
Color get_bg_color();
float get_bg_energy();
int get_camera_feed_id();
int get_canvas_max_layer();
float get_dof_blur_far_amount();
float get_dof_blur_far_distance();
Environment::DOFBlurQuality get_dof_blur_far_quality();
float get_dof_blur_far_transition();
float get_dof_blur_near_amount();
float get_dof_blur_near_distance();
Environment::DOFBlurQuality get_dof_blur_near_quality();
float get_dof_blur_near_transition();
Color get_fog_color();
float get_fog_depth_begin();
float get_fog_depth_curve();
float get_fog_depth_end();
float get_fog_height_curve();
float get_fog_height_max();
float get_fog_height_min();
float get_fog_sun_amount();
Color get_fog_sun_color();
float get_fog_transmit_curve();
Environment::GlowBlendMode get_glow_blend_mode();
float get_glow_bloom();
float get_glow_hdr_bleed_scale();
float get_glow_hdr_bleed_threshold();
float get_glow_hdr_luminance_cap();
float get_glow_intensity();
float get_glow_strength();
Sky get_sky();
float get_sky_custom_fov();
Basis get_sky_orientation();
Vector3 get_sky_rotation();
Vector3 get_sky_rotation_degrees();
float get_ssao_ao_channel_affect();
float get_ssao_bias();
Environment::SSAOBlur get_ssao_blur();
Color get_ssao_color();
float get_ssao_direct_light_affect();
float get_ssao_edge_sharpness();
float get_ssao_intensity();
float get_ssao_intensity2();
Environment::SSAOQuality get_ssao_quality();
float get_ssao_radius();
float get_ssao_radius2();
float get_ssr_depth_tolerance();
float get_ssr_fade_in();
float get_ssr_fade_out();
int get_ssr_max_steps();
bool get_tonemap_auto_exposure();
float get_tonemap_auto_exposure_grey();
float get_tonemap_auto_exposure_max();
float get_tonemap_auto_exposure_min();
float get_tonemap_auto_exposure_speed();
float get_tonemap_exposure();
float get_tonemap_white();
Environment::ToneMapper get_tonemapper();
bool is_adjustment_enabled();
bool is_dof_blur_far_enabled();
bool is_dof_blur_near_enabled();
bool is_fog_depth_enabled();
bool is_fog_enabled();
bool is_fog_height_enabled();
bool is_fog_transmit_enabled();
bool is_glow_bicubic_upscale_enabled();
bool is_glow_enabled();
bool is_glow_level_enabled(int p_idx);
bool is_ssao_enabled();
bool is_ssr_enabled();
bool is_ssr_rough();
void set_adjustment_brightness(float p_brightness);
void set_adjustment_color_correction(Texture p_color_correction);
void set_adjustment_contrast(float p_contrast);
void set_adjustment_enable(bool p_enabled);
void set_adjustment_saturation(float p_saturation);
void set_ambient_light_color(Color p_color);
void set_ambient_light_energy(float p_energy);
void set_ambient_light_sky_contribution(float p_energy);
void set_background(Environment::BGMode p_mode);
void set_bg_color(Color p_color);
void set_bg_energy(float p_energy);
void set_camera_feed_id(int p_camera_feed_id);
void set_canvas_max_layer(int p_layer);
void set_dof_blur_far_amount(float p_intensity);
void set_dof_blur_far_distance(float p_intensity);
void set_dof_blur_far_enabled(bool p_enabled);
void set_dof_blur_far_quality(Environment::DOFBlurQuality p_intensity);
void set_dof_blur_far_transition(float p_intensity);
void set_dof_blur_near_amount(float p_intensity);
void set_dof_blur_near_distance(float p_intensity);
void set_dof_blur_near_enabled(bool p_enabled);
void set_dof_blur_near_quality(Environment::DOFBlurQuality p_level);
void set_dof_blur_near_transition(float p_intensity);
void set_fog_color(Color p_color);
void set_fog_depth_begin(float p_distance);
void set_fog_depth_curve(float p_curve);
void set_fog_depth_enabled(bool p_enabled);
void set_fog_depth_end(float p_distance);
void set_fog_enabled(bool p_enabled);
void set_fog_height_curve(float p_curve);
void set_fog_height_enabled(bool p_enabled);
void set_fog_height_max(float p_height);
void set_fog_height_min(float p_height);
void set_fog_sun_amount(float p_amount);
void set_fog_sun_color(Color p_color);
void set_fog_transmit_curve(float p_curve);
void set_fog_transmit_enabled(bool p_enabled);
void set_glow_bicubic_upscale(bool p_enabled);
void set_glow_blend_mode(Environment::GlowBlendMode p_mode);
void set_glow_bloom(float p_amount);
void set_glow_enabled(bool p_enabled);
void set_glow_hdr_bleed_scale(float p_scale);
void set_glow_hdr_bleed_threshold(float p_threshold);
void set_glow_hdr_luminance_cap(float p_amount);
void set_glow_intensity(float p_intensity);
void set_glow_level(int p_idx, bool p_enabled);
void set_glow_strength(float p_strength);
void set_sky(Sky p_sky);
void set_sky_custom_fov(float p_scale);
void set_sky_orientation(Basis p_orientation);
void set_sky_rotation(Vector3 p_euler_radians);
void set_sky_rotation_degrees(Vector3 p_euler_degrees);
void set_ssao_ao_channel_affect(float p_amount);
void set_ssao_bias(float p_bias);
void set_ssao_blur(Environment::SSAOBlur p_mode);
void set_ssao_color(Color p_color);
void set_ssao_direct_light_affect(float p_amount);
void set_ssao_edge_sharpness(float p_edge_sharpness);
void set_ssao_enabled(bool p_enabled);
void set_ssao_intensity(float p_intensity);
void set_ssao_intensity2(float p_intensity);
void set_ssao_quality(Environment::SSAOQuality p_quality);
void set_ssao_radius(float p_radius);
void set_ssao_radius2(float p_radius);
void set_ssr_depth_tolerance(float p_depth_tolerance);
void set_ssr_enabled(bool p_enabled);
void set_ssr_fade_in(float p_fade_in);
void set_ssr_fade_out(float p_fade_out);
void set_ssr_max_steps(int p_max_steps);
void set_ssr_rough(bool p_rough);
void set_tonemap_auto_exposure(bool p_auto_exposure);
void set_tonemap_auto_exposure_grey(float p_exposure_grey);
void set_tonemap_auto_exposure_max(float p_exposure_max);
void set_tonemap_auto_exposure_min(float p_exposure_min);
void set_tonemap_auto_exposure_speed(float p_exposure_speed);
void set_tonemap_exposure(float p_exposure);
void set_tonemap_white(float p_white);
void set_tonemapper(Environment::ToneMapper p_mode);
};
#endif