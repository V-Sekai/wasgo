/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeOutput.h"

AnimationNodeOutput::AnimationNodeOutput(WasGoID p_wasgo_id) : AnimationNode(p_wasgo_id){
}
AnimationNodeOutput::AnimationNodeOutput(AnimationNode other) : AnimationNode(other._get_wasgo_id()){
}
AnimationNodeOutput::AnimationNodeOutput():AnimationNode(){
}
AnimationNodeOutput AnimationNodeOutput::new_instance(){
    return AnimationNodeOutput(_wasgo_AnimationNodeOutput_constructor());
}
WasGoID AnimationNodeOutput::_get_wasgo_id(){
    return wasgo_id;
}
AnimationNodeOutput::operator bool(){
    return (bool) wasgo_id;
}
