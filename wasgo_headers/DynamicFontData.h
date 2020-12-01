/* THIS FILE IS GENERATED */
#ifndef DYNAMICFONTDATA_H
#define DYNAMICFONTDATA_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Resource.h"
class DynamicFontData : public Resource{
public:
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

DynamicFontData(WasGoId p_wasgo_id);
~DynamicFontData();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_DynamicFontData_wrapper_get_font_path(WasGoId wasgo_id);
WasGoId _wasgo_DynamicFontData_wrapper_get_hinting(WasGoId wasgo_id);
int _wasgo_DynamicFontData_wrapper_is_antialiased(WasGoId wasgo_id);
void _wasgo_DynamicFontData_wrapper_set_antialiased(WasGoId wasgo_id, bool p_antialiased);
void _wasgo_DynamicFontData_wrapper_set_font_path(WasGoId wasgo_id, WasGoId p_path);
void _wasgo_DynamicFontData_wrapper_set_hinting(WasGoId wasgo_id, WasGoId p_mode);
}
#endif