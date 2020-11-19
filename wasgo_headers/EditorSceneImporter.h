/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Animation.h"
#include "String.h"
#include "Reference.h"
#include "Variant.h"
#include "Node.h"
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