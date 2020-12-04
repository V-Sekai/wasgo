/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationRootNode.h"

AnimationRootNode::AnimationRootNode(WasGoID p_wasgo_id) : AnimationNode(p_wasgo_id){
}
AnimationRootNode::AnimationRootNode(AnimationNode other) : AnimationNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_AnimationRootNode_constructor();
}
AnimationRootNode::new_instance(){
    return AnimationRootNode(_wasgo_AnimationRootNode_constructor());
}