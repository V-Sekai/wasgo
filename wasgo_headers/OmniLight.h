/* THIS FILE IS GENERATED */
#ifndef OMNILIGHT_H
#define OMNILIGHT_H

#include "stdint.h"

#include "Light.h"
class OmniLight : public Light{
public: OmniLight();
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
};
#endif