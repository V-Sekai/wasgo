/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VScrollBar.h"

VScrollBar::VScrollBar(WasGoId p_wasgo_id) : ScrollBar(p_wasgo_id){
}
VScrollBar::VScrollBar(){
    wasgo_id = _wasgo_VScrollBar_constructor();
}
VScrollBar::~VScrollBar(){
    _wasgo_VScrollBar_destructor(wasgo_id);
}