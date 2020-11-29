/* THIS FILE IS GENERATED */
#ifndef COLLISIONPOLYGON2D_H
#define COLLISIONPOLYGON2D_H

#include "stdint.h"

#include "Node2D.h"
#include "Variant.h"
class CollisionPolygon2D : public Node2D{
public: CollisionPolygon2D();
enum BuildMode{
BUILD_SOLIDS,
BUILD_SEGMENTS
};
CollisionPolygon2D::BuildMode get_build_mode();
float get_one_way_collision_margin();
PoolVector2Array get_polygon();
bool is_disabled();
bool is_one_way_collision_enabled();
void set_build_mode(CollisionPolygon2D::BuildMode p_build_mode);
void set_disabled(bool p_disabled);
void set_one_way_collision(bool p_enabled);
void set_one_way_collision_margin(float p_margin);
void set_polygon(PoolVector2Array p_polygon);
};
#endif