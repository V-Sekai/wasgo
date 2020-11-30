/* THIS FILE IS GENERATED */
#ifndef OMNILIGHT_H
#define OMNILIGHT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Light.h"
class OmniLight : public Light{
enum ShadowDetail{
SHADOW_DETAIL_VERTICAL,
SHADOW_DETAIL_HORIZONTAL
};
enum ShadowMode{
SHADOW_DUAL_PARABOLOID,
SHADOW_CUBE
};
OmniLight::ShadowDetail get_shadow_detail();
OmniLight::ShadowMode get_shadow_mode();
void set_shadow_detail(OmniLight::ShadowDetail p_detail);
void set_shadow_mode(OmniLight::ShadowMode p_mode);

OmniLight(WasGoId p_wasgo_id);
~OmniLight();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_OmniLight_wrapper_get_shadow_detail(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_OmniLight_wrapper_get_shadow_mode(WasGoId wasgo_id);
void _wasgo_OmniLight_wrapper_set_shadow_detail(WasGoId wasgo_id, WasGo::WasGoId p_detail);
void _wasgo_OmniLight_wrapper_set_shadow_mode(WasGoId wasgo_id, WasGo::WasGoId p_mode);
}
#endif