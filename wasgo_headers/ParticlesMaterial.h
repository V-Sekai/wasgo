/* THIS FILE IS GENERATED */
#ifndef PARTICLESMATERIAL_H
#define PARTICLESMATERIAL_H

#include "stdint.h"

#include "CurveTexture.h"
#include "Material.h"
#include "Variant.h"
#include "Texture.h"
#include "GradientTexture.h"
class ParticlesMaterial : public Material{
public: ParticlesMaterial();
enum EmissionShape{
EMISSION_SHAPE_POINT,
EMISSION_SHAPE_SPHERE,
EMISSION_SHAPE_BOX,
EMISSION_SHAPE_POINTS,
EMISSION_SHAPE_DIRECTED_POINTS,
EMISSION_SHAPE_MAX
};
enum Flags{
FLAG_ALIGN_Y_TO_VELOCITY,
FLAG_ROTATE_Y,
FLAG_DISABLE_Z,
FLAG_MAX
};
enum Parameter{
PARAM_INITIAL_LINEAR_VELOCITY,
PARAM_ANGULAR_VELOCITY,
PARAM_ORBIT_VELOCITY,
PARAM_LINEAR_ACCEL,
PARAM_RADIAL_ACCEL,
PARAM_TANGENTIAL_ACCEL,
PARAM_DAMPING,
PARAM_ANGLE,
PARAM_SCALE,
PARAM_HUE_VARIATION,
PARAM_ANIM_SPEED,
PARAM_ANIM_OFFSET,
PARAM_MAX
};
Color get_color();
Texture get_color_ramp();
Vector3 get_direction();
Vector3 get_emission_box_extents();
Texture get_emission_color_texture();
Texture get_emission_normal_texture();
int get_emission_point_count();
Texture get_emission_point_texture();
ParticlesMaterial::EmissionShape get_emission_shape();
float get_emission_sphere_radius();
bool get_flag(ParticlesMaterial::Flags p_flag);
float get_flatness();
Vector3 get_gravity();
float get_lifetime_randomness();
float get_param(ParticlesMaterial::Parameter p_param);
float get_param_randomness(ParticlesMaterial::Parameter p_param);
Texture get_param_texture(ParticlesMaterial::Parameter p_param);
float get_spread();
GradientTexture get_trail_color_modifier();
int get_trail_divisor();
CurveTexture get_trail_size_modifier();
void set_color(Color p_color);
void set_color_ramp(Texture p_ramp);
void set_direction(Vector3 p_degrees);
void set_emission_box_extents(Vector3 p_extents);
void set_emission_color_texture(Texture p_texture);
void set_emission_normal_texture(Texture p_texture);
void set_emission_point_count(int p_point_count);
void set_emission_point_texture(Texture p_texture);
void set_emission_shape(ParticlesMaterial::EmissionShape p_shape);
void set_emission_sphere_radius(float p_radius);
void set_flag(ParticlesMaterial::Flags p_flag, bool p_enable);
void set_flatness(float p_amount);
void set_gravity(Vector3 p_accel_vec);
void set_lifetime_randomness(float p_randomness);
void set_param(ParticlesMaterial::Parameter p_param, float p_value);
void set_param_randomness(ParticlesMaterial::Parameter p_param, float p_randomness);
void set_param_texture(ParticlesMaterial::Parameter p_param, Texture p_texture);
void set_spread(float p_degrees);
void set_trail_color_modifier(GradientTexture p_texture);
void set_trail_divisor(int p_divisor);
void set_trail_size_modifier(CurveTexture p_texture);
};
#endif