/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ScrollContainer.h"
int ScrollContainer::get_deadzone(){
	return (int) _wasgo_ScrollContainer_wrapper_get_deadzone(wasgo_id);
}
int ScrollContainer::get_h_scroll(){
	return (int) _wasgo_ScrollContainer_wrapper_get_h_scroll(wasgo_id);
}
HScrollBar ScrollContainer::get_h_scrollbar(){
	return HScrollBar(_wasgo_ScrollContainer_wrapper_get_h_scrollbar(wasgo_id));
}
int ScrollContainer::get_v_scroll(){
	return (int) _wasgo_ScrollContainer_wrapper_get_v_scroll(wasgo_id);
}
VScrollBar ScrollContainer::get_v_scrollbar(){
	return VScrollBar(_wasgo_ScrollContainer_wrapper_get_v_scrollbar(wasgo_id));
}
bool ScrollContainer::is_following_focus(){
	return (bool) _wasgo_ScrollContainer_wrapper_is_following_focus(wasgo_id);
}
bool ScrollContainer::is_h_scroll_enabled(){
	return (bool) _wasgo_ScrollContainer_wrapper_is_h_scroll_enabled(wasgo_id);
}
bool ScrollContainer::is_v_scroll_enabled(){
	return (bool) _wasgo_ScrollContainer_wrapper_is_v_scroll_enabled(wasgo_id);
}
void ScrollContainer::set_deadzone(int p_deadzone){
	_wasgo_ScrollContainer_wrapper_set_deadzone(wasgo_id, p_deadzone);
}
void ScrollContainer::set_enable_h_scroll(bool p_enable){
	_wasgo_ScrollContainer_wrapper_set_enable_h_scroll(wasgo_id, p_enable);
}
void ScrollContainer::set_enable_v_scroll(bool p_enable){
	_wasgo_ScrollContainer_wrapper_set_enable_v_scroll(wasgo_id, p_enable);
}
void ScrollContainer::set_follow_focus(bool p_enabled){
	_wasgo_ScrollContainer_wrapper_set_follow_focus(wasgo_id, p_enabled);
}
void ScrollContainer::set_h_scroll(int p_value){
	_wasgo_ScrollContainer_wrapper_set_h_scroll(wasgo_id, p_value);
}
void ScrollContainer::set_v_scroll(int p_value){
	_wasgo_ScrollContainer_wrapper_set_v_scroll(wasgo_id, p_value);
}

ScrollContainer::ScrollContainer(WasGoID p_wasgo_id) : Container(p_wasgo_id){
}
ScrollContainer::ScrollContainer(Container other) : Container(other._get_wasgo_id()){
    wasgo_id = _wasgo_ScrollContainer_constructor();
}
ScrollContainer::new_instance(){
    return ScrollContainer(_wasgo_ScrollContainer_constructor());
}