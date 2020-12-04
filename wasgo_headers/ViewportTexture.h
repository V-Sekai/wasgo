/* THIS FILE IS GENERATED */
#ifndef VIEWPORTTEXTURE_H
#define VIEWPORTTEXTURE_H

#include "wasgo\wasgo.h"

#include "Texture.h"
#include "NodePath.h"
class ViewportTexture : public Texture{
public:
NodePath get_viewport_path_in_scene();
void set_viewport_path_in_scene(NodePath p_path);

protected:
public:
explicit ViewportTexture(WasGoId p_wasgo_id);
explicit ViewportTexture(Texture other);
ViewportTexture new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ViewportTexture_wrapper_get_viewport_path_in_scene(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ViewportTexture_wrapper_set_viewport_path_in_scene(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_ViewportTexture_constructor();
            
}
#endif