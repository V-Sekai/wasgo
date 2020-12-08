/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationRootNode.h"

AnimationRootNode::AnimationRootNode(WasGoID p_wasgo_id) : AnimationNode(p_wasgo_id){
}
AnimationRootNode::AnimationRootNode(AnimationNode other) : AnimationNode(other._get_wasgo_id()){
}
AnimationRootNode::AnimationRootNode():AnimationNode(){
}
AnimationRootNode AnimationRootNode::new_instance(){
    return AnimationRootNode(_wasgo_AnimationRootNode_constructor());
}
WasGoID AnimationRootNode::_get_wasgo_id(){
    return wasgo_id;
}
AnimationRootNode::operator bool(){
    return (bool) wasgo_id;
}
