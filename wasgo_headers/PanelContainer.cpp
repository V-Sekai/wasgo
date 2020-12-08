/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PanelContainer.h"

PanelContainer::PanelContainer(WasGoID p_wasgo_id) : Container(p_wasgo_id){
}
PanelContainer::PanelContainer(Container other) : Container(other._get_wasgo_id()){
}
PanelContainer::PanelContainer():Container(){
}
PanelContainer PanelContainer::new_instance(){
    return PanelContainer(_wasgo_PanelContainer_constructor());
}
WasGoID PanelContainer::_get_wasgo_id(){
    return wasgo_id;
}
PanelContainer::operator bool(){
    return (bool) wasgo_id;
}
