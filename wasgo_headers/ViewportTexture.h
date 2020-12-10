/* THIS FILE IS GENERATED */
#ifndef VIEWPORTTEXTURE_H
#define VIEWPORTTEXTURE_H

#include "wasgo\wasgoid.h"

#include "Texture.h"
#include "NodePath.h"
class ViewportTexture : public Texture{
public:
NodePath get_viewport_path_in_scene();
void set_viewport_path_in_scene(NodePath p_path);

protected:
public:
explicit ViewportTexture(WasGoID p_wasgo_id);
explicit ViewportTexture(Texture other);
ViewportTexture();
ViewportTexture new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ViewportTexture_wrapper_get_viewport_path_in_scene(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ViewportTexture_wrapper_set_viewport_path_in_scene(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_ViewportTexture_constructor();
            
}
#endif