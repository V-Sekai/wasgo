/* THIS FILE IS GENERATED */
#include "Environment.h"
float Environment::get_adjustment_brightness(){
	return (float) _wasgo_Environment_wrapper_get_adjustment_brightness(wasgo_id));
}
Texture Environment::get_adjustment_color_correction(){
	return Texture::from_wasgo_id(_wasgo_Environment_wrapper_get_adjustment_color_correction(wasgo_id));
}
float Environment::get_adjustment_contrast(){
	return (float) _wasgo_Environment_wrapper_get_adjustment_contrast(wasgo_id));
}
float Environment::get_adjustment_saturation(){
	return (float) _wasgo_Environment_wrapper_get_adjustment_saturation(wasgo_id));
}
Color Environment::get_ambient_light_color(){
	return Color::from_wasgo_id(_wasgo_Environment_wrapper_get_ambient_light_color(wasgo_id));
}
float Environment::get_ambient_light_energy(){
	return (float) _wasgo_Environment_wrapper_get_ambient_light_energy(wasgo_id));
}
float Environment::get_ambient_light_sky_contribution(){
	return (float) _wasgo_Environment_wrapper_get_ambient_light_sky_contribution(wasgo_id));
}
Environment::BGMode Environment::get_background(){
	return Environment::BGMode::from_wasgo_id(_wasgo_Environment_wrapper_get_background(wasgo_id));
}
Color Environment::get_bg_color(){
	return Color::from_wasgo_id(_wasgo_Environment_wrapper_get_bg_color(wasgo_id));
}
float Environment::get_bg_energy(){
	return (float) _wasgo_Environment_wrapper_get_bg_energy(wasgo_id));
}
int Environment::get_camera_feed_id(){
	return (int) _wasgo_Environment_wrapper_get_camera_feed_id(wasgo_id));
}
int Environment::get_canvas_max_layer(){
	return (int) _wasgo_Environment_wrapper_get_canvas_max_layer(wasgo_id));
}
float Environment::get_dof_blur_far_amount(){
	return (float) _wasgo_Environment_wrapper_get_dof_blur_far_amount(wasgo_id));
}
float Environment::get_dof_blur_far_distance(){
	return (float) _wasgo_Environment_wrapper_get_dof_blur_far_distance(wasgo_id));
}
Environment::DOFBlurQuality Environment::get_dof_blur_far_quality(){
	return Environment::DOFBlurQuality::from_wasgo_id(_wasgo_Environment_wrapper_get_dof_blur_far_quality(wasgo_id));
}
float Environment::get_dof_blur_far_transition(){
	return (float) _wasgo_Environment_wrapper_get_dof_blur_far_transition(wasgo_id));
}
float Environment::get_dof_blur_near_amount(){
	return (float) _wasgo_Environment_wrapper_get_dof_blur_near_amount(wasgo_id));
}
float Environment::get_dof_blur_near_distance(){
	return (float) _wasgo_Environment_wrapper_get_dof_blur_near_distance(wasgo_id));
}
Environment::DOFBlurQuality Environment::get_dof_blur_near_quality(){
	return Environment::DOFBlurQuality::from_wasgo_id(_wasgo_Environment_wrapper_get_dof_blur_near_quality(wasgo_id));
}
float Environment::get_dof_blur_near_transition(){
	return (float) _wasgo_Environment_wrapper_get_dof_blur_near_transition(wasgo_id));
}
Color Environment::get_fog_color(){
	return Color::from_wasgo_id(_wasgo_Environment_wrapper_get_fog_color(wasgo_id));
}
float Environment::get_fog_depth_begin(){
	return (float) _wasgo_Environment_wrapper_get_fog_depth_begin(wasgo_id));
}
float Environment::get_fog_depth_curve(){
	return (float) _wasgo_Environment_wrapper_get_fog_depth_curve(wasgo_id));
}
float Environment::get_fog_depth_end(){
	return (float) _wasgo_Environment_wrapper_get_fog_depth_end(wasgo_id));
}
float Environment::get_fog_height_curve(){
	return (float) _wasgo_Environment_wrapper_get_fog_height_curve(wasgo_id));
}
float Environment::get_fog_height_max(){
	return (float) _wasgo_Environment_wrapper_get_fog_height_max(wasgo_id));
}
float Environment::get_fog_height_min(){
	return (float) _wasgo_Environment_wrapper_get_fog_height_min(wasgo_id));
}
float Environment::get_fog_sun_amount(){
	return (float) _wasgo_Environment_wrapper_get_fog_sun_amount(wasgo_id));
}
Color Environment::get_fog_sun_color(){
	return Color::from_wasgo_id(_wasgo_Environment_wrapper_get_fog_sun_color(wasgo_id));
}
float Environment::get_fog_transmit_curve(){
	return (float) _wasgo_Environment_wrapper_get_fog_transmit_curve(wasgo_id));
}
Environment::GlowBlendMode Environment::get_glow_blend_mode(){
	return Environment::GlowBlendMode::from_wasgo_id(_wasgo_Environment_wrapper_get_glow_blend_mode(wasgo_id));
}
float Environment::get_glow_bloom(){
	return (float) _wasgo_Environment_wrapper_get_glow_bloom(wasgo_id));
}
float Environment::get_glow_hdr_bleed_scale(){
	return (float) _wasgo_Environment_wrapper_get_glow_hdr_bleed_scale(wasgo_id));
}
float Environment::get_glow_hdr_bleed_threshold(){
	return (float) _wasgo_Environment_wrapper_get_glow_hdr_bleed_threshold(wasgo_id));
}
float Environment::get_glow_hdr_luminance_cap(){
	return (float) _wasgo_Environment_wrapper_get_glow_hdr_luminance_cap(wasgo_id));
}
float Environment::get_glow_intensity(){
	return (float) _wasgo_Environment_wrapper_get_glow_intensity(wasgo_id));
}
float Environment::get_glow_strength(){
	return (float) _wasgo_Environment_wrapper_get_glow_strength(wasgo_id));
}
Sky Environment::get_sky(){
	return Sky::from_wasgo_id(_wasgo_Environment_wrapper_get_sky(wasgo_id));
}
float Environment::get_sky_custom_fov(){
	return (float) _wasgo_Environment_wrapper_get_sky_custom_fov(wasgo_id));
}
Basis Environment::get_sky_orientation(){
	return Basis::from_wasgo_id(_wasgo_Environment_wrapper_get_sky_orientation(wasgo_id));
}
Vector3 Environment::get_sky_rotation(){
	return Vector3::from_wasgo_id(_wasgo_Environment_wrapper_get_sky_rotation(wasgo_id));
}
Vector3 Environment::get_sky_rotation_degrees(){
	return Vector3::from_wasgo_id(_wasgo_Environment_wrapper_get_sky_rotation_degrees(wasgo_id));
}
float Environment::get_ssao_ao_channel_affect(){
	return (float) _wasgo_Environment_wrapper_get_ssao_ao_channel_affect(wasgo_id));
}
float Environment::get_ssao_bias(){
	return (float) _wasgo_Environment_wrapper_get_ssao_bias(wasgo_id));
}
Environment::SSAOBlur Environment::get_ssao_blur(){
	return Environment::SSAOBlur::from_wasgo_id(_wasgo_Environment_wrapper_get_ssao_blur(wasgo_id));
}
Color Environment::get_ssao_color(){
	return Color::from_wasgo_id(_wasgo_Environment_wrapper_get_ssao_color(wasgo_id));
}
float Environment::get_ssao_direct_light_affect(){
	return (float) _wasgo_Environment_wrapper_get_ssao_direct_light_affect(wasgo_id));
}
float Environment::get_ssao_edge_sharpness(){
	return (float) _wasgo_Environment_wrapper_get_ssao_edge_sharpness(wasgo_id));
}
float Environment::get_ssao_intensity(){
	return (float) _wasgo_Environment_wrapper_get_ssao_intensity(wasgo_id));
}
float Environment::get_ssao_intensity2(){
	return (float) _wasgo_Environment_wrapper_get_ssao_intensity2(wasgo_id));
}
Environment::SSAOQuality Environment::get_ssao_quality(){
	return Environment::SSAOQuality::from_wasgo_id(_wasgo_Environment_wrapper_get_ssao_quality(wasgo_id));
}
float Environment::get_ssao_radius(){
	return (float) _wasgo_Environment_wrapper_get_ssao_radius(wasgo_id));
}
float Environment::get_ssao_radius2(){
	return (float) _wasgo_Environment_wrapper_get_ssao_radius2(wasgo_id));
}
float Environment::get_ssr_depth_tolerance(){
	return (float) _wasgo_Environment_wrapper_get_ssr_depth_tolerance(wasgo_id));
}
float Environment::get_ssr_fade_in(){
	return (float) _wasgo_Environment_wrapper_get_ssr_fade_in(wasgo_id));
}
float Environment::get_ssr_fade_out(){
	return (float) _wasgo_Environment_wrapper_get_ssr_fade_out(wasgo_id));
}
int Environment::get_ssr_max_steps(){
	return (int) _wasgo_Environment_wrapper_get_ssr_max_steps(wasgo_id));
}
bool Environment::get_tonemap_auto_exposure(){
	return (bool) _wasgo_Environment_wrapper_get_tonemap_auto_exposure(wasgo_id));
}
float Environment::get_tonemap_auto_exposure_grey(){
	return (float) _wasgo_Environment_wrapper_get_tonemap_auto_exposure_grey(wasgo_id));
}
float Environment::get_tonemap_auto_exposure_max(){
	return (float) _wasgo_Environment_wrapper_get_tonemap_auto_exposure_max(wasgo_id));
}
float Environment::get_tonemap_auto_exposure_min(){
	return (float) _wasgo_Environment_wrapper_get_tonemap_auto_exposure_min(wasgo_id));
}
float Environment::get_tonemap_auto_exposure_speed(){
	return (float) _wasgo_Environment_wrapper_get_tonemap_auto_exposure_speed(wasgo_id));
}
float Environment::get_tonemap_exposure(){
	return (float) _wasgo_Environment_wrapper_get_tonemap_exposure(wasgo_id));
}
float Environment::get_tonemap_white(){
	return (float) _wasgo_Environment_wrapper_get_tonemap_white(wasgo_id));
}
Environment::ToneMapper Environment::get_tonemapper(){
	return Environment::ToneMapper::from_wasgo_id(_wasgo_Environment_wrapper_get_tonemapper(wasgo_id));
}
bool Environment::is_adjustment_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_adjustment_enabled(wasgo_id));
}
bool Environment::is_dof_blur_far_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_dof_blur_far_enabled(wasgo_id));
}
bool Environment::is_dof_blur_near_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_dof_blur_near_enabled(wasgo_id));
}
bool Environment::is_fog_depth_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_fog_depth_enabled(wasgo_id));
}
bool Environment::is_fog_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_fog_enabled(wasgo_id));
}
bool Environment::is_fog_height_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_fog_height_enabled(wasgo_id));
}
bool Environment::is_fog_transmit_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_fog_transmit_enabled(wasgo_id));
}
bool Environment::is_glow_bicubic_upscale_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_glow_bicubic_upscale_enabled(wasgo_id));
}
bool Environment::is_glow_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_glow_enabled(wasgo_id));
}
bool Environment::is_glow_level_enabled(int p_idx){
	return (bool) _wasgo_Environment_wrapper_is_glow_level_enabled(wasgo_id, idx));
}
bool Environment::is_ssao_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_ssao_enabled(wasgo_id));
}
bool Environment::is_ssr_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_ssr_enabled(wasgo_id));
}
bool Environment::is_ssr_rough(){
	return (bool) _wasgo_Environment_wrapper_is_ssr_rough(wasgo_id));
}
void Environment::set_adjustment_brightness(float p_brightness){
	_wasgo_Environment_wrapper_set_adjustment_brightness(wasgo_id, brightness);
}
void Environment::set_adjustment_color_correction(Texture p_color_correction){
	_wasgo_Environment_wrapper_set_adjustment_color_correction(wasgo_id, ((Variant) color_correction).get_wasgo_id());
}
void Environment::set_adjustment_contrast(float p_contrast){
	_wasgo_Environment_wrapper_set_adjustment_contrast(wasgo_id, contrast);
}
void Environment::set_adjustment_enable(bool p_enabled){
	_wasgo_Environment_wrapper_set_adjustment_enable(wasgo_id, enabled);
}
void Environment::set_adjustment_saturation(float p_saturation){
	_wasgo_Environment_wrapper_set_adjustment_saturation(wasgo_id, saturation);
}
void Environment::set_ambient_light_color(Color p_color){
	_wasgo_Environment_wrapper_set_ambient_light_color(wasgo_id, ((Variant) color).get_wasgo_id());
}
void Environment::set_ambient_light_energy(float p_energy){
	_wasgo_Environment_wrapper_set_ambient_light_energy(wasgo_id, energy);
}
void Environment::set_ambient_light_sky_contribution(float p_energy){
	_wasgo_Environment_wrapper_set_ambient_light_sky_contribution(wasgo_id, energy);
}
void Environment::set_background(Environment::BGMode p_mode){
	_wasgo_Environment_wrapper_set_background(wasgo_id, ((Variant) mode).get_wasgo_id());
}
void Environment::set_bg_color(Color p_color){
	_wasgo_Environment_wrapper_set_bg_color(wasgo_id, ((Variant) color).get_wasgo_id());
}
void Environment::set_bg_energy(float p_energy){
	_wasgo_Environment_wrapper_set_bg_energy(wasgo_id, energy);
}
void Environment::set_camera_feed_id(int p_camera_feed_id){
	_wasgo_Environment_wrapper_set_camera_feed_id(wasgo_id, camera_feed_id);
}
void Environment::set_canvas_max_layer(int p_layer){
	_wasgo_Environment_wrapper_set_canvas_max_layer(wasgo_id, layer);
}
void Environment::set_dof_blur_far_amount(float p_intensity){
	_wasgo_Environment_wrapper_set_dof_blur_far_amount(wasgo_id, intensity);
}
void Environment::set_dof_blur_far_distance(float p_intensity){
	_wasgo_Environment_wrapper_set_dof_blur_far_distance(wasgo_id, intensity);
}
void Environment::set_dof_blur_far_enabled(bool p_enabled){
	_wasgo_Environment_wrapper_set_dof_blur_far_enabled(wasgo_id, enabled);
}
void Environment::set_dof_blur_far_quality(Environment::DOFBlurQuality p_intensity){
	_wasgo_Environment_wrapper_set_dof_blur_far_quality(wasgo_id, ((Variant) intensity).get_wasgo_id());
}
void Environment::set_dof_blur_far_transition(float p_intensity){
	_wasgo_Environment_wrapper_set_dof_blur_far_transition(wasgo_id, intensity);
}
void Environment::set_dof_blur_near_amount(float p_intensity){
	_wasgo_Environment_wrapper_set_dof_blur_near_amount(wasgo_id, intensity);
}
void Environment::set_dof_blur_near_distance(float p_intensity){
	_wasgo_Environment_wrapper_set_dof_blur_near_distance(wasgo_id, intensity);
}
void Environment::set_dof_blur_near_enabled(bool p_enabled){
	_wasgo_Environment_wrapper_set_dof_blur_near_enabled(wasgo_id, enabled);
}
void Environment::set_dof_blur_near_quality(Environment::DOFBlurQuality p_level){
	_wasgo_Environment_wrapper_set_dof_blur_near_quality(wasgo_id, ((Variant) level).get_wasgo_id());
}
void Environment::set_dof_blur_near_transition(float p_intensity){
	_wasgo_Environment_wrapper_set_dof_blur_near_transition(wasgo_id, intensity);
}
void Environment::set_fog_color(Color p_color){
	_wasgo_Environment_wrapper_set_fog_color(wasgo_id, ((Variant) color).get_wasgo_id());
}
void Environment::set_fog_depth_begin(float p_distance){
	_wasgo_Environment_wrapper_set_fog_depth_begin(wasgo_id, distance);
}
void Environment::set_fog_depth_curve(float p_curve){
	_wasgo_Environment_wrapper_set_fog_depth_curve(wasgo_id, curve);
}
void Environment::set_fog_depth_enabled(bool p_enabled){
	_wasgo_Environment_wrapper_set_fog_depth_enabled(wasgo_id, enabled);
}
void Environment::set_fog_depth_end(float p_distance){
	_wasgo_Environment_wrapper_set_fog_depth_end(wasgo_id, distance);
}
void Environment::set_fog_enabled(bool p_enabled){
	_wasgo_Environment_wrapper_set_fog_enabled(wasgo_id, enabled);
}
void Environment::set_fog_height_curve(float p_curve){
	_wasgo_Environment_wrapper_set_fog_height_curve(wasgo_id, curve);
}
void Environment::set_fog_height_enabled(bool p_enabled){
	_wasgo_Environment_wrapper_set_fog_height_enabled(wasgo_id, enabled);
}
void Environment::set_fog_height_max(float p_height){
	_wasgo_Environment_wrapper_set_fog_height_max(wasgo_id, height);
}
void Environment::set_fog_height_min(float p_height){
	_wasgo_Environment_wrapper_set_fog_height_min(wasgo_id, height);
}
void Environment::set_fog_sun_amount(float p_amount){
	_wasgo_Environment_wrapper_set_fog_sun_amount(wasgo_id, amount);
}
void Environment::set_fog_sun_color(Color p_color){
	_wasgo_Environment_wrapper_set_fog_sun_color(wasgo_id, ((Variant) color).get_wasgo_id());
}
void Environment::set_fog_transmit_curve(float p_curve){
	_wasgo_Environment_wrapper_set_fog_transmit_curve(wasgo_id, curve);
}
void Environment::set_fog_transmit_enabled(bool p_enabled){
	_wasgo_Environment_wrapper_set_fog_transmit_enabled(wasgo_id, enabled);
}
void Environment::set_glow_bicubic_upscale(bool p_enabled){
	_wasgo_Environment_wrapper_set_glow_bicubic_upscale(wasgo_id, enabled);
}
void Environment::set_glow_blend_mode(Environment::GlowBlendMode p_mode){
	_wasgo_Environment_wrapper_set_glow_blend_mode(wasgo_id, ((Variant) mode).get_wasgo_id());
}
void Environment::set_glow_bloom(float p_amount){
	_wasgo_Environment_wrapper_set_glow_bloom(wasgo_id, amount);
}
void Environment::set_glow_enabled(bool p_enabled){
	_wasgo_Environment_wrapper_set_glow_enabled(wasgo_id, enabled);
}
void Environment::set_glow_hdr_bleed_scale(float p_scale){
	_wasgo_Environment_wrapper_set_glow_hdr_bleed_scale(wasgo_id, scale);
}
void Environment::set_glow_hdr_bleed_threshold(float p_threshold){
	_wasgo_Environment_wrapper_set_glow_hdr_bleed_threshold(wasgo_id, threshold);
}
void Environment::set_glow_hdr_luminance_cap(float p_amount){
	_wasgo_Environment_wrapper_set_glow_hdr_luminance_cap(wasgo_id, amount);
}
void Environment::set_glow_intensity(float p_intensity){
	_wasgo_Environment_wrapper_set_glow_intensity(wasgo_id, intensity);
}
void Environment::set_glow_level(int p_idx, bool p_enabled){
	_wasgo_Environment_wrapper_set_glow_level(wasgo_id, idx, enabled);
}
void Environment::set_glow_strength(float p_strength){
	_wasgo_Environment_wrapper_set_glow_strength(wasgo_id, strength);
}
void Environment::set_sky(Sky p_sky){
	_wasgo_Environment_wrapper_set_sky(wasgo_id, ((Variant) sky).get_wasgo_id());
}
void Environment::set_sky_custom_fov(float p_scale){
	_wasgo_Environment_wrapper_set_sky_custom_fov(wasgo_id, scale);
}
void Environment::set_sky_orientation(Basis p_orientation){
	_wasgo_Environment_wrapper_set_sky_orientation(wasgo_id, ((Variant) orientation).get_wasgo_id());
}
void Environment::set_sky_rotation(Vector3 p_euler_radians){
	_wasgo_Environment_wrapper_set_sky_rotation(wasgo_id, ((Variant) euler_radians).get_wasgo_id());
}
void Environment::set_sky_rotation_degrees(Vector3 p_euler_degrees){
	_wasgo_Environment_wrapper_set_sky_rotation_degrees(wasgo_id, ((Variant) euler_degrees).get_wasgo_id());
}
void Environment::set_ssao_ao_channel_affect(float p_amount){
	_wasgo_Environment_wrapper_set_ssao_ao_channel_affect(wasgo_id, amount);
}
void Environment::set_ssao_bias(float p_bias){
	_wasgo_Environment_wrapper_set_ssao_bias(wasgo_id, bias);
}
void Environment::set_ssao_blur(Environment::SSAOBlur p_mode){
	_wasgo_Environment_wrapper_set_ssao_blur(wasgo_id, ((Variant) mode).get_wasgo_id());
}
void Environment::set_ssao_color(Color p_color){
	_wasgo_Environment_wrapper_set_ssao_color(wasgo_id, ((Variant) color).get_wasgo_id());
}
void Environment::set_ssao_direct_light_affect(float p_amount){
	_wasgo_Environment_wrapper_set_ssao_direct_light_affect(wasgo_id, amount);
}
void Environment::set_ssao_edge_sharpness(float p_edge_sharpness){
	_wasgo_Environment_wrapper_set_ssao_edge_sharpness(wasgo_id, edge_sharpness);
}
void Environment::set_ssao_enabled(bool p_enabled){
	_wasgo_Environment_wrapper_set_ssao_enabled(wasgo_id, enabled);
}
void Environment::set_ssao_intensity(float p_intensity){
	_wasgo_Environment_wrapper_set_ssao_intensity(wasgo_id, intensity);
}
void Environment::set_ssao_intensity2(float p_intensity){
	_wasgo_Environment_wrapper_set_ssao_intensity2(wasgo_id, intensity);
}
void Environment::set_ssao_quality(Environment::SSAOQuality p_quality){
	_wasgo_Environment_wrapper_set_ssao_quality(wasgo_id, ((Variant) quality).get_wasgo_id());
}
void Environment::set_ssao_radius(float p_radius){
	_wasgo_Environment_wrapper_set_ssao_radius(wasgo_id, radius);
}
void Environment::set_ssao_radius2(float p_radius){
	_wasgo_Environment_wrapper_set_ssao_radius2(wasgo_id, radius);
}
void Environment::set_ssr_depth_tolerance(float p_depth_tolerance){
	_wasgo_Environment_wrapper_set_ssr_depth_tolerance(wasgo_id, depth_tolerance);
}
void Environment::set_ssr_enabled(bool p_enabled){
	_wasgo_Environment_wrapper_set_ssr_enabled(wasgo_id, enabled);
}
void Environment::set_ssr_fade_in(float p_fade_in){
	_wasgo_Environment_wrapper_set_ssr_fade_in(wasgo_id, fade_in);
}
void Environment::set_ssr_fade_out(float p_fade_out){
	_wasgo_Environment_wrapper_set_ssr_fade_out(wasgo_id, fade_out);
}
void Environment::set_ssr_max_steps(int p_max_steps){
	_wasgo_Environment_wrapper_set_ssr_max_steps(wasgo_id, max_steps);
}
void Environment::set_ssr_rough(bool p_rough){
	_wasgo_Environment_wrapper_set_ssr_rough(wasgo_id, rough);
}
void Environment::set_tonemap_auto_exposure(bool p_auto_exposure){
	_wasgo_Environment_wrapper_set_tonemap_auto_exposure(wasgo_id, auto_exposure);
}
void Environment::set_tonemap_auto_exposure_grey(float p_exposure_grey){
	_wasgo_Environment_wrapper_set_tonemap_auto_exposure_grey(wasgo_id, exposure_grey);
}
void Environment::set_tonemap_auto_exposure_max(float p_exposure_max){
	_wasgo_Environment_wrapper_set_tonemap_auto_exposure_max(wasgo_id, exposure_max);
}
void Environment::set_tonemap_auto_exposure_min(float p_exposure_min){
	_wasgo_Environment_wrapper_set_tonemap_auto_exposure_min(wasgo_id, exposure_min);
}
void Environment::set_tonemap_auto_exposure_speed(float p_exposure_speed){
	_wasgo_Environment_wrapper_set_tonemap_auto_exposure_speed(wasgo_id, exposure_speed);
}
void Environment::set_tonemap_exposure(float p_exposure){
	_wasgo_Environment_wrapper_set_tonemap_exposure(wasgo_id, exposure);
}
void Environment::set_tonemap_white(float p_white){
	_wasgo_Environment_wrapper_set_tonemap_white(wasgo_id, white);
}
void Environment::set_tonemapper(Environment::ToneMapper p_mode){
	_wasgo_Environment_wrapper_set_tonemapper(wasgo_id, ((Variant) mode).get_wasgo_id());
}

Environment::Environment(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Environment::~Environment(){
}