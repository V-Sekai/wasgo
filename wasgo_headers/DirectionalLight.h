/* THIS FILE IS GENERATED */
#ifndef DIRECTIONALLIGHT_H
#define DIRECTIONALLIGHT_H

#include "wasgo\wasgo.h"

#include "Light.h"
class DirectionalLight : public Light{
public:
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

protected:
public:
explicit DirectionalLight(WasGoId p_wasgo_id);
explicit DirectionalLight(Light other);
DirectionalLight new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_DirectionalLight_wrapper_get_shadow_depth_range(WasGoId wasgo_id);
WasGoId _wasgo_DirectionalLight_wrapper_get_shadow_mode(WasGoId wasgo_id);
int _wasgo_DirectionalLight_wrapper_is_blend_splits_enabled(WasGoId wasgo_id);
void _wasgo_DirectionalLight_wrapper_set_blend_splits(WasGoId wasgo_id, bool p_enabled);
void _wasgo_DirectionalLight_wrapper_set_shadow_depth_range(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_DirectionalLight_wrapper_set_shadow_mode(WasGoId wasgo_id, WasGoId p_mode);

    //constructor wrappers
    WasGoId _wasgo_DirectionalLight_constructor();
            
}
#endif