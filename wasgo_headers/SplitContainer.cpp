/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SplitContainer.h"
void SplitContainer::clamp_split_offset(){
	_wasgo_SplitContainer_wrapper_clamp_split_offset(wasgo_id);
}
SplitContainer::DraggerVisibility SplitContainer::get_dragger_visibility(){
	return SplitContainer::DraggerVisibility(_wasgo_SplitContainer_wrapper_get_dragger_visibility(wasgo_id));
}
int SplitContainer::get_split_offset(){
	return (int) _wasgo_SplitContainer_wrapper_get_split_offset(wasgo_id);
}
bool SplitContainer::is_collapsed(){
	return (bool) _wasgo_SplitContainer_wrapper_is_collapsed(wasgo_id);
}
void SplitContainer::set_collapsed(bool p_collapsed){
	_wasgo_SplitContainer_wrapper_set_collapsed(wasgo_id, p_collapsed);
}
void SplitContainer::set_dragger_visibility(SplitContainer::DraggerVisibility p_mode){
	_wasgo_SplitContainer_wrapper_set_dragger_visibility(wasgo_id, p_mode._get_wasgo_id());
}
void SplitContainer::set_split_offset(int p_offset){
	_wasgo_SplitContainer_wrapper_set_split_offset(wasgo_id, p_offset);
}

SplitContainer::SplitContainer(WasGoID p_wasgo_id) : Container(p_wasgo_id){
}
SplitContainer::SplitContainer(Container other) : Container(other._get_wasgo_id()){
}
SplitContainer::SplitContainer():Container(){
}
SplitContainer SplitContainer::new_instance(){
    return SplitContainer(_wasgo_SplitContainer_constructor());
}
WasGoID SplitContainer::_get_wasgo_id(){
    return wasgo_id;
}
SplitContainer::operator bool(){
    return (bool) wasgo_id;
}
