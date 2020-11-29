/* THIS FILE IS GENERATED */
#ifndef ARVRANCHOR_H
#define ARVRANCHOR_H

#include "stdint.h"

#include "Variant.h"
#include "Spatial.h"
#include "Mesh.h"
class ARVRAnchor : public Spatial{
public: ARVRAnchor();
int get_anchor_id();
String get_anchor_name();
bool get_is_active();
Mesh get_mesh();
Plane get_plane();
Vector3 get_size();
void set_anchor_id(int p_anchor_id);
};
#endif