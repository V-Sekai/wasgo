/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Environment.h"
float Environment::get_adjustment_brightness(){
	return (float) _wasgo_Environment_wrapper_get_adjustment_brightness(wasgo_id);
}
Texture Environment::get_adjustment_color_correction(){
	return Texture(_wasgo_Environment_wrapper_get_adjustment_color_correction(wasgo_id));
}
float Environment::get_adjustment_contrast(){
	return (float) _wasgo_Environment_wrapper_get_adjustment_contrast(wasgo_id);
}
float Environment::get_adjustment_saturation(){
	return (float) _wasgo_Environment_wrapper_get_adjustment_saturation(wasgo_id);
}
Color Environment::get_ambient_light_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Environment_wrapper_get_ambient_light_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
float Environment::get_ambient_light_energy(){
	return (float) _wasgo_Environment_wrapper_get_ambient_light_energy(wasgo_id);
}
float Environment::get_ambient_light_sky_contribution(){
	return (float) _wasgo_Environment_wrapper_get_ambient_light_sky_contribution(wasgo_id);
}
Environment::BGMode Environment::get_background(){
	return Environment::BGMode(_wasgo_Environment_wrapper_get_background(wasgo_id));
}
Color Environment::get_bg_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Environment_wrapper_get_bg_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
float Environment::get_bg_energy(){
	return (float) _wasgo_Environment_wrapper_get_bg_energy(wasgo_id);
}
int Environment::get_camera_feed_id(){
	return (int) _wasgo_Environment_wrapper_get_camera_feed_id(wasgo_id);
}
int Environment::get_canvas_max_layer(){
	return (int) _wasgo_Environment_wrapper_get_canvas_max_layer(wasgo_id);
}
float Environment::get_dof_blur_far_amount(){
	return (float) _wasgo_Environment_wrapper_get_dof_blur_far_amount(wasgo_id);
}
float Environment::get_dof_blur_far_distance(){
	return (float) _wasgo_Environment_wrapper_get_dof_blur_far_distance(wasgo_id);
}
Environment::DOFBlurQuality Environment::get_dof_blur_far_quality(){
	return Environment::DOFBlurQuality(_wasgo_Environment_wrapper_get_dof_blur_far_quality(wasgo_id));
}
float Environment::get_dof_blur_far_transition(){
	return (float) _wasgo_Environment_wrapper_get_dof_blur_far_transition(wasgo_id);
}
float Environment::get_dof_blur_near_amount(){
	return (float) _wasgo_Environment_wrapper_get_dof_blur_near_amount(wasgo_id);
}
float Environment::get_dof_blur_near_distance(){
	return (float) _wasgo_Environment_wrapper_get_dof_blur_near_distance(wasgo_id);
}
Environment::DOFBlurQuality Environment::get_dof_blur_near_quality(){
	return Environment::DOFBlurQuality(_wasgo_Environment_wrapper_get_dof_blur_near_quality(wasgo_id));
}
float Environment::get_dof_blur_near_transition(){
	return (float) _wasgo_Environment_wrapper_get_dof_blur_near_transition(wasgo_id);
}
Color Environment::get_fog_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Environment_wrapper_get_fog_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
float Environment::get_fog_depth_begin(){
	return (float) _wasgo_Environment_wrapper_get_fog_depth_begin(wasgo_id);
}
float Environment::get_fog_depth_curve(){
	return (float) _wasgo_Environment_wrapper_get_fog_depth_curve(wasgo_id);
}
float Environment::get_fog_depth_end(){
	return (float) _wasgo_Environment_wrapper_get_fog_depth_end(wasgo_id);
}
float Environment::get_fog_height_curve(){
	return (float) _wasgo_Environment_wrapper_get_fog_height_curve(wasgo_id);
}
float Environment::get_fog_height_max(){
	return (float) _wasgo_Environment_wrapper_get_fog_height_max(wasgo_id);
}
float Environment::get_fog_height_min(){
	return (float) _wasgo_Environment_wrapper_get_fog_height_min(wasgo_id);
}
float Environment::get_fog_sun_amount(){
	return (float) _wasgo_Environment_wrapper_get_fog_sun_amount(wasgo_id);
}
Color Environment::get_fog_sun_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Environment_wrapper_get_fog_sun_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
float Environment::get_fog_transmit_curve(){
	return (float) _wasgo_Environment_wrapper_get_fog_transmit_curve(wasgo_id);
}
Environment::GlowBlendMode Environment::get_glow_blend_mode(){
	return Environment::GlowBlendMode(_wasgo_Environment_wrapper_get_glow_blend_mode(wasgo_id));
}
float Environment::get_glow_bloom(){
	return (float) _wasgo_Environment_wrapper_get_glow_bloom(wasgo_id);
}
float Environment::get_glow_hdr_bleed_scale(){
	return (float) _wasgo_Environment_wrapper_get_glow_hdr_bleed_scale(wasgo_id);
}
float Environment::get_glow_hdr_bleed_threshold(){
	return (float) _wasgo_Environment_wrapper_get_glow_hdr_bleed_threshold(wasgo_id);
}
float Environment::get_glow_hdr_luminance_cap(){
	return (float) _wasgo_Environment_wrapper_get_glow_hdr_luminance_cap(wasgo_id);
}
float Environment::get_glow_intensity(){
	return (float) _wasgo_Environment_wrapper_get_glow_intensity(wasgo_id);
}
float Environment::get_glow_strength(){
	return (float) _wasgo_Environment_wrapper_get_glow_strength(wasgo_id);
}
Sky Environment::get_sky(){
	return Sky(_wasgo_Environment_wrapper_get_sky(wasgo_id));
}
float Environment::get_sky_custom_fov(){
	return (float) _wasgo_Environment_wrapper_get_sky_custom_fov(wasgo_id);
}
Basis Environment::get_sky_orientation(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 40;
    uint8_t wasgo_ret_buffer[40];
    _wasgo_Environment_wrapper_get_sky_orientation(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Basis) wasgo_ret;
    
}
Vector3 Environment::get_sky_rotation(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Environment_wrapper_get_sky_rotation(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 Environment::get_sky_rotation_degrees(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_Environment_wrapper_get_sky_rotation_degrees(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
float Environment::get_ssao_ao_channel_affect(){
	return (float) _wasgo_Environment_wrapper_get_ssao_ao_channel_affect(wasgo_id);
}
float Environment::get_ssao_bias(){
	return (float) _wasgo_Environment_wrapper_get_ssao_bias(wasgo_id);
}
Environment::SSAOBlur Environment::get_ssao_blur(){
	return Environment::SSAOBlur(_wasgo_Environment_wrapper_get_ssao_blur(wasgo_id));
}
Color Environment::get_ssao_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Environment_wrapper_get_ssao_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
float Environment::get_ssao_direct_light_affect(){
	return (float) _wasgo_Environment_wrapper_get_ssao_direct_light_affect(wasgo_id);
}
float Environment::get_ssao_edge_sharpness(){
	return (float) _wasgo_Environment_wrapper_get_ssao_edge_sharpness(wasgo_id);
}
float Environment::get_ssao_intensity(){
	return (float) _wasgo_Environment_wrapper_get_ssao_intensity(wasgo_id);
}
float Environment::get_ssao_intensity2(){
	return (float) _wasgo_Environment_wrapper_get_ssao_intensity2(wasgo_id);
}
Environment::SSAOQuality Environment::get_ssao_quality(){
	return Environment::SSAOQuality(_wasgo_Environment_wrapper_get_ssao_quality(wasgo_id));
}
float Environment::get_ssao_radius(){
	return (float) _wasgo_Environment_wrapper_get_ssao_radius(wasgo_id);
}
float Environment::get_ssao_radius2(){
	return (float) _wasgo_Environment_wrapper_get_ssao_radius2(wasgo_id);
}
float Environment::get_ssr_depth_tolerance(){
	return (float) _wasgo_Environment_wrapper_get_ssr_depth_tolerance(wasgo_id);
}
float Environment::get_ssr_fade_in(){
	return (float) _wasgo_Environment_wrapper_get_ssr_fade_in(wasgo_id);
}
float Environment::get_ssr_fade_out(){
	return (float) _wasgo_Environment_wrapper_get_ssr_fade_out(wasgo_id);
}
int Environment::get_ssr_max_steps(){
	return (int) _wasgo_Environment_wrapper_get_ssr_max_steps(wasgo_id);
}
bool Environment::get_tonemap_auto_exposure(){
	return (bool) _wasgo_Environment_wrapper_get_tonemap_auto_exposure(wasgo_id);
}
float Environment::get_tonemap_auto_exposure_grey(){
	return (float) _wasgo_Environment_wrapper_get_tonemap_auto_exposure_grey(wasgo_id);
}
float Environment::get_tonemap_auto_exposure_max(){
	return (float) _wasgo_Environment_wrapper_get_tonemap_auto_exposure_max(wasgo_id);
}
float Environment::get_tonemap_auto_exposure_min(){
	return (float) _wasgo_Environment_wrapper_get_tonemap_auto_exposure_min(wasgo_id);
}
float Environment::get_tonemap_auto_exposure_speed(){
	return (float) _wasgo_Environment_wrapper_get_tonemap_auto_exposure_speed(wasgo_id);
}
float Environment::get_tonemap_exposure(){
	return (float) _wasgo_Environment_wrapper_get_tonemap_exposure(wasgo_id);
}
float Environment::get_tonemap_white(){
	return (float) _wasgo_Environment_wrapper_get_tonemap_white(wasgo_id);
}
Environment::ToneMapper Environment::get_tonemapper(){
	return Environment::ToneMapper(_wasgo_Environment_wrapper_get_tonemapper(wasgo_id));
}
bool Environment::is_adjustment_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_adjustment_enabled(wasgo_id);
}
bool Environment::is_dof_blur_far_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_dof_blur_far_enabled(wasgo_id);
}
bool Environment::is_dof_blur_near_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_dof_blur_near_enabled(wasgo_id);
}
bool Environment::is_fog_depth_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_fog_depth_enabled(wasgo_id);
}
bool Environment::is_fog_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_fog_enabled(wasgo_id);
}
bool Environment::is_fog_height_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_fog_height_enabled(wasgo_id);
}
bool Environment::is_fog_transmit_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_fog_transmit_enabled(wasgo_id);
}
bool Environment::is_glow_bicubic_upscale_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_glow_bicubic_upscale_enabled(wasgo_id);
}
bool Environment::is_glow_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_glow_enabled(wasgo_id);
}
bool Environment::is_glow_level_enabled(int p_idx){
	return (bool) _wasgo_Environment_wrapper_is_glow_level_enabled(wasgo_id, p_idx);
}
bool Environment::is_ssao_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_ssao_enabled(wasgo_id);
}
bool Environment::is_ssr_enabled(){
	return (bool) _wasgo_Environment_wrapper_is_ssr_enabled(wasgo_id);
}
bool Environment::is_ssr_rough(){
	return (bool) _wasgo_Environment_wrapper_is_ssr_rough(wasgo_id);
}
void Environment::set_adjustment_brightness(float p_brightness){
	_wasgo_Environment_wrapper_set_adjustment_brightness(wasgo_id, p_brightness);
}
void Environment::set_adjustment_color_correction(Texture p_color_correction){
	_wasgo_Environment_wrapper_set_adjustment_color_correction(wasgo_id, p_color_correction._get_wasgo_id());
}
void Environment::set_adjustment_contrast(float p_contrast){
	_wasgo_Environment_wrapper_set_adjustment_contrast(wasgo_id, p_contrast);
}
void Environment::set_adjustment_enable(bool p_enabled){
	_wasgo_Environment_wrapper_set_adjustment_enable(wasgo_id, p_enabled);
}
void Environment::set_adjustment_saturation(float p_saturation){
	_wasgo_Environment_wrapper_set_adjustment_saturation(wasgo_id, p_saturation);
}
void Environment::set_ambient_light_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_Environment_wrapper_set_ambient_light_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void Environment::set_ambient_light_energy(float p_energy){
	_wasgo_Environment_wrapper_set_ambient_light_energy(wasgo_id, p_energy);
}
void Environment::set_ambient_light_sky_contribution(float p_energy){
	_wasgo_Environment_wrapper_set_ambient_light_sky_contribution(wasgo_id, p_energy);
}
void Environment::set_background(Environment::BGMode p_mode){
	_wasgo_Environment_wrapper_set_background(wasgo_id, p_mode._get_wasgo_id());
}
void Environment::set_bg_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_Environment_wrapper_set_bg_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void Environment::set_bg_energy(float p_energy){
	_wasgo_Environment_wrapper_set_bg_energy(wasgo_id, p_energy);
}
void Environment::set_camera_feed_id(int p_camera_feed_id){
	_wasgo_Environment_wrapper_set_camera_feed_id(wasgo_id, p_camera_feed_id);
}
void Environment::set_canvas_max_layer(int p_layer){
	_wasgo_Environment_wrapper_set_canvas_max_layer(wasgo_id, p_layer);
}
void Environment::set_dof_blur_far_amount(float p_intensity){
	_wasgo_Environment_wrapper_set_dof_blur_far_amount(wasgo_id, p_intensity);
}
void Environment::set_dof_blur_far_distance(float p_intensity){
	_wasgo_Environment_wrapper_set_dof_blur_far_distance(wasgo_id, p_intensity);
}
void Environment::set_dof_blur_far_enabled(bool p_enabled){
	_wasgo_Environment_wrapper_set_dof_blur_far_enabled(wasgo_id, p_enabled);
}
void Environment::set_dof_blur_far_quality(Environment::DOFBlurQuality p_intensity){
	_wasgo_Environment_wrapper_set_dof_blur_far_quality(wasgo_id, p_intensity._get_wasgo_id());
}
void Environment::set_dof_blur_far_transition(float p_intensity){
	_wasgo_Environment_wrapper_set_dof_blur_far_transition(wasgo_id, p_intensity);
}
void Environment::set_dof_blur_near_amount(float p_intensity){
	_wasgo_Environment_wrapper_set_dof_blur_near_amount(wasgo_id, p_intensity);
}
void Environment::set_dof_blur_near_distance(float p_intensity){
	_wasgo_Environment_wrapper_set_dof_blur_near_distance(wasgo_id, p_intensity);
}
void Environment::set_dof_blur_near_enabled(bool p_enabled){
	_wasgo_Environment_wrapper_set_dof_blur_near_enabled(wasgo_id, p_enabled);
}
void Environment::set_dof_blur_near_quality(Environment::DOFBlurQuality p_level){
	_wasgo_Environment_wrapper_set_dof_blur_near_quality(wasgo_id, p_level._get_wasgo_id());
}
void Environment::set_dof_blur_near_transition(float p_intensity){
	_wasgo_Environment_wrapper_set_dof_blur_near_transition(wasgo_id, p_intensity);
}
void Environment::set_fog_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_Environment_wrapper_set_fog_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void Environment::set_fog_depth_begin(float p_distance){
	_wasgo_Environment_wrapper_set_fog_depth_begin(wasgo_id, p_distance);
}
void Environment::set_fog_depth_curve(float p_curve){
	_wasgo_Environment_wrapper_set_fog_depth_curve(wasgo_id, p_curve);
}
void Environment::set_fog_depth_enabled(bool p_enabled){
	_wasgo_Environment_wrapper_set_fog_depth_enabled(wasgo_id, p_enabled);
}
void Environment::set_fog_depth_end(float p_distance){
	_wasgo_Environment_wrapper_set_fog_depth_end(wasgo_id, p_distance);
}
void Environment::set_fog_enabled(bool p_enabled){
	_wasgo_Environment_wrapper_set_fog_enabled(wasgo_id, p_enabled);
}
void Environment::set_fog_height_curve(float p_curve){
	_wasgo_Environment_wrapper_set_fog_height_curve(wasgo_id, p_curve);
}
void Environment::set_fog_height_enabled(bool p_enabled){
	_wasgo_Environment_wrapper_set_fog_height_enabled(wasgo_id, p_enabled);
}
void Environment::set_fog_height_max(float p_height){
	_wasgo_Environment_wrapper_set_fog_height_max(wasgo_id, p_height);
}
void Environment::set_fog_height_min(float p_height){
	_wasgo_Environment_wrapper_set_fog_height_min(wasgo_id, p_height);
}
void Environment::set_fog_sun_amount(float p_amount){
	_wasgo_Environment_wrapper_set_fog_sun_amount(wasgo_id, p_amount);
}
void Environment::set_fog_sun_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_Environment_wrapper_set_fog_sun_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void Environment::set_fog_transmit_curve(float p_curve){
	_wasgo_Environment_wrapper_set_fog_transmit_curve(wasgo_id, p_curve);
}
void Environment::set_fog_transmit_enabled(bool p_enabled){
	_wasgo_Environment_wrapper_set_fog_transmit_enabled(wasgo_id, p_enabled);
}
void Environment::set_glow_bicubic_upscale(bool p_enabled){
	_wasgo_Environment_wrapper_set_glow_bicubic_upscale(wasgo_id, p_enabled);
}
void Environment::set_glow_blend_mode(Environment::GlowBlendMode p_mode){
	_wasgo_Environment_wrapper_set_glow_blend_mode(wasgo_id, p_mode._get_wasgo_id());
}
void Environment::set_glow_bloom(float p_amount){
	_wasgo_Environment_wrapper_set_glow_bloom(wasgo_id, p_amount);
}
void Environment::set_glow_enabled(bool p_enabled){
	_wasgo_Environment_wrapper_set_glow_enabled(wasgo_id, p_enabled);
}
void Environment::set_glow_hdr_bleed_scale(float p_scale){
	_wasgo_Environment_wrapper_set_glow_hdr_bleed_scale(wasgo_id, p_scale);
}
void Environment::set_glow_hdr_bleed_threshold(float p_threshold){
	_wasgo_Environment_wrapper_set_glow_hdr_bleed_threshold(wasgo_id, p_threshold);
}
void Environment::set_glow_hdr_luminance_cap(float p_amount){
	_wasgo_Environment_wrapper_set_glow_hdr_luminance_cap(wasgo_id, p_amount);
}
void Environment::set_glow_intensity(float p_intensity){
	_wasgo_Environment_wrapper_set_glow_intensity(wasgo_id, p_intensity);
}
void Environment::set_glow_level(int p_idx, bool p_enabled){
	_wasgo_Environment_wrapper_set_glow_level(wasgo_id, p_idx, p_enabled);
}
void Environment::set_glow_strength(float p_strength){
	_wasgo_Environment_wrapper_set_glow_strength(wasgo_id, p_strength);
}
void Environment::set_sky(Sky p_sky){
	_wasgo_Environment_wrapper_set_sky(wasgo_id, p_sky._get_wasgo_id());
}
void Environment::set_sky_custom_fov(float p_scale){
	_wasgo_Environment_wrapper_set_sky_custom_fov(wasgo_id, p_scale);
}
void Environment::set_sky_orientation(Basis p_orientation){

    Variant wasgo_var_orientation = p_orientation;
    uint8_t wasgo_buffer_orientation[40];
    int wasgo_size_orientation = 40;
    encode_variant(wasgo_var_orientation, wasgo_buffer_orientation, wasgo_size_orientation);
    
	_wasgo_Environment_wrapper_set_sky_orientation(wasgo_id, wasgo_buffer_orientation, wasgo_size_orientation);
}
void Environment::set_sky_rotation(Vector3 p_euler_radians){

    Variant wasgo_var_euler_radians = p_euler_radians;
    uint8_t wasgo_buffer_euler_radians[16];
    int wasgo_size_euler_radians = 16;
    encode_variant(wasgo_var_euler_radians, wasgo_buffer_euler_radians, wasgo_size_euler_radians);
    
	_wasgo_Environment_wrapper_set_sky_rotation(wasgo_id, wasgo_buffer_euler_radians, wasgo_size_euler_radians);
}
void Environment::set_sky_rotation_degrees(Vector3 p_euler_degrees){

    Variant wasgo_var_euler_degrees = p_euler_degrees;
    uint8_t wasgo_buffer_euler_degrees[16];
    int wasgo_size_euler_degrees = 16;
    encode_variant(wasgo_var_euler_degrees, wasgo_buffer_euler_degrees, wasgo_size_euler_degrees);
    
	_wasgo_Environment_wrapper_set_sky_rotation_degrees(wasgo_id, wasgo_buffer_euler_degrees, wasgo_size_euler_degrees);
}
void Environment::set_ssao_ao_channel_affect(float p_amount){
	_wasgo_Environment_wrapper_set_ssao_ao_channel_affect(wasgo_id, p_amount);
}
void Environment::set_ssao_bias(float p_bias){
	_wasgo_Environment_wrapper_set_ssao_bias(wasgo_id, p_bias);
}
void Environment::set_ssao_blur(Environment::SSAOBlur p_mode){
	_wasgo_Environment_wrapper_set_ssao_blur(wasgo_id, p_mode._get_wasgo_id());
}
void Environment::set_ssao_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_Environment_wrapper_set_ssao_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void Environment::set_ssao_direct_light_affect(float p_amount){
	_wasgo_Environment_wrapper_set_ssao_direct_light_affect(wasgo_id, p_amount);
}
void Environment::set_ssao_edge_sharpness(float p_edge_sharpness){
	_wasgo_Environment_wrapper_set_ssao_edge_sharpness(wasgo_id, p_edge_sharpness);
}
void Environment::set_ssao_enabled(bool p_enabled){
	_wasgo_Environment_wrapper_set_ssao_enabled(wasgo_id, p_enabled);
}
void Environment::set_ssao_intensity(float p_intensity){
	_wasgo_Environment_wrapper_set_ssao_intensity(wasgo_id, p_intensity);
}
void Environment::set_ssao_intensity2(float p_intensity){
	_wasgo_Environment_wrapper_set_ssao_intensity2(wasgo_id, p_intensity);
}
void Environment::set_ssao_quality(Environment::SSAOQuality p_quality){
	_wasgo_Environment_wrapper_set_ssao_quality(wasgo_id, p_quality._get_wasgo_id());
}
void Environment::set_ssao_radius(float p_radius){
	_wasgo_Environment_wrapper_set_ssao_radius(wasgo_id, p_radius);
}
void Environment::set_ssao_radius2(float p_radius){
	_wasgo_Environment_wrapper_set_ssao_radius2(wasgo_id, p_radius);
}
void Environment::set_ssr_depth_tolerance(float p_depth_tolerance){
	_wasgo_Environment_wrapper_set_ssr_depth_tolerance(wasgo_id, p_depth_tolerance);
}
void Environment::set_ssr_enabled(bool p_enabled){
	_wasgo_Environment_wrapper_set_ssr_enabled(wasgo_id, p_enabled);
}
void Environment::set_ssr_fade_in(float p_fade_in){
	_wasgo_Environment_wrapper_set_ssr_fade_in(wasgo_id, p_fade_in);
}
void Environment::set_ssr_fade_out(float p_fade_out){
	_wasgo_Environment_wrapper_set_ssr_fade_out(wasgo_id, p_fade_out);
}
void Environment::set_ssr_max_steps(int p_max_steps){
	_wasgo_Environment_wrapper_set_ssr_max_steps(wasgo_id, p_max_steps);
}
void Environment::set_ssr_rough(bool p_rough){
	_wasgo_Environment_wrapper_set_ssr_rough(wasgo_id, p_rough);
}
void Environment::set_tonemap_auto_exposure(bool p_auto_exposure){
	_wasgo_Environment_wrapper_set_tonemap_auto_exposure(wasgo_id, p_auto_exposure);
}
void Environment::set_tonemap_auto_exposure_grey(float p_exposure_grey){
	_wasgo_Environment_wrapper_set_tonemap_auto_exposure_grey(wasgo_id, p_exposure_grey);
}
void Environment::set_tonemap_auto_exposure_max(float p_exposure_max){
	_wasgo_Environment_wrapper_set_tonemap_auto_exposure_max(wasgo_id, p_exposure_max);
}
void Environment::set_tonemap_auto_exposure_min(float p_exposure_min){
	_wasgo_Environment_wrapper_set_tonemap_auto_exposure_min(wasgo_id, p_exposure_min);
}
void Environment::set_tonemap_auto_exposure_speed(float p_exposure_speed){
	_wasgo_Environment_wrapper_set_tonemap_auto_exposure_speed(wasgo_id, p_exposure_speed);
}
void Environment::set_tonemap_exposure(float p_exposure){
	_wasgo_Environment_wrapper_set_tonemap_exposure(wasgo_id, p_exposure);
}
void Environment::set_tonemap_white(float p_white){
	_wasgo_Environment_wrapper_set_tonemap_white(wasgo_id, p_white);
}
void Environment::set_tonemapper(Environment::ToneMapper p_mode){
	_wasgo_Environment_wrapper_set_tonemapper(wasgo_id, p_mode._get_wasgo_id());
}

Environment::Environment(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
Environment::Environment(Resource other) : Resource(other._get_wasgo_id()){
}
Environment::Environment():Resource(){
}
Environment Environment::new_instance(){
    return Environment(_wasgo_Environment_constructor());
}
WasGoID Environment::_get_wasgo_id(){
    return wasgo_id;
}
Environment::operator bool(){
    return (bool) wasgo_id;
}
