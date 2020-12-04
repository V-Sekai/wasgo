/* THIS FILE IS GENERATED */
#ifndef GEOMETRYINSTANCE_H
#define GEOMETRYINSTANCE_H

#include "wasgo\wasgo.h"

#include "Material.h"
#include "AABB.h"
#include "VisualInstance.h"
class GeometryInstance : public VisualInstance{
public:
enum Flags{
FLAG_USE_BAKED_LIGHT,
FLAG_DRAW_NEXT_FRAME_IF_VISIBLE,
FLAG_MAX
};
enum ShadowCastingSetting{
SHADOW_CASTING_SETTING_OFF,
SHADOW_CASTING_SETTING_ON,
SHADOW_CASTING_SETTING_DOUBLE_SIDED,
SHADOW_CASTING_SETTING_SHADOWS_ONLY
};
GeometryInstance::ShadowCastingSetting get_cast_shadows_setting();
float get_extra_cull_margin();
bool get_flag(GeometryInstance::Flags p_flag);
float get_lod_max_distance();
float get_lod_max_hysteresis();
float get_lod_min_distance();
float get_lod_min_hysteresis();
Material get_material_override();
void set_cast_shadows_setting(GeometryInstance::ShadowCastingSetting p_shadow_casting_setting);
void set_custom_aabb(AABB p_aabb);
void set_extra_cull_margin(float p_margin);
void set_flag(GeometryInstance::Flags p_flag, bool p_value);
void set_lod_max_distance(float p_mode);
void set_lod_max_hysteresis(float p_mode);
void set_lod_min_distance(float p_mode);
void set_lod_min_hysteresis(float p_mode);
void set_material_override(Material p_material);
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_GeometryInstance_wrapper_get_cast_shadows_setting(WasGoId wasgo_id);
float _wasgo_GeometryInstance_wrapper_get_extra_cull_margin(WasGoId wasgo_id);
int _wasgo_GeometryInstance_wrapper_get_flag(WasGoId wasgo_id, WasGoId p_flag);
float _wasgo_GeometryInstance_wrapper_get_lod_max_distance(WasGoId wasgo_id);
float _wasgo_GeometryInstance_wrapper_get_lod_max_hysteresis(WasGoId wasgo_id);
float _wasgo_GeometryInstance_wrapper_get_lod_min_distance(WasGoId wasgo_id);
float _wasgo_GeometryInstance_wrapper_get_lod_min_hysteresis(WasGoId wasgo_id);
WasGoId _wasgo_GeometryInstance_wrapper_get_material_override(WasGoId wasgo_id);
void _wasgo_GeometryInstance_wrapper_set_cast_shadows_setting(WasGoId wasgo_id, WasGoId p_shadow_casting_setting);
void _wasgo_GeometryInstance_wrapper_set_custom_aabb(WasGoId wasgo_id, const uint8_t * p_aabb, int p_aabb_wasgo_buffer_size);
void _wasgo_GeometryInstance_wrapper_set_extra_cull_margin(WasGoId wasgo_id, float p_margin);
void _wasgo_GeometryInstance_wrapper_set_flag(WasGoId wasgo_id, WasGoId p_flag, bool p_value);
void _wasgo_GeometryInstance_wrapper_set_lod_max_distance(WasGoId wasgo_id, float p_mode);
void _wasgo_GeometryInstance_wrapper_set_lod_max_hysteresis(WasGoId wasgo_id, float p_mode);
void _wasgo_GeometryInstance_wrapper_set_lod_min_distance(WasGoId wasgo_id, float p_mode);
void _wasgo_GeometryInstance_wrapper_set_lod_min_hysteresis(WasGoId wasgo_id, float p_mode);
void _wasgo_GeometryInstance_wrapper_set_material_override(WasGoId wasgo_id, WasGoId p_material);

    //constructor and destructor wrappers
    WasGoId _wasgo_GeometryInstance_constructor();
    void _wasgo_GeometryInstance_destructor(WasGoId p_wasgo_id);
            
}
#endif