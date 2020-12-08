/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "BoxContainer.h"
void BoxContainer::add_spacer(bool p_begin){
	_wasgo_BoxContainer_wrapper_add_spacer(wasgo_id, p_begin);
}
BoxContainer::AlignMode BoxContainer::get_alignment(){
	return BoxContainer::AlignMode(_wasgo_BoxContainer_wrapper_get_alignment(wasgo_id));
}
void BoxContainer::set_alignment(BoxContainer::AlignMode p_alignment){
	_wasgo_BoxContainer_wrapper_set_alignment(wasgo_id, p_alignment._get_wasgo_id());
}

BoxContainer::BoxContainer(WasGoID p_wasgo_id) : Container(p_wasgo_id){
}
BoxContainer::BoxContainer(Container other) : Container(other._get_wasgo_id()){
}
BoxContainer::BoxContainer():Container(){
}
BoxContainer BoxContainer::new_instance(){
    return BoxContainer(_wasgo_BoxContainer_constructor());
}
WasGoID BoxContainer::_get_wasgo_id(){
    return wasgo_id;
}
BoxContainer::operator bool(){
    return (bool) wasgo_id;
}
