/* THIS FILE IS GENERATED */
#ifndef REMOTETRANSFORM2D_H
#define REMOTETRANSFORM2D_H

#include "wasgo\wasgoid.h"

#include "NodePath.h"
#include "Node2D.h"
class RemoteTransform2D : public Node2D{
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
explicit RemoteTransform2D(WasGoID p_wasgo_id);
explicit RemoteTransform2D(Node2D other);
RemoteTransform2D();
RemoteTransform2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_RemoteTransform2D_wrapper_force_update_cache(WasGoID wasgo_id);
void _wasgo_RemoteTransform2D_wrapper_get_remote_node(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_RemoteTransform2D_wrapper_get_update_position(WasGoID wasgo_id);
int _wasgo_RemoteTransform2D_wrapper_get_update_rotation(WasGoID wasgo_id);
int _wasgo_RemoteTransform2D_wrapper_get_update_scale(WasGoID wasgo_id);
int _wasgo_RemoteTransform2D_wrapper_get_use_global_coordinates(WasGoID wasgo_id);
void _wasgo_RemoteTransform2D_wrapper_set_remote_node(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
void _wasgo_RemoteTransform2D_wrapper_set_update_position(WasGoID wasgo_id, bool p_update_remote_position);
void _wasgo_RemoteTransform2D_wrapper_set_update_rotation(WasGoID wasgo_id, bool p_update_remote_rotation);
void _wasgo_RemoteTransform2D_wrapper_set_update_scale(WasGoID wasgo_id, bool p_update_remote_scale);
void _wasgo_RemoteTransform2D_wrapper_set_use_global_coordinates(WasGoID wasgo_id, bool p_use_global_coordinates);

    //constructor wrappers
    WasGoID _wasgo_RemoteTransform2D_constructor();
            
}
#endif