/* THIS FILE IS GENERATED */
#ifndef SHORTCUT_H
#define SHORTCUT_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
#include "InputEvent.h"
class ShortCut : public Resource{
public: ShortCut();
String get_as_text();
InputEvent get_shortcut();
bool is_shortcut(InputEvent p_event);
bool is_valid();
void set_shortcut(InputEvent p_event);
};
#endif