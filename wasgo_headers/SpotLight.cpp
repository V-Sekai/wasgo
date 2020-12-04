/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SpotLight.h"

SpotLight::SpotLight(WasGoId p_wasgo_id) : Light(p_wasgo_id){
}
SpotLight::SpotLight(Light other) : Light(other._get_wasgo_id()){
    wasgo_id = _wasgo_SpotLight_constructor();
}
SpotLight::new_instance(){
    return SpotLight(_wasgo_SpotLight_constructor());
}