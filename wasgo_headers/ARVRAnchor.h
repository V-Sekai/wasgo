/* THIS FILE IS GENERATED */
#ifndef ARVRANCHOR_H
#define ARVRANCHOR_H

#include "wasgo\wasgoid.h"

#include "Vector3.h"
#include "Mesh.h"
#include "Spatial.h"
#include "Ustring.h"
#include "Plane.h"
class ARVRAnchor : public Spatial{
public:
int get_anchor_id();
String get_anchor_name();
bool get_is_active();
Mesh get_mesh();
Plane get_plane();
Vector3 get_size();
void set_anchor_id(int p_anchor_id);

protected:
public:
explicit ARVRAnchor(WasGoID p_wasgo_id);
explicit ARVRAnchor(Spatial other);
ARVRAnchor();
ARVRAnchor new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ARVRAnchor_wrapper_get_anchor_id(WasGoID wasgo_id);
void _wasgo_ARVRAnchor_wrapper_get_anchor_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_ARVRAnchor_wrapper_get_is_active(WasGoID wasgo_id);
WasGoID _wasgo_ARVRAnchor_wrapper_get_mesh(WasGoID wasgo_id);
void _wasgo_ARVRAnchor_wrapper_get_plane(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ARVRAnchor_wrapper_get_size(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ARVRAnchor_wrapper_set_anchor_id(WasGoID wasgo_id, int p_anchor_id);

    //constructor wrappers
    WasGoID _wasgo_ARVRAnchor_constructor();
            
}
#endif