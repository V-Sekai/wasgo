/* THIS FILE IS GENERATED */
#ifndef CPUPARTICLES_H
#define CPUPARTICLES_H

#include "wasgo\wasgoid.h"

#include "Gradient.h"
#include "Curve.h"
#include "Mesh.h"
#include "Variant.h"
#include "GeometryInstance.h"
#include "Vector3.h"
class Node;
#include "Color.h"
class CPUParticles : public GeometryInstance{
public:
enum DrawOrder{
DRAW_ORDER_INDEX,
DRAW_ORDER_LIFETIME,
DRAW_ORDER_VIEW_DEPTH
};
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
void convert_from_particles(Node p_particles);
int get_amount();
Color get_color();
Gradient get_color_ramp();
Vector3 get_direction();
CPUParticles::DrawOrder get_draw_order();
Vector3 get_emission_box_extents();
PoolColorArray get_emission_colors();
PoolVector3Array get_emission_normals();
PoolVector3Array get_emission_points();
CPUParticles::EmissionShape get_emission_shape();
float get_emission_sphere_radius();
float get_explosiveness_ratio();
int get_fixed_fps();
float get_flatness();
bool get_fractional_delta();
Vector3 get_gravity();
float get_lifetime();
float get_lifetime_randomness();
Mesh get_mesh();
bool get_one_shot();
float get_param(CPUParticles::Parameter p_param);
Curve get_param_curve(CPUParticles::Parameter p_param);
float get_param_randomness(CPUParticles::Parameter p_param);
bool get_particle_flag(CPUParticles::Flags p_flag);
float get_pre_process_time();
float get_randomness_ratio();
float get_speed_scale();
float get_spread();
bool get_use_local_coordinates();
bool is_emitting();
void restart();
void set_amount(int p_amount);
void set_color(Color p_color);
void set_color_ramp(Gradient p_ramp);
void set_direction(Vector3 p_direction);
void set_draw_order(CPUParticles::DrawOrder p_order);
void set_emission_box_extents(Vector3 p_extents);
void set_emission_colors(PoolColorArray p_array);
void set_emission_normals(PoolVector3Array p_array);
void set_emission_points(PoolVector3Array p_array);
void set_emission_shape(CPUParticles::EmissionShape p_shape);
void set_emission_sphere_radius(float p_radius);
void set_emitting(bool p_emitting);
void set_explosiveness_ratio(float p_ratio);
void set_fixed_fps(int p_fps);
void set_flatness(float p_amount);
void set_fractional_delta(bool p_enable);
void set_gravity(Vector3 p_accel_vec);
void set_lifetime(float p_secs);
void set_lifetime_randomness(float p_random);
void set_mesh(Mesh p_mesh);
void set_one_shot(bool p_enable);
void set_param(CPUParticles::Parameter p_param, float p_value);
void set_param_curve(CPUParticles::Parameter p_param, Curve p_curve);
void set_param_randomness(CPUParticles::Parameter p_param, float p_randomness);
void set_particle_flag(CPUParticles::Flags p_flag, bool p_enable);
void set_pre_process_time(float p_secs);
void set_randomness_ratio(float p_ratio);
void set_speed_scale(float p_scale);
void set_spread(float p_degrees);
void set_use_local_coordinates(bool p_enable);

protected:
public:
explicit CPUParticles(WasGoID p_wasgo_id);
explicit CPUParticles(GeometryInstance other);
CPUParticles();
CPUParticles new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_CPUParticles_wrapper_convert_from_particles(WasGoID wasgo_id, WasGoID p_particles);
int _wasgo_CPUParticles_wrapper_get_amount(WasGoID wasgo_id);
void _wasgo_CPUParticles_wrapper_get_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_CPUParticles_wrapper_get_color_ramp(WasGoID wasgo_id);
void _wasgo_CPUParticles_wrapper_get_direction(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_CPUParticles_wrapper_get_draw_order(WasGoID wasgo_id);
void _wasgo_CPUParticles_wrapper_get_emission_box_extents(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_CPUParticles_wrapper_get_emission_colors(WasGoID wasgo_id);
WasGoID _wasgo_CPUParticles_wrapper_get_emission_normals(WasGoID wasgo_id);
WasGoID _wasgo_CPUParticles_wrapper_get_emission_points(WasGoID wasgo_id);
WasGoID _wasgo_CPUParticles_wrapper_get_emission_shape(WasGoID wasgo_id);
float _wasgo_CPUParticles_wrapper_get_emission_sphere_radius(WasGoID wasgo_id);
float _wasgo_CPUParticles_wrapper_get_explosiveness_ratio(WasGoID wasgo_id);
int _wasgo_CPUParticles_wrapper_get_fixed_fps(WasGoID wasgo_id);
float _wasgo_CPUParticles_wrapper_get_flatness(WasGoID wasgo_id);
int _wasgo_CPUParticles_wrapper_get_fractional_delta(WasGoID wasgo_id);
void _wasgo_CPUParticles_wrapper_get_gravity(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_CPUParticles_wrapper_get_lifetime(WasGoID wasgo_id);
float _wasgo_CPUParticles_wrapper_get_lifetime_randomness(WasGoID wasgo_id);
WasGoID _wasgo_CPUParticles_wrapper_get_mesh(WasGoID wasgo_id);
int _wasgo_CPUParticles_wrapper_get_one_shot(WasGoID wasgo_id);
float _wasgo_CPUParticles_wrapper_get_param(WasGoID wasgo_id, WasGoID p_param);
WasGoID _wasgo_CPUParticles_wrapper_get_param_curve(WasGoID wasgo_id, WasGoID p_param);
float _wasgo_CPUParticles_wrapper_get_param_randomness(WasGoID wasgo_id, WasGoID p_param);
int _wasgo_CPUParticles_wrapper_get_particle_flag(WasGoID wasgo_id, WasGoID p_flag);
float _wasgo_CPUParticles_wrapper_get_pre_process_time(WasGoID wasgo_id);
float _wasgo_CPUParticles_wrapper_get_randomness_ratio(WasGoID wasgo_id);
float _wasgo_CPUParticles_wrapper_get_speed_scale(WasGoID wasgo_id);
float _wasgo_CPUParticles_wrapper_get_spread(WasGoID wasgo_id);
int _wasgo_CPUParticles_wrapper_get_use_local_coordinates(WasGoID wasgo_id);
int _wasgo_CPUParticles_wrapper_is_emitting(WasGoID wasgo_id);
void _wasgo_CPUParticles_wrapper_restart(WasGoID wasgo_id);
void _wasgo_CPUParticles_wrapper_set_amount(WasGoID wasgo_id, int p_amount);
void _wasgo_CPUParticles_wrapper_set_color(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_CPUParticles_wrapper_set_color_ramp(WasGoID wasgo_id, WasGoID p_ramp);
void _wasgo_CPUParticles_wrapper_set_direction(WasGoID wasgo_id, const uint8_t * p_direction, int p_direction_wasgo_buffer_size);
void _wasgo_CPUParticles_wrapper_set_draw_order(WasGoID wasgo_id, WasGoID p_order);
void _wasgo_CPUParticles_wrapper_set_emission_box_extents(WasGoID wasgo_id, const uint8_t * p_extents, int p_extents_wasgo_buffer_size);
void _wasgo_CPUParticles_wrapper_set_emission_colors(WasGoID wasgo_id, WasGoID p_array);
void _wasgo_CPUParticles_wrapper_set_emission_normals(WasGoID wasgo_id, WasGoID p_array);
void _wasgo_CPUParticles_wrapper_set_emission_points(WasGoID wasgo_id, WasGoID p_array);
void _wasgo_CPUParticles_wrapper_set_emission_shape(WasGoID wasgo_id, WasGoID p_shape);
void _wasgo_CPUParticles_wrapper_set_emission_sphere_radius(WasGoID wasgo_id, float p_radius);
void _wasgo_CPUParticles_wrapper_set_emitting(WasGoID wasgo_id, bool p_emitting);
void _wasgo_CPUParticles_wrapper_set_explosiveness_ratio(WasGoID wasgo_id, float p_ratio);
void _wasgo_CPUParticles_wrapper_set_fixed_fps(WasGoID wasgo_id, int p_fps);
void _wasgo_CPUParticles_wrapper_set_flatness(WasGoID wasgo_id, float p_amount);
void _wasgo_CPUParticles_wrapper_set_fractional_delta(WasGoID wasgo_id, bool p_enable);
void _wasgo_CPUParticles_wrapper_set_gravity(WasGoID wasgo_id, const uint8_t * p_accel_vec, int p_accel_vec_wasgo_buffer_size);
void _wasgo_CPUParticles_wrapper_set_lifetime(WasGoID wasgo_id, float p_secs);
void _wasgo_CPUParticles_wrapper_set_lifetime_randomness(WasGoID wasgo_id, float p_random);
void _wasgo_CPUParticles_wrapper_set_mesh(WasGoID wasgo_id, WasGoID p_mesh);
void _wasgo_CPUParticles_wrapper_set_one_shot(WasGoID wasgo_id, bool p_enable);
void _wasgo_CPUParticles_wrapper_set_param(WasGoID wasgo_id, WasGoID p_param, float p_value);
void _wasgo_CPUParticles_wrapper_set_param_curve(WasGoID wasgo_id, WasGoID p_param, WasGoID p_curve);
void _wasgo_CPUParticles_wrapper_set_param_randomness(WasGoID wasgo_id, WasGoID p_param, float p_randomness);
void _wasgo_CPUParticles_wrapper_set_particle_flag(WasGoID wasgo_id, WasGoID p_flag, bool p_enable);
void _wasgo_CPUParticles_wrapper_set_pre_process_time(WasGoID wasgo_id, float p_secs);
void _wasgo_CPUParticles_wrapper_set_randomness_ratio(WasGoID wasgo_id, float p_ratio);
void _wasgo_CPUParticles_wrapper_set_speed_scale(WasGoID wasgo_id, float p_scale);
void _wasgo_CPUParticles_wrapper_set_spread(WasGoID wasgo_id, float p_degrees);
void _wasgo_CPUParticles_wrapper_set_use_local_coordinates(WasGoID wasgo_id, bool p_enable);

    //constructor wrappers
    WasGoID _wasgo_CPUParticles_constructor();
            
}
#endif