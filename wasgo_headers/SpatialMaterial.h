/* THIS FILE IS GENERATED */
#ifndef SPATIALMATERIAL_H
#define SPATIALMATERIAL_H

#include "wasgo\wasgo.h"

#include "Vector3.h"
#include "Material.h"
#include "Color.h"
#include "Texture.h"
class SpatialMaterial : public Material{
public:
enum BillboardMode{
BILLBOARD_DISABLED,
BILLBOARD_ENABLED,
BILLBOARD_FIXED_Y,
BILLBOARD_PARTICLES
};
enum BlendMode{
BLEND_MODE_MIX,
BLEND_MODE_ADD,
BLEND_MODE_SUB,
BLEND_MODE_MUL
};
enum CullMode{
CULL_BACK,
CULL_FRONT,
CULL_DISABLED
};
enum DepthDrawMode{
DEPTH_DRAW_OPAQUE_ONLY,
DEPTH_DRAW_ALWAYS,
DEPTH_DRAW_DISABLED,
DEPTH_DRAW_ALPHA_OPAQUE_PREPASS
};
enum DetailUV{
DETAIL_UV_1,
DETAIL_UV_2
};
enum DiffuseMode{
DIFFUSE_BURLEY,
DIFFUSE_LAMBERT,
DIFFUSE_LAMBERT_WRAP,
DIFFUSE_OREN_NAYAR,
DIFFUSE_TOON
};
enum DistanceFadeMode{
DISTANCE_FADE_DISABLED,
DISTANCE_FADE_PIXEL_ALPHA,
DISTANCE_FADE_PIXEL_DITHER,
DISTANCE_FADE_OBJECT_DITHER
};
enum EmissionOperator{
EMISSION_OP_ADD,
EMISSION_OP_MULTIPLY
};
enum Feature{
FEATURE_TRANSPARENT,
FEATURE_EMISSION,
FEATURE_NORMAL_MAPPING,
FEATURE_RIM,
FEATURE_CLEARCOAT,
FEATURE_ANISOTROPY,
FEATURE_AMBIENT_OCCLUSION,
FEATURE_DEPTH_MAPPING,
FEATURE_SUBSURACE_SCATTERING,
FEATURE_TRANSMISSION,
FEATURE_REFRACTION,
FEATURE_DETAIL,
FEATURE_MAX
};
enum Flags{
FLAG_UNSHADED,
FLAG_USE_VERTEX_LIGHTING,
FLAG_DISABLE_DEPTH_TEST,
FLAG_ALBEDO_FROM_VERTEX_COLOR,
FLAG_SRGB_VERTEX_COLOR,
FLAG_USE_POINT_SIZE,
FLAG_FIXED_SIZE,
FLAG_BILLBOARD_KEEP_SCALE,
FLAG_UV1_USE_TRIPLANAR,
FLAG_UV2_USE_TRIPLANAR,
FLAG_AO_ON_UV2,
FLAG_EMISSION_ON_UV2,
FLAG_USE_ALPHA_SCISSOR,
FLAG_TRIPLANAR_USE_WORLD,
FLAG_ALBEDO_TEXTURE_FORCE_SRGB,
FLAG_DONT_RECEIVE_SHADOWS,
FLAG_DISABLE_AMBIENT_LIGHT,
FLAG_ENSURE_CORRECT_NORMALS,
FLAG_USE_SHADOW_TO_OPACITY,
FLAG_MAX
};
enum SpecularMode{
SPECULAR_SCHLICK_GGX,
SPECULAR_BLINN,
SPECULAR_PHONG,
SPECULAR_TOON,
SPECULAR_DISABLED
};
enum TextureChannel{
TEXTURE_CHANNEL_RED,
TEXTURE_CHANNEL_GREEN,
TEXTURE_CHANNEL_BLUE,
TEXTURE_CHANNEL_ALPHA,
TEXTURE_CHANNEL_GRAYSCALE
};
enum TextureParam{
TEXTURE_ALBEDO,
TEXTURE_METALLIC,
TEXTURE_ROUGHNESS,
TEXTURE_EMISSION,
TEXTURE_NORMAL,
TEXTURE_RIM,
TEXTURE_CLEARCOAT,
TEXTURE_FLOWMAP,
TEXTURE_AMBIENT_OCCLUSION,
TEXTURE_DEPTH,
TEXTURE_SUBSURFACE_SCATTERING,
TEXTURE_TRANSMISSION,
TEXTURE_REFRACTION,
TEXTURE_DETAIL_MASK,
TEXTURE_DETAIL_ALBEDO,
TEXTURE_DETAIL_NORMAL,
TEXTURE_MAX
};
Color get_albedo();
float get_alpha_scissor_threshold();
float get_anisotropy();
float get_ao_light_affect();
SpatialMaterial::TextureChannel get_ao_texture_channel();
SpatialMaterial::BillboardMode get_billboard_mode();
SpatialMaterial::BlendMode get_blend_mode();
float get_clearcoat();
float get_clearcoat_gloss();
SpatialMaterial::CullMode get_cull_mode();
bool get_depth_deep_parallax_flip_binormal();
bool get_depth_deep_parallax_flip_tangent();
int get_depth_deep_parallax_max_layers();
int get_depth_deep_parallax_min_layers();
SpatialMaterial::DepthDrawMode get_depth_draw_mode();
float get_depth_scale();
SpatialMaterial::BlendMode get_detail_blend_mode();
SpatialMaterial::DetailUV get_detail_uv();
SpatialMaterial::DiffuseMode get_diffuse_mode();
SpatialMaterial::DistanceFadeMode get_distance_fade();
float get_distance_fade_max_distance();
float get_distance_fade_min_distance();
Color get_emission();
float get_emission_energy();
SpatialMaterial::EmissionOperator get_emission_operator();
bool get_feature(SpatialMaterial::Feature p_feature);
bool get_flag(SpatialMaterial::Flags p_flag);
float get_grow();
float get_line_width();
float get_metallic();
SpatialMaterial::TextureChannel get_metallic_texture_channel();
float get_normal_scale();
int get_particles_anim_h_frames();
bool get_particles_anim_loop();
int get_particles_anim_v_frames();
float get_point_size();
float get_proximity_fade_distance();
float get_refraction();
SpatialMaterial::TextureChannel get_refraction_texture_channel();
float get_rim();
float get_rim_tint();
float get_roughness();
SpatialMaterial::TextureChannel get_roughness_texture_channel();
float get_specular();
SpatialMaterial::SpecularMode get_specular_mode();
float get_subsurface_scattering_strength();
Texture get_texture(SpatialMaterial::TextureParam p_param);
Color get_transmission();
Vector3 get_uv1_offset();
Vector3 get_uv1_scale();
float get_uv1_triplanar_blend_sharpness();
Vector3 get_uv2_offset();
Vector3 get_uv2_scale();
float get_uv2_triplanar_blend_sharpness();
bool is_depth_deep_parallax_enabled();
bool is_grow_enabled();
bool is_proximity_fade_enabled();
void set_albedo(Color p_albedo);
void set_alpha_scissor_threshold(float p_threshold);
void set_anisotropy(float p_anisotropy);
void set_ao_light_affect(float p_amount);
void set_ao_texture_channel(SpatialMaterial::TextureChannel p_channel);
void set_billboard_mode(SpatialMaterial::BillboardMode p_mode);
void set_blend_mode(SpatialMaterial::BlendMode p_blend_mode);
void set_clearcoat(float p_clearcoat);
void set_clearcoat_gloss(float p_clearcoat_gloss);
void set_cull_mode(SpatialMaterial::CullMode p_cull_mode);
void set_depth_deep_parallax(bool p_enable);
void set_depth_deep_parallax_flip_binormal(bool p_flip);
void set_depth_deep_parallax_flip_tangent(bool p_flip);
void set_depth_deep_parallax_max_layers(int p_layer);
void set_depth_deep_parallax_min_layers(int p_layer);
void set_depth_draw_mode(SpatialMaterial::DepthDrawMode p_depth_draw_mode);
void set_depth_scale(float p_depth_scale);
void set_detail_blend_mode(SpatialMaterial::BlendMode p_detail_blend_mode);
void set_detail_uv(SpatialMaterial::DetailUV p_detail_uv);
void set_diffuse_mode(SpatialMaterial::DiffuseMode p_diffuse_mode);
void set_distance_fade(SpatialMaterial::DistanceFadeMode p_mode);
void set_distance_fade_max_distance(float p_distance);
void set_distance_fade_min_distance(float p_distance);
void set_emission(Color p_emission);
void set_emission_energy(float p_emission_energy);
void set_emission_operator(SpatialMaterial::EmissionOperator p_operator);
void set_feature(SpatialMaterial::Feature p_feature, bool p_enable);
void set_flag(SpatialMaterial::Flags p_flag, bool p_enable);
void set_grow(float p_amount);
void set_grow_enabled(bool p_enable);
void set_line_width(float p_line_width);
void set_metallic(float p_metallic);
void set_metallic_texture_channel(SpatialMaterial::TextureChannel p_channel);
void set_normal_scale(float p_normal_scale);
void set_particles_anim_h_frames(int p_frames);
void set_particles_anim_loop(bool p_loop);
void set_particles_anim_v_frames(int p_frames);
void set_point_size(float p_point_size);
void set_proximity_fade(bool p_enabled);
void set_proximity_fade_distance(float p_distance);
void set_refraction(float p_refraction);
void set_refraction_texture_channel(SpatialMaterial::TextureChannel p_channel);
void set_rim(float p_rim);
void set_rim_tint(float p_rim_tint);
void set_roughness(float p_roughness);
void set_roughness_texture_channel(SpatialMaterial::TextureChannel p_channel);
void set_specular(float p_specular);
void set_specular_mode(SpatialMaterial::SpecularMode p_specular_mode);
void set_subsurface_scattering_strength(float p_strength);
void set_texture(SpatialMaterial::TextureParam p_param, Texture p_texture);
void set_transmission(Color p_transmission);
void set_uv1_offset(Vector3 p_offset);
void set_uv1_scale(Vector3 p_scale);
void set_uv1_triplanar_blend_sharpness(float p_sharpness);
void set_uv2_offset(Vector3 p_offset);
void set_uv2_scale(Vector3 p_scale);
void set_uv2_triplanar_blend_sharpness(float p_sharpness);

protected:
SpatialMaterial(WasGoId p_wasgo_id);
public:
SpatialMaterial();
~SpatialMaterial();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_SpatialMaterial_wrapper_get_albedo(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_SpatialMaterial_wrapper_get_alpha_scissor_threshold(WasGoId wasgo_id);
float _wasgo_SpatialMaterial_wrapper_get_anisotropy(WasGoId wasgo_id);
float _wasgo_SpatialMaterial_wrapper_get_ao_light_affect(WasGoId wasgo_id);
WasGoId _wasgo_SpatialMaterial_wrapper_get_ao_texture_channel(WasGoId wasgo_id);
WasGoId _wasgo_SpatialMaterial_wrapper_get_billboard_mode(WasGoId wasgo_id);
WasGoId _wasgo_SpatialMaterial_wrapper_get_blend_mode(WasGoId wasgo_id);
float _wasgo_SpatialMaterial_wrapper_get_clearcoat(WasGoId wasgo_id);
float _wasgo_SpatialMaterial_wrapper_get_clearcoat_gloss(WasGoId wasgo_id);
WasGoId _wasgo_SpatialMaterial_wrapper_get_cull_mode(WasGoId wasgo_id);
int _wasgo_SpatialMaterial_wrapper_get_depth_deep_parallax_flip_binormal(WasGoId wasgo_id);
int _wasgo_SpatialMaterial_wrapper_get_depth_deep_parallax_flip_tangent(WasGoId wasgo_id);
int _wasgo_SpatialMaterial_wrapper_get_depth_deep_parallax_max_layers(WasGoId wasgo_id);
int _wasgo_SpatialMaterial_wrapper_get_depth_deep_parallax_min_layers(WasGoId wasgo_id);
WasGoId _wasgo_SpatialMaterial_wrapper_get_depth_draw_mode(WasGoId wasgo_id);
float _wasgo_SpatialMaterial_wrapper_get_depth_scale(WasGoId wasgo_id);
WasGoId _wasgo_SpatialMaterial_wrapper_get_detail_blend_mode(WasGoId wasgo_id);
WasGoId _wasgo_SpatialMaterial_wrapper_get_detail_uv(WasGoId wasgo_id);
WasGoId _wasgo_SpatialMaterial_wrapper_get_diffuse_mode(WasGoId wasgo_id);
WasGoId _wasgo_SpatialMaterial_wrapper_get_distance_fade(WasGoId wasgo_id);
float _wasgo_SpatialMaterial_wrapper_get_distance_fade_max_distance(WasGoId wasgo_id);
float _wasgo_SpatialMaterial_wrapper_get_distance_fade_min_distance(WasGoId wasgo_id);
void _wasgo_SpatialMaterial_wrapper_get_emission(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_SpatialMaterial_wrapper_get_emission_energy(WasGoId wasgo_id);
WasGoId _wasgo_SpatialMaterial_wrapper_get_emission_operator(WasGoId wasgo_id);
int _wasgo_SpatialMaterial_wrapper_get_feature(WasGoId wasgo_id, WasGoId p_feature);
int _wasgo_SpatialMaterial_wrapper_get_flag(WasGoId wasgo_id, WasGoId p_flag);
float _wasgo_SpatialMaterial_wrapper_get_grow(WasGoId wasgo_id);
float _wasgo_SpatialMaterial_wrapper_get_line_width(WasGoId wasgo_id);
float _wasgo_SpatialMaterial_wrapper_get_metallic(WasGoId wasgo_id);
WasGoId _wasgo_SpatialMaterial_wrapper_get_metallic_texture_channel(WasGoId wasgo_id);
float _wasgo_SpatialMaterial_wrapper_get_normal_scale(WasGoId wasgo_id);
int _wasgo_SpatialMaterial_wrapper_get_particles_anim_h_frames(WasGoId wasgo_id);
int _wasgo_SpatialMaterial_wrapper_get_particles_anim_loop(WasGoId wasgo_id);
int _wasgo_SpatialMaterial_wrapper_get_particles_anim_v_frames(WasGoId wasgo_id);
float _wasgo_SpatialMaterial_wrapper_get_point_size(WasGoId wasgo_id);
float _wasgo_SpatialMaterial_wrapper_get_proximity_fade_distance(WasGoId wasgo_id);
float _wasgo_SpatialMaterial_wrapper_get_refraction(WasGoId wasgo_id);
WasGoId _wasgo_SpatialMaterial_wrapper_get_refraction_texture_channel(WasGoId wasgo_id);
float _wasgo_SpatialMaterial_wrapper_get_rim(WasGoId wasgo_id);
float _wasgo_SpatialMaterial_wrapper_get_rim_tint(WasGoId wasgo_id);
float _wasgo_SpatialMaterial_wrapper_get_roughness(WasGoId wasgo_id);
WasGoId _wasgo_SpatialMaterial_wrapper_get_roughness_texture_channel(WasGoId wasgo_id);
float _wasgo_SpatialMaterial_wrapper_get_specular(WasGoId wasgo_id);
WasGoId _wasgo_SpatialMaterial_wrapper_get_specular_mode(WasGoId wasgo_id);
float _wasgo_SpatialMaterial_wrapper_get_subsurface_scattering_strength(WasGoId wasgo_id);
WasGoId _wasgo_SpatialMaterial_wrapper_get_texture(WasGoId wasgo_id, WasGoId p_param);
void _wasgo_SpatialMaterial_wrapper_get_transmission(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_SpatialMaterial_wrapper_get_uv1_offset(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_SpatialMaterial_wrapper_get_uv1_scale(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_SpatialMaterial_wrapper_get_uv1_triplanar_blend_sharpness(WasGoId wasgo_id);
void _wasgo_SpatialMaterial_wrapper_get_uv2_offset(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_SpatialMaterial_wrapper_get_uv2_scale(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_SpatialMaterial_wrapper_get_uv2_triplanar_blend_sharpness(WasGoId wasgo_id);
int _wasgo_SpatialMaterial_wrapper_is_depth_deep_parallax_enabled(WasGoId wasgo_id);
int _wasgo_SpatialMaterial_wrapper_is_grow_enabled(WasGoId wasgo_id);
int _wasgo_SpatialMaterial_wrapper_is_proximity_fade_enabled(WasGoId wasgo_id);
void _wasgo_SpatialMaterial_wrapper_set_albedo(WasGoId wasgo_id, const uint8_t * p_albedo, int p_albedo_wasgo_buffer_size);
void _wasgo_SpatialMaterial_wrapper_set_alpha_scissor_threshold(WasGoId wasgo_id, float p_threshold);
void _wasgo_SpatialMaterial_wrapper_set_anisotropy(WasGoId wasgo_id, float p_anisotropy);
void _wasgo_SpatialMaterial_wrapper_set_ao_light_affect(WasGoId wasgo_id, float p_amount);
void _wasgo_SpatialMaterial_wrapper_set_ao_texture_channel(WasGoId wasgo_id, WasGoId p_channel);
void _wasgo_SpatialMaterial_wrapper_set_billboard_mode(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_SpatialMaterial_wrapper_set_blend_mode(WasGoId wasgo_id, WasGoId p_blend_mode);
void _wasgo_SpatialMaterial_wrapper_set_clearcoat(WasGoId wasgo_id, float p_clearcoat);
void _wasgo_SpatialMaterial_wrapper_set_clearcoat_gloss(WasGoId wasgo_id, float p_clearcoat_gloss);
void _wasgo_SpatialMaterial_wrapper_set_cull_mode(WasGoId wasgo_id, WasGoId p_cull_mode);
void _wasgo_SpatialMaterial_wrapper_set_depth_deep_parallax(WasGoId wasgo_id, bool p_enable);
void _wasgo_SpatialMaterial_wrapper_set_depth_deep_parallax_flip_binormal(WasGoId wasgo_id, bool p_flip);
void _wasgo_SpatialMaterial_wrapper_set_depth_deep_parallax_flip_tangent(WasGoId wasgo_id, bool p_flip);
void _wasgo_SpatialMaterial_wrapper_set_depth_deep_parallax_max_layers(WasGoId wasgo_id, int p_layer);
void _wasgo_SpatialMaterial_wrapper_set_depth_deep_parallax_min_layers(WasGoId wasgo_id, int p_layer);
void _wasgo_SpatialMaterial_wrapper_set_depth_draw_mode(WasGoId wasgo_id, WasGoId p_depth_draw_mode);
void _wasgo_SpatialMaterial_wrapper_set_depth_scale(WasGoId wasgo_id, float p_depth_scale);
void _wasgo_SpatialMaterial_wrapper_set_detail_blend_mode(WasGoId wasgo_id, WasGoId p_detail_blend_mode);
void _wasgo_SpatialMaterial_wrapper_set_detail_uv(WasGoId wasgo_id, WasGoId p_detail_uv);
void _wasgo_SpatialMaterial_wrapper_set_diffuse_mode(WasGoId wasgo_id, WasGoId p_diffuse_mode);
void _wasgo_SpatialMaterial_wrapper_set_distance_fade(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_SpatialMaterial_wrapper_set_distance_fade_max_distance(WasGoId wasgo_id, float p_distance);
void _wasgo_SpatialMaterial_wrapper_set_distance_fade_min_distance(WasGoId wasgo_id, float p_distance);
void _wasgo_SpatialMaterial_wrapper_set_emission(WasGoId wasgo_id, const uint8_t * p_emission, int p_emission_wasgo_buffer_size);
void _wasgo_SpatialMaterial_wrapper_set_emission_energy(WasGoId wasgo_id, float p_emission_energy);
void _wasgo_SpatialMaterial_wrapper_set_emission_operator(WasGoId wasgo_id, WasGoId p_operator);
void _wasgo_SpatialMaterial_wrapper_set_feature(WasGoId wasgo_id, WasGoId p_feature, bool p_enable);
void _wasgo_SpatialMaterial_wrapper_set_flag(WasGoId wasgo_id, WasGoId p_flag, bool p_enable);
void _wasgo_SpatialMaterial_wrapper_set_grow(WasGoId wasgo_id, float p_amount);
void _wasgo_SpatialMaterial_wrapper_set_grow_enabled(WasGoId wasgo_id, bool p_enable);
void _wasgo_SpatialMaterial_wrapper_set_line_width(WasGoId wasgo_id, float p_line_width);
void _wasgo_SpatialMaterial_wrapper_set_metallic(WasGoId wasgo_id, float p_metallic);
void _wasgo_SpatialMaterial_wrapper_set_metallic_texture_channel(WasGoId wasgo_id, WasGoId p_channel);
void _wasgo_SpatialMaterial_wrapper_set_normal_scale(WasGoId wasgo_id, float p_normal_scale);
void _wasgo_SpatialMaterial_wrapper_set_particles_anim_h_frames(WasGoId wasgo_id, int p_frames);
void _wasgo_SpatialMaterial_wrapper_set_particles_anim_loop(WasGoId wasgo_id, bool p_loop);
void _wasgo_SpatialMaterial_wrapper_set_particles_anim_v_frames(WasGoId wasgo_id, int p_frames);
void _wasgo_SpatialMaterial_wrapper_set_point_size(WasGoId wasgo_id, float p_point_size);
void _wasgo_SpatialMaterial_wrapper_set_proximity_fade(WasGoId wasgo_id, bool p_enabled);
void _wasgo_SpatialMaterial_wrapper_set_proximity_fade_distance(WasGoId wasgo_id, float p_distance);
void _wasgo_SpatialMaterial_wrapper_set_refraction(WasGoId wasgo_id, float p_refraction);
void _wasgo_SpatialMaterial_wrapper_set_refraction_texture_channel(WasGoId wasgo_id, WasGoId p_channel);
void _wasgo_SpatialMaterial_wrapper_set_rim(WasGoId wasgo_id, float p_rim);
void _wasgo_SpatialMaterial_wrapper_set_rim_tint(WasGoId wasgo_id, float p_rim_tint);
void _wasgo_SpatialMaterial_wrapper_set_roughness(WasGoId wasgo_id, float p_roughness);
void _wasgo_SpatialMaterial_wrapper_set_roughness_texture_channel(WasGoId wasgo_id, WasGoId p_channel);
void _wasgo_SpatialMaterial_wrapper_set_specular(WasGoId wasgo_id, float p_specular);
void _wasgo_SpatialMaterial_wrapper_set_specular_mode(WasGoId wasgo_id, WasGoId p_specular_mode);
void _wasgo_SpatialMaterial_wrapper_set_subsurface_scattering_strength(WasGoId wasgo_id, float p_strength);
void _wasgo_SpatialMaterial_wrapper_set_texture(WasGoId wasgo_id, WasGoId p_param, WasGoId p_texture);
void _wasgo_SpatialMaterial_wrapper_set_transmission(WasGoId wasgo_id, const uint8_t * p_transmission, int p_transmission_wasgo_buffer_size);
void _wasgo_SpatialMaterial_wrapper_set_uv1_offset(WasGoId wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_SpatialMaterial_wrapper_set_uv1_scale(WasGoId wasgo_id, const uint8_t * p_scale, int p_scale_wasgo_buffer_size);
void _wasgo_SpatialMaterial_wrapper_set_uv1_triplanar_blend_sharpness(WasGoId wasgo_id, float p_sharpness);
void _wasgo_SpatialMaterial_wrapper_set_uv2_offset(WasGoId wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_SpatialMaterial_wrapper_set_uv2_scale(WasGoId wasgo_id, const uint8_t * p_scale, int p_scale_wasgo_buffer_size);
void _wasgo_SpatialMaterial_wrapper_set_uv2_triplanar_blend_sharpness(WasGoId wasgo_id, float p_sharpness);

    //constructor and destructor wrappers
    WasGoId _wasgo_SpatialMaterial_constructor();
    void _wasgo_SpatialMaterial_destructor(WasGoId p_wasgo_id);
            
}
#endif