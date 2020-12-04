/* THIS FILE IS GENERATED */
#ifndef BUTTON_H
#define BUTTON_H

#include "wasgo\wasgo.h"

#include "Texture.h"
#include "BaseButton.h"
#include "ustring.h"
class Button : public BaseButton{
public:
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

protected:
public:
explicit Button(WasGoId p_wasgo_id);
explicit Button(BaseButton other);
Button new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_Button_wrapper_get_button_icon(WasGoId wasgo_id);
int _wasgo_Button_wrapper_get_clip_text(WasGoId wasgo_id);
void _wasgo_Button_wrapper_get_text(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_Button_wrapper_get_text_align(WasGoId wasgo_id);
int _wasgo_Button_wrapper_is_expand_icon(WasGoId wasgo_id);
int _wasgo_Button_wrapper_is_flat(WasGoId wasgo_id);
void _wasgo_Button_wrapper_set_button_icon(WasGoId wasgo_id, WasGoId p_texture);
void _wasgo_Button_wrapper_set_clip_text(WasGoId wasgo_id, bool p_enabled);
void _wasgo_Button_wrapper_set_expand_icon(WasGoId wasgo_id, bool p_arg0);
void _wasgo_Button_wrapper_set_flat(WasGoId wasgo_id, bool p_enabled);
void _wasgo_Button_wrapper_set_text(WasGoId wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
void _wasgo_Button_wrapper_set_text_align(WasGoId wasgo_id, WasGoId p_align);

    //constructor wrappers
    WasGoId _wasgo_Button_constructor();
            
}
#endif