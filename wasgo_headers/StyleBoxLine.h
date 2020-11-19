/* THIS FILE IS GENERATED */
#ifndef STYLEBOXLINE_H
#define STYLEBOXLINE_H

#include <stdint.h>

#include "StyleBox.h"
#include "Variant.h"
class StyleBoxLine : public StyleBox{
public: StyleBoxLine();
Color  get_color();
Color  get_color();
float  get_grow_begin();
float  get_grow_begin();
float  get_grow_end();
float  get_grow_end();
int  get_thickness();
int  get_thickness();
bool  is_vertical();
bool  is_vertical();
void  set_color(Color color);
void  set_grow_begin(float offset);
void  set_grow_end(float offset);
void  set_thickness(int thickness);
void  set_vertical(bool vertical);
};
#endif