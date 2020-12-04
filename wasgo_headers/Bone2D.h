/* THIS FILE IS GENERATED */
#ifndef BONE2D_H
#define BONE2D_H

#include "wasgo\wasgo.h"

#include "Transform2D.h"
#include "Node2D.h"
class Bone2D : public Node2D{
public:
void apply_rest();
float get_default_length();
int get_index_in_skeleton();
Transform2D get_rest();
Transform2D get_skeleton_rest();
void set_default_length(float p_default_length);
void set_rest(Transform2D p_rest);

protected:
public:
explicit Bone2D(WasGoId p_wasgo_id);
explicit Bone2D(Node2D other);
Bone2D new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Bone2D_wrapper_apply_rest(WasGoId wasgo_id);
float _wasgo_Bone2D_wrapper_get_default_length(WasGoId wasgo_id);
int _wasgo_Bone2D_wrapper_get_index_in_skeleton(WasGoId wasgo_id);
void _wasgo_Bone2D_wrapper_get_rest(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Bone2D_wrapper_get_skeleton_rest(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Bone2D_wrapper_set_default_length(WasGoId wasgo_id, float p_default_length);
void _wasgo_Bone2D_wrapper_set_rest(WasGoId wasgo_id, const uint8_t * p_rest, int p_rest_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_Bone2D_constructor();
            
}
#endif