/* THIS FILE IS GENERATED */
#ifndef VIEWPORTTEXTURE_H
#define VIEWPORTTEXTURE_H

#include "stdint.h"

#include "Variant.h"
#include "Texture.h"
class ViewportTexture : public Texture{
public: ViewportTexture();
NodePath get_viewport_path_in_scene();
void set_viewport_path_in_scene(NodePath p_path);
};
#endif