/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VScrollBar.h"

VScrollBar::VScrollBar(WasGoID p_wasgo_id) : ScrollBar(p_wasgo_id){
}
VScrollBar::VScrollBar(ScrollBar other) : ScrollBar(other._get_wasgo_id()){
}
VScrollBar::VScrollBar():ScrollBar(){
}
VScrollBar VScrollBar::new_instance(){
    return VScrollBar(_wasgo_VScrollBar_constructor());
}
WasGoID VScrollBar::_get_wasgo_id(){
    return wasgo_id;
}
VScrollBar::operator bool(){
    return (bool) wasgo_id;
}
