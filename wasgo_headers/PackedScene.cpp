/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PackedScene.h"
bool PackedScene::can_instance(){
	return (bool) _wasgo_PackedScene_wrapper_can_instance(wasgo_id);
}
SceneState PackedScene::get_state(){
	return SceneState(_wasgo_PackedScene_wrapper_get_state(wasgo_id));
}
Node PackedScene::instance(PackedScene::GenEditState p_edit_state = (PackedScene::GenEditState) 0){
	return Node(_wasgo_PackedScene_wrapper_instance(wasgo_id, p_edit_state._get_wasgo_id()));
}
Error PackedScene::pack(Node p_path){
	return Error(_wasgo_PackedScene_wrapper_pack(wasgo_id, p_path._get_wasgo_id()));
}

PackedScene::PackedScene(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
PackedScene::PackedScene(Resource other) : Resource(other._get_wasgo_id()){
    wasgo_id = _wasgo_PackedScene_constructor();
}
PackedScene::new_instance(){
    return PackedScene(_wasgo_PackedScene_constructor());
}