/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AnimationNodeTimeSeek.h"

AnimationNodeTimeSeek::AnimationNodeTimeSeek(WasGoID p_wasgo_id) : AnimationNode(p_wasgo_id){
}
AnimationNodeTimeSeek::AnimationNodeTimeSeek(AnimationNode other) : AnimationNode(other._get_wasgo_id()){
}
AnimationNodeTimeSeek::AnimationNodeTimeSeek():AnimationNode(){
}
AnimationNodeTimeSeek AnimationNodeTimeSeek::new_instance(){
    return AnimationNodeTimeSeek(_wasgo_AnimationNodeTimeSeek_constructor());
}
WasGoID AnimationNodeTimeSeek::_get_wasgo_id(){
    return wasgo_id;
}
AnimationNodeTimeSeek::operator bool(){
    return (bool) wasgo_id;
}
