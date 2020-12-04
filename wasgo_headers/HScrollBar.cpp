/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "HScrollBar.h"

HScrollBar::HScrollBar(WasGoID p_wasgo_id) : ScrollBar(p_wasgo_id){
}
HScrollBar::HScrollBar(ScrollBar other) : ScrollBar(other._get_wasgo_id()){
    wasgo_id = _wasgo_HScrollBar_constructor();
}
HScrollBar::new_instance(){
    return HScrollBar(_wasgo_HScrollBar_constructor());
}