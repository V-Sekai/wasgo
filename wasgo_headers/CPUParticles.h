/* THIS FILE IS GENERATED */
#ifndef CPUPARTICLES_H
#define CPUPARTICLES_H

#include "wasgo\wasgo.h"

#include "GeometryInstance.h"
#include "Curve.h"
#include "Color.h"
#include "Variant.h"
#include "Gradient.h"
#include "Node.h"
#include "Vector3.h"
#include "Mesh.h"
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
CPUParticles(WasGoId p_wasgo_id);
public:
CPUParticles();
~CPUParticles();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_CPUParticles_wrapper_convert_from_particles(WasGoId wasgo_id, WasGoId p_particles);
int _wasgo_CPUParticles_wrapper_get_amount(WasGoId wasgo_id);
void _wasgo_CPUParticles_wrapper_get_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_CPUParticles_wrapper_get_color_ramp(WasGoId wasgo_id);
void _wasgo_CPUParticles_wrapper_get_direction(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_CPUParticles_wrapper_get_draw_order(WasGoId wasgo_id);
void _wasgo_CPUParticles_wrapper_get_emission_box_extents(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_CPUParticles_wrapper_get_emission_colors(WasGoId wasgo_id);
WasGoId _wasgo_CPUParticles_wrapper_get_emission_normals(WasGoId wasgo_id);
WasGoId _wasgo_CPUParticles_wrapper_get_emission_points(WasGoId wasgo_id);
WasGoId _wasgo_CPUParticles_wrapper_get_emission_shape(WasGoId wasgo_id);
float _wasgo_CPUParticles_wrapper_get_emission_sphere_radius(WasGoId wasgo_id);
float _wasgo_CPUParticles_wrapper_get_explosiveness_ratio(WasGoId wasgo_id);
int _wasgo_CPUParticles_wrapper_get_fixed_fps(WasGoId wasgo_id);
float _wasgo_CPUParticles_wrapper_get_flatness(WasGoId wasgo_id);
int _wasgo_CPUParticles_wrapper_get_fractional_delta(WasGoId wasgo_id);
void _wasgo_CPUParticles_wrapper_get_gravity(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_CPUParticles_wrapper_get_lifetime(WasGoId wasgo_id);
float _wasgo_CPUParticles_wrapper_get_lifetime_randomness(WasGoId wasgo_id);
WasGoId _wasgo_CPUParticles_wrapper_get_mesh(WasGoId wasgo_id);
int _wasgo_CPUParticles_wrapper_get_one_shot(WasGoId wasgo_id);
float _wasgo_CPUParticles_wrapper_get_param(WasGoId wasgo_id, WasGoId p_param);
WasGoId _wasgo_CPUParticles_wrapper_get_param_curve(WasGoId wasgo_id, WasGoId p_param);
float _wasgo_CPUParticles_wrapper_get_param_randomness(WasGoId wasgo_id, WasGoId p_param);
int _wasgo_CPUParticles_wrapper_get_particle_flag(WasGoId wasgo_id, WasGoId p_flag);
float _wasgo_CPUParticles_wrapper_get_pre_process_time(WasGoId wasgo_id);
float _wasgo_CPUParticles_wrapper_get_randomness_ratio(WasGoId wasgo_id);
float _wasgo_CPUParticles_wrapper_get_speed_scale(WasGoId wasgo_id);
float _wasgo_CPUParticles_wrapper_get_spread(WasGoId wasgo_id);
int _wasgo_CPUParticles_wrapper_get_use_local_coordinates(WasGoId wasgo_id);
int _wasgo_CPUParticles_wrapper_is_emitting(WasGoId wasgo_id);
void _wasgo_CPUParticles_wrapper_restart(WasGoId wasgo_id);
void _wasgo_CPUParticles_wrapper_set_amount(WasGoId wasgo_id, int p_amount);
void _wasgo_CPUParticles_wrapper_set_color(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_CPUParticles_wrapper_set_color_ramp(WasGoId wasgo_id, WasGoId p_ramp);
void _wasgo_CPUParticles_wrapper_set_direction(WasGoId wasgo_id, const uint8_t * p_direction, int p_direction_wasgo_buffer_size);
void _wasgo_CPUParticles_wrapper_set_draw_order(WasGoId wasgo_id, WasGoId p_order);
void _wasgo_CPUParticles_wrapper_set_emission_box_extents(WasGoId wasgo_id, const uint8_t * p_extents, int p_extents_wasgo_buffer_size);
void _wasgo_CPUParticles_wrapper_set_emission_colors(WasGoId wasgo_id, WasGoId p_array);
void _wasgo_CPUParticles_wrapper_set_emission_normals(WasGoId wasgo_id, WasGoId p_array);
void _wasgo_CPUParticles_wrapper_set_emission_points(WasGoId wasgo_id, WasGoId p_array);
void _wasgo_CPUParticles_wrapper_set_emission_shape(WasGoId wasgo_id, WasGoId p_shape);
void _wasgo_CPUParticles_wrapper_set_emission_sphere_radius(WasGoId wasgo_id, float p_radius);
void _wasgo_CPUParticles_wrapper_set_emitting(WasGoId wasgo_id, bool p_emitting);
void _wasgo_CPUParticles_wrapper_set_explosiveness_ratio(WasGoId wasgo_id, float p_ratio);
void _wasgo_CPUParticles_wrapper_set_fixed_fps(WasGoId wasgo_id, int p_fps);
void _wasgo_CPUParticles_wrapper_set_flatness(WasGoId wasgo_id, float p_amount);
void _wasgo_CPUParticles_wrapper_set_fractional_delta(WasGoId wasgo_id, bool p_enable);
void _wasgo_CPUParticles_wrapper_set_gravity(WasGoId wasgo_id, const uint8_t * p_accel_vec, int p_accel_vec_wasgo_buffer_size);
void _wasgo_CPUParticles_wrapper_set_lifetime(WasGoId wasgo_id, float p_secs);
void _wasgo_CPUParticles_wrapper_set_lifetime_randomness(WasGoId wasgo_id, float p_random);
void _wasgo_CPUParticles_wrapper_set_mesh(WasGoId wasgo_id, WasGoId p_mesh);
void _wasgo_CPUParticles_wrapper_set_one_shot(WasGoId wasgo_id, bool p_enable);
void _wasgo_CPUParticles_wrapper_set_param(WasGoId wasgo_id, WasGoId p_param, float p_value);
void _wasgo_CPUParticles_wrapper_set_param_curve(WasGoId wasgo_id, WasGoId p_param, WasGoId p_curve);
void _wasgo_CPUParticles_wrapper_set_param_randomness(WasGoId wasgo_id, WasGoId p_param, float p_randomness);
void _wasgo_CPUParticles_wrapper_set_particle_flag(WasGoId wasgo_id, WasGoId p_flag, bool p_enable);
void _wasgo_CPUParticles_wrapper_set_pre_process_time(WasGoId wasgo_id, float p_secs);
void _wasgo_CPUParticles_wrapper_set_randomness_ratio(WasGoId wasgo_id, float p_ratio);
void _wasgo_CPUParticles_wrapper_set_speed_scale(WasGoId wasgo_id, float p_scale);
void _wasgo_CPUParticles_wrapper_set_spread(WasGoId wasgo_id, float p_degrees);
void _wasgo_CPUParticles_wrapper_set_use_local_coordinates(WasGoId wasgo_id, bool p_enable);

    //constructor and destructor wrappers
    WasGoId _wasgo_CPUParticles_constructor();
    void _wasgo_CPUParticles_destructor(WasGoId p_wasgo_id);
            
}
#endif