/* THIS FILE IS GENERATED */
#ifndef LINKBUTTON_H
#define LINKBUTTON_H

#include "stdint.h"

#include "Variant.h"
#include "BaseButton.h"
class LinkButton : public BaseButton{
public: LinkButton();
enum UnderlineMode{
UNDERLINE_MODE_ALWAYS,
UNDERLINE_MODE_ON_HOVER,
UNDERLINE_MODE_NEVER
};
String get_text();
LinkButton::UnderlineMode get_underline_mode();
void set_text(String p_text);
void set_underline_mode(LinkButton::UnderlineMode p_underline_mode);
};
#endif