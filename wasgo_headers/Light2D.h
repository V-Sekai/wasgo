/* THIS FILE IS GENERATED */
#ifndef LIGHT2D_H
#define LIGHT2D_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Color.h"
#include "Node2D.h"
#include "Texture.h"
class Light2D : public Node2D{
public:
enum Mode{
MODE_ADD,
MODE_SUB,
MODE_MIX,
MODE_MASK
};
enum ShadowFilter{
SHADOW_FILTER_NONE,
SHADOW_FILTER_PCF3,
SHADOW_FILTER_PCF5,
SHADOW_FILTER_PCF7,
SHADOW_FILTER_PCF9,
SHADOW_FILTER_PCF13
};
Color get_color();
float get_energy();
float get_height();
int get_item_cull_mask();
int get_item_shadow_cull_mask();
int get_layer_range_max();
int get_layer_range_min();
Light2D::Mode get_mode();
int get_shadow_buffer_size();
Color get_shadow_color();
Light2D::ShadowFilter get_shadow_filter();
float get_shadow_gradient_length();
float get_shadow_smooth();
Texture get_texture();
Vector2 get_texture_offset();
float get_texture_scale();
int get_z_range_max();
int get_z_range_min();
bool is_editor_only();
bool is_enabled();
bool is_shadow_enabled();
void set_color(Color p_color);
void set_editor_only(bool p_editor_only);
void set_enabled(bool p_enabled);
void set_energy(float p_energy);
void set_height(float p_height);
void set_item_cull_mask(int p_item_cull_mask);
void set_item_shadow_cull_mask(int p_item_shadow_cull_mask);
void set_layer_range_max(int p_layer);
void set_layer_range_min(int p_layer);
void set_mode(Light2D::Mode p_mode);
void set_shadow_buffer_size(int p_size);
void set_shadow_color(Color p_shadow_color);
void set_shadow_enabled(bool p_enabled);
void set_shadow_filter(Light2D::ShadowFilter p_filter);
void set_shadow_gradient_length(float p_multiplier);
void set_shadow_smooth(float p_smooth);
void set_texture(Texture p_texture);
void set_texture_offset(Vector2 p_texture_offset);
void set_texture_scale(float p_texture_scale);
void set_z_range_max(int p_z);
void set_z_range_min(int p_z);

protected:
public:
explicit Light2D(WasGoID p_wasgo_id);
explicit Light2D(Node2D other);
Light2D new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Light2D_wrapper_get_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_Light2D_wrapper_get_energy(WasGoID wasgo_id);
float _wasgo_Light2D_wrapper_get_height(WasGoID wasgo_id);
int _wasgo_Light2D_wrapper_get_item_cull_mask(WasGoID wasgo_id);
int _wasgo_Light2D_wrapper_get_item_shadow_cull_mask(WasGoID wasgo_id);
int _wasgo_Light2D_wrapper_get_layer_range_max(WasGoID wasgo_id);
int _wasgo_Light2D_wrapper_get_layer_range_min(WasGoID wasgo_id);
WasGoID _wasgo_Light2D_wrapper_get_mode(WasGoID wasgo_id);
int _wasgo_Light2D_wrapper_get_shadow_buffer_size(WasGoID wasgo_id);
void _wasgo_Light2D_wrapper_get_shadow_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Light2D_wrapper_get_shadow_filter(WasGoID wasgo_id);
float _wasgo_Light2D_wrapper_get_shadow_gradient_length(WasGoID wasgo_id);
float _wasgo_Light2D_wrapper_get_shadow_smooth(WasGoID wasgo_id);
WasGoID _wasgo_Light2D_wrapper_get_texture(WasGoID wasgo_id);
void _wasgo_Light2D_wrapper_get_texture_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_Light2D_wrapper_get_texture_scale(WasGoID wasgo_id);
int _wasgo_Light2D_wrapper_get_z_range_max(WasGoID wasgo_id);
int _wasgo_Light2D_wrapper_get_z_range_min(WasGoID wasgo_id);
int _wasgo_Light2D_wrapper_is_editor_only(WasGoID wasgo_id);
int _wasgo_Light2D_wrapper_is_enabled(WasGoID wasgo_id);
int _wasgo_Light2D_wrapper_is_shadow_enabled(WasGoID wasgo_id);
void _wasgo_Light2D_wrapper_set_color(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_Light2D_wrapper_set_editor_only(WasGoID wasgo_id, bool p_editor_only);
void _wasgo_Light2D_wrapper_set_enabled(WasGoID wasgo_id, bool p_enabled);
void _wasgo_Light2D_wrapper_set_energy(WasGoID wasgo_id, float p_energy);
void _wasgo_Light2D_wrapper_set_height(WasGoID wasgo_id, float p_height);
void _wasgo_Light2D_wrapper_set_item_cull_mask(WasGoID wasgo_id, int p_item_cull_mask);
void _wasgo_Light2D_wrapper_set_item_shadow_cull_mask(WasGoID wasgo_id, int p_item_shadow_cull_mask);
void _wasgo_Light2D_wrapper_set_layer_range_max(WasGoID wasgo_id, int p_layer);
void _wasgo_Light2D_wrapper_set_layer_range_min(WasGoID wasgo_id, int p_layer);
void _wasgo_Light2D_wrapper_set_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_Light2D_wrapper_set_shadow_buffer_size(WasGoID wasgo_id, int p_size);
void _wasgo_Light2D_wrapper_set_shadow_color(WasGoID wasgo_id, const uint8_t * p_shadow_color, int p_shadow_color_wasgo_buffer_size);
void _wasgo_Light2D_wrapper_set_shadow_enabled(WasGoID wasgo_id, bool p_enabled);
void _wasgo_Light2D_wrapper_set_shadow_filter(WasGoID wasgo_id, WasGoID p_filter);
void _wasgo_Light2D_wrapper_set_shadow_gradient_length(WasGoID wasgo_id, float p_multiplier);
void _wasgo_Light2D_wrapper_set_shadow_smooth(WasGoID wasgo_id, float p_smooth);
void _wasgo_Light2D_wrapper_set_texture(WasGoID wasgo_id, WasGoID p_texture);
void _wasgo_Light2D_wrapper_set_texture_offset(WasGoID wasgo_id, const uint8_t * p_texture_offset, int p_texture_offset_wasgo_buffer_size);
void _wasgo_Light2D_wrapper_set_texture_scale(WasGoID wasgo_id, float p_texture_scale);
void _wasgo_Light2D_wrapper_set_z_range_max(WasGoID wasgo_id, int p_z);
void _wasgo_Light2D_wrapper_set_z_range_min(WasGoID wasgo_id, int p_z);

    //constructor wrappers
    WasGoID _wasgo_Light2D_constructor();
            
}
#endif