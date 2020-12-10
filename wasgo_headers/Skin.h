/* THIS FILE IS GENERATED */
#ifndef SKIN_H
#define SKIN_H

#include "wasgo\wasgoid.h"

#include "Transform.h"
#include "Ustring.h"
#include "Resource.h"
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
explicit Skin(WasGoID p_wasgo_id);
explicit Skin(Resource other);
Skin();
Skin new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Skin_wrapper_add_bind(WasGoID wasgo_id, int p_bone, const uint8_t * p_pose, int wasgo_throwaway, int p_pose_wasgo_buffer_size);
void _wasgo_Skin_wrapper_clear_binds(WasGoID wasgo_id);
int _wasgo_Skin_wrapper_get_bind_bone(WasGoID wasgo_id, int p_bind_index);
int _wasgo_Skin_wrapper_get_bind_count(WasGoID wasgo_id);
void _wasgo_Skin_wrapper_get_bind_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_bind_index);
void _wasgo_Skin_wrapper_get_bind_pose(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_bind_index);
void _wasgo_Skin_wrapper_set_bind_bone(WasGoID wasgo_id, int p_bind_index, int p_bone);
void _wasgo_Skin_wrapper_set_bind_count(WasGoID wasgo_id, int p_bind_count);
void _wasgo_Skin_wrapper_set_bind_name(WasGoID wasgo_id, int p_bind_index, const uint8_t * p_name, int wasgo_throwaway, int p_name_wasgo_buffer_size);
void _wasgo_Skin_wrapper_set_bind_pose(WasGoID wasgo_id, int p_bind_index, const uint8_t * p_pose, int wasgo_throwaway, int p_pose_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_Skin_constructor();
            
}
#endif