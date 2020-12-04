/* THIS FILE IS GENERATED */
#ifndef LINE2D_H
#define LINE2D_H

#include "wasgo\wasgo.h"

#include "Node2D.h"
#include "Curve.h"
#include "Variant.h"
#include "Color.h"
#include "Gradient.h"
#include "Texture.h"
#include "Vector2.h"
class Line2D : public Node2D{
public:
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

protected:
Line2D(WasGoId p_wasgo_id);
public:
Line2D();
~Line2D();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Line2D_wrapper_add_point(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, int p_at_position);
void _wasgo_Line2D_wrapper_clear_points(WasGoId wasgo_id);
int _wasgo_Line2D_wrapper_get_antialiased(WasGoId wasgo_id);
WasGoId _wasgo_Line2D_wrapper_get_begin_cap_mode(WasGoId wasgo_id);
WasGoId _wasgo_Line2D_wrapper_get_curve(WasGoId wasgo_id);
void _wasgo_Line2D_wrapper_get_default_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_Line2D_wrapper_get_end_cap_mode(WasGoId wasgo_id);
WasGoId _wasgo_Line2D_wrapper_get_gradient(WasGoId wasgo_id);
WasGoId _wasgo_Line2D_wrapper_get_joint_mode(WasGoId wasgo_id);
int _wasgo_Line2D_wrapper_get_point_count(WasGoId wasgo_id);
void _wasgo_Line2D_wrapper_get_point_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_i);
WasGoId _wasgo_Line2D_wrapper_get_points(WasGoId wasgo_id);
int _wasgo_Line2D_wrapper_get_round_precision(WasGoId wasgo_id);
float _wasgo_Line2D_wrapper_get_sharp_limit(WasGoId wasgo_id);
WasGoId _wasgo_Line2D_wrapper_get_texture(WasGoId wasgo_id);
WasGoId _wasgo_Line2D_wrapper_get_texture_mode(WasGoId wasgo_id);
float _wasgo_Line2D_wrapper_get_width(WasGoId wasgo_id);
void _wasgo_Line2D_wrapper_remove_point(WasGoId wasgo_id, int p_i);
void _wasgo_Line2D_wrapper_set_antialiased(WasGoId wasgo_id, bool p_antialiased);
void _wasgo_Line2D_wrapper_set_begin_cap_mode(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_Line2D_wrapper_set_curve(WasGoId wasgo_id, WasGoId p_curve);
void _wasgo_Line2D_wrapper_set_default_color(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_Line2D_wrapper_set_end_cap_mode(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_Line2D_wrapper_set_gradient(WasGoId wasgo_id, WasGoId p_color);
void _wasgo_Line2D_wrapper_set_joint_mode(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_Line2D_wrapper_set_point_position(WasGoId wasgo_id, int p_i, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_Line2D_wrapper_set_points(WasGoId wasgo_id, WasGoId p_points);
void _wasgo_Line2D_wrapper_set_round_precision(WasGoId wasgo_id, int p_precision);
void _wasgo_Line2D_wrapper_set_sharp_limit(WasGoId wasgo_id, float p_limit);
void _wasgo_Line2D_wrapper_set_texture(WasGoId wasgo_id, WasGoId p_texture);
void _wasgo_Line2D_wrapper_set_texture_mode(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_Line2D_wrapper_set_width(WasGoId wasgo_id, float p_width);

    //constructor and destructor wrappers
    WasGoId _wasgo_Line2D_constructor();
    void _wasgo_Line2D_destructor(WasGoId p_wasgo_id);
            
}
#endif