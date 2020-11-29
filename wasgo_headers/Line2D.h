/* THIS FILE IS GENERATED */
#ifndef LINE2D_H
#define LINE2D_H

#include "stdint.h"

#include "Node2D.h"
#include "Variant.h"
#include "Texture.h"
#include "Gradient.h"
#include "Curve.h"
class Line2D : public Node2D{
public: Line2D();
enum LineCapMode{
LINE_CAP_NONE,
LINE_CAP_BOX,
LINE_CAP_ROUND
};
enum LineJointMode{
LINE_JOINT_SHARP,
LINE_JOINT_BEVEL,
LINE_JOINT_ROUND
};
enum LineTextureMode{
LINE_TEXTURE_NONE,
LINE_TEXTURE_TILE,
LINE_TEXTURE_STRETCH
};
void add_point(Vector2 p_position, int p_at_position = (int) -1);
void clear_points();
bool get_antialiased();
Line2D::LineCapMode get_begin_cap_mode();
Curve get_curve();
Color get_default_color();
Line2D::LineCapMode get_end_cap_mode();
Gradient get_gradient();
Line2D::LineJointMode get_joint_mode();
int get_point_count();
Vector2 get_point_position(int p_i);
PoolVector2Array get_points();
int get_round_precision();
float get_sharp_limit();
Texture get_texture();
Line2D::LineTextureMode get_texture_mode();
float get_width();
void remove_point(int p_i);
void set_antialiased(bool p_antialiased);
void set_begin_cap_mode(Line2D::LineCapMode p_mode);
void set_curve(Curve p_curve);
void set_default_color(Color p_color);
void set_end_cap_mode(Line2D::LineCapMode p_mode);
void set_gradient(Gradient p_color);
void set_joint_mode(Line2D::LineJointMode p_mode);
void set_point_position(int p_i, Vector2 p_position);
void set_points(PoolVector2Array p_points);
void set_round_precision(int p_precision);
void set_sharp_limit(float p_limit);
void set_texture(Texture p_texture);
void set_texture_mode(Line2D::LineTextureMode p_mode);
void set_width(float p_width);
};
#endif