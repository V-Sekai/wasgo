/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEBLENDSPACE2D_H
#define ANIMATIONNODEBLENDSPACE2D_H

#include "wasgo\wasgoid.h"

#include "AnimationRootNode.h"
#include "Ustring.h"
#include "Vector2.h"
class AnimationNodeBlendSpace2D : public AnimationRootNode{
public:
enum BlendMode{
BLEND_MODE_INTERPOLATED,
BLEND_MODE_DISCRETE,
BLEND_MODE_DISCRETE_CARRY
};
void add_blend_point(AnimationRootNode p_node, Vector2 p_pos, int p_at_index = (int) -1);
void add_triangle(int p_x, int p_y, int p_z, int p_at_index = (int) -1);
bool get_auto_triangles();
AnimationNodeBlendSpace2D::BlendMode get_blend_mode();
int get_blend_point_count();
AnimationRootNode get_blend_point_node(int p_point);
Vector2 get_blend_point_position(int p_point);
Vector2 get_max_space();
Vector2 get_min_space();
Vector2 get_snap();
int get_triangle_count();
int get_triangle_point(int p_triangle, int p_point);
String get_x_label();
String get_y_label();
void remove_blend_point(int p_point);
void remove_triangle(int p_triangle);
void set_auto_triangles(bool p_enable);
void set_blend_mode(AnimationNodeBlendSpace2D::BlendMode p_mode);
void set_blend_point_node(int p_point, AnimationRootNode p_node);
void set_blend_point_position(int p_point, Vector2 p_pos);
void set_max_space(Vector2 p_max_space);
void set_min_space(Vector2 p_min_space);
void set_snap(Vector2 p_snap);
void set_x_label(String p_text);
void set_y_label(String p_text);

protected:
public:
explicit AnimationNodeBlendSpace2D(WasGoID p_wasgo_id);
explicit AnimationNodeBlendSpace2D(AnimationRootNode other);
AnimationNodeBlendSpace2D();
AnimationNodeBlendSpace2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationNodeBlendSpace2D_wrapper_add_blend_point(WasGoID wasgo_id, WasGoID p_node, const uint8_t * p_pos, int p_pos_wasgo_buffer_size, int p_at_index);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_add_triangle(WasGoID wasgo_id, int p_x, int p_y, int p_z, int p_at_index);
int _wasgo_AnimationNodeBlendSpace2D_wrapper_get_auto_triangles(WasGoID wasgo_id);
WasGoID _wasgo_AnimationNodeBlendSpace2D_wrapper_get_blend_mode(WasGoID wasgo_id);
int _wasgo_AnimationNodeBlendSpace2D_wrapper_get_blend_point_count(WasGoID wasgo_id);
WasGoID _wasgo_AnimationNodeBlendSpace2D_wrapper_get_blend_point_node(WasGoID wasgo_id, int p_point);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_get_blend_point_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_point);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_get_max_space(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_get_min_space(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_get_snap(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_AnimationNodeBlendSpace2D_wrapper_get_triangle_count(WasGoID wasgo_id);
int _wasgo_AnimationNodeBlendSpace2D_wrapper_get_triangle_point(WasGoID wasgo_id, int p_triangle, int p_point);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_get_x_label(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_get_y_label(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_remove_blend_point(WasGoID wasgo_id, int p_point);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_remove_triangle(WasGoID wasgo_id, int p_triangle);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_set_auto_triangles(WasGoID wasgo_id, bool p_enable);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_set_blend_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_set_blend_point_node(WasGoID wasgo_id, int p_point, WasGoID p_node);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_set_blend_point_position(WasGoID wasgo_id, int p_point, const uint8_t * p_pos, int p_pos_wasgo_buffer_size);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_set_max_space(WasGoID wasgo_id, const uint8_t * p_max_space, int p_max_space_wasgo_buffer_size);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_set_min_space(WasGoID wasgo_id, const uint8_t * p_min_space, int p_min_space_wasgo_buffer_size);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_set_snap(WasGoID wasgo_id, const uint8_t * p_snap, int p_snap_wasgo_buffer_size);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_set_x_label(WasGoID wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
void _wasgo_AnimationNodeBlendSpace2D_wrapper_set_y_label(WasGoID wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_AnimationNodeBlendSpace2D_constructor();
            
}
#endif