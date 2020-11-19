/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Texture.h"
#include "Node2D.h"
#include "Material.h"
#include "Rect2.h"
class Particles2D : public Node2D{
public: Particles2D();
enum DrawOrder{
DRAW_ORDER_INDEX: 0,
};
Rect2  capture_rect();
Rect2  capture_rect();
int  get_amount();
int  get_amount();
enum.Particles2D::DrawOrder  get_draw_order();
enum.Particles2D::DrawOrder  get_draw_order();
float  get_explosiveness_ratio();
float  get_explosiveness_ratio();
int  get_fixed_fps();
int  get_fixed_fps();
bool  get_fractional_delta();
bool  get_fractional_delta();
float  get_lifetime();
float  get_lifetime();
Texture  get_normal_map();
Texture  get_normal_map();
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
Texture  get_texture();
Texture  get_texture();
bool  get_use_local_coordinates();
bool  get_use_local_coordinates();
Rect2  get_visibility_rect();
Rect2  get_visibility_rect();
bool  is_emitting();
bool  is_emitting();
void  restart();
void  restart();
void  set_amount(int amount);
void  set_draw_order(int order);
void  set_emitting(bool emitting);
void  set_explosiveness_ratio(float ratio);
void  set_fixed_fps(int fps);
void  set_fractional_delta(bool enable);
void  set_lifetime(float secs);
void  set_normal_map(Texture texture);
void  set_one_shot(bool secs);
void  set_pre_process_time(float secs);
void  set_process_material(Material material);
void  set_randomness_ratio(float ratio);
void  set_speed_scale(float scale);
void  set_texture(Texture texture);
void  set_use_local_coordinates(bool enable);
void  set_visibility_rect(Rect2 visibility_rect);
};