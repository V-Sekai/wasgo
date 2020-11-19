/* THIS FILE IS GENERATED */
#ifndef DYNAMICFONT_H
#define DYNAMICFONT_H

#include <stdint.h>

#include "Font.h"
#include "Variant.h"
#include "DynamicFontData.h"
class DynamicFont : public Font{
public: DynamicFont();
enum SpacingType{
SPACING_TOP: 0,
SPACING_BOTTOM: 1,
SPACING_CHAR: 2,
};
void  add_fallback(DynamicFontData data);
DynamicFontData  get_fallback(int idx);
int  get_fallback_count();
int  get_fallback_count();
DynamicFontData  get_font_data();
DynamicFontData  get_font_data();
Color  get_outline_color();
Color  get_outline_color();
int  get_outline_size();
int  get_outline_size();
int  get_size();
int  get_size();
int  get_spacing(int type);
bool  get_use_filter();
bool  get_use_filter();
bool  get_use_mipmaps();
bool  get_use_mipmaps();
void  remove_fallback(int idx);
void  set_fallback(int idx, DynamicFontData data);
void  set_font_data(DynamicFontData data);
void  set_outline_color(Color color);
void  set_outline_size(int size);
void  set_size(int data);
void  set_spacing(int type, int value);
void  set_use_filter(bool enable);
void  set_use_mipmaps(bool enable);
};
#endif