/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "HSeparator.h"

HSeparator::HSeparator(WasGoID p_wasgo_id) : Separator(p_wasgo_id){
}
HSeparator::HSeparator(Separator other) : Separator(other._get_wasgo_id()){
    wasgo_id = _wasgo_HSeparator_constructor();
}
HSeparator::new_instance(){
    return HSeparator(_wasgo_HSeparator_constructor());
}