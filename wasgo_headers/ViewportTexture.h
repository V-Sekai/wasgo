/* THIS FILE IS GENERATED */
#ifndef VIEWPORTTEXTURE_H
#define VIEWPORTTEXTURE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Texture.h"
class ViewportTexture : public Texture{
NodePath get_viewport_path_in_scene();
void set_viewport_path_in_scene(NodePath p_path);

ViewportTexture(WasGoId p_wasgo_id);
~ViewportTexture();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_ViewportTexture_wrapper_get_viewport_path_in_scene(WasGoId wasgo_id);
void _wasgo_ViewportTexture_wrapper_set_viewport_path_in_scene(WasGoId wasgo_id, WasGo::WasGoId p_path);
}
#endif