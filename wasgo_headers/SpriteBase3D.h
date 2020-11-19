/* THIS FILE IS GENERATED */
#ifndef SPRITEBASE3D_H
#define SPRITEBASE3D_H

#include <stdint.h>

#include "Vector2.h"
#include "GeometryInstance.h"
#include "SpatialMaterial.h"
#include "Rect2.h"
#include "TriangleMesh.h"
#include "Vector3.h"
#include "Variant.h"
class SpriteBase3D : public GeometryInstance{
public: SpriteBase3D();
enum DrawFlags{
FLAG_TRANSPARENT: 0,
FLAG_SHADED: 1,
FLAG_DOUBLE_SIDED: 2,
};
enum AlphaCutMode{
ALPHA_CUT_DISABLED: 0,
ALPHA_CUT_DISCARD: 1,
};
void  _im_update();
void  _im_update();
void  _queue_update();
void  _queue_update();
TriangleMesh  generate_triangle_mesh();
TriangleMesh  generate_triangle_mesh();
enum.SpriteBase3D::AlphaCutMode  get_alpha_cut_mode();
enum.SpriteBase3D::AlphaCutMode  get_alpha_cut_mode();
enum.Vector3::Axis  get_axis();
enum.Vector3::Axis  get_axis();
enum.SpatialMaterial::BillboardMode  get_billboard_mode();
enum.SpatialMaterial::BillboardMode  get_billboard_mode();
bool  get_draw_flag(int flag);
Rect2  get_item_rect();
Rect2  get_item_rect();
Color  get_modulate();
Color  get_modulate();
Vector2  get_offset();
Vector2  get_offset();
float  get_opacity();
float  get_opacity();
float  get_pixel_size();
float  get_pixel_size();
bool  is_centered();
bool  is_centered();
bool  is_flipped_h();
bool  is_flipped_h();
bool  is_flipped_v();
bool  is_flipped_v();
void  set_alpha_cut_mode(int mode);
void  set_axis(int axis);
void  set_billboard_mode(int mode);
void  set_centered(bool centered);
void  set_draw_flag(int flag, bool enabled);
void  set_flip_h(bool flip_h);
void  set_flip_v(bool flip_v);
void  set_modulate(Color modulate);
void  set_offset(Vector2 offset);
void  set_opacity(float opacity);
void  set_pixel_size(float pixel_size);
};
#endif