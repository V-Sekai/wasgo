/* THIS FILE IS GENERATED */
#ifndef COLLISIONPOLYGON_H
#define COLLISIONPOLYGON_H

#include <stdint.h>

#include "PoolVector2Array.h"
#include "Spatial.h"
class CollisionPolygon : public Spatial{
public: CollisionPolygon();
bool  _is_editable_3d_polygon();
bool  _is_editable_3d_polygon();
float  get_depth();
float  get_depth();
PoolVector2Array  get_polygon();
PoolVector2Array  get_polygon();
bool  is_disabled();
bool  is_disabled();
void  set_depth(float depth);
void  set_disabled(bool disabled);
void  set_polygon(PoolVector2Array polygon);
};
#endif