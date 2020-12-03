/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SpotLight.h"

SpotLight::SpotLight(WasGoId p_wasgo_id) : Light(p_wasgo_id){
}
SpotLight::SpotLight(){
    wasgo_id = _wasgo_SpotLight_constructor();
}
SpotLight::~SpotLight(){
    _wasgo_SpotLight_destructor(wasgo_id);
}