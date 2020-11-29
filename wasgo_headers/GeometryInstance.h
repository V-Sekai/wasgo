/* THIS FILE IS GENERATED */
#ifndef GEOMETRYINSTANCE_H
#define GEOMETRYINSTANCE_H

#include "stdint.h"

#include "Material.h"
#include "Variant.h"
#include "VisualInstance.h"
class GeometryInstance : public VisualInstance{
public: GeometryInstance();
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
#endif