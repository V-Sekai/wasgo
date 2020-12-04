/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "StyleBoxEmpty.h"

StyleBoxEmpty::StyleBoxEmpty(WasGoId p_wasgo_id) : StyleBox(p_wasgo_id){
}
StyleBoxEmpty::StyleBoxEmpty(StyleBox other) : StyleBox(other._get_wasgo_id()){
    wasgo_id = _wasgo_StyleBoxEmpty_constructor();
}
StyleBoxEmpty::new_instance(){
    return StyleBoxEmpty(_wasgo_StyleBoxEmpty_constructor());
}