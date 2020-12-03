/* THIS FILE IS GENERATED */
#ifndef PACKEDSCENE_H
#define PACKEDSCENE_H

#include "wasgo\wasgo.h"

#include "SceneState.h"
#include "error_list.h"
#include "Node.h"
#include "Resource.h"
class PackedScene : public Resource{
public:
enum GenEditState{
GEN_EDIT_STATE_DISABLED,
GEN_EDIT_STATE_INSTANCE,
GEN_EDIT_STATE_MAIN
};
bool can_instance();
SceneState get_state();
Node instance(PackedScene::GenEditState p_edit_state = (PackedScene::GenEditState) 0);
Error pack(Node p_path);

protected:
PackedScene(WasGoId p_wasgo_id);
public:
PackedScene();
~PackedScene();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_PackedScene_wrapper_can_instance(WasGoId wasgo_id);
WasGoId _wasgo_PackedScene_wrapper_get_state(WasGoId wasgo_id);
WasGoId _wasgo_PackedScene_wrapper_instance(WasGoId wasgo_id, WasGoId p_edit_state);
WasGoId _wasgo_PackedScene_wrapper_pack(WasGoId wasgo_id, WasGoId p_path);

    //constructor and destructor wrappers
    WasGoId _wasgo_PackedScene_constructor();
    void _wasgo_PackedScene_destructor(WasGoId p_wasgo_id);
            
}
#endif