/* THIS FILE IS GENERATED */
#ifndef TEXTURERECT_H
#define TEXTURERECT_H

#include "wasgo\wasgo.h"

#include "Control.h"
#include "Texture.h"
class TextureRect : public Control{
public:
enum StretchMode{
STRETCH_SCALE_ON_EXPAND,
STRETCH_SCALE,
STRETCH_TILE,
STRETCH_KEEP,
STRETCH_KEEP_CENTERED,
STRETCH_KEEP_ASPECT,
STRETCH_KEEP_ASPECT_CENTERED,
STRETCH_KEEP_ASPECT_COVERED
};
TextureRect::StretchMode get_stretch_mode();
Texture get_texture();
bool has_expand();
bool is_flipped_h();
bool is_flipped_v();
void set_expand(bool p_enable);
void set_flip_h(bool p_enable);
void set_flip_v(bool p_enable);
void set_stretch_mode(TextureRect::StretchMode p_stretch_mode);
void set_texture(Texture p_texture);

protected:
public:
explicit TextureRect(WasGoID p_wasgo_id);
explicit TextureRect(Control other);
TextureRect new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_TextureRect_wrapper_get_stretch_mode(WasGoID wasgo_id);
WasGoID _wasgo_TextureRect_wrapper_get_texture(WasGoID wasgo_id);
int _wasgo_TextureRect_wrapper_has_expand(WasGoID wasgo_id);
int _wasgo_TextureRect_wrapper_is_flipped_h(WasGoID wasgo_id);
int _wasgo_TextureRect_wrapper_is_flipped_v(WasGoID wasgo_id);
void _wasgo_TextureRect_wrapper_set_expand(WasGoID wasgo_id, bool p_enable);
void _wasgo_TextureRect_wrapper_set_flip_h(WasGoID wasgo_id, bool p_enable);
void _wasgo_TextureRect_wrapper_set_flip_v(WasGoID wasgo_id, bool p_enable);
void _wasgo_TextureRect_wrapper_set_stretch_mode(WasGoID wasgo_id, WasGoID p_stretch_mode);
void _wasgo_TextureRect_wrapper_set_texture(WasGoID wasgo_id, WasGoID p_texture);

    //constructor wrappers
    WasGoID _wasgo_TextureRect_constructor();
            
}
#endif