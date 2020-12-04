/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "HSplitContainer.h"

HSplitContainer::HSplitContainer(WasGoID p_wasgo_id) : SplitContainer(p_wasgo_id){
}
HSplitContainer::HSplitContainer(SplitContainer other) : SplitContainer(other._get_wasgo_id()){
    wasgo_id = _wasgo_HSplitContainer_constructor();
}
HSplitContainer::new_instance(){
    return HSplitContainer(_wasgo_HSplitContainer_constructor());
}