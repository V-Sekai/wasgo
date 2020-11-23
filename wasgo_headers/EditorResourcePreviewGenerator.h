/* THIS FILE IS GENERATED */
#ifndef EDITORRESOURCEPREVIEWGENERATOR_H
#define EDITORRESOURCEPREVIEWGENERATOR_H

#include <stdint.h>

#include "Resource.h"
#include "String.h"
#include "Reference.h"
#include "Vector2.h"
#include "Texture.h"
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
#endif