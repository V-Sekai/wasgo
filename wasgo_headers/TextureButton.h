/* THIS FILE IS GENERATED */
#ifndef TEXTUREBUTTON_H
#define TEXTUREBUTTON_H

#include "wasgo\wasgoid.h"

#include "BaseButton.h"
#include "BitMap.h"
#include "Texture.h"
class TextureButton : public BaseButton{
public:
enum StretchMode{
STRETCH_SCALE,
STRETCH_TILE,
STRETCH_KEEP,
STRETCH_KEEP_CENTERED,
STRETCH_KEEP_ASPECT,
STRETCH_KEEP_ASPECT_CENTERED,
STRETCH_KEEP_ASPECT_COVERED
};
BitMap get_click_mask();
Texture get_disabled_texture();
bool get_expand();
Texture get_focused_texture();
Texture get_hover_texture();
Texture get_normal_texture();
Texture get_pressed_texture();
TextureButton::StretchMode get_stretch_mode();
void set_click_mask(BitMap p_mask);
void set_disabled_texture(Texture p_texture);
void set_expand(bool p_p_expand);
void set_focused_texture(Texture p_texture);
void set_hover_texture(Texture p_texture);
void set_normal_texture(Texture p_texture);
void set_pressed_texture(Texture p_texture);
void set_stretch_mode(TextureButton::StretchMode p_p_mode);

protected:
public:
explicit TextureButton(WasGoID p_wasgo_id);
explicit TextureButton(BaseButton other);
TextureButton();
TextureButton new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_TextureButton_wrapper_get_click_mask(WasGoID wasgo_id);
WasGoID _wasgo_TextureButton_wrapper_get_disabled_texture(WasGoID wasgo_id);
int _wasgo_TextureButton_wrapper_get_expand(WasGoID wasgo_id);
WasGoID _wasgo_TextureButton_wrapper_get_focused_texture(WasGoID wasgo_id);
WasGoID _wasgo_TextureButton_wrapper_get_hover_texture(WasGoID wasgo_id);
WasGoID _wasgo_TextureButton_wrapper_get_normal_texture(WasGoID wasgo_id);
WasGoID _wasgo_TextureButton_wrapper_get_pressed_texture(WasGoID wasgo_id);
WasGoID _wasgo_TextureButton_wrapper_get_stretch_mode(WasGoID wasgo_id);
void _wasgo_TextureButton_wrapper_set_click_mask(WasGoID wasgo_id, WasGoID p_mask);
void _wasgo_TextureButton_wrapper_set_disabled_texture(WasGoID wasgo_id, WasGoID p_texture);
void _wasgo_TextureButton_wrapper_set_expand(WasGoID wasgo_id, bool p_p_expand);
void _wasgo_TextureButton_wrapper_set_focused_texture(WasGoID wasgo_id, WasGoID p_texture);
void _wasgo_TextureButton_wrapper_set_hover_texture(WasGoID wasgo_id, WasGoID p_texture);
void _wasgo_TextureButton_wrapper_set_normal_texture(WasGoID wasgo_id, WasGoID p_texture);
void _wasgo_TextureButton_wrapper_set_pressed_texture(WasGoID wasgo_id, WasGoID p_texture);
void _wasgo_TextureButton_wrapper_set_stretch_mode(WasGoID wasgo_id, WasGoID p_p_mode);

    //constructor wrappers
    WasGoID _wasgo_TextureButton_constructor();
            
}
#endif