/* THIS FILE IS GENERATED */
#ifndef CPUPARTICLES2D_H
#define CPUPARTICLES2D_H

#include "stdint.h"

#include "Node2D.h"
#include "Variant.h"
#include "Texture.h"
#include "Node.h"
#include "Gradient.h"
#include "Curve.h"
class CPUParticles2D : public Node2D{
public: CPUParticles2D();
enum DrawOrder{
DRAW_ORDER_INDEX,
DRAW_ORDER_LIFETIME
};
enum EmissionShape{
EMISSION_SHAPE_POINT,
EMISSION_SHAPE_SPHERE,
EMISSION_SHAPE_RECTANGLE,
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
void convert_from_particles(Node p_particles);
int get_amount();
Color get_color();
Gradient get_color_ramp();
Vector2 get_direction();
CPUParticles2D::DrawOrder get_draw_order();
PoolColorArray get_emission_colors();
PoolVector2Array get_emission_normals();
PoolVector2Array get_emission_points();
Vector2 get_emission_rect_extents();
CPUParticles2D::EmissionShape get_emission_shape();
float get_emission_sphere_radius();
float get_explosiveness_ratio();
int get_fixed_fps();
bool get_fractional_delta();
Vector2 get_gravity();
float get_lifetime();
float get_lifetime_randomness();
Texture get_normalmap();
bool get_one_shot();
float get_param(CPUParticles2D::Parameter p_param);
Curve get_param_curve(CPUParticles2D::Parameter p_param);
float get_param_randomness(CPUParticles2D::Parameter p_param);
bool get_particle_flag(CPUParticles2D::Flags p_flag);
float get_pre_process_time();
float get_randomness_ratio();
float get_speed_scale();
float get_spread();
Texture get_texture();
bool get_use_local_coordinates();
bool is_emitting();
void restart();
void set_amount(int p_amount);
void set_color(Color p_color);
void set_color_ramp(Gradient p_ramp);
void set_direction(Vector2 p_direction);
void set_draw_order(CPUParticles2D::DrawOrder p_order);
void set_emission_colors(PoolColorArray p_array);
void set_emission_normals(PoolVector2Array p_array);
void set_emission_points(PoolVector2Array p_array);
void set_emission_rect_extents(Vector2 p_extents);
void set_emission_shape(CPUParticles2D::EmissionShape p_shape);
void set_emission_sphere_radius(float p_radius);
void set_emitting(bool p_emitting);
void set_explosiveness_ratio(float p_ratio);
void set_fixed_fps(int p_fps);
void set_fractional_delta(bool p_enable);
void set_gravity(Vector2 p_accel_vec);
void set_lifetime(float p_secs);
void set_lifetime_randomness(float p_random);
void set_normalmap(Texture p_normalmap);
void set_one_shot(bool p_enable);
void set_param(CPUParticles2D::Parameter p_param, float p_value);
void set_param_curve(CPUParticles2D::Parameter p_param, Curve p_curve);
void set_param_randomness(CPUParticles2D::Parameter p_param, float p_randomness);
void set_particle_flag(CPUParticles2D::Flags p_flag, bool p_enable);
void set_pre_process_time(float p_secs);
void set_randomness_ratio(float p_ratio);
void set_speed_scale(float p_scale);
void set_spread(float p_degrees);
void set_texture(Texture p_texture);
void set_use_local_coordinates(bool p_enable);
};
#endif