/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VBoxContainer.h"

VBoxContainer::VBoxContainer(WasGoId p_wasgo_id) : BoxContainer(p_wasgo_id){
}
VBoxContainer::VBoxContainer(){
    wasgo_id = _wasgo_VBoxContainer_constructor();
}
VBoxContainer::~VBoxContainer(){
    _wasgo_VBoxContainer_destructor(wasgo_id);
}