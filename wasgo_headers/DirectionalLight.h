/* THIS FILE IS GENERATED */
#ifndef DIRECTIONALLIGHT_H
#define DIRECTIONALLIGHT_H

#include "wasgo\wasgoid.h"

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
explicit DirectionalLight(WasGoID p_wasgo_id);
explicit DirectionalLight(Light other);
DirectionalLight();
DirectionalLight new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_DirectionalLight_wrapper_get_shadow_depth_range(WasGoID wasgo_id);
WasGoID _wasgo_DirectionalLight_wrapper_get_shadow_mode(WasGoID wasgo_id);
int _wasgo_DirectionalLight_wrapper_is_blend_splits_enabled(WasGoID wasgo_id);
void _wasgo_DirectionalLight_wrapper_set_blend_splits(WasGoID wasgo_id, bool p_enabled);
void _wasgo_DirectionalLight_wrapper_set_shadow_depth_range(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_DirectionalLight_wrapper_set_shadow_mode(WasGoID wasgo_id, WasGoID p_mode);

    //constructor wrappers
    WasGoID _wasgo_DirectionalLight_constructor();
            
}
#endif