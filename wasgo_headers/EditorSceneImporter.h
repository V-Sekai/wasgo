/* THIS FILE IS GENERATED */
#ifndef EDITORSCENEIMPORTER_H
#define EDITORSCENEIMPORTER_H

#include <stdint.h>

#include "Animation.h"
#include "Reference.h"
#include "String.h"
#include "Node.h"
#include "Variant.h"
class EditorSceneImporter : public Reference{
public: EditorSceneImporter();
Array  _get_extensions();
Array  _get_extensions();
int  _get_import_flags();
int  _get_import_flags();
Animation  _import_animation(String path, int flags, int bake_fps);
Node  _import_scene(String path, int flags, int bake_fps);
Animation  import_animation_from_other_importer(String path, int flags, int bake_fps);
Node  import_scene_from_other_importer(String path, int flags, int bake_fps);
};
#endif