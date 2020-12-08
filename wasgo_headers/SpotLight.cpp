/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SpotLight.h"

SpotLight::SpotLight(WasGoID p_wasgo_id) : Light(p_wasgo_id){
}
SpotLight::SpotLight(Light other) : Light(other._get_wasgo_id()){
}
SpotLight::SpotLight():Light(){
}
SpotLight SpotLight::new_instance(){
    return SpotLight(_wasgo_SpotLight_constructor());
}
WasGoID SpotLight::_get_wasgo_id(){
    return wasgo_id;
}
SpotLight::operator bool(){
    return (bool) wasgo_id;
}
