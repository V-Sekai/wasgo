/* THIS FILE IS GENERATED */
#ifndef TEXTUREBUTTON_H
#define TEXTUREBUTTON_H

#include "stdint.h"

#include "Texture.h"
#include "BaseButton.h"
#include "BitMap.h"
class TextureButton : public BaseButton{
public: TextureButton();
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
};
#endif