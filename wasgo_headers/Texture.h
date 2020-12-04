/* THIS FILE IS GENERATED */
#ifndef TEXTURE_H
#define TEXTURE_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Color.h"
#include "Rect2.h"
#include "RID.h"
#include "Image.h"
#include "Resource.h"
class Texture : public Resource{
public:
enum Flags{
FLAGS_DEFAULT,
FLAG_MIPMAPS,
FLAG_REPEAT,
FLAG_FILTER,
FLAG_ANISOTROPIC_FILTER,
FLAG_CONVERT_TO_LINEAR,
FLAG_MIRRORED_REPEAT,
FLAG_VIDEO_SURFACE
};
void draw(RID p_canvas_item, Vector2 p_position, Color p_modulate = Color(1,1,1,1), bool p_transpose = (bool) false, Texture p_normal_map = (Texture) "");
void draw_rect(RID p_canvas_item, Rect2 p_rect, bool p_tile, Color p_modulate = Color(1,1,1,1), bool p_transpose = (bool) false, Texture p_normal_map = (Texture) "");
void draw_rect_region(RID p_canvas_item, Rect2 p_rect, Rect2 p_src_rect, Color p_modulate = Color(1,1,1,1), bool p_transpose = (bool) false, Texture p_normal_map = (Texture) "", bool p_clip_uv = (bool) true);
Image get_data();
int get_flags();
int get_height();
Vector2 get_size();
int get_width();
bool has_alpha();
void set_flags(int p_flags);
};


//Wrapper Functions
extern "C"{
void _wasgo_Texture_wrapper_draw(WasGoId wasgo_id, const uint8_t * p_canvas_item, int p_canvas_item_wasgo_buffer_size, const uint8_t * p_position, int p_position_wasgo_buffer_size, const uint8_t * p_modulate, int p_modulate_wasgo_buffer_size, bool p_transpose, WasGoId p_normal_map);
void _wasgo_Texture_wrapper_draw_rect(WasGoId wasgo_id, const uint8_t * p_canvas_item, int p_canvas_item_wasgo_buffer_size, const uint8_t * p_rect, int p_rect_wasgo_buffer_size, bool p_tile, const uint8_t * p_modulate, int p_modulate_wasgo_buffer_size, bool p_transpose, WasGoId p_normal_map);
void _wasgo_Texture_wrapper_draw_rect_region(WasGoId wasgo_id, const uint8_t * p_canvas_item, int p_canvas_item_wasgo_buffer_size, const uint8_t * p_rect, int p_rect_wasgo_buffer_size, const uint8_t * p_src_rect, int p_src_rect_wasgo_buffer_size, const uint8_t * p_modulate, int p_modulate_wasgo_buffer_size, bool p_transpose, WasGoId p_normal_map, bool p_clip_uv);
WasGoId _wasgo_Texture_wrapper_get_data(WasGoId wasgo_id);
int _wasgo_Texture_wrapper_get_flags(WasGoId wasgo_id);
int _wasgo_Texture_wrapper_get_height(WasGoId wasgo_id);
void _wasgo_Texture_wrapper_get_size(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Texture_wrapper_get_width(WasGoId wasgo_id);
int _wasgo_Texture_wrapper_has_alpha(WasGoId wasgo_id);
void _wasgo_Texture_wrapper_set_flags(WasGoId wasgo_id, int p_flags);

    //constructor wrappers
    WasGoId _wasgo_Texture_constructor();
            
}
#endif