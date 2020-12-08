/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VSplitContainer.h"

VSplitContainer::VSplitContainer(WasGoID p_wasgo_id) : SplitContainer(p_wasgo_id){
}
VSplitContainer::VSplitContainer(SplitContainer other) : SplitContainer(other._get_wasgo_id()){
}
VSplitContainer::VSplitContainer():SplitContainer(){
}
VSplitContainer VSplitContainer::new_instance(){
    return VSplitContainer(_wasgo_VSplitContainer_constructor());
}
WasGoID VSplitContainer::_get_wasgo_id(){
    return wasgo_id;
}
VSplitContainer::operator bool(){
    return (bool) wasgo_id;
}
