/* THIS FILE IS GENERATED */
#ifndef REMOTETRANSFORM_H
#define REMOTETRANSFORM_H

#include "wasgo\wasgo.h"

#include "Spatial.h"
#include "NodePath.h"
class RemoteTransform : public Spatial{
public:
void force_update_cache();
NodePath get_remote_node();
bool get_update_position();
bool get_update_rotation();
bool get_update_scale();
bool get_use_global_coordinates();
void set_remote_node(NodePath p_path);
void set_update_position(bool p_update_remote_position);
void set_update_rotation(bool p_update_remote_rotation);
void set_update_scale(bool p_update_remote_scale);
void set_use_global_coordinates(bool p_use_global_coordinates);

protected:
public:
explicit RemoteTransform(WasGoID p_wasgo_id);
explicit RemoteTransform(Spatial other);
RemoteTransform new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_RemoteTransform_wrapper_force_update_cache(WasGoID wasgo_id);
void _wasgo_RemoteTransform_wrapper_get_remote_node(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_RemoteTransform_wrapper_get_update_position(WasGoID wasgo_id);
int _wasgo_RemoteTransform_wrapper_get_update_rotation(WasGoID wasgo_id);
int _wasgo_RemoteTransform_wrapper_get_update_scale(WasGoID wasgo_id);
int _wasgo_RemoteTransform_wrapper_get_use_global_coordinates(WasGoID wasgo_id);
void _wasgo_RemoteTransform_wrapper_set_remote_node(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
void _wasgo_RemoteTransform_wrapper_set_update_position(WasGoID wasgo_id, bool p_update_remote_position);
void _wasgo_RemoteTransform_wrapper_set_update_rotation(WasGoID wasgo_id, bool p_update_remote_rotation);
void _wasgo_RemoteTransform_wrapper_set_update_scale(WasGoID wasgo_id, bool p_update_remote_scale);
void _wasgo_RemoteTransform_wrapper_set_use_global_coordinates(WasGoID wasgo_id, bool p_use_global_coordinates);

    //constructor wrappers
    WasGoID _wasgo_RemoteTransform_constructor();
            
}
#endif