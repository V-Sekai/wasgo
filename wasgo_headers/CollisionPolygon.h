/* THIS FILE IS GENERATED */
#ifndef COLLISIONPOLYGON_H
#define COLLISIONPOLYGON_H

#include "stdint.h"

#include "Variant.h"
#include "Spatial.h"
class CollisionPolygon : public Spatial{
public: CollisionPolygon();
float get_depth();
PoolVector2Array get_polygon();
bool is_disabled();
void set_depth(float p_depth);
void set_disabled(bool p_disabled);
void set_polygon(PoolVector2Array p_polygon);
};
#endif