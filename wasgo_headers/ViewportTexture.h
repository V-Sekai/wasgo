/* THIS FILE IS GENERATED */
#ifndef VIEWPORTTEXTURE_H
#define VIEWPORTTEXTURE_H

#include <stdint.h>

#include "NodePath.h"
#include "Texture.h"
class ViewportTexture : public Texture{
public: ViewportTexture();
NodePath  get_viewport_path_in_scene();
NodePath  get_viewport_path_in_scene();
void  set_viewport_path_in_scene(NodePath path);
};
#endif