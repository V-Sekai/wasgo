/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Material.h"
#include "Texture.h"
#include "Variant.h"
#include "GradientTexture.h"
#include "Vector3.h"
#include "CurveTexture.h"
class ParticlesMaterial : public Material{
public: ParticlesMaterial();
enum Flags{
FLAG_ALIGN_Y_TO_VELOCITY: 0,
FLAG_ROTATE_Y: 1,
FLAG_DISABLE_Z: 2,
};
enum EmissionShape{
EMISSION_SHAPE_POINT: 0,
EMISSION_SHAPE_SPHERE: 1,
EMISSION_SHAPE_BOX: 2,
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
Color  get_color();
Color  get_color();
Texture  get_color_ramp();
Texture  get_color_ramp();
Vector3  get_direction();
Vector3  get_direction();
Vector3  get_emission_box_extents();
Vector3  get_emission_box_extents();
Texture  get_emission_color_texture();
Texture  get_emission_color_texture();
Texture  get_emission_normal_texture();
Texture  get_emission_normal_texture();
int  get_emission_point_count();
int  get_emission_point_count();
Texture  get_emission_point_texture();
Texture  get_emission_point_texture();
enum.ParticlesMaterial::EmissionShape  get_emission_shape();
enum.ParticlesMaterial::EmissionShape  get_emission_shape();
float  get_emission_sphere_radius();
float  get_emission_sphere_radius();
bool  get_flag(int flag);
float  get_flatness();
float  get_flatness();
Vector3  get_gravity();
Vector3  get_gravity();
float  get_lifetime_randomness();
float  get_lifetime_randomness();
float  get_param(int param);
float  get_param_randomness(int param);
Texture  get_param_texture(int param);
float  get_spread();
float  get_spread();
GradientTexture  get_trail_color_modifier();
GradientTexture  get_trail_color_modifier();
int  get_trail_divisor();
int  get_trail_divisor();
CurveTexture  get_trail_size_modifier();
CurveTexture  get_trail_size_modifier();
void  set_color(Color color);
void  set_color_ramp(Texture ramp);
void  set_direction(Vector3 degrees);
void  set_emission_box_extents(Vector3 extents);
void  set_emission_color_texture(Texture texture);
void  set_emission_normal_texture(Texture texture);
void  set_emission_point_count(int point_count);
void  set_emission_point_texture(Texture texture);
void  set_emission_shape(int shape);
void  set_emission_sphere_radius(float radius);
void  set_flag(int flag, bool enable);
void  set_flatness(float amount);
void  set_gravity(Vector3 accel_vec);
void  set_lifetime_randomness(float randomness);
void  set_param(int param, float value);
void  set_param_randomness(int param, float randomness);
void  set_param_texture(int param, Texture texture);
void  set_spread(float degrees);
void  set_trail_color_modifier(GradientTexture texture);
void  set_trail_divisor(int divisor);
void  set_trail_size_modifier(CurveTexture texture);
};