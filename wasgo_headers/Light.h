/* THIS FILE IS GENERATED */
#ifndef LIGHT_H
#define LIGHT_H

#include "wasgo\wasgo.h"

#include "Color.h"
#include "VisualInstance.h"
class Light : public VisualInstance{
public:
enum BakeMode{
BAKE_DISABLED,
BAKE_INDIRECT,
BAKE_ALL
};
enum Param{
PARAM_ENERGY,
PARAM_INDIRECT_ENERGY,
PARAM_SPECULAR,
PARAM_RANGE,
PARAM_ATTENUATION,
PARAM_SPOT_ANGLE,
PARAM_SPOT_ATTENUATION,
PARAM_CONTACT_SHADOW_SIZE,
PARAM_SHADOW_MAX_DISTANCE,
PARAM_SHADOW_SPLIT_1_OFFSET,
PARAM_SHADOW_SPLIT_2_OFFSET,
PARAM_SHADOW_SPLIT_3_OFFSET,
PARAM_SHADOW_NORMAL_BIAS,
PARAM_SHADOW_BIAS,
PARAM_SHADOW_BIAS_SPLIT_SCALE,
PARAM_MAX
};
Light::BakeMode get_bake_mode();
Color get_color();
int get_cull_mask();
float get_param(Light::Param p_param);
Color get_shadow_color();
bool get_shadow_reverse_cull_face();
bool has_shadow();
bool is_editor_only();
bool is_negative();
void set_bake_mode(Light::BakeMode p_bake_mode);
void set_color(Color p_color);
void set_cull_mask(int p_cull_mask);
void set_editor_only(bool p_editor_only);
void set_negative(bool p_enabled);
void set_param(Light::Param p_param, float p_value);
void set_shadow(bool p_enabled);
void set_shadow_color(Color p_shadow_color);
void set_shadow_reverse_cull_face(bool p_enable);
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_Light_wrapper_get_bake_mode(WasGoId wasgo_id);
void _wasgo_Light_wrapper_get_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Light_wrapper_get_cull_mask(WasGoId wasgo_id);
float _wasgo_Light_wrapper_get_param(WasGoId wasgo_id, WasGoId p_param);
void _wasgo_Light_wrapper_get_shadow_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Light_wrapper_get_shadow_reverse_cull_face(WasGoId wasgo_id);
int _wasgo_Light_wrapper_has_shadow(WasGoId wasgo_id);
int _wasgo_Light_wrapper_is_editor_only(WasGoId wasgo_id);
int _wasgo_Light_wrapper_is_negative(WasGoId wasgo_id);
void _wasgo_Light_wrapper_set_bake_mode(WasGoId wasgo_id, WasGoId p_bake_mode);
void _wasgo_Light_wrapper_set_color(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_Light_wrapper_set_cull_mask(WasGoId wasgo_id, int p_cull_mask);
void _wasgo_Light_wrapper_set_editor_only(WasGoId wasgo_id, bool p_editor_only);
void _wasgo_Light_wrapper_set_negative(WasGoId wasgo_id, bool p_enabled);
void _wasgo_Light_wrapper_set_param(WasGoId wasgo_id, WasGoId p_param, float p_value);
void _wasgo_Light_wrapper_set_shadow(WasGoId wasgo_id, bool p_enabled);
void _wasgo_Light_wrapper_set_shadow_color(WasGoId wasgo_id, const uint8_t * p_shadow_color, int p_shadow_color_wasgo_buffer_size);
void _wasgo_Light_wrapper_set_shadow_reverse_cull_face(WasGoId wasgo_id, bool p_enable);

    //constructor wrappers
    WasGoId _wasgo_Light_constructor();
            
}
#endif