/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PanelContainer.h"

PanelContainer::PanelContainer(WasGoId p_wasgo_id) : Container(p_wasgo_id){
}
PanelContainer::PanelContainer(){
    wasgo_id = _wasgo_PanelContainer_constructor();
}
PanelContainer::~PanelContainer(){
    _wasgo_PanelContainer_destructor(wasgo_id);
}