/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PHashTranslation.h"
void PHashTranslation::generate(Translation p_from){
	_wasgo_PHashTranslation_wrapper_generate(wasgo_id, p_from._get_wasgo_id());
}

PHashTranslation::PHashTranslation(WasGoID p_wasgo_id) : Translation(p_wasgo_id){
}
PHashTranslation::PHashTranslation(Translation other) : Translation(other._get_wasgo_id()){
}
PHashTranslation::PHashTranslation():Translation(){
}
PHashTranslation PHashTranslation::new_instance(){
    return PHashTranslation(_wasgo_PHashTranslation_constructor());
}
WasGoID PHashTranslation::_get_wasgo_id(){
    return wasgo_id;
}
PHashTranslation::operator bool(){
    return (bool) wasgo_id;
}
