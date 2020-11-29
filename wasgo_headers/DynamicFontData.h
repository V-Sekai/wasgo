/* THIS FILE IS GENERATED */
#ifndef DYNAMICFONTDATA_H
#define DYNAMICFONTDATA_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class DynamicFontData : public Resource{
public: DynamicFontData();
enum Hinting{
HINTING_NONE,
HINTING_LIGHT,
HINTING_NORMAL
};
String get_font_path();
DynamicFontData::Hinting get_hinting();
bool is_antialiased();
void set_antialiased(bool p_antialiased);
void set_font_path(String p_path);
void set_hinting(DynamicFontData::Hinting p_mode);
};
#endif