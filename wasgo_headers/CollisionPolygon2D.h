/* THIS FILE IS GENERATED */
#ifndef COLLISIONPOLYGON2D_H
#define COLLISIONPOLYGON2D_H

#include <stdint.h>

#include "PoolVector2Array.h"
#include "Node2D.h"
class CollisionPolygon2D : public Node2D{
public: CollisionPolygon2D();
enum BuildMode{
BUILD_SOLIDS: 0,
};
enum.CollisionPolygon2D::BuildMode  get_build_mode();
enum.CollisionPolygon2D::BuildMode  get_build_mode();
float  get_one_way_collision_margin();
float  get_one_way_collision_margin();
PoolVector2Array  get_polygon();
PoolVector2Array  get_polygon();
bool  is_disabled();
bool  is_disabled();
bool  is_one_way_collision_enabled();
bool  is_one_way_collision_enabled();
void  set_build_mode(int build_mode);
void  set_disabled(bool disabled);
void  set_one_way_collision(bool enabled);
void  set_one_way_collision_margin(float margin);
void  set_polygon(PoolVector2Array polygon);
};
#endif