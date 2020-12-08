/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "GridContainer.h"
int GridContainer::get_columns(){
	return (int) _wasgo_GridContainer_wrapper_get_columns(wasgo_id);
}
void GridContainer::set_columns(int p_columns){
	_wasgo_GridContainer_wrapper_set_columns(wasgo_id, p_columns);
}

GridContainer::GridContainer(WasGoID p_wasgo_id) : Container(p_wasgo_id){
}
GridContainer::GridContainer(Container other) : Container(other._get_wasgo_id()){
}
GridContainer::GridContainer():Container(){
}
GridContainer GridContainer::new_instance(){
    return GridContainer(_wasgo_GridContainer_constructor());
}
WasGoID GridContainer::_get_wasgo_id(){
    return wasgo_id;
}
GridContainer::operator bool(){
    return (bool) wasgo_id;
}
