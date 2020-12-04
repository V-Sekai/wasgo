/* THIS FILE IS GENERATED */
#ifndef SPRITEBASE3D_H
#define SPRITEBASE3D_H

#include "wasgo\wasgo.h"

#include "Color.h"
#include "Vector2.h"
#include "Vector3.h"
#include "GeometryInstance.h"
#include "SpatialMaterial.h"
#include "Rect2.h"
#include "TriangleMesh.h"
class SpriteBase3D : public GeometryInstance{
public:
enum AlphaCutMode{
ALPHA_CUT_DISABLED,
ALPHA_CUT_DISCARD,
ALPHA_CUT_OPAQUE_PREPASS
};
enum DrawFlags{
FLAG_TRANSPARENT,
FLAG_SHADED,
FLAG_DOUBLE_SIDED,
FLAG_MAX
};
TriangleMesh generate_triangle_mesh();
SpriteBase3D::AlphaCutMode get_alpha_cut_mode();
Vector3::Axis get_axis();
SpatialMaterial::BillboardMode get_billboard_mode();
bool get_draw_flag(SpriteBase3D::DrawFlags p_flag);
Rect2 get_item_rect();
Color get_modulate();
Vector2 get_offset();
float get_opacity();
float get_pixel_size();
bool is_centered();
bool is_flipped_h();
bool is_flipped_v();
void set_alpha_cut_mode(SpriteBase3D::AlphaCutMode p_mode);
void set_axis(Vector3::Axis p_axis);
void set_billboard_mode(SpatialMaterial::BillboardMode p_mode);
void set_centered(bool p_centered);
void set_draw_flag(SpriteBase3D::DrawFlags p_flag, bool p_enabled);
void set_flip_h(bool p_flip_h);
void set_flip_v(bool p_flip_v);
void set_modulate(Color p_modulate);
void set_offset(Vector2 p_offset);
void set_opacity(float p_opacity);
void set_pixel_size(float p_pixel_size);
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_SpriteBase3D_wrapper_generate_triangle_mesh(WasGoID wasgo_id);
WasGoID _wasgo_SpriteBase3D_wrapper_get_alpha_cut_mode(WasGoID wasgo_id);
WasGoID _wasgo_SpriteBase3D_wrapper_get_axis(WasGoID wasgo_id);
WasGoID _wasgo_SpriteBase3D_wrapper_get_billboard_mode(WasGoID wasgo_id);
int _wasgo_SpriteBase3D_wrapper_get_draw_flag(WasGoID wasgo_id, WasGoID p_flag);
void _wasgo_SpriteBase3D_wrapper_get_item_rect(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_SpriteBase3D_wrapper_get_modulate(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_SpriteBase3D_wrapper_get_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_SpriteBase3D_wrapper_get_opacity(WasGoID wasgo_id);
float _wasgo_SpriteBase3D_wrapper_get_pixel_size(WasGoID wasgo_id);
int _wasgo_SpriteBase3D_wrapper_is_centered(WasGoID wasgo_id);
int _wasgo_SpriteBase3D_wrapper_is_flipped_h(WasGoID wasgo_id);
int _wasgo_SpriteBase3D_wrapper_is_flipped_v(WasGoID wasgo_id);
void _wasgo_SpriteBase3D_wrapper_set_alpha_cut_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_SpriteBase3D_wrapper_set_axis(WasGoID wasgo_id, WasGoID p_axis);
void _wasgo_SpriteBase3D_wrapper_set_billboard_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_SpriteBase3D_wrapper_set_centered(WasGoID wasgo_id, bool p_centered);
void _wasgo_SpriteBase3D_wrapper_set_draw_flag(WasGoID wasgo_id, WasGoID p_flag, bool p_enabled);
void _wasgo_SpriteBase3D_wrapper_set_flip_h(WasGoID wasgo_id, bool p_flip_h);
void _wasgo_SpriteBase3D_wrapper_set_flip_v(WasGoID wasgo_id, bool p_flip_v);
void _wasgo_SpriteBase3D_wrapper_set_modulate(WasGoID wasgo_id, const uint8_t * p_modulate, int p_modulate_wasgo_buffer_size);
void _wasgo_SpriteBase3D_wrapper_set_offset(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_SpriteBase3D_wrapper_set_opacity(WasGoID wasgo_id, float p_opacity);
void _wasgo_SpriteBase3D_wrapper_set_pixel_size(WasGoID wasgo_id, float p_pixel_size);

    //constructor wrappers
    WasGoID _wasgo_SpriteBase3D_constructor();
            
}
#endif