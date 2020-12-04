/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeTimeSeek.h"

AnimationNodeTimeSeek::AnimationNodeTimeSeek(WasGoId p_wasgo_id) : AnimationNode(p_wasgo_id){
}
AnimationNodeTimeSeek::AnimationNodeTimeSeek(AnimationNode other) : AnimationNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_AnimationNodeTimeSeek_constructor();
}
AnimationNodeTimeSeek::new_instance(){
    return AnimationNodeTimeSeek(_wasgo_AnimationNodeTimeSeek_constructor());
}