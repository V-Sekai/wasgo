/* THIS FILE IS GENERATED */
#include "GraphNode.h"
String GraphNode::get_title(){
	return String::from_wasgo_id(_wasgo_GraphNode_wrapper_get_title(wasgo_id));
}
void GraphNode::set_title(String p_title){
	_wasgo_GraphNode_wrapper_set_title(wasgo_id, ((Variant) title).get_wasgo_id());
}

GraphNode::GraphNode(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
GraphNode::~GraphNode(){
}