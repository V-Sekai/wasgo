/* THIS FILE IS GENERATED */
#ifndef SPATIALMATERIAL_H
#define SPATIALMATERIAL_H

#include <stdint.h>

#include "Texture.h"
#include "Vector3.h"
#include "Variant.h"
#include "Material.h"
class SpatialMaterial : public Material{
public: SpatialMaterial();
enum EmissionOperator{
EMISSION_OP_ADD: 0,
};
enum DiffuseMode{
DIFFUSE_BURLEY: 0,
DIFFUSE_LAMBERT: 1,
DIFFUSE_LAMBERT_WRAP: 2,
DIFFUSE_OREN_NAYAR: 3,
};
enum SpecularMode{
SPECULAR_SCHLICK_GGX: 0,
SPECULAR_BLINN: 1,
SPECULAR_PHONG: 2,
SPECULAR_TOON: 3,
};
enum Feature{
FEATURE_TRANSPARENT: 0,
FEATURE_EMISSION: 1,
FEATURE_NORMAL_MAPPING: 2,
FEATURE_RIM: 3,
FEATURE_CLEARCOAT: 4,
FEATURE_ANISOTROPY: 5,
FEATURE_AMBIENT_OCCLUSION: 6,
FEATURE_DEPTH_MAPPING: 7,
FEATURE_SUBSURACE_SCATTERING: 8,
FEATURE_TRANSMISSION: 9,
FEATURE_REFRACTION: 10,
FEATURE_DETAIL: 11,
};
enum Flags{
FLAG_UNSHADED: 0,
FLAG_USE_VERTEX_LIGHTING: 1,
FLAG_DISABLE_DEPTH_TEST: 2,
FLAG_ALBEDO_FROM_VERTEX_COLOR: 3,
FLAG_SRGB_VERTEX_COLOR: 4,
FLAG_USE_POINT_SIZE: 5,
FLAG_FIXED_SIZE: 6,
FLAG_BILLBOARD_KEEP_SCALE: 7,
FLAG_UV1_USE_TRIPLANAR: 8,
FLAG_UV2_USE_TRIPLANAR: 9,
FLAG_TRIPLANAR_USE_WORLD: 10,
FLAG_AO_ON_UV2: 11,
FLAG_EMISSION_ON_UV2: 12,
FLAG_USE_ALPHA_SCISSOR: 13,
FLAG_ALBEDO_TEXTURE_FORCE_SRGB: 14,
FLAG_DONT_RECEIVE_SHADOWS: 15,
FLAG_ENSURE_CORRECT_NORMALS: 16,
FLAG_DISABLE_AMBIENT_LIGHT: 17,
FLAG_USE_SHADOW_TO_OPACITY: 18,
};
enum CullMode{
CULL_BACK: 0,
CULL_FRONT: 1,
};
enum DetailUV{
DETAIL_UV_1: 0,
};
enum DistanceFadeMode{
DISTANCE_FADE_DISABLED: 0,
DISTANCE_FADE_PIXEL_ALPHA: 1,
DISTANCE_FADE_PIXEL_DITHER: 2,
};
enum BillboardMode{
BILLBOARD_DISABLED: 0,
BILLBOARD_ENABLED: 1,
BILLBOARD_FIXED_Y: 2,
};
enum DepthDrawMode{
DEPTH_DRAW_OPAQUE_ONLY: 0,
DEPTH_DRAW_ALWAYS: 1,
DEPTH_DRAW_DISABLED: 2,
};
enum TextureChannel{
TEXTURE_CHANNEL_RED: 0,
TEXTURE_CHANNEL_GREEN: 1,
TEXTURE_CHANNEL_BLUE: 2,
TEXTURE_CHANNEL_ALPHA: 3,
};
enum BlendMode{
BLEND_MODE_MIX: 0,
BLEND_MODE_ADD: 1,
BLEND_MODE_SUB: 2,
};
enum TextureParam{
TEXTURE_ALBEDO: 0,
TEXTURE_METALLIC: 1,
TEXTURE_ROUGHNESS: 2,
TEXTURE_EMISSION: 3,
TEXTURE_NORMAL: 4,
TEXTURE_RIM: 5,
TEXTURE_CLEARCOAT: 6,
TEXTURE_FLOWMAP: 7,
TEXTURE_AMBIENT_OCCLUSION: 8,
TEXTURE_DEPTH: 9,
TEXTURE_SUBSURFACE_SCATTERING: 10,
TEXTURE_TRANSMISSION: 11,
TEXTURE_REFRACTION: 12,
TEXTURE_DETAIL_MASK: 13,
TEXTURE_DETAIL_ALBEDO: 14,
TEXTURE_DETAIL_NORMAL: 15,
};
Color  get_albedo();
Color  get_albedo();
float  get_alpha_scissor_threshold();
float  get_alpha_scissor_threshold();
float  get_anisotropy();
float  get_anisotropy();
float  get_ao_light_affect();
float  get_ao_light_affect();
enum.SpatialMaterial::TextureChannel  get_ao_texture_channel();
enum.SpatialMaterial::TextureChannel  get_ao_texture_channel();
enum.SpatialMaterial::BillboardMode  get_billboard_mode();
enum.SpatialMaterial::BillboardMode  get_billboard_mode();
enum.SpatialMaterial::BlendMode  get_blend_mode();
enum.SpatialMaterial::BlendMode  get_blend_mode();
float  get_clearcoat();
float  get_clearcoat();
float  get_clearcoat_gloss();
float  get_clearcoat_gloss();
enum.SpatialMaterial::CullMode  get_cull_mode();
enum.SpatialMaterial::CullMode  get_cull_mode();
bool  get_depth_deep_parallax_flip_binormal();
bool  get_depth_deep_parallax_flip_binormal();
bool  get_depth_deep_parallax_flip_tangent();
bool  get_depth_deep_parallax_flip_tangent();
int  get_depth_deep_parallax_max_layers();
int  get_depth_deep_parallax_max_layers();
int  get_depth_deep_parallax_min_layers();
int  get_depth_deep_parallax_min_layers();
enum.SpatialMaterial::DepthDrawMode  get_depth_draw_mode();
enum.SpatialMaterial::DepthDrawMode  get_depth_draw_mode();
float  get_depth_scale();
float  get_depth_scale();
enum.SpatialMaterial::BlendMode  get_detail_blend_mode();
enum.SpatialMaterial::BlendMode  get_detail_blend_mode();
enum.SpatialMaterial::DetailUV  get_detail_uv();
enum.SpatialMaterial::DetailUV  get_detail_uv();
enum.SpatialMaterial::DiffuseMode  get_diffuse_mode();
enum.SpatialMaterial::DiffuseMode  get_diffuse_mode();
enum.SpatialMaterial::DistanceFadeMode  get_distance_fade();
enum.SpatialMaterial::DistanceFadeMode  get_distance_fade();
float  get_distance_fade_max_distance();
float  get_distance_fade_max_distance();
float  get_distance_fade_min_distance();
float  get_distance_fade_min_distance();
Color  get_emission();
Color  get_emission();
float  get_emission_energy();
float  get_emission_energy();
enum.SpatialMaterial::EmissionOperator  get_emission_operator();
enum.SpatialMaterial::EmissionOperator  get_emission_operator();
bool  get_feature(int feature);
bool  get_flag(int flag);
float  get_grow();
float  get_grow();
float  get_line_width();
float  get_line_width();
float  get_metallic();
float  get_metallic();
enum.SpatialMaterial::TextureChannel  get_metallic_texture_channel();
enum.SpatialMaterial::TextureChannel  get_metallic_texture_channel();
float  get_normal_scale();
float  get_normal_scale();
int  get_particles_anim_h_frames();
int  get_particles_anim_h_frames();
bool  get_particles_anim_loop();
bool  get_particles_anim_loop();
int  get_particles_anim_v_frames();
int  get_particles_anim_v_frames();
float  get_point_size();
float  get_point_size();
float  get_proximity_fade_distance();
float  get_proximity_fade_distance();
float  get_refraction();
float  get_refraction();
enum.SpatialMaterial::TextureChannel  get_refraction_texture_channel();
enum.SpatialMaterial::TextureChannel  get_refraction_texture_channel();
float  get_rim();
float  get_rim();
float  get_rim_tint();
float  get_rim_tint();
float  get_roughness();
float  get_roughness();
enum.SpatialMaterial::TextureChannel  get_roughness_texture_channel();
enum.SpatialMaterial::TextureChannel  get_roughness_texture_channel();
float  get_specular();
float  get_specular();
enum.SpatialMaterial::SpecularMode  get_specular_mode();
enum.SpatialMaterial::SpecularMode  get_specular_mode();
float  get_subsurface_scattering_strength();
float  get_subsurface_scattering_strength();
Texture  get_texture(int param);
Color  get_transmission();
Color  get_transmission();
Vector3  get_uv1_offset();
Vector3  get_uv1_offset();
Vector3  get_uv1_scale();
Vector3  get_uv1_scale();
float  get_uv1_triplanar_blend_sharpness();
float  get_uv1_triplanar_blend_sharpness();
Vector3  get_uv2_offset();
Vector3  get_uv2_offset();
Vector3  get_uv2_scale();
Vector3  get_uv2_scale();
float  get_uv2_triplanar_blend_sharpness();
float  get_uv2_triplanar_blend_sharpness();
bool  is_depth_deep_parallax_enabled();
bool  is_depth_deep_parallax_enabled();
bool  is_grow_enabled();
bool  is_grow_enabled();
bool  is_proximity_fade_enabled();
bool  is_proximity_fade_enabled();
void  set_albedo(Color albedo);
void  set_alpha_scissor_threshold(float threshold);
void  set_anisotropy(float anisotropy);
void  set_ao_light_affect(float amount);
void  set_ao_texture_channel(int channel);
void  set_billboard_mode(int mode);
void  set_blend_mode(int blend_mode);
void  set_clearcoat(float clearcoat);
void  set_clearcoat_gloss(float clearcoat_gloss);
void  set_cull_mode(int cull_mode);
void  set_depth_deep_parallax(bool enable);
void  set_depth_deep_parallax_flip_binormal(bool flip);
void  set_depth_deep_parallax_flip_tangent(bool flip);
void  set_depth_deep_parallax_max_layers(int layer);
void  set_depth_deep_parallax_min_layers(int layer);
void  set_depth_draw_mode(int depth_draw_mode);
void  set_depth_scale(float depth_scale);
void  set_detail_blend_mode(int detail_blend_mode);
void  set_detail_uv(int detail_uv);
void  set_diffuse_mode(int diffuse_mode);
void  set_distance_fade(int mode);
void  set_distance_fade_max_distance(float distance);
void  set_distance_fade_min_distance(float distance);
void  set_emission(Color emission);
void  set_emission_energy(float emission_energy);
void  set_emission_operator(int operator);
void  set_feature(int feature, bool enable);
void  set_flag(int flag, bool enable);
void  set_grow(float amount);
void  set_grow_enabled(bool enable);
void  set_line_width(float line_width);
void  set_metallic(float metallic);
void  set_metallic_texture_channel(int channel);
void  set_normal_scale(float normal_scale);
void  set_particles_anim_h_frames(int frames);
void  set_particles_anim_loop(bool loop);
void  set_particles_anim_v_frames(int frames);
void  set_point_size(float point_size);
void  set_proximity_fade(bool enabled);
void  set_proximity_fade_distance(float distance);
void  set_refraction(float refraction);
void  set_refraction_texture_channel(int channel);
void  set_rim(float rim);
void  set_rim_tint(float rim_tint);
void  set_roughness(float roughness);
void  set_roughness_texture_channel(int channel);
void  set_specular(float specular);
void  set_specular_mode(int specular_mode);
void  set_subsurface_scattering_strength(float strength);
void  set_texture(int param, Texture texture);
void  set_transmission(Color transmission);
void  set_uv1_offset(Vector3 offset);
void  set_uv1_scale(Vector3 scale);
void  set_uv1_triplanar_blend_sharpness(float sharpness);
void  set_uv2_offset(Vector3 offset);
void  set_uv2_scale(Vector3 scale);
void  set_uv2_triplanar_blend_sharpness(float sharpness);
};
#endif