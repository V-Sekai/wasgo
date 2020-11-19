/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Resource.h"
class DynamicFontData : public Resource{
public: DynamicFontData();
enum Hinting{
HINTING_NONE: 0,
HINTING_LIGHT: 1,
};
String  get_font_path();
String  get_font_path();
enum.DynamicFontData::Hinting  get_hinting();
enum.DynamicFontData::Hinting  get_hinting();
bool  is_antialiased();
bool  is_antialiased();
void  set_antialiased(bool antialiased);
void  set_font_path(String path);
void  set_hinting(int mode);
};