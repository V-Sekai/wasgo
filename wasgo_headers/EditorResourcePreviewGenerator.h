/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Reference.h"
#include "Texture.h"
#include "Resource.h"
#include "Vector2.h"
class EditorResourcePreviewGenerator : public Reference{
public: EditorResourcePreviewGenerator();
bool  can_generate_small_preview();
bool  can_generate_small_preview();
Texture  generate(Resource from, Vector2 size);
Texture  generate_from_path(String path, Vector2 size);
bool  generate_small_preview_automatically();
bool  generate_small_preview_automatically();
bool  handles(String type);
};