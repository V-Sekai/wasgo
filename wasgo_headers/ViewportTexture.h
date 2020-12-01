/* THIS FILE IS GENERATED */
#ifndef VIEWPORTTEXTURE_H
#define VIEWPORTTEXTURE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Texture.h"
#include "NodePath.h"
class ViewportTexture : public Texture{
public:
NodePath get_viewport_path_in_scene();
void set_viewport_path_in_scene(NodePath p_path);

ViewportTexture(WasGoId p_wasgo_id);
~ViewportTexture();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ViewportTexture_wrapper_get_viewport_path_in_scene(WasGoId wasgo_id);
void _wasgo_ViewportTexture_wrapper_set_viewport_path_in_scene(WasGoId wasgo_id, WasGoId p_path);
}
#endif