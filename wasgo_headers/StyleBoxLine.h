/* THIS FILE IS GENERATED */
#ifndef STYLEBOXLINE_H
#define STYLEBOXLINE_H

#include "stdint.h"

#include "Variant.h"
#include "StyleBox.h"
class StyleBoxLine : public StyleBox{
public: StyleBoxLine();
Color get_color();
float get_grow_begin();
float get_grow_end();
int get_thickness();
bool is_vertical();
void set_color(Color p_color);
void set_grow_begin(float p_offset);
void set_grow_end(float p_offset);
void set_thickness(int p_thickness);
void set_vertical(bool p_vertical);
};
#endif