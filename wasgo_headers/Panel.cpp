/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Panel.h"

Panel::Panel(WasGoID p_wasgo_id) : Control(p_wasgo_id){
}
Panel::Panel(Control other) : Control(other._get_wasgo_id()){
}
Panel::Panel():Control(){
}
Panel Panel::new_instance(){
    return Panel(_wasgo_Panel_constructor());
}
WasGoID Panel::_get_wasgo_id(){
    return wasgo_id;
}
Panel::operator bool(){
    return (bool) wasgo_id;
}
