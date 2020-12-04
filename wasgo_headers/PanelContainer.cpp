/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PanelContainer.h"

PanelContainer::PanelContainer(WasGoID p_wasgo_id) : Container(p_wasgo_id){
}
PanelContainer::PanelContainer(Container other) : Container(other._get_wasgo_id()){
    wasgo_id = _wasgo_PanelContainer_constructor();
}
PanelContainer::new_instance(){
    return PanelContainer(_wasgo_PanelContainer_constructor());
}