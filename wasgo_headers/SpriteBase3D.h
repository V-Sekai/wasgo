/* THIS FILE IS GENERATED */
#ifndef SPRITEBASE3D_H
#define SPRITEBASE3D_H

#include "stdint.h"

#include "GeometryInstance.h"
#include "Vector3.h"
#include "Variant.h"
#include "SpatialMaterial.h"
#include "TriangleMesh.h"
class SpriteBase3D : public GeometryInstance{
public: SpriteBase3D();
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
#endif