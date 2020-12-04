/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "MarginContainer.h"

MarginContainer::MarginContainer(WasGoID p_wasgo_id) : Container(p_wasgo_id){
}
MarginContainer::MarginContainer(Container other) : Container(other._get_wasgo_id()){
    wasgo_id = _wasgo_MarginContainer_constructor();
}
MarginContainer::new_instance(){
    return MarginContainer(_wasgo_MarginContainer_constructor());
}