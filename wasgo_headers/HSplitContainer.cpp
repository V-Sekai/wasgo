/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "HSplitContainer.h"

HSplitContainer::HSplitContainer(WasGoID p_wasgo_id) : SplitContainer(p_wasgo_id){
}
HSplitContainer::HSplitContainer(SplitContainer other) : SplitContainer(other._get_wasgo_id()){
}
HSplitContainer::HSplitContainer():SplitContainer(){
}
HSplitContainer HSplitContainer::new_instance(){
    return HSplitContainer(_wasgo_HSplitContainer_constructor());
}
WasGoID HSplitContainer::_get_wasgo_id(){
    return wasgo_id;
}
HSplitContainer::operator bool(){
    return (bool) wasgo_id;
}
