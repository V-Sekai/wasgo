/* THIS FILE IS GENERATED */
#ifndef SKIN_H
#define SKIN_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Resource.h"
#include "Transform.h"
class Skin : public Resource{
public:
void add_bind(int p_bone, Transform p_pose);
void clear_binds();
int get_bind_bone(int p_bind_index);
int get_bind_count();
String get_bind_name(int p_bind_index);
Transform get_bind_pose(int p_bind_index);
void set_bind_bone(int p_bind_index, int p_bone);
void set_bind_count(int p_bind_count);
void set_bind_name(int p_bind_index, String p_name);
void set_bind_pose(int p_bind_index, Transform p_pose);

protected:
public:
explicit Skin(WasGoId p_wasgo_id);
explicit Skin(Resource other);
Skin new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Skin_wrapper_add_bind(WasGoId wasgo_id, int p_bone, const uint8_t * p_pose, int p_pose_wasgo_buffer_size);
void _wasgo_Skin_wrapper_clear_binds(WasGoId wasgo_id);
int _wasgo_Skin_wrapper_get_bind_bone(WasGoId wasgo_id, int p_bind_index);
int _wasgo_Skin_wrapper_get_bind_count(WasGoId wasgo_id);
void _wasgo_Skin_wrapper_get_bind_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_bind_index);
void _wasgo_Skin_wrapper_get_bind_pose(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_bind_index);
void _wasgo_Skin_wrapper_set_bind_bone(WasGoId wasgo_id, int p_bind_index, int p_bone);
void _wasgo_Skin_wrapper_set_bind_count(WasGoId wasgo_id, int p_bind_count);
void _wasgo_Skin_wrapper_set_bind_name(WasGoId wasgo_id, int p_bind_index, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_Skin_wrapper_set_bind_pose(WasGoId wasgo_id, int p_bind_index, const uint8_t * p_pose, int p_pose_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_Skin_constructor();
            
}
#endif