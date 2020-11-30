/* THIS FILE IS GENERATED */
#include "GridContainer.h"
int GridContainer::get_columns(){
	return (int) _wasgo_GridContainer_wrapper_get_columns(wasgo_id));
}
void GridContainer::set_columns(int p_columns){
	_wasgo_GridContainer_wrapper_set_columns(wasgo_id, columns);
}

GridContainer::GridContainer(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
GridContainer::~GridContainer(){
}