/* THIS FILE IS GENERATED */
#ifndef LINKBUTTON_H
#define LINKBUTTON_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "BaseButton.h"
class LinkButton : public BaseButton{
enum UnderlineMode{
UNDERLINE_MODE_ALWAYS,
UNDERLINE_MODE_ON_HOVER,
UNDERLINE_MODE_NEVER
};
String get_text();
LinkButton::UnderlineMode get_underline_mode();
void set_text(String p_text);
void set_underline_mode(LinkButton::UnderlineMode p_underline_mode);

LinkButton(WasGoId p_wasgo_id);
~LinkButton();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_LinkButton_wrapper_get_text(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_LinkButton_wrapper_get_underline_mode(WasGoId wasgo_id);
void _wasgo_LinkButton_wrapper_set_text(WasGoId wasgo_id, WasGo::WasGoId p_text);
void _wasgo_LinkButton_wrapper_set_underline_mode(WasGoId wasgo_id, WasGo::WasGoId p_underline_mode);
}
#endif