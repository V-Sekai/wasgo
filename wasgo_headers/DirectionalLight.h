/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Light.h"
class DirectionalLight : public Light{
public: DirectionalLight();
enum ShadowMode{
SHADOW_ORTHOGONAL: 0,
SHADOW_PARALLEL_2_SPLITS: 1,
};
enum ShadowDepthRange{
SHADOW_DEPTH_RANGE_STABLE: 0,
};
enum.DirectionalLight::ShadowDepthRange  get_shadow_depth_range();
enum.DirectionalLight::ShadowDepthRange  get_shadow_depth_range();
enum.DirectionalLight::ShadowMode  get_shadow_mode();
enum.DirectionalLight::ShadowMode  get_shadow_mode();
bool  is_blend_splits_enabled();
bool  is_blend_splits_enabled();
void  set_blend_splits(bool enabled);
void  set_shadow_depth_range(int mode);
void  set_shadow_mode(int mode);
};