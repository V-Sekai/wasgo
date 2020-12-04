/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SpatialMaterial.h"
Color SpatialMaterial::get_albedo(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_SpatialMaterial_wrapper_get_albedo(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
float SpatialMaterial::get_alpha_scissor_threshold(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_alpha_scissor_threshold(wasgo_id);
}
float SpatialMaterial::get_anisotropy(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_anisotropy(wasgo_id);
}
float SpatialMaterial::get_ao_light_affect(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_ao_light_affect(wasgo_id);
}
SpatialMaterial::TextureChannel SpatialMaterial::get_ao_texture_channel(){
	return SpatialMaterial::TextureChannel(_wasgo_SpatialMaterial_wrapper_get_ao_texture_channel(wasgo_id));
}
SpatialMaterial::BillboardMode SpatialMaterial::get_billboard_mode(){
	return SpatialMaterial::BillboardMode(_wasgo_SpatialMaterial_wrapper_get_billboard_mode(wasgo_id));
}
SpatialMaterial::BlendMode SpatialMaterial::get_blend_mode(){
	return SpatialMaterial::BlendMode(_wasgo_SpatialMaterial_wrapper_get_blend_mode(wasgo_id));
}
float SpatialMaterial::get_clearcoat(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_clearcoat(wasgo_id);
}
float SpatialMaterial::get_clearcoat_gloss(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_clearcoat_gloss(wasgo_id);
}
SpatialMaterial::CullMode SpatialMaterial::get_cull_mode(){
	return SpatialMaterial::CullMode(_wasgo_SpatialMaterial_wrapper_get_cull_mode(wasgo_id));
}
bool SpatialMaterial::get_depth_deep_parallax_flip_binormal(){
	return (bool) _wasgo_SpatialMaterial_wrapper_get_depth_deep_parallax_flip_binormal(wasgo_id);
}
bool SpatialMaterial::get_depth_deep_parallax_flip_tangent(){
	return (bool) _wasgo_SpatialMaterial_wrapper_get_depth_deep_parallax_flip_tangent(wasgo_id);
}
int SpatialMaterial::get_depth_deep_parallax_max_layers(){
	return (int) _wasgo_SpatialMaterial_wrapper_get_depth_deep_parallax_max_layers(wasgo_id);
}
int SpatialMaterial::get_depth_deep_parallax_min_layers(){
	return (int) _wasgo_SpatialMaterial_wrapper_get_depth_deep_parallax_min_layers(wasgo_id);
}
SpatialMaterial::DepthDrawMode SpatialMaterial::get_depth_draw_mode(){
	return SpatialMaterial::DepthDrawMode(_wasgo_SpatialMaterial_wrapper_get_depth_draw_mode(wasgo_id));
}
float SpatialMaterial::get_depth_scale(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_depth_scale(wasgo_id);
}
SpatialMaterial::BlendMode SpatialMaterial::get_detail_blend_mode(){
	return SpatialMaterial::BlendMode(_wasgo_SpatialMaterial_wrapper_get_detail_blend_mode(wasgo_id));
}
SpatialMaterial::DetailUV SpatialMaterial::get_detail_uv(){
	return SpatialMaterial::DetailUV(_wasgo_SpatialMaterial_wrapper_get_detail_uv(wasgo_id));
}
SpatialMaterial::DiffuseMode SpatialMaterial::get_diffuse_mode(){
	return SpatialMaterial::DiffuseMode(_wasgo_SpatialMaterial_wrapper_get_diffuse_mode(wasgo_id));
}
SpatialMaterial::DistanceFadeMode SpatialMaterial::get_distance_fade(){
	return SpatialMaterial::DistanceFadeMode(_wasgo_SpatialMaterial_wrapper_get_distance_fade(wasgo_id));
}
float SpatialMaterial::get_distance_fade_max_distance(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_distance_fade_max_distance(wasgo_id);
}
float SpatialMaterial::get_distance_fade_min_distance(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_distance_fade_min_distance(wasgo_id);
}
Color SpatialMaterial::get_emission(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_SpatialMaterial_wrapper_get_emission(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
float SpatialMaterial::get_emission_energy(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_emission_energy(wasgo_id);
}
SpatialMaterial::EmissionOperator SpatialMaterial::get_emission_operator(){
	return SpatialMaterial::EmissionOperator(_wasgo_SpatialMaterial_wrapper_get_emission_operator(wasgo_id));
}
bool SpatialMaterial::get_feature(SpatialMaterial::Feature p_feature){
	return (bool) _wasgo_SpatialMaterial_wrapper_get_feature(wasgo_id, p_feature._get_wasgo_id());
}
bool SpatialMaterial::get_flag(SpatialMaterial::Flags p_flag){
	return (bool) _wasgo_SpatialMaterial_wrapper_get_flag(wasgo_id, p_flag._get_wasgo_id());
}
float SpatialMaterial::get_grow(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_grow(wasgo_id);
}
float SpatialMaterial::get_line_width(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_line_width(wasgo_id);
}
float SpatialMaterial::get_metallic(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_metallic(wasgo_id);
}
SpatialMaterial::TextureChannel SpatialMaterial::get_metallic_texture_channel(){
	return SpatialMaterial::TextureChannel(_wasgo_SpatialMaterial_wrapper_get_metallic_texture_channel(wasgo_id));
}
float SpatialMaterial::get_normal_scale(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_normal_scale(wasgo_id);
}
int SpatialMaterial::get_particles_anim_h_frames(){
	return (int) _wasgo_SpatialMaterial_wrapper_get_particles_anim_h_frames(wasgo_id);
}
bool SpatialMaterial::get_particles_anim_loop(){
	return (bool) _wasgo_SpatialMaterial_wrapper_get_particles_anim_loop(wasgo_id);
}
int SpatialMaterial::get_particles_anim_v_frames(){
	return (int) _wasgo_SpatialMaterial_wrapper_get_particles_anim_v_frames(wasgo_id);
}
float SpatialMaterial::get_point_size(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_point_size(wasgo_id);
}
float SpatialMaterial::get_proximity_fade_distance(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_proximity_fade_distance(wasgo_id);
}
float SpatialMaterial::get_refraction(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_refraction(wasgo_id);
}
SpatialMaterial::TextureChannel SpatialMaterial::get_refraction_texture_channel(){
	return SpatialMaterial::TextureChannel(_wasgo_SpatialMaterial_wrapper_get_refraction_texture_channel(wasgo_id));
}
float SpatialMaterial::get_rim(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_rim(wasgo_id);
}
float SpatialMaterial::get_rim_tint(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_rim_tint(wasgo_id);
}
float SpatialMaterial::get_roughness(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_roughness(wasgo_id);
}
SpatialMaterial::TextureChannel SpatialMaterial::get_roughness_texture_channel(){
	return SpatialMaterial::TextureChannel(_wasgo_SpatialMaterial_wrapper_get_roughness_texture_channel(wasgo_id));
}
float SpatialMaterial::get_specular(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_specular(wasgo_id);
}
SpatialMaterial::SpecularMode SpatialMaterial::get_specular_mode(){
	return SpatialMaterial::SpecularMode(_wasgo_SpatialMaterial_wrapper_get_specular_mode(wasgo_id));
}
float SpatialMaterial::get_subsurface_scattering_strength(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_subsurface_scattering_strength(wasgo_id);
}
Texture SpatialMaterial::get_texture(SpatialMaterial::TextureParam p_param){
	return Texture(_wasgo_SpatialMaterial_wrapper_get_texture(wasgo_id, p_param._get_wasgo_id()));
}
Color SpatialMaterial::get_transmission(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_SpatialMaterial_wrapper_get_transmission(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Color) wasgo_ret;
    
}
Vector3 SpatialMaterial::get_uv1_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_SpatialMaterial_wrapper_get_uv1_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 SpatialMaterial::get_uv1_scale(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_SpatialMaterial_wrapper_get_uv1_scale(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
float SpatialMaterial::get_uv1_triplanar_blend_sharpness(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_uv1_triplanar_blend_sharpness(wasgo_id);
}
Vector3 SpatialMaterial::get_uv2_offset(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_SpatialMaterial_wrapper_get_uv2_offset(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
Vector3 SpatialMaterial::get_uv2_scale(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_SpatialMaterial_wrapper_get_uv2_scale(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector3) wasgo_ret;
    
}
float SpatialMaterial::get_uv2_triplanar_blend_sharpness(){
	return (float) _wasgo_SpatialMaterial_wrapper_get_uv2_triplanar_blend_sharpness(wasgo_id);
}
bool SpatialMaterial::is_depth_deep_parallax_enabled(){
	return (bool) _wasgo_SpatialMaterial_wrapper_is_depth_deep_parallax_enabled(wasgo_id);
}
bool SpatialMaterial::is_grow_enabled(){
	return (bool) _wasgo_SpatialMaterial_wrapper_is_grow_enabled(wasgo_id);
}
bool SpatialMaterial::is_proximity_fade_enabled(){
	return (bool) _wasgo_SpatialMaterial_wrapper_is_proximity_fade_enabled(wasgo_id);
}
void SpatialMaterial::set_albedo(Color p_albedo){

    Variant wasgo_var_albedo = p_albedo;
    uint8_t wasgo_buffer_albedo[20];
    int wasgo_size_albedo = 20;
    encode_variant(wasgo_var_albedo, wasgo_buffer_albedo, wasgo_size_albedo);
    
	_wasgo_SpatialMaterial_wrapper_set_albedo(wasgo_id, wasgo_buffer_albedo, wasgo_size_albedo);
}
void SpatialMaterial::set_alpha_scissor_threshold(float p_threshold){
	_wasgo_SpatialMaterial_wrapper_set_alpha_scissor_threshold(wasgo_id, p_threshold);
}
void SpatialMaterial::set_anisotropy(float p_anisotropy){
	_wasgo_SpatialMaterial_wrapper_set_anisotropy(wasgo_id, p_anisotropy);
}
void SpatialMaterial::set_ao_light_affect(float p_amount){
	_wasgo_SpatialMaterial_wrapper_set_ao_light_affect(wasgo_id, p_amount);
}
void SpatialMaterial::set_ao_texture_channel(SpatialMaterial::TextureChannel p_channel){
	_wasgo_SpatialMaterial_wrapper_set_ao_texture_channel(wasgo_id, p_channel._get_wasgo_id());
}
void SpatialMaterial::set_billboard_mode(SpatialMaterial::BillboardMode p_mode){
	_wasgo_SpatialMaterial_wrapper_set_billboard_mode(wasgo_id, p_mode._get_wasgo_id());
}
void SpatialMaterial::set_blend_mode(SpatialMaterial::BlendMode p_blend_mode){
	_wasgo_SpatialMaterial_wrapper_set_blend_mode(wasgo_id, p_blend_mode._get_wasgo_id());
}
void SpatialMaterial::set_clearcoat(float p_clearcoat){
	_wasgo_SpatialMaterial_wrapper_set_clearcoat(wasgo_id, p_clearcoat);
}
void SpatialMaterial::set_clearcoat_gloss(float p_clearcoat_gloss){
	_wasgo_SpatialMaterial_wrapper_set_clearcoat_gloss(wasgo_id, p_clearcoat_gloss);
}
void SpatialMaterial::set_cull_mode(SpatialMaterial::CullMode p_cull_mode){
	_wasgo_SpatialMaterial_wrapper_set_cull_mode(wasgo_id, p_cull_mode._get_wasgo_id());
}
void SpatialMaterial::set_depth_deep_parallax(bool p_enable){
	_wasgo_SpatialMaterial_wrapper_set_depth_deep_parallax(wasgo_id, p_enable);
}
void SpatialMaterial::set_depth_deep_parallax_flip_binormal(bool p_flip){
	_wasgo_SpatialMaterial_wrapper_set_depth_deep_parallax_flip_binormal(wasgo_id, p_flip);
}
void SpatialMaterial::set_depth_deep_parallax_flip_tangent(bool p_flip){
	_wasgo_SpatialMaterial_wrapper_set_depth_deep_parallax_flip_tangent(wasgo_id, p_flip);
}
void SpatialMaterial::set_depth_deep_parallax_max_layers(int p_layer){
	_wasgo_SpatialMaterial_wrapper_set_depth_deep_parallax_max_layers(wasgo_id, p_layer);
}
void SpatialMaterial::set_depth_deep_parallax_min_layers(int p_layer){
	_wasgo_SpatialMaterial_wrapper_set_depth_deep_parallax_min_layers(wasgo_id, p_layer);
}
void SpatialMaterial::set_depth_draw_mode(SpatialMaterial::DepthDrawMode p_depth_draw_mode){
	_wasgo_SpatialMaterial_wrapper_set_depth_draw_mode(wasgo_id, p_depth_draw_mode._get_wasgo_id());
}
void SpatialMaterial::set_depth_scale(float p_depth_scale){
	_wasgo_SpatialMaterial_wrapper_set_depth_scale(wasgo_id, p_depth_scale);
}
void SpatialMaterial::set_detail_blend_mode(SpatialMaterial::BlendMode p_detail_blend_mode){
	_wasgo_SpatialMaterial_wrapper_set_detail_blend_mode(wasgo_id, p_detail_blend_mode._get_wasgo_id());
}
void SpatialMaterial::set_detail_uv(SpatialMaterial::DetailUV p_detail_uv){
	_wasgo_SpatialMaterial_wrapper_set_detail_uv(wasgo_id, p_detail_uv._get_wasgo_id());
}
void SpatialMaterial::set_diffuse_mode(SpatialMaterial::DiffuseMode p_diffuse_mode){
	_wasgo_SpatialMaterial_wrapper_set_diffuse_mode(wasgo_id, p_diffuse_mode._get_wasgo_id());
}
void SpatialMaterial::set_distance_fade(SpatialMaterial::DistanceFadeMode p_mode){
	_wasgo_SpatialMaterial_wrapper_set_distance_fade(wasgo_id, p_mode._get_wasgo_id());
}
void SpatialMaterial::set_distance_fade_max_distance(float p_distance){
	_wasgo_SpatialMaterial_wrapper_set_distance_fade_max_distance(wasgo_id, p_distance);
}
void SpatialMaterial::set_distance_fade_min_distance(float p_distance){
	_wasgo_SpatialMaterial_wrapper_set_distance_fade_min_distance(wasgo_id, p_distance);
}
void SpatialMaterial::set_emission(Color p_emission){

    Variant wasgo_var_emission = p_emission;
    uint8_t wasgo_buffer_emission[20];
    int wasgo_size_emission = 20;
    encode_variant(wasgo_var_emission, wasgo_buffer_emission, wasgo_size_emission);
    
	_wasgo_SpatialMaterial_wrapper_set_emission(wasgo_id, wasgo_buffer_emission, wasgo_size_emission);
}
void SpatialMaterial::set_emission_energy(float p_emission_energy){
	_wasgo_SpatialMaterial_wrapper_set_emission_energy(wasgo_id, p_emission_energy);
}
void SpatialMaterial::set_emission_operator(SpatialMaterial::EmissionOperator p_operator){
	_wasgo_SpatialMaterial_wrapper_set_emission_operator(wasgo_id, p_operator._get_wasgo_id());
}
void SpatialMaterial::set_feature(SpatialMaterial::Feature p_feature, bool p_enable){
	_wasgo_SpatialMaterial_wrapper_set_feature(wasgo_id, p_feature._get_wasgo_id(), p_enable);
}
void SpatialMaterial::set_flag(SpatialMaterial::Flags p_flag, bool p_enable){
	_wasgo_SpatialMaterial_wrapper_set_flag(wasgo_id, p_flag._get_wasgo_id(), p_enable);
}
void SpatialMaterial::set_grow(float p_amount){
	_wasgo_SpatialMaterial_wrapper_set_grow(wasgo_id, p_amount);
}
void SpatialMaterial::set_grow_enabled(bool p_enable){
	_wasgo_SpatialMaterial_wrapper_set_grow_enabled(wasgo_id, p_enable);
}
void SpatialMaterial::set_line_width(float p_line_width){
	_wasgo_SpatialMaterial_wrapper_set_line_width(wasgo_id, p_line_width);
}
void SpatialMaterial::set_metallic(float p_metallic){
	_wasgo_SpatialMaterial_wrapper_set_metallic(wasgo_id, p_metallic);
}
void SpatialMaterial::set_metallic_texture_channel(SpatialMaterial::TextureChannel p_channel){
	_wasgo_SpatialMaterial_wrapper_set_metallic_texture_channel(wasgo_id, p_channel._get_wasgo_id());
}
void SpatialMaterial::set_normal_scale(float p_normal_scale){
	_wasgo_SpatialMaterial_wrapper_set_normal_scale(wasgo_id, p_normal_scale);
}
void SpatialMaterial::set_particles_anim_h_frames(int p_frames){
	_wasgo_SpatialMaterial_wrapper_set_particles_anim_h_frames(wasgo_id, p_frames);
}
void SpatialMaterial::set_particles_anim_loop(bool p_loop){
	_wasgo_SpatialMaterial_wrapper_set_particles_anim_loop(wasgo_id, p_loop);
}
void SpatialMaterial::set_particles_anim_v_frames(int p_frames){
	_wasgo_SpatialMaterial_wrapper_set_particles_anim_v_frames(wasgo_id, p_frames);
}
void SpatialMaterial::set_point_size(float p_point_size){
	_wasgo_SpatialMaterial_wrapper_set_point_size(wasgo_id, p_point_size);
}
void SpatialMaterial::set_proximity_fade(bool p_enabled){
	_wasgo_SpatialMaterial_wrapper_set_proximity_fade(wasgo_id, p_enabled);
}
void SpatialMaterial::set_proximity_fade_distance(float p_distance){
	_wasgo_SpatialMaterial_wrapper_set_proximity_fade_distance(wasgo_id, p_distance);
}
void SpatialMaterial::set_refraction(float p_refraction){
	_wasgo_SpatialMaterial_wrapper_set_refraction(wasgo_id, p_refraction);
}
void SpatialMaterial::set_refraction_texture_channel(SpatialMaterial::TextureChannel p_channel){
	_wasgo_SpatialMaterial_wrapper_set_refraction_texture_channel(wasgo_id, p_channel._get_wasgo_id());
}
void SpatialMaterial::set_rim(float p_rim){
	_wasgo_SpatialMaterial_wrapper_set_rim(wasgo_id, p_rim);
}
void SpatialMaterial::set_rim_tint(float p_rim_tint){
	_wasgo_SpatialMaterial_wrapper_set_rim_tint(wasgo_id, p_rim_tint);
}
void SpatialMaterial::set_roughness(float p_roughness){
	_wasgo_SpatialMaterial_wrapper_set_roughness(wasgo_id, p_roughness);
}
void SpatialMaterial::set_roughness_texture_channel(SpatialMaterial::TextureChannel p_channel){
	_wasgo_SpatialMaterial_wrapper_set_roughness_texture_channel(wasgo_id, p_channel._get_wasgo_id());
}
void SpatialMaterial::set_specular(float p_specular){
	_wasgo_SpatialMaterial_wrapper_set_specular(wasgo_id, p_specular);
}
void SpatialMaterial::set_specular_mode(SpatialMaterial::SpecularMode p_specular_mode){
	_wasgo_SpatialMaterial_wrapper_set_specular_mode(wasgo_id, p_specular_mode._get_wasgo_id());
}
void SpatialMaterial::set_subsurface_scattering_strength(float p_strength){
	_wasgo_SpatialMaterial_wrapper_set_subsurface_scattering_strength(wasgo_id, p_strength);
}
void SpatialMaterial::set_texture(SpatialMaterial::TextureParam p_param, Texture p_texture){
	_wasgo_SpatialMaterial_wrapper_set_texture(wasgo_id, p_param._get_wasgo_id(), p_texture._get_wasgo_id());
}
void SpatialMaterial::set_transmission(Color p_transmission){

    Variant wasgo_var_transmission = p_transmission;
    uint8_t wasgo_buffer_transmission[20];
    int wasgo_size_transmission = 20;
    encode_variant(wasgo_var_transmission, wasgo_buffer_transmission, wasgo_size_transmission);
    
	_wasgo_SpatialMaterial_wrapper_set_transmission(wasgo_id, wasgo_buffer_transmission, wasgo_size_transmission);
}
void SpatialMaterial::set_uv1_offset(Vector3 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[16];
    int wasgo_size_offset = 16;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_SpatialMaterial_wrapper_set_uv1_offset(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void SpatialMaterial::set_uv1_scale(Vector3 p_scale){

    Variant wasgo_var_scale = p_scale;
    uint8_t wasgo_buffer_scale[16];
    int wasgo_size_scale = 16;
    encode_variant(wasgo_var_scale, wasgo_buffer_scale, wasgo_size_scale);
    
	_wasgo_SpatialMaterial_wrapper_set_uv1_scale(wasgo_id, wasgo_buffer_scale, wasgo_size_scale);
}
void SpatialMaterial::set_uv1_triplanar_blend_sharpness(float p_sharpness){
	_wasgo_SpatialMaterial_wrapper_set_uv1_triplanar_blend_sharpness(wasgo_id, p_sharpness);
}
void SpatialMaterial::set_uv2_offset(Vector3 p_offset){

    Variant wasgo_var_offset = p_offset;
    uint8_t wasgo_buffer_offset[16];
    int wasgo_size_offset = 16;
    encode_variant(wasgo_var_offset, wasgo_buffer_offset, wasgo_size_offset);
    
	_wasgo_SpatialMaterial_wrapper_set_uv2_offset(wasgo_id, wasgo_buffer_offset, wasgo_size_offset);
}
void SpatialMaterial::set_uv2_scale(Vector3 p_scale){

    Variant wasgo_var_scale = p_scale;
    uint8_t wasgo_buffer_scale[16];
    int wasgo_size_scale = 16;
    encode_variant(wasgo_var_scale, wasgo_buffer_scale, wasgo_size_scale);
    
	_wasgo_SpatialMaterial_wrapper_set_uv2_scale(wasgo_id, wasgo_buffer_scale, wasgo_size_scale);
}
void SpatialMaterial::set_uv2_triplanar_blend_sharpness(float p_sharpness){
	_wasgo_SpatialMaterial_wrapper_set_uv2_triplanar_blend_sharpness(wasgo_id, p_sharpness);
}

SpatialMaterial::SpatialMaterial(WasGoID p_wasgo_id) : Material(p_wasgo_id){
}
SpatialMaterial::SpatialMaterial(Material other) : Material(other._get_wasgo_id()){
    wasgo_id = _wasgo_SpatialMaterial_constructor();
}
SpatialMaterial::new_instance(){
    return SpatialMaterial(_wasgo_SpatialMaterial_constructor());
}