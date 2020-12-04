/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VBoxContainer.h"

VBoxContainer::VBoxContainer(WasGoId p_wasgo_id) : BoxContainer(p_wasgo_id){
}
VBoxContainer::VBoxContainer(BoxContainer other) : BoxContainer(other._get_wasgo_id()){
    wasgo_id = _wasgo_VBoxContainer_constructor();
}
VBoxContainer::new_instance(){
    return VBoxContainer(_wasgo_VBoxContainer_constructor());
}