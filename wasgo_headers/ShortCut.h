/* THIS FILE IS GENERATED */
#ifndef SHORTCUT_H
#define SHORTCUT_H

#include <stdint.h>

#include "Resource.h"
#include "String.h"
#include "InputEvent.h"
class ShortCut : public Resource{
public: ShortCut();
String  get_as_text();
String  get_as_text();
InputEvent  get_shortcut();
InputEvent  get_shortcut();
bool  is_shortcut(InputEvent event);
bool  is_valid();
bool  is_valid();
void  set_shortcut(InputEvent event);
};
#endif