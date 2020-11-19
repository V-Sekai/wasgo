/* THIS FILE IS GENERATED */
#ifndef ARVRANCHOR_H
#define ARVRANCHOR_H

#include <stdint.h>

#include "String.h"
#include "Mesh.h"
#include "Vector3.h"
#include "Spatial.h"
#include "Plane.h"
class ARVRAnchor : public Spatial{
public: ARVRAnchor();
int  get_anchor_id();
int  get_anchor_id();
String  get_anchor_name();
String  get_anchor_name();
bool  get_is_active();
bool  get_is_active();
Mesh  get_mesh();
Mesh  get_mesh();
Plane  get_plane();
Plane  get_plane();
Vector3  get_size();
Vector3  get_size();
void  set_anchor_id(int anchor_id);
};
#endif