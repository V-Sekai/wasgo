/* THIS FILE IS GENERATED */
#ifndef PARTICLES_H
#define PARTICLES_H

#include "wasgo\wasgo.h"

#include "AABB.h"
#include "GeometryInstance.h"
#include "Material.h"
#include "Mesh.h"
class Particles : public GeometryInstance{
public:
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

protected:
public:
explicit Particles(WasGoID p_wasgo_id);
explicit Particles(GeometryInstance other);
Particles new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Particles_wrapper_capture_aabb(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Particles_wrapper_get_amount(WasGoID wasgo_id);
WasGoID _wasgo_Particles_wrapper_get_draw_order(WasGoID wasgo_id);
WasGoID _wasgo_Particles_wrapper_get_draw_pass_mesh(WasGoID wasgo_id, int p_pass);
int _wasgo_Particles_wrapper_get_draw_passes(WasGoID wasgo_id);
float _wasgo_Particles_wrapper_get_explosiveness_ratio(WasGoID wasgo_id);
int _wasgo_Particles_wrapper_get_fixed_fps(WasGoID wasgo_id);
int _wasgo_Particles_wrapper_get_fractional_delta(WasGoID wasgo_id);
float _wasgo_Particles_wrapper_get_lifetime(WasGoID wasgo_id);
int _wasgo_Particles_wrapper_get_one_shot(WasGoID wasgo_id);
float _wasgo_Particles_wrapper_get_pre_process_time(WasGoID wasgo_id);
WasGoID _wasgo_Particles_wrapper_get_process_material(WasGoID wasgo_id);
float _wasgo_Particles_wrapper_get_randomness_ratio(WasGoID wasgo_id);
float _wasgo_Particles_wrapper_get_speed_scale(WasGoID wasgo_id);
int _wasgo_Particles_wrapper_get_use_local_coordinates(WasGoID wasgo_id);
void _wasgo_Particles_wrapper_get_visibility_aabb(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Particles_wrapper_is_emitting(WasGoID wasgo_id);
void _wasgo_Particles_wrapper_restart(WasGoID wasgo_id);
void _wasgo_Particles_wrapper_set_amount(WasGoID wasgo_id, int p_amount);
void _wasgo_Particles_wrapper_set_draw_order(WasGoID wasgo_id, WasGoID p_order);
void _wasgo_Particles_wrapper_set_draw_pass_mesh(WasGoID wasgo_id, int p_pass, WasGoID p_mesh);
void _wasgo_Particles_wrapper_set_draw_passes(WasGoID wasgo_id, int p_passes);
void _wasgo_Particles_wrapper_set_emitting(WasGoID wasgo_id, bool p_emitting);
void _wasgo_Particles_wrapper_set_explosiveness_ratio(WasGoID wasgo_id, float p_ratio);
void _wasgo_Particles_wrapper_set_fixed_fps(WasGoID wasgo_id, int p_fps);
void _wasgo_Particles_wrapper_set_fractional_delta(WasGoID wasgo_id, bool p_enable);
void _wasgo_Particles_wrapper_set_lifetime(WasGoID wasgo_id, float p_secs);
void _wasgo_Particles_wrapper_set_one_shot(WasGoID wasgo_id, bool p_enable);
void _wasgo_Particles_wrapper_set_pre_process_time(WasGoID wasgo_id, float p_secs);
void _wasgo_Particles_wrapper_set_process_material(WasGoID wasgo_id, WasGoID p_material);
void _wasgo_Particles_wrapper_set_randomness_ratio(WasGoID wasgo_id, float p_ratio);
void _wasgo_Particles_wrapper_set_speed_scale(WasGoID wasgo_id, float p_scale);
void _wasgo_Particles_wrapper_set_use_local_coordinates(WasGoID wasgo_id, bool p_enable);
void _wasgo_Particles_wrapper_set_visibility_aabb(WasGoID wasgo_id, const uint8_t * p_aabb, int p_aabb_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_Particles_constructor();
            
}
#endif