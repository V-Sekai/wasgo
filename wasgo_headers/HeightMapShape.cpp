/* THIS FILE IS GENERATED */
#include "HeightMapShape.h"
PoolRealArray HeightMapShape::get_map_data(){
	return PoolRealArray::from_wasgo_id(_wasgo_HeightMapShape_wrapper_get_map_data(wasgo_id));
}
int HeightMapShape::get_map_depth(){
	return (int) _wasgo_HeightMapShape_wrapper_get_map_depth(wasgo_id);
}
int HeightMapShape::get_map_width(){
	return (int) _wasgo_HeightMapShape_wrapper_get_map_width(wasgo_id);
}
void HeightMapShape::set_map_data(PoolRealArray p_data){
	_wasgo_HeightMapShape_wrapper_set_map_data(wasgo_id, ((Variant) p_data).get_wasgo_id());
}
void HeightMapShape::set_map_depth(int p_height){
	_wasgo_HeightMapShape_wrapper_set_map_depth(wasgo_id, p_height);
}
void HeightMapShape::set_map_width(int p_width){
	_wasgo_HeightMapShape_wrapper_set_map_width(wasgo_id, p_width);
}