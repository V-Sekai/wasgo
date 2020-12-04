/* THIS FILE IS GENERATED */
#ifndef TEXTUREPROGRESS_H
#define TEXTUREPROGRESS_H

#include "wasgo\wasgo.h"

#include "Range.h"
#include "Color.h"
#include "Texture.h"
#include "Margin.h"
#include "Vector2.h"
class TextureProgress : public Range{
public:
enum FillMode{
FILL_LEFT_TO_RIGHT,
FILL_RIGHT_TO_LEFT,
FILL_TOP_TO_BOTTOM,
FILL_BOTTOM_TO_TOP,
FILL_CLOCKWISE,
FILL_COUNTER_CLOCKWISE,
FILL_BILINEAR_LEFT_AND_RIGHT,
FILL_BILINEAR_TOP_AND_BOTTOM,
FILL_CLOCKWISE_AND_COUNTER_CLOCKWISE
};
float get_fill_degrees();
int get_fill_mode();
bool get_nine_patch_stretch();
Texture get_over_texture();
Texture get_progress_texture();
Vector2 get_radial_center_offset();
float get_radial_initial_angle();
int get_stretch_margin(Margin p_margin);
Color get_tint_over();
Color get_tint_progress();
Color get_tint_under();
Texture get_under_texture();
void set_fill_degrees(float p_mode);
void set_fill_mode(int p_mode);
void set_nine_patch_stretch(bool p_stretch);
void set_over_texture(Texture p_tex);
void set_progress_texture(Texture p_tex);
void set_radial_center_offset(Vector2 p_mode);
void set_radial_initial_angle(float p_mode);
void set_stretch_margin(Margin p_margin, int p_value);
void set_tint_over(Color p_tint);
void set_tint_progress(Color p_tint);
void set_tint_under(Color p_tint);
void set_under_texture(Texture p_tex);

protected:
TextureProgress(WasGoId p_wasgo_id);
public:
TextureProgress();
~TextureProgress();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_TextureProgress_wrapper_get_fill_degrees(WasGoId wasgo_id);
int _wasgo_TextureProgress_wrapper_get_fill_mode(WasGoId wasgo_id);
int _wasgo_TextureProgress_wrapper_get_nine_patch_stretch(WasGoId wasgo_id);
WasGoId _wasgo_TextureProgress_wrapper_get_over_texture(WasGoId wasgo_id);
WasGoId _wasgo_TextureProgress_wrapper_get_progress_texture(WasGoId wasgo_id);
void _wasgo_TextureProgress_wrapper_get_radial_center_offset(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_TextureProgress_wrapper_get_radial_initial_angle(WasGoId wasgo_id);
int _wasgo_TextureProgress_wrapper_get_stretch_margin(WasGoId wasgo_id, WasGoId p_margin);
void _wasgo_TextureProgress_wrapper_get_tint_over(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_TextureProgress_wrapper_get_tint_progress(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_TextureProgress_wrapper_get_tint_under(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_TextureProgress_wrapper_get_under_texture(WasGoId wasgo_id);
void _wasgo_TextureProgress_wrapper_set_fill_degrees(WasGoId wasgo_id, float p_mode);
void _wasgo_TextureProgress_wrapper_set_fill_mode(WasGoId wasgo_id, int p_mode);
void _wasgo_TextureProgress_wrapper_set_nine_patch_stretch(WasGoId wasgo_id, bool p_stretch);
void _wasgo_TextureProgress_wrapper_set_over_texture(WasGoId wasgo_id, WasGoId p_tex);
void _wasgo_TextureProgress_wrapper_set_progress_texture(WasGoId wasgo_id, WasGoId p_tex);
void _wasgo_TextureProgress_wrapper_set_radial_center_offset(WasGoId wasgo_id, const uint8_t * p_mode, int p_mode_wasgo_buffer_size);
void _wasgo_TextureProgress_wrapper_set_radial_initial_angle(WasGoId wasgo_id, float p_mode);
void _wasgo_TextureProgress_wrapper_set_stretch_margin(WasGoId wasgo_id, WasGoId p_margin, int p_value);
void _wasgo_TextureProgress_wrapper_set_tint_over(WasGoId wasgo_id, const uint8_t * p_tint, int p_tint_wasgo_buffer_size);
void _wasgo_TextureProgress_wrapper_set_tint_progress(WasGoId wasgo_id, const uint8_t * p_tint, int p_tint_wasgo_buffer_size);
void _wasgo_TextureProgress_wrapper_set_tint_under(WasGoId wasgo_id, const uint8_t * p_tint, int p_tint_wasgo_buffer_size);
void _wasgo_TextureProgress_wrapper_set_under_texture(WasGoId wasgo_id, WasGoId p_tex);

    //constructor and destructor wrappers
    WasGoId _wasgo_TextureProgress_constructor();
    void _wasgo_TextureProgress_destructor(WasGoId p_wasgo_id);
            
}
#endif