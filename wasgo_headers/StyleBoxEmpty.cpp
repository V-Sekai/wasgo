/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "StyleBoxEmpty.h"

StyleBoxEmpty::StyleBoxEmpty(WasGoID p_wasgo_id) : StyleBox(p_wasgo_id){
}
StyleBoxEmpty::StyleBoxEmpty(StyleBox other) : StyleBox(other._get_wasgo_id()){
}
StyleBoxEmpty::StyleBoxEmpty():StyleBox(){
}
StyleBoxEmpty StyleBoxEmpty::new_instance(){
    return StyleBoxEmpty(_wasgo_StyleBoxEmpty_constructor());
}
WasGoID StyleBoxEmpty::_get_wasgo_id(){
    return wasgo_id;
}
StyleBoxEmpty::operator bool(){
    return (bool) wasgo_id;
}
