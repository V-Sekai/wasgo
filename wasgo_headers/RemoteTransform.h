/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "NodePath.h"
#include "Spatial.h"
class RemoteTransform : public Spatial{
public: RemoteTransform();
void  force_update_cache();
void  force_update_cache();
NodePath  get_remote_node();
NodePath  get_remote_node();
bool  get_update_position();
bool  get_update_position();
bool  get_update_rotation();
bool  get_update_rotation();
bool  get_update_scale();
bool  get_update_scale();
bool  get_use_global_coordinates();
bool  get_use_global_coordinates();
void  set_remote_node(NodePath path);
void  set_update_position(bool update_remote_position);
void  set_update_rotation(bool update_remote_rotation);
void  set_update_scale(bool update_remote_scale);
void  set_use_global_coordinates(bool use_global_coordinates);
};