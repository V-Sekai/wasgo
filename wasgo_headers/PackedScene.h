/* THIS FILE IS GENERATED */
#ifndef PACKEDSCENE_H
#define PACKEDSCENE_H

#include <stdint.h>

#include "Resource.h"
#include "Node.h"
#include "Erro.h"
#include "Dictionary.h"
#include "SceneState.h"
class PackedScene : public Resource{
public: PackedScene();
enum GenEditState{
GEN_EDIT_STATE_DISABLED: 0,
GEN_EDIT_STATE_INSTANCE: 1,
};
Dictionary  _get_bundled_scene();
Dictionary  _get_bundled_scene();
void  _set_bundled_scene(Dictionary arg0);
bool  can_instance();
bool  can_instance();
SceneState  get_state();
SceneState  get_state();
Node  instance(int edit_state = 0);
enum.Error  pack(Node path);
};
#endif