/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeTimeScale.h"

AnimationNodeTimeScale::AnimationNodeTimeScale(WasGoID p_wasgo_id) : AnimationNode(p_wasgo_id){
}
AnimationNodeTimeScale::AnimationNodeTimeScale(AnimationNode other) : AnimationNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_AnimationNodeTimeScale_constructor();
}
AnimationNodeTimeScale::new_instance(){
    return AnimationNodeTimeScale(_wasgo_AnimationNodeTimeScale_constructor());
}