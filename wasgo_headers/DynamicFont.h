/* THIS FILE IS GENERATED */
#ifndef DYNAMICFONT_H
#define DYNAMICFONT_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Font.h"
#include "Color.h"
#include "DynamicFontData.h"
class DynamicFont : public Font{
public:
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

protected:
public:
explicit DynamicFont(WasGoId p_wasgo_id);
explicit DynamicFont(Font other);
DynamicFont new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_DynamicFont_wrapper_add_fallback(WasGoId wasgo_id, WasGoId p_data);
void _wasgo_DynamicFont_wrapper_get_available_chars(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_DynamicFont_wrapper_get_fallback(WasGoId wasgo_id, int p_idx);
int _wasgo_DynamicFont_wrapper_get_fallback_count(WasGoId wasgo_id);
WasGoId _wasgo_DynamicFont_wrapper_get_font_data(WasGoId wasgo_id);
void _wasgo_DynamicFont_wrapper_get_outline_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_DynamicFont_wrapper_get_outline_size(WasGoId wasgo_id);
int _wasgo_DynamicFont_wrapper_get_size(WasGoId wasgo_id);
int _wasgo_DynamicFont_wrapper_get_spacing(WasGoId wasgo_id, int p_type);
int _wasgo_DynamicFont_wrapper_get_use_filter(WasGoId wasgo_id);
int _wasgo_DynamicFont_wrapper_get_use_mipmaps(WasGoId wasgo_id);
void _wasgo_DynamicFont_wrapper_remove_fallback(WasGoId wasgo_id, int p_idx);
void _wasgo_DynamicFont_wrapper_set_fallback(WasGoId wasgo_id, int p_idx, WasGoId p_data);
void _wasgo_DynamicFont_wrapper_set_font_data(WasGoId wasgo_id, WasGoId p_data);
void _wasgo_DynamicFont_wrapper_set_outline_color(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_DynamicFont_wrapper_set_outline_size(WasGoId wasgo_id, int p_size);
void _wasgo_DynamicFont_wrapper_set_size(WasGoId wasgo_id, int p_data);
void _wasgo_DynamicFont_wrapper_set_spacing(WasGoId wasgo_id, int p_type, int p_value);
void _wasgo_DynamicFont_wrapper_set_use_filter(WasGoId wasgo_id, bool p_enable);
void _wasgo_DynamicFont_wrapper_set_use_mipmaps(WasGoId wasgo_id, bool p_enable);

    //constructor wrappers
    WasGoId _wasgo_DynamicFont_constructor();
            
}
#endif