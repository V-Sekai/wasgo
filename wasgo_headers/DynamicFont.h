/* THIS FILE IS GENERATED */
#ifndef DYNAMICFONT_H
#define DYNAMICFONT_H

#include "stdint.h"

#include "DynamicFontData.h"
#include "Font.h"
#include "Variant.h"
class DynamicFont : public Font{
public: DynamicFont();
enum SpacingType{
SPACING_TOP,
SPACING_BOTTOM,
SPACING_CHAR,
SPACING_SPACE
};
void add_fallback(DynamicFontData p_data);
String get_available_chars();
DynamicFontData get_fallback(int p_idx);
int get_fallback_count();
DynamicFontData get_font_data();
Color get_outline_color();
int get_outline_size();
int get_size();
int get_spacing(int p_type);
bool get_use_filter();
bool get_use_mipmaps();
void remove_fallback(int p_idx);
void set_fallback(int p_idx, DynamicFontData p_data);
void set_font_data(DynamicFontData p_data);
void set_outline_color(Color p_color);
void set_outline_size(int p_size);
void set_size(int p_data);
void set_spacing(int p_type, int p_value);
void set_use_filter(bool p_enable);
void set_use_mipmaps(bool p_enable);
};
#endif