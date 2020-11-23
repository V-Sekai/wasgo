/* THIS FILE IS GENERATED */
#ifndef CPUPARTICLES2D_H
#define CPUPARTICLES2D_H

#include <stdint.h>

#include "Node.h"
#include "Gradient.h"
#include "Vector2.h"
#include "Node2D.h"
#include "PoolVector2Array.h"
#include "Curve.h"
#include "Variant.h"
#include "Texture.h"
class CPUParticles2D : public Node2D{
public: CPUParticles2D();
enum Flags{
FLAG_ALIGN_Y_TO_VELOCITY: 0,
FLAG_ROTATE_Y: 1,
FLAG_DISABLE_Z: 2,
};
enum EmissionShape{
EMISSION_SHAPE_POINT: 0,
EMISSION_SHAPE_SPHERE: 1,
EMISSION_SHAPE_RECTANGLE: 2,
EMISSION_SHAPE_POINTS: 3,
EMISSION_SHAPE_DIRECTED_POINTS: 4,
};
enum Parameter{
PARAM_INITIAL_LINEAR_VELOCITY: 0,
PARAM_ANGULAR_VELOCITY: 1,
PARAM_ORBIT_VELOCITY: 2,
PARAM_LINEAR_ACCEL: 3,
PARAM_RADIAL_ACCEL: 4,
PARAM_TANGENTIAL_ACCEL: 5,
PARAM_DAMPING: 6,
PARAM_ANGLE: 7,
PARAM_SCALE: 8,
PARAM_HUE_VARIATION: 9,
PARAM_ANIM_SPEED: 10,
PARAM_ANIM_OFFSET: 11,
};
enum DrawOrder{
DRAW_ORDER_INDEX: 0,
};
void  _update_render_thread();
void  _update_render_thread();
void  convert_from_particles(Node particles);
int  get_amount();
int  get_amount();
Color  get_color();
Color  get_color();
Gradient  get_color_ramp();
Gradient  get_color_ramp();
Vector2  get_direction();
Vector2  get_direction();
enum.CPUParticles2D::DrawOrder  get_draw_order();
enum.CPUParticles2D::DrawOrder  get_draw_order();
PoolColorArray  get_emission_colors();
PoolColorArray  get_emission_colors();
PoolVector2Array  get_emission_normals();
PoolVector2Array  get_emission_normals();
PoolVector2Array  get_emission_points();
PoolVector2Array  get_emission_points();
Vector2  get_emission_rect_extents();
Vector2  get_emission_rect_extents();
enum.CPUParticles2D::EmissionShape  get_emission_shape();
enum.CPUParticles2D::EmissionShape  get_emission_shape();
float  get_emission_sphere_radius();
float  get_emission_sphere_radius();
float  get_explosiveness_ratio();
float  get_explosiveness_ratio();
int  get_fixed_fps();
int  get_fixed_fps();
bool  get_fractional_delta();
bool  get_fractional_delta();
Vector2  get_gravity();
Vector2  get_gravity();
float  get_lifetime();
float  get_lifetime();
float  get_lifetime_randomness();
float  get_lifetime_randomness();
Texture  get_normalmap();
Texture  get_normalmap();
bool  get_one_shot();
bool  get_one_shot();
float  get_param(int param);
Curve  get_param_curve(int param);
float  get_param_randomness(int param);
bool  get_particle_flag(int flag);
float  get_pre_process_time();
float  get_pre_process_time();
float  get_randomness_ratio();
float  get_randomness_ratio();
float  get_speed_scale();
float  get_speed_scale();
float  get_spread();
float  get_spread();
Texture  get_texture();
Texture  get_texture();
bool  get_use_local_coordinates();
bool  get_use_local_coordinates();
bool  is_emitting();
bool  is_emitting();
void  restart();
void  restart();
void  set_amount(int amount);
void  set_color(Color color);
void  set_color_ramp(Gradient ramp);
void  set_direction(Vector2 direction);
void  set_draw_order(int order);
void  set_emission_colors(PoolColorArray array);
void  set_emission_normals(PoolVector2Array array);
void  set_emission_points(PoolVector2Array array);
void  set_emission_rect_extents(Vector2 extents);
void  set_emission_shape(int shape);
void  set_emission_sphere_radius(float radius);
void  set_emitting(bool emitting);
void  set_explosiveness_ratio(float ratio);
void  set_fixed_fps(int fps);
void  set_fractional_delta(bool enable);
void  set_gravity(Vector2 accel_vec);
void  set_lifetime(float secs);
void  set_lifetime_randomness(float random);
void  set_normalmap(Texture normalmap);
void  set_one_shot(bool enable);
void  set_param(int param, float value);
void  set_param_curve(int param, Curve curve);
void  set_param_randomness(int param, float randomness);
void  set_particle_flag(int flag, bool enable);
void  set_pre_process_time(float secs);
void  set_randomness_ratio(float ratio);
void  set_speed_scale(float scale);
void  set_spread(float degrees);
void  set_texture(Texture texture);
void  set_use_local_coordinates(bool enable);
};
#endif