/* THIS FILE IS GENERATED */
#include "StyleBox.h"
void StyleBox::draw(RID p_canvas_item, Rect2 p_rect){
	_wasgo_StyleBox_wrapper_draw(wasgo_id, ((Variant) p_canvas_item).get_wasgo_id(), ((Variant) p_rect).get_wasgo_id());
}
Vector2 StyleBox::get_center_size(){
	return Vector2::from_wasgo_id(_wasgo_StyleBox_wrapper_get_center_size(wasgo_id));
}
CanvasItem StyleBox::get_current_item_drawn(){
	return CanvasItem::from_wasgo_id(_wasgo_StyleBox_wrapper_get_current_item_drawn(wasgo_id));
}
float StyleBox::get_default_margin(Margin p_margin){
	return (float) _wasgo_StyleBox_wrapper_get_default_margin(wasgo_id, ((Variant) p_margin).get_wasgo_id());
}
float StyleBox::get_margin(Margin p_margin){
	return (float) _wasgo_StyleBox_wrapper_get_margin(wasgo_id, ((Variant) p_margin).get_wasgo_id());
}
Vector2 StyleBox::get_minimum_size(){
	return Vector2::from_wasgo_id(_wasgo_StyleBox_wrapper_get_minimum_size(wasgo_id));
}
Vector2 StyleBox::get_offset(){
	return Vector2::from_wasgo_id(_wasgo_StyleBox_wrapper_get_offset(wasgo_id));
}
void StyleBox::set_default_margin(Margin p_margin, float p_offset){
	_wasgo_StyleBox_wrapper_set_default_margin(wasgo_id, ((Variant) p_margin).get_wasgo_id(), p_offset);
}
bool StyleBox::test_mask(Vector2 p_point, Rect2 p_rect){
	return (bool) _wasgo_StyleBox_wrapper_test_mask(wasgo_id, ((Variant) p_point).get_wasgo_id(), ((Variant) p_rect).get_wasgo_id());
}