/* THIS FILE IS GENERATED */
#ifndef LIGHT_H
#define LIGHT_H

#include <stdint.h>

#include "VisualInstance.h"
#include "Variant.h"
class Light : public VisualInstance{
public: Light();
enum BakeMode{
BAKE_DISABLED: 0,
BAKE_INDIRECT: 1,
};
enum Param{
PARAM_ENERGY: 0,
PARAM_INDIRECT_ENERGY: 1,
PARAM_SPECULAR: 2,
PARAM_RANGE: 3,
PARAM_ATTENUATION: 4,
PARAM_SPOT_ANGLE: 5,
PARAM_SPOT_ATTENUATION: 6,
PARAM_CONTACT_SHADOW_SIZE: 7,
PARAM_SHADOW_MAX_DISTANCE: 8,
PARAM_SHADOW_SPLIT_1_OFFSET: 9,
PARAM_SHADOW_SPLIT_2_OFFSET: 10,
PARAM_SHADOW_SPLIT_3_OFFSET: 11,
PARAM_SHADOW_NORMAL_BIAS: 12,
PARAM_SHADOW_BIAS: 13,
PARAM_SHADOW_BIAS_SPLIT_SCALE: 14,
};
enum.Light::BakeMode  get_bake_mode();
enum.Light::BakeMode  get_bake_mode();
Color  get_color();
Color  get_color();
int  get_cull_mask();
int  get_cull_mask();
float  get_param(int param);
Color  get_shadow_color();
Color  get_shadow_color();
bool  get_shadow_reverse_cull_face();
bool  get_shadow_reverse_cull_face();
bool  has_shadow();
bool  has_shadow();
bool  is_editor_only();
bool  is_editor_only();
bool  is_negative();
bool  is_negative();
void  set_bake_mode(int bake_mode);
void  set_color(Color color);
void  set_cull_mask(int cull_mask);
void  set_editor_only(bool editor_only);
void  set_negative(bool enabled);
void  set_param(int param, float value);
void  set_shadow(bool enabled);
void  set_shadow_color(Color shadow_color);
void  set_shadow_reverse_cull_face(bool enable);
};
#endif