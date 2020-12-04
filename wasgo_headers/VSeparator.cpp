/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VSeparator.h"

VSeparator::VSeparator(WasGoId p_wasgo_id) : Separator(p_wasgo_id){
}
VSeparator::VSeparator(Separator other) : Separator(other._get_wasgo_id()){
    wasgo_id = _wasgo_VSeparator_constructor();
}
VSeparator::new_instance(){
    return VSeparator(_wasgo_VSeparator_constructor());
}