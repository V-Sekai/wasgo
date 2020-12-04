/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "HBoxContainer.h"

HBoxContainer::HBoxContainer(WasGoId p_wasgo_id) : BoxContainer(p_wasgo_id){
}
HBoxContainer::HBoxContainer(BoxContainer other) : BoxContainer(other._get_wasgo_id()){
    wasgo_id = _wasgo_HBoxContainer_constructor();
}
HBoxContainer::new_instance(){
    return HBoxContainer(_wasgo_HBoxContainer_constructor());
}