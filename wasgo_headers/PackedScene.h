/* THIS FILE IS GENERATED */
#ifndef PACKEDSCENE_H
#define PACKEDSCENE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "error_list.h"
#include "Resource.h"
#include "Node.h"
class PackedScene : public Resource{
public:
enum GenEditState{
GEN_EDIT_STATE_DISABLED,
GEN_EDIT_STATE_INSTANCE,
GEN_EDIT_STATE_MAIN
};
bool can_instance();
Node instance(PackedScene::GenEditState p_edit_state = (PackedScene::GenEditState) 0);
Error pack(Node p_path);

PackedScene(WasGoId p_wasgo_id);
~PackedScene();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_PackedScene_wrapper_can_instance(WasGoId wasgo_id);
WasGoId _wasgo_PackedScene_wrapper_instance(WasGoId wasgo_id, WasGoId p_edit_state);
WasGoId _wasgo_PackedScene_wrapper_pack(WasGoId wasgo_id, WasGoId p_path);
}
#endif