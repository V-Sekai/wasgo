/* THIS FILE IS GENERATED */
#include "Joint2D.h"
float Joint2D::get_bias(){
	return (float) _wasgo_Joint2D_wrapper_get_bias(wasgo_id));
}
bool Joint2D::get_exclude_nodes_from_collision(){
	return (bool) _wasgo_Joint2D_wrapper_get_exclude_nodes_from_collision(wasgo_id));
}
NodePath Joint2D::get_node_a(){
	return NodePath::from_wasgo_id(_wasgo_Joint2D_wrapper_get_node_a(wasgo_id));
}
NodePath Joint2D::get_node_b(){
	return NodePath::from_wasgo_id(_wasgo_Joint2D_wrapper_get_node_b(wasgo_id));
}
void Joint2D::set_bias(float p_bias){
	_wasgo_Joint2D_wrapper_set_bias(wasgo_id, bias);
}
void Joint2D::set_exclude_nodes_from_collision(bool p_enable){
	_wasgo_Joint2D_wrapper_set_exclude_nodes_from_collision(wasgo_id, enable);
}
void Joint2D::set_node_a(NodePath p_node){
	_wasgo_Joint2D_wrapper_set_node_a(wasgo_id, ((Variant) node).get_wasgo_id());
}
void Joint2D::set_node_b(NodePath p_node){
	_wasgo_Joint2D_wrapper_set_node_b(wasgo_id, ((Variant) node).get_wasgo_id());
}