/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Panel.h"

Panel::Panel(WasGoId p_wasgo_id) : Control(p_wasgo_id){
}
Panel::Panel(){
    wasgo_id = _wasgo_Panel_constructor();
}
Panel::~Panel(){
    _wasgo_Panel_destructor(wasgo_id);
}