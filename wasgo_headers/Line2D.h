/* THIS FILE IS GENERATED */
#ifndef LINE2D_H
#define LINE2D_H

#include "wasgo\wasgoid.h"

#include "Color.h"
#include "Vector2.h"
#include "Gradient.h"
#include "Variant.h"
#include "Curve.h"
#include "Node2D.h"
#include "Texture.h"
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
public:
explicit Line2D(WasGoID p_wasgo_id);
explicit Line2D(Node2D other);
Line2D();
Line2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Line2D_wrapper_add_point(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, int p_at_position);
void _wasgo_Line2D_wrapper_clear_points(WasGoID wasgo_id);
int _wasgo_Line2D_wrapper_get_antialiased(WasGoID wasgo_id);
WasGoID _wasgo_Line2D_wrapper_get_begin_cap_mode(WasGoID wasgo_id);
WasGoID _wasgo_Line2D_wrapper_get_curve(WasGoID wasgo_id);
void _wasgo_Line2D_wrapper_get_default_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Line2D_wrapper_get_end_cap_mode(WasGoID wasgo_id);
WasGoID _wasgo_Line2D_wrapper_get_gradient(WasGoID wasgo_id);
WasGoID _wasgo_Line2D_wrapper_get_joint_mode(WasGoID wasgo_id);
int _wasgo_Line2D_wrapper_get_point_count(WasGoID wasgo_id);
void _wasgo_Line2D_wrapper_get_point_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_i);
WasGoID _wasgo_Line2D_wrapper_get_points(WasGoID wasgo_id);
int _wasgo_Line2D_wrapper_get_round_precision(WasGoID wasgo_id);
float _wasgo_Line2D_wrapper_get_sharp_limit(WasGoID wasgo_id);
WasGoID _wasgo_Line2D_wrapper_get_texture(WasGoID wasgo_id);
WasGoID _wasgo_Line2D_wrapper_get_texture_mode(WasGoID wasgo_id);
float _wasgo_Line2D_wrapper_get_width(WasGoID wasgo_id);
void _wasgo_Line2D_wrapper_remove_point(WasGoID wasgo_id, int p_i);
void _wasgo_Line2D_wrapper_set_antialiased(WasGoID wasgo_id, bool p_antialiased);
void _wasgo_Line2D_wrapper_set_begin_cap_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_Line2D_wrapper_set_curve(WasGoID wasgo_id, WasGoID p_curve);
void _wasgo_Line2D_wrapper_set_default_color(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_Line2D_wrapper_set_end_cap_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_Line2D_wrapper_set_gradient(WasGoID wasgo_id, WasGoID p_color);
void _wasgo_Line2D_wrapper_set_joint_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_Line2D_wrapper_set_point_position(WasGoID wasgo_id, int p_i, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_Line2D_wrapper_set_points(WasGoID wasgo_id, WasGoID p_points);
void _wasgo_Line2D_wrapper_set_round_precision(WasGoID wasgo_id, int p_precision);
void _wasgo_Line2D_wrapper_set_sharp_limit(WasGoID wasgo_id, float p_limit);
void _wasgo_Line2D_wrapper_set_texture(WasGoID wasgo_id, WasGoID p_texture);
void _wasgo_Line2D_wrapper_set_texture_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_Line2D_wrapper_set_width(WasGoID wasgo_id, float p_width);

    //constructor wrappers
    WasGoID _wasgo_Line2D_constructor();
            
}
#endif