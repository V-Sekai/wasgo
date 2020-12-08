/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "HBoxContainer.h"

HBoxContainer::HBoxContainer(WasGoID p_wasgo_id) : BoxContainer(p_wasgo_id){
}
HBoxContainer::HBoxContainer(BoxContainer other) : BoxContainer(other._get_wasgo_id()){
}
HBoxContainer::HBoxContainer():BoxContainer(){
}
HBoxContainer HBoxContainer::new_instance(){
    return HBoxContainer(_wasgo_HBoxContainer_constructor());
}
WasGoID HBoxContainer::_get_wasgo_id(){
    return wasgo_id;
}
HBoxContainer::operator bool(){
    return (bool) wasgo_id;
}
