/* THIS FILE IS GENERATED */
#ifndef REFERENCERECT_H
#define REFERENCERECT_H

#include "stdint.h"

#include "Variant.h"
#include "Control.h"
class ReferenceRect : public Control{
public: ReferenceRect();
Color get_border_color();
float get_border_width();
bool get_editor_only();
void set_border_color(Color p_color);
void set_border_width(float p_width);
void set_editor_only(bool p_enabled);
};
#endif