/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CenterContainer.h"
bool CenterContainer::is_using_top_left(){
	return (bool) _wasgo_CenterContainer_wrapper_is_using_top_left(wasgo_id);
}
void CenterContainer::set_use_top_left(bool p_enable){
	_wasgo_CenterContainer_wrapper_set_use_top_left(wasgo_id, p_enable);
}

CenterContainer::CenterContainer(WasGoID p_wasgo_id) : Container(p_wasgo_id){
}
CenterContainer::CenterContainer(Container other) : Container(other._get_wasgo_id()){
    wasgo_id = _wasgo_CenterContainer_constructor();
}
CenterContainer::new_instance(){
    return CenterContainer(_wasgo_CenterContainer_constructor());
}