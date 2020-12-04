/* THIS FILE IS GENERATED */
#ifndef TEXTURERECT_H
#define TEXTURERECT_H

#include "wasgo\wasgo.h"

#include "Texture.h"
#include "Control.h"
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
TextureRect(WasGoId p_wasgo_id);
public:
TextureRect();
~TextureRect();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_TextureRect_wrapper_get_stretch_mode(WasGoId wasgo_id);
WasGoId _wasgo_TextureRect_wrapper_get_texture(WasGoId wasgo_id);
int _wasgo_TextureRect_wrapper_has_expand(WasGoId wasgo_id);
int _wasgo_TextureRect_wrapper_is_flipped_h(WasGoId wasgo_id);
int _wasgo_TextureRect_wrapper_is_flipped_v(WasGoId wasgo_id);
void _wasgo_TextureRect_wrapper_set_expand(WasGoId wasgo_id, bool p_enable);
void _wasgo_TextureRect_wrapper_set_flip_h(WasGoId wasgo_id, bool p_enable);
void _wasgo_TextureRect_wrapper_set_flip_v(WasGoId wasgo_id, bool p_enable);
void _wasgo_TextureRect_wrapper_set_stretch_mode(WasGoId wasgo_id, WasGoId p_stretch_mode);
void _wasgo_TextureRect_wrapper_set_texture(WasGoId wasgo_id, WasGoId p_texture);

    //constructor and destructor wrappers
    WasGoId _wasgo_TextureRect_constructor();
    void _wasgo_TextureRect_destructor(WasGoId p_wasgo_id);
            
}
#endif