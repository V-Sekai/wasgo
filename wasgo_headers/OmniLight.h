/* THIS FILE IS GENERATED */
#ifndef OMNILIGHT_H
#define OMNILIGHT_H

#include "wasgo\wasgoid.h"

#include "Light.h"
class OmniLight : public Light{
public:
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

protected:
public:
explicit OmniLight(WasGoID p_wasgo_id);
explicit OmniLight(Light other);
OmniLight();
OmniLight new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_OmniLight_wrapper_get_shadow_detail(WasGoID wasgo_id);
WasGoID _wasgo_OmniLight_wrapper_get_shadow_mode(WasGoID wasgo_id);
void _wasgo_OmniLight_wrapper_set_shadow_detail(WasGoID wasgo_id, WasGoID p_detail);
void _wasgo_OmniLight_wrapper_set_shadow_mode(WasGoID wasgo_id, WasGoID p_mode);

    //constructor wrappers
    WasGoID _wasgo_OmniLight_constructor();
            
}
#endif