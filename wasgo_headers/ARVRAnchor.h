/* THIS FILE IS GENERATED */
#ifndef ARVRANCHOR_H
#define ARVRANCHOR_H

#include "wasgo\wasgo.h"

#include "Spatial.h"
#include "Vector3.h"
#include "ustring.h"
#include "Mesh.h"
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
ARVRAnchor(WasGoId p_wasgo_id);
public:
ARVRAnchor();
~ARVRAnchor();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ARVRAnchor_wrapper_get_anchor_id(WasGoId wasgo_id);
void _wasgo_ARVRAnchor_wrapper_get_anchor_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_ARVRAnchor_wrapper_get_is_active(WasGoId wasgo_id);
WasGoId _wasgo_ARVRAnchor_wrapper_get_mesh(WasGoId wasgo_id);
void _wasgo_ARVRAnchor_wrapper_get_plane(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ARVRAnchor_wrapper_get_size(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ARVRAnchor_wrapper_set_anchor_id(WasGoId wasgo_id, int p_anchor_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_ARVRAnchor_constructor();
    void _wasgo_ARVRAnchor_destructor(WasGoId p_wasgo_id);
            
}
#endif