/* THIS FILE IS GENERATED */
#ifndef BUTTON_H
#define BUTTON_H

#include <stdint.h>

#include "String.h"
#include "BaseButton.h"
#include "Texture.h"
class Button : public BaseButton{
public: Button();
enum TextAlign{
ALIGN_LEFT: 0,
ALIGN_CENTER: 1,
};
Texture  get_button_icon();
Texture  get_button_icon();
bool  get_clip_text();
bool  get_clip_text();
String  get_text();
String  get_text();
enum.Button::TextAlign  get_text_align();
enum.Button::TextAlign  get_text_align();
bool  is_expand_icon();
bool  is_expand_icon();
bool  is_flat();
bool  is_flat();
void  set_button_icon(Texture texture);
void  set_clip_text(bool enabled);
void  set_expand_icon(bool arg0);
void  set_flat(bool enabled);
void  set_text(String text);
void  set_text_align(int align);
};
#endif