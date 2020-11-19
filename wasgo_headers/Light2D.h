/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Texture.h"
#include "Node2D.h"
#include "Vector2.h"
#include "Variant.h"
class Light2D : public Node2D{
public: Light2D();
enum ShadowFilter{
SHADOW_FILTER_NONE: 0,
SHADOW_FILTER_PCF3: 1,
SHADOW_FILTER_PCF5: 2,
SHADOW_FILTER_PCF7: 3,
SHADOW_FILTER_PCF9: 4,
};
enum Mode{
MODE_ADD: 0,
MODE_SUB: 1,
MODE_MIX: 2,
};
Color  get_color();
Color  get_color();
float  get_energy();
float  get_energy();
float  get_height();
float  get_height();
int  get_item_cull_mask();
int  get_item_cull_mask();
int  get_item_shadow_cull_mask();
int  get_item_shadow_cull_mask();
int  get_layer_range_max();
int  get_layer_range_max();
int  get_layer_range_min();
int  get_layer_range_min();
enum.Light2D::Mode  get_mode();
enum.Light2D::Mode  get_mode();
int  get_shadow_buffer_size();
int  get_shadow_buffer_size();
Color  get_shadow_color();
Color  get_shadow_color();
enum.Light2D::ShadowFilter  get_shadow_filter();
enum.Light2D::ShadowFilter  get_shadow_filter();
float  get_shadow_gradient_length();
float  get_shadow_gradient_length();
float  get_shadow_smooth();
float  get_shadow_smooth();
Texture  get_texture();
Texture  get_texture();
Vector2  get_texture_offset();
Vector2  get_texture_offset();
float  get_texture_scale();
float  get_texture_scale();
int  get_z_range_max();
int  get_z_range_max();
int  get_z_range_min();
int  get_z_range_min();
bool  is_editor_only();
bool  is_editor_only();
bool  is_enabled();
bool  is_enabled();
bool  is_shadow_enabled();
bool  is_shadow_enabled();
void  set_color(Color color);
void  set_editor_only(bool editor_only);
void  set_enabled(bool enabled);
void  set_energy(float energy);
void  set_height(float height);
void  set_item_cull_mask(int item_cull_mask);
void  set_item_shadow_cull_mask(int item_shadow_cull_mask);
void  set_layer_range_max(int layer);
void  set_layer_range_min(int layer);
void  set_mode(int mode);
void  set_shadow_buffer_size(int size);
void  set_shadow_color(Color shadow_color);
void  set_shadow_enabled(bool enabled);
void  set_shadow_filter(int filter);
void  set_shadow_gradient_length(float multiplier);
void  set_shadow_smooth(float smooth);
void  set_texture(Texture texture);
void  set_texture_offset(Vector2 texture_offset);
void  set_texture_scale(float texture_scale);
void  set_z_range_max(int z);
void  set_z_range_min(int z);
};