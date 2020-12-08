/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VBoxContainer.h"

VBoxContainer::VBoxContainer(WasGoID p_wasgo_id) : BoxContainer(p_wasgo_id){
}
VBoxContainer::VBoxContainer(BoxContainer other) : BoxContainer(other._get_wasgo_id()){
}
VBoxContainer::VBoxContainer():BoxContainer(){
}
VBoxContainer VBoxContainer::new_instance(){
    return VBoxContainer(_wasgo_VBoxContainer_constructor());
}
WasGoID VBoxContainer::_get_wasgo_id(){
    return wasgo_id;
}
VBoxContainer::operator bool(){
    return (bool) wasgo_id;
}
