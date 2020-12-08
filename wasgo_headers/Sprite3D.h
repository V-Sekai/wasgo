/* THIS FILE IS GENERATED */
#ifndef SPRITE3D_H
#define SPRITE3D_H

#include "wasgo\wasgoid.h"

#include "SpriteBase3D.h"
#include "Texture.h"
#include "Rect2.h"
#include "Vector2.h"
class Sprite3D : public SpriteBase3D{
public:
int get_frame();
Vector2 get_frame_coords();
int get_hframes();
Rect2 get_region_rect();
Texture get_texture();
int get_vframes();
bool is_region();
void set_frame(int p_frame);
void set_frame_coords(Vector2 p_coords);
void set_hframes(int p_hframes);
void set_region(bool p_enabled);
void set_region_rect(Rect2 p_rect);
void set_texture(Texture p_texture);
void set_vframes(int p_vframes);

protected:
public:
explicit Sprite3D(WasGoID p_wasgo_id);
explicit Sprite3D(SpriteBase3D other);
Sprite3D();
Sprite3D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Sprite3D_wrapper_get_frame(WasGoID wasgo_id);
void _wasgo_Sprite3D_wrapper_get_frame_coords(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Sprite3D_wrapper_get_hframes(WasGoID wasgo_id);
void _wasgo_Sprite3D_wrapper_get_region_rect(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Sprite3D_wrapper_get_texture(WasGoID wasgo_id);
int _wasgo_Sprite3D_wrapper_get_vframes(WasGoID wasgo_id);
int _wasgo_Sprite3D_wrapper_is_region(WasGoID wasgo_id);
void _wasgo_Sprite3D_wrapper_set_frame(WasGoID wasgo_id, int p_frame);
void _wasgo_Sprite3D_wrapper_set_frame_coords(WasGoID wasgo_id, const uint8_t * p_coords, int p_coords_wasgo_buffer_size);
void _wasgo_Sprite3D_wrapper_set_hframes(WasGoID wasgo_id, int p_hframes);
void _wasgo_Sprite3D_wrapper_set_region(WasGoID wasgo_id, bool p_enabled);
void _wasgo_Sprite3D_wrapper_set_region_rect(WasGoID wasgo_id, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);
void _wasgo_Sprite3D_wrapper_set_texture(WasGoID wasgo_id, WasGoID p_texture);
void _wasgo_Sprite3D_wrapper_set_vframes(WasGoID wasgo_id, int p_vframes);

    //constructor wrappers
    WasGoID _wasgo_Sprite3D_constructor();
            
}
#endif