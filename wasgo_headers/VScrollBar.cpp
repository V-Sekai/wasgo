/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VScrollBar.h"

VScrollBar::VScrollBar(WasGoID p_wasgo_id) : ScrollBar(p_wasgo_id){
}
VScrollBar::VScrollBar(ScrollBar other) : ScrollBar(other._get_wasgo_id()){
    wasgo_id = _wasgo_VScrollBar_constructor();
}
VScrollBar::new_instance(){
    return VScrollBar(_wasgo_VScrollBar_constructor());
}