/* THIS FILE IS GENERATED */
#ifndef PARTICLES2D_H
#define PARTICLES2D_H

#include "stdint.h"

#include "Material.h"
#include "Variant.h"
#include "Texture.h"
#include "Node2D.h"
class Particles2D : public Node2D{
public: Particles2D();
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
};
#endif