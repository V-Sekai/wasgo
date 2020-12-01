/* THIS FILE IS GENERATED */
#ifndef COLLISIONPOLYGON2D_H
#define COLLISIONPOLYGON2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Node2D.h"
class CollisionPolygon2D : public Node2D{
public:
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

CollisionPolygon2D(WasGoId p_wasgo_id);
~CollisionPolygon2D();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_CollisionPolygon2D_wrapper_get_build_mode(WasGoId wasgo_id);
float _wasgo_CollisionPolygon2D_wrapper_get_one_way_collision_margin(WasGoId wasgo_id);
WasGoId _wasgo_CollisionPolygon2D_wrapper_get_polygon(WasGoId wasgo_id);
int _wasgo_CollisionPolygon2D_wrapper_is_disabled(WasGoId wasgo_id);
int _wasgo_CollisionPolygon2D_wrapper_is_one_way_collision_enabled(WasGoId wasgo_id);
void _wasgo_CollisionPolygon2D_wrapper_set_build_mode(WasGoId wasgo_id, WasGoId p_build_mode);
void _wasgo_CollisionPolygon2D_wrapper_set_disabled(WasGoId wasgo_id, bool p_disabled);
void _wasgo_CollisionPolygon2D_wrapper_set_one_way_collision(WasGoId wasgo_id, bool p_enabled);
void _wasgo_CollisionPolygon2D_wrapper_set_one_way_collision_margin(WasGoId wasgo_id, float p_margin);
void _wasgo_CollisionPolygon2D_wrapper_set_polygon(WasGoId wasgo_id, WasGoId p_polygon);
}
#endif