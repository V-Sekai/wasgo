/* THIS FILE IS GENERATED */
#include "Joint.h"
bool Joint::get_exclude_nodes_from_collision(){
	return (bool) _wasgo_Joint_wrapper_get_exclude_nodes_from_collision(wasgo_id));
}
NodePath Joint::get_node_a(){
	return NodePath::from_wasgo_id(_wasgo_Joint_wrapper_get_node_a(wasgo_id));
}
NodePath Joint::get_node_b(){
	return NodePath::from_wasgo_id(_wasgo_Joint_wrapper_get_node_b(wasgo_id));
}
int Joint::get_solver_priority(){
	return (int) _wasgo_Joint_wrapper_get_solver_priority(wasgo_id));
}
void Joint::set_exclude_nodes_from_collision(bool p_enable){
	_wasgo_Joint_wrapper_set_exclude_nodes_from_collision(wasgo_id, enable);
}
void Joint::set_node_a(NodePath p_node){
	_wasgo_Joint_wrapper_set_node_a(wasgo_id, ((Variant) node).get_wasgo_id());
}
void Joint::set_node_b(NodePath p_node){
	_wasgo_Joint_wrapper_set_node_b(wasgo_id, ((Variant) node).get_wasgo_id());
}
void Joint::set_solver_priority(int p_priority){
	_wasgo_Joint_wrapper_set_solver_priority(wasgo_id, priority);
}