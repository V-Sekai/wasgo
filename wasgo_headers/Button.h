/* THIS FILE IS GENERATED */
#ifndef BUTTON_H
#define BUTTON_H

#include "stdint.h"

#include "Variant.h"
#include "Texture.h"
#include "BaseButton.h"
class Button : public BaseButton{
public: Button();
enum TextAlign{
ALIGN_LEFT,
ALIGN_CENTER,
ALIGN_RIGHT
};
Texture get_button_icon();
bool get_clip_text();
String get_text();
Button::TextAlign get_text_align();
bool is_expand_icon();
bool is_flat();
void set_button_icon(Texture p_texture);
void set_clip_text(bool p_enabled);
void set_expand_icon(bool p_arg0);
void set_flat(bool p_enabled);
void set_text(String p_text);
void set_text_align(Button::TextAlign p_align);
};
#endif