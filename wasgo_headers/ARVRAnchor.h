/* THIS FILE IS GENERATED */
#ifndef ARVRANCHOR_H
#define ARVRANCHOR_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Spatial.h"
#include "Variant.h"
#include "Mesh.h"
class ARVRAnchor : public Spatial{
int get_anchor_id();
String get_anchor_name();
bool get_is_active();
Mesh get_mesh();
Plane get_plane();
Vector3 get_size();
void set_anchor_id(int p_anchor_id);

ARVRAnchor(WasGoId p_wasgo_id);
~ARVRAnchor();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ARVRAnchor_wrapper_get_anchor_id(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ARVRAnchor_wrapper_get_anchor_name(WasGoId wasgo_id);
int _wasgo_ARVRAnchor_wrapper_get_is_active(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ARVRAnchor_wrapper_get_mesh(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ARVRAnchor_wrapper_get_plane(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ARVRAnchor_wrapper_get_size(WasGoId wasgo_id);
void _wasgo_ARVRAnchor_wrapper_set_anchor_id(WasGoId wasgo_id, int p_anchor_id);
}
#endif