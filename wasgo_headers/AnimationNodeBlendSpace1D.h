/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEBLENDSPACE1D_H
#define ANIMATIONNODEBLENDSPACE1D_H

#include "wasgo\wasgo.h"

#include "AnimationRootNode.h"
#include "ustring.h"
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
AnimationNodeBlendSpace1D(WasGoId p_wasgo_id);
public:
AnimationNodeBlendSpace1D();
~AnimationNodeBlendSpace1D();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationNodeBlendSpace1D_wrapper_add_blend_point(WasGoId wasgo_id, WasGoId p_node, float p_pos, int p_at_index);
int _wasgo_AnimationNodeBlendSpace1D_wrapper_get_blend_point_count(WasGoId wasgo_id);
WasGoId _wasgo_AnimationNodeBlendSpace1D_wrapper_get_blend_point_node(WasGoId wasgo_id, int p_point);
float _wasgo_AnimationNodeBlendSpace1D_wrapper_get_blend_point_position(WasGoId wasgo_id, int p_point);
float _wasgo_AnimationNodeBlendSpace1D_wrapper_get_max_space(WasGoId wasgo_id);
float _wasgo_AnimationNodeBlendSpace1D_wrapper_get_min_space(WasGoId wasgo_id);
float _wasgo_AnimationNodeBlendSpace1D_wrapper_get_snap(WasGoId wasgo_id);
void _wasgo_AnimationNodeBlendSpace1D_wrapper_get_value_label(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_AnimationNodeBlendSpace1D_wrapper_remove_blend_point(WasGoId wasgo_id, int p_point);
void _wasgo_AnimationNodeBlendSpace1D_wrapper_set_blend_point_node(WasGoId wasgo_id, int p_point, WasGoId p_node);
void _wasgo_AnimationNodeBlendSpace1D_wrapper_set_blend_point_position(WasGoId wasgo_id, int p_point, float p_pos);
void _wasgo_AnimationNodeBlendSpace1D_wrapper_set_max_space(WasGoId wasgo_id, float p_max_space);
void _wasgo_AnimationNodeBlendSpace1D_wrapper_set_min_space(WasGoId wasgo_id, float p_min_space);
void _wasgo_AnimationNodeBlendSpace1D_wrapper_set_snap(WasGoId wasgo_id, float p_snap);
void _wasgo_AnimationNodeBlendSpace1D_wrapper_set_value_label(WasGoId wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_AnimationNodeBlendSpace1D_constructor();
    void _wasgo_AnimationNodeBlendSpace1D_destructor(WasGoId p_wasgo_id);
            
}
#endif