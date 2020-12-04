/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeOutput.h"

AnimationNodeOutput::AnimationNodeOutput(WasGoId p_wasgo_id) : AnimationNode(p_wasgo_id){
}
AnimationNodeOutput::AnimationNodeOutput(AnimationNode other) : AnimationNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_AnimationNodeOutput_constructor();
}
AnimationNodeOutput::new_instance(){
    return AnimationNodeOutput(_wasgo_AnimationNodeOutput_constructor());
}