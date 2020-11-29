/* THIS FILE IS GENERATED */
#ifndef DIRECTIONALLIGHT_H
#define DIRECTIONALLIGHT_H

#include "stdint.h"

#include "Light.h"
class DirectionalLight : public Light{
public: DirectionalLight();
enum ShadowDepthRange{
SHADOW_DEPTH_RANGE_STABLE,
SHADOW_DEPTH_RANGE_OPTIMIZED
};
enum ShadowMode{
SHADOW_ORTHOGONAL,
SHADOW_PARALLEL_2_SPLITS,
SHADOW_PARALLEL_4_SPLITS
};
DirectionalLight::ShadowDepthRange get_shadow_depth_range();
DirectionalLight::ShadowMode get_shadow_mode();
bool is_blend_splits_enabled();
void set_blend_splits(bool p_enabled);
void set_shadow_depth_range(DirectionalLight::ShadowDepthRange p_mode);
void set_shadow_mode(DirectionalLight::ShadowMode p_mode);
};
#endif