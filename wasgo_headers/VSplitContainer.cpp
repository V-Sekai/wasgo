/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VSplitContainer.h"

VSplitContainer::VSplitContainer(WasGoID p_wasgo_id) : SplitContainer(p_wasgo_id){
}
VSplitContainer::VSplitContainer(SplitContainer other) : SplitContainer(other._get_wasgo_id()){
    wasgo_id = _wasgo_VSplitContainer_constructor();
}
VSplitContainer::new_instance(){
    return VSplitContainer(_wasgo_VSplitContainer_constructor());
}