/* THIS FILE IS GENERATED */
#ifndef GEOMETRYINSTANCE_H
#define GEOMETRYINSTANCE_H

#include <stdint.h>

#include "AABB.h"
#include "VisualInstance.h"
#include "Material.h"
class GeometryInstance : public VisualInstance{
public: GeometryInstance();
enum Flags{
FLAG_USE_BAKED_LIGHT: 0,
FLAG_DRAW_NEXT_FRAME_IF_VISIBLE: 1,
};
enum ShadowCastingSetting{
SHADOW_CASTING_SETTING_OFF: 0,
SHADOW_CASTING_SETTING_ON: 1,
SHADOW_CASTING_SETTING_DOUBLE_SIDED: 2,
};
enum.GeometryInstance::ShadowCastingSetting  get_cast_shadows_setting();
enum.GeometryInstance::ShadowCastingSetting  get_cast_shadows_setting();
float  get_extra_cull_margin();
float  get_extra_cull_margin();
bool  get_flag(int flag);
float  get_lod_max_distance();
float  get_lod_max_distance();
float  get_lod_max_hysteresis();
float  get_lod_max_hysteresis();
float  get_lod_min_distance();
float  get_lod_min_distance();
float  get_lod_min_hysteresis();
float  get_lod_min_hysteresis();
Material  get_material_override();
Material  get_material_override();
void  set_cast_shadows_setting(int shadow_casting_setting);
void  set_custom_aabb(AABB aabb);
void  set_extra_cull_margin(float margin);
void  set_flag(int flag, bool value);
void  set_lod_max_distance(float mode);
void  set_lod_max_hysteresis(float mode);
void  set_lod_min_distance(float mode);
void  set_lod_min_hysteresis(float mode);
void  set_material_override(Material material);
};
#endif