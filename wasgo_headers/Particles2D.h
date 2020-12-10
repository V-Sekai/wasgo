/* THIS FILE IS GENERATED */
#ifndef PARTICLES2D_H
#define PARTICLES2D_H

#include "wasgo\wasgoid.h"

#include "Rect2.h"
#include "Material.h"
#include "Texture.h"
#include "Node2D.h"
class Particles2D : public Node2D{
public:
enum DrawOrder{
DRAW_ORDER_INDEX,
DRAW_ORDER_LIFETIME
};
Rect2 capture_rect();
int get_amount();
Particles2D::DrawOrder get_draw_order();
float get_explosiveness_ratio();
int get_fixed_fps();
bool get_fractional_delta();
float get_lifetime();
Texture get_normal_map();
bool get_one_shot();
float get_pre_process_time();
Material get_process_material();
float get_randomness_ratio();
float get_speed_scale();
Texture get_texture();
bool get_use_local_coordinates();
Rect2 get_visibility_rect();
bool is_emitting();
void restart();
void set_amount(int p_amount);
void set_draw_order(Particles2D::DrawOrder p_order);
void set_emitting(bool p_emitting);
void set_explosiveness_ratio(float p_ratio);
void set_fixed_fps(int p_fps);
void set_fractional_delta(bool p_enable);
void set_lifetime(float p_secs);
void set_normal_map(Texture p_texture);
void set_one_shot(bool p_secs);
void set_pre_process_time(float p_secs);
void set_process_material(Material p_material);
void set_randomness_ratio(float p_ratio);
void set_speed_scale(float p_scale);
void set_texture(Texture p_texture);
void set_use_local_coordinates(bool p_enable);
void set_visibility_rect(Rect2 p_visibility_rect);

protected:
public:
explicit Particles2D(WasGoID p_wasgo_id);
explicit Particles2D(Node2D other);
Particles2D();
Particles2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Particles2D_wrapper_capture_rect(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Particles2D_wrapper_get_amount(WasGoID wasgo_id);
WasGoID _wasgo_Particles2D_wrapper_get_draw_order(WasGoID wasgo_id);
float _wasgo_Particles2D_wrapper_get_explosiveness_ratio(WasGoID wasgo_id);
int _wasgo_Particles2D_wrapper_get_fixed_fps(WasGoID wasgo_id);
int _wasgo_Particles2D_wrapper_get_fractional_delta(WasGoID wasgo_id);
float _wasgo_Particles2D_wrapper_get_lifetime(WasGoID wasgo_id);
WasGoID _wasgo_Particles2D_wrapper_get_normal_map(WasGoID wasgo_id);
int _wasgo_Particles2D_wrapper_get_one_shot(WasGoID wasgo_id);
float _wasgo_Particles2D_wrapper_get_pre_process_time(WasGoID wasgo_id);
WasGoID _wasgo_Particles2D_wrapper_get_process_material(WasGoID wasgo_id);
float _wasgo_Particles2D_wrapper_get_randomness_ratio(WasGoID wasgo_id);
float _wasgo_Particles2D_wrapper_get_speed_scale(WasGoID wasgo_id);
WasGoID _wasgo_Particles2D_wrapper_get_texture(WasGoID wasgo_id);
int _wasgo_Particles2D_wrapper_get_use_local_coordinates(WasGoID wasgo_id);
void _wasgo_Particles2D_wrapper_get_visibility_rect(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Particles2D_wrapper_is_emitting(WasGoID wasgo_id);
void _wasgo_Particles2D_wrapper_restart(WasGoID wasgo_id);
void _wasgo_Particles2D_wrapper_set_amount(WasGoID wasgo_id, int p_amount);
void _wasgo_Particles2D_wrapper_set_draw_order(WasGoID wasgo_id, WasGoID p_order);
void _wasgo_Particles2D_wrapper_set_emitting(WasGoID wasgo_id, bool p_emitting);
void _wasgo_Particles2D_wrapper_set_explosiveness_ratio(WasGoID wasgo_id, float p_ratio);
void _wasgo_Particles2D_wrapper_set_fixed_fps(WasGoID wasgo_id, int p_fps);
void _wasgo_Particles2D_wrapper_set_fractional_delta(WasGoID wasgo_id, bool p_enable);
void _wasgo_Particles2D_wrapper_set_lifetime(WasGoID wasgo_id, float p_secs);
void _wasgo_Particles2D_wrapper_set_normal_map(WasGoID wasgo_id, WasGoID p_texture);
void _wasgo_Particles2D_wrapper_set_one_shot(WasGoID wasgo_id, bool p_secs);
void _wasgo_Particles2D_wrapper_set_pre_process_time(WasGoID wasgo_id, float p_secs);
void _wasgo_Particles2D_wrapper_set_process_material(WasGoID wasgo_id, WasGoID p_material);
void _wasgo_Particles2D_wrapper_set_randomness_ratio(WasGoID wasgo_id, float p_ratio);
void _wasgo_Particles2D_wrapper_set_speed_scale(WasGoID wasgo_id, float p_scale);
void _wasgo_Particles2D_wrapper_set_texture(WasGoID wasgo_id, WasGoID p_texture);
void _wasgo_Particles2D_wrapper_set_use_local_coordinates(WasGoID wasgo_id, bool p_enable);
void _wasgo_Particles2D_wrapper_set_visibility_rect(WasGoID wasgo_id, const uint8_t * p_visibility_rect, int p_visibility_rect_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_Particles2D_constructor();
            
}
#endif