/* THIS FILE IS GENERATED */
#ifndef PARALLAXBACKGROUND_H
#define PARALLAXBACKGROUND_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "CanvasLayer.h"
class ParallaxBackground : public CanvasLayer{
public:
Vector2 get_limit_begin();
Vector2 get_limit_end();
Vector2 get_scroll_base_offset();
Vector2 get_scroll_base_scale();
Vector2 get_scroll_offset();
bool is_ignore_camera_zoom();
void set_ignore_camera_zoom(bool p_ignore);
void set_limit_begin(Vector2 p_ofs);
void set_limit_end(Vector2 p_ofs);
void set_scroll_base_offset(Vector2 p_ofs);
void set_scroll_base_scale(Vector2 p_scale);
void set_scroll_offset(Vector2 p_ofs);

protected:
public:
explicit ParallaxBackground(WasGoId p_wasgo_id);
explicit ParallaxBackground(CanvasLayer other);
ParallaxBackground new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ParallaxBackground_wrapper_get_limit_begin(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ParallaxBackground_wrapper_get_limit_end(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ParallaxBackground_wrapper_get_scroll_base_offset(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ParallaxBackground_wrapper_get_scroll_base_scale(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ParallaxBackground_wrapper_get_scroll_offset(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_ParallaxBackground_wrapper_is_ignore_camera_zoom(WasGoId wasgo_id);
void _wasgo_ParallaxBackground_wrapper_set_ignore_camera_zoom(WasGoId wasgo_id, bool p_ignore);
void _wasgo_ParallaxBackground_wrapper_set_limit_begin(WasGoId wasgo_id, const uint8_t * p_ofs, int p_ofs_wasgo_buffer_size);
void _wasgo_ParallaxBackground_wrapper_set_limit_end(WasGoId wasgo_id, const uint8_t * p_ofs, int p_ofs_wasgo_buffer_size);
void _wasgo_ParallaxBackground_wrapper_set_scroll_base_offset(WasGoId wasgo_id, const uint8_t * p_ofs, int p_ofs_wasgo_buffer_size);
void _wasgo_ParallaxBackground_wrapper_set_scroll_base_scale(WasGoId wasgo_id, const uint8_t * p_scale, int p_scale_wasgo_buffer_size);
void _wasgo_ParallaxBackground_wrapper_set_scroll_offset(WasGoId wasgo_id, const uint8_t * p_ofs, int p_ofs_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_ParallaxBackground_constructor();
            
}
#endif