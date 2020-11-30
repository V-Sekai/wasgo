/* THIS FILE IS GENERATED */
#include "PackedScene.h"
bool PackedScene::can_instance(){
	return (bool) _wasgo_PackedScene_wrapper_can_instance(wasgo_id));
}
Node PackedScene::instance(PackedScene::GenEditState p_edit_state = (PackedScene::GenEditState) 0){
	return Node::from_wasgo_id(_wasgo_PackedScene_wrapper_instance(wasgo_id, ((Variant) edit_state).get_wasgo_id()));
}
Error PackedScene::pack(Node p_path){
	return Error::from_wasgo_id(_wasgo_PackedScene_wrapper_pack(wasgo_id, ((Variant) path).get_wasgo_id()));
}

PackedScene::PackedScene(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
PackedScene::~PackedScene(){
}