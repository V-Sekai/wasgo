/* THIS FILE IS GENERATED */
#ifndef LINE2D_H
#define LINE2D_H

#include <stdint.h>

#include "Vector2.h"
#include "Gradient.h"
#include "PoolVector2Array.h"
#include "Variant.h"
#include "Texture.h"
#include "Node2D.h"
#include "Curve.h"
class Line2D : public Node2D{
public: Line2D();
enum LineTextureMode{
LINE_TEXTURE_NONE: 0,
LINE_TEXTURE_TILE: 1,
};
enum LineCapMode{
LINE_CAP_NONE: 0,
LINE_CAP_BOX: 1,
};
enum LineJointMode{
LINE_JOINT_SHARP: 0,
LINE_JOINT_BEVEL: 1,
};
void  _curve_changed();
void  _curve_changed();
void  _gradient_changed();
void  _gradient_changed();
void  add_point(Vector2 position, int at_position = -1);
void  clear_points();
void  clear_points();
bool  get_antialiased();
bool  get_antialiased();
enum.Line2D::LineCapMode  get_begin_cap_mode();
enum.Line2D::LineCapMode  get_begin_cap_mode();
Curve  get_curve();
Curve  get_curve();
Color  get_default_color();
Color  get_default_color();
enum.Line2D::LineCapMode  get_end_cap_mode();
enum.Line2D::LineCapMode  get_end_cap_mode();
Gradient  get_gradient();
Gradient  get_gradient();
enum.Line2D::LineJointMode  get_joint_mode();
enum.Line2D::LineJointMode  get_joint_mode();
int  get_point_count();
int  get_point_count();
Vector2  get_point_position(int i);
PoolVector2Array  get_points();
PoolVector2Array  get_points();
int  get_round_precision();
int  get_round_precision();
float  get_sharp_limit();
float  get_sharp_limit();
Texture  get_texture();
Texture  get_texture();
enum.Line2D::LineTextureMode  get_texture_mode();
enum.Line2D::LineTextureMode  get_texture_mode();
float  get_width();
float  get_width();
void  remove_point(int i);
void  set_antialiased(bool antialiased);
void  set_begin_cap_mode(int mode);
void  set_curve(Curve curve);
void  set_default_color(Color color);
void  set_end_cap_mode(int mode);
void  set_gradient(Gradient color);
void  set_joint_mode(int mode);
void  set_point_position(int i, Vector2 position);
void  set_points(PoolVector2Array points);
void  set_round_precision(int precision);
void  set_sharp_limit(float limit);
void  set_texture(Texture texture);
void  set_texture_mode(int mode);
void  set_width(float width);
};
#endif