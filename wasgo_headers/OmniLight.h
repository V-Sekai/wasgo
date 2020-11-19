/* THIS FILE IS GENERATED */
#ifndef OMNILIGHT_H
#define OMNILIGHT_H

#include <stdint.h>

#include "Light.h"
class OmniLight : public Light{
public: OmniLight();
enum ShadowMode{
SHADOW_DUAL_PARABOLOID: 0,
};
enum ShadowDetail{
SHADOW_DETAIL_VERTICAL: 0,
};
enum.OmniLight::ShadowDetail  get_shadow_detail();
enum.OmniLight::ShadowDetail  get_shadow_detail();
enum.OmniLight::ShadowMode  get_shadow_mode();
enum.OmniLight::ShadowMode  get_shadow_mode();
void  set_shadow_detail(int detail);
void  set_shadow_mode(int mode);
};
#endif