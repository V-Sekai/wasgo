/* THIS FILE IS GENERATED */
#ifndef DYNAMICFONTDATA_H
#define DYNAMICFONTDATA_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "ustring.h"
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

protected:
public:
explicit DynamicFontData(WasGoID p_wasgo_id);
explicit DynamicFontData(Resource other);
DynamicFontData new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_DynamicFontData_wrapper_get_font_path(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_DynamicFontData_wrapper_get_hinting(WasGoID wasgo_id);
int _wasgo_DynamicFontData_wrapper_is_antialiased(WasGoID wasgo_id);
void _wasgo_DynamicFontData_wrapper_set_antialiased(WasGoID wasgo_id, bool p_antialiased);
void _wasgo_DynamicFontData_wrapper_set_font_path(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
void _wasgo_DynamicFontData_wrapper_set_hinting(WasGoID wasgo_id, WasGoID p_mode);

    //constructor wrappers
    WasGoID _wasgo_DynamicFontData_constructor();
            
}
#endif