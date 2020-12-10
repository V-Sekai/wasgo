/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEBLENDSPACE1D_H
#define ANIMATIONNODEBLENDSPACE1D_H

#include "wasgo\wasgoid.h"

#include "AnimationRootNode.h"
#include "Ustring.h"
class AnimationNodeBlendSpace1D : public AnimationRootNode{
public:
void add_blend_point(AnimationRootNode p_node, float p_pos, int p_at_index = (int) -1);
int get_blend_point_count();
AnimationRootNode get_blend_point_node(int p_point);
float get_blend_point_position(int p_point);
float get_max_space();
float get_min_space();
float get_snap();
String get_value_label();
void remove_blend_point(int p_point);
void set_blend_point_node(int p_point, AnimationRootNode p_node);
void set_blend_point_position(int p_point, float p_pos);
void set_max_space(float p_max_space);
void set_min_space(float p_min_space);
void set_snap(float p_snap);
void set_value_label(String p_text);

protected:
public:
explicit AnimationNodeBlendSpace1D(WasGoID p_wasgo_id);
explicit AnimationNodeBlendSpace1D(AnimationRootNode other);
AnimationNodeBlendSpace1D();
AnimationNodeBlendSpace1D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationNodeBlendSpace1D_wrapper_add_blend_point(WasGoID wasgo_id, WasGoID p_node, float p_pos, int wasgo_throwaway, int p_at_index);
int _wasgo_AnimationNodeBlendSpace1D_wrapper_get_blend_point_count(WasGoID wasgo_id);
WasGoID _wasgo_AnimationNodeBlendSpace1D_wrapper_get_blend_point_node(WasGoID wasgo_id, int p_point);
float _wasgo_AnimationNodeBlendSpace1D_wrapper_get_blend_point_position(WasGoID wasgo_id, int p_point);
float _wasgo_AnimationNodeBlendSpace1D_wrapper_get_max_space(WasGoID wasgo_id);
float _wasgo_AnimationNodeBlendSpace1D_wrapper_get_min_space(WasGoID wasgo_id);
float _wasgo_AnimationNodeBlendSpace1D_wrapper_get_snap(WasGoID wasgo_id);
void _wasgo_AnimationNodeBlendSpace1D_wrapper_get_value_label(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_AnimationNodeBlendSpace1D_wrapper_remove_blend_point(WasGoID wasgo_id, int p_point);
void _wasgo_AnimationNodeBlendSpace1D_wrapper_set_blend_point_node(WasGoID wasgo_id, int p_point, WasGoID p_node);
void _wasgo_AnimationNodeBlendSpace1D_wrapper_set_blend_point_position(WasGoID wasgo_id, int p_point, float p_pos);
void _wasgo_AnimationNodeBlendSpace1D_wrapper_set_max_space(WasGoID wasgo_id, float p_max_space);
void _wasgo_AnimationNodeBlendSpace1D_wrapper_set_min_space(WasGoID wasgo_id, float p_min_space);
void _wasgo_AnimationNodeBlendSpace1D_wrapper_set_snap(WasGoID wasgo_id, float p_snap);
void _wasgo_AnimationNodeBlendSpace1D_wrapper_set_value_label(WasGoID wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_AnimationNodeBlendSpace1D_constructor();
            
}
#endif