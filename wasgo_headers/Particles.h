/* THIS FILE IS GENERATED */
#ifndef PARTICLES_H
#define PARTICLES_H

#include <stdint.h>

#include "Material.h"
#include "AABB.h"
#include "GeometryInstance.h"
#include "Mesh.h"
class Particles : public GeometryInstance{
public: Particles();
enum DrawOrder{
DRAW_ORDER_INDEX: 0,
DRAW_ORDER_LIFETIME: 1,
};
AABB  capture_aabb();
AABB  capture_aabb();
int  get_amount();
int  get_amount();
enum.Particles::DrawOrder  get_draw_order();
enum.Particles::DrawOrder  get_draw_order();
Mesh  get_draw_pass_mesh(int pass);
int  get_draw_passes();
int  get_draw_passes();
float  get_explosiveness_ratio();
float  get_explosiveness_ratio();
int  get_fixed_fps();
int  get_fixed_fps();
bool  get_fractional_delta();
bool  get_fractional_delta();
float  get_lifetime();
float  get_lifetime();
bool  get_one_shot();
bool  get_one_shot();
float  get_pre_process_time();
float  get_pre_process_time();
Material  get_process_material();
Material  get_process_material();
float  get_randomness_ratio();
float  get_randomness_ratio();
float  get_speed_scale();
float  get_speed_scale();
bool  get_use_local_coordinates();
bool  get_use_local_coordinates();
AABB  get_visibility_aabb();
AABB  get_visibility_aabb();
bool  is_emitting();
bool  is_emitting();
void  restart();
void  restart();
void  set_amount(int amount);
void  set_draw_order(int order);
void  set_draw_pass_mesh(int pass, Mesh mesh);
void  set_draw_passes(int passes);
void  set_emitting(bool emitting);
void  set_explosiveness_ratio(float ratio);
void  set_fixed_fps(int fps);
void  set_fractional_delta(bool enable);
void  set_lifetime(float secs);
void  set_one_shot(bool enable);
void  set_pre_process_time(float secs);
void  set_process_material(Material material);
void  set_randomness_ratio(float ratio);
void  set_speed_scale(float scale);
void  set_use_local_coordinates(bool enable);
void  set_visibility_aabb(AABB aabb);
};
#endif