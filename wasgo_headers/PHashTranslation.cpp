/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PHashTranslation.h"
void PHashTranslation::generate(Translation p_from){
	_wasgo_PHashTranslation_wrapper_generate(wasgo_id, p_from._get_wasgo_id());
}

PHashTranslation::PHashTranslation(WasGoId p_wasgo_id) : Translation(p_wasgo_id){
}
PHashTranslation::PHashTranslation(){
    wasgo_id = _wasgo_PHashTranslation_constructor();
}
PHashTranslation::~PHashTranslation(){
    _wasgo_PHashTranslation_destructor(wasgo_id);
}