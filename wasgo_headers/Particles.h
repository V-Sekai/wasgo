/* THIS FILE IS GENERATED */
#ifndef PARTICLES_H
#define PARTICLES_H

#include "stdint.h"

#include "Material.h"
#include "Variant.h"
#include "Mesh.h"
#include "GeometryInstance.h"
class Particles : public GeometryInstance{
public: Particles();
enum DrawOrder{
DRAW_ORDER_INDEX,
DRAW_ORDER_LIFETIME,
DRAW_ORDER_VIEW_DEPTH
};
AABB capture_aabb();
int get_amount();
Particles::DrawOrder get_draw_order();
Mesh get_draw_pass_mesh(int p_pass);
int get_draw_passes();
float get_explosiveness_ratio();
int get_fixed_fps();
bool get_fractional_delta();
float get_lifetime();
bool get_one_shot();
float get_pre_process_time();
Material get_process_material();
float get_randomness_ratio();
float get_speed_scale();
bool get_use_local_coordinates();
AABB get_visibility_aabb();
bool is_emitting();
void restart();
void set_amount(int p_amount);
void set_draw_order(Particles::DrawOrder p_order);
void set_draw_pass_mesh(int p_pass, Mesh p_mesh);
void set_draw_passes(int p_passes);
void set_emitting(bool p_emitting);
void set_explosiveness_ratio(float p_ratio);
void set_fixed_fps(int p_fps);
void set_fractional_delta(bool p_enable);
void set_lifetime(float p_secs);
void set_one_shot(bool p_enable);
void set_pre_process_time(float p_secs);
void set_process_material(Material p_material);
void set_randomness_ratio(float p_ratio);
void set_speed_scale(float p_scale);
void set_use_local_coordinates(bool p_enable);
void set_visibility_aabb(AABB p_aabb);
};
#endif