/* THIS FILE IS GENERATED */
#ifndef COLLISIONPOLYGON2D_H
#define COLLISIONPOLYGON2D_H

#include "wasgo\wasgoid.h"

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

protected:
public:
explicit CollisionPolygon2D(WasGoID p_wasgo_id);
explicit CollisionPolygon2D(Node2D other);
CollisionPolygon2D();
CollisionPolygon2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_CollisionPolygon2D_wrapper_get_build_mode(WasGoID wasgo_id);
float _wasgo_CollisionPolygon2D_wrapper_get_one_way_collision_margin(WasGoID wasgo_id);
WasGoID _wasgo_CollisionPolygon2D_wrapper_get_polygon(WasGoID wasgo_id);
int _wasgo_CollisionPolygon2D_wrapper_is_disabled(WasGoID wasgo_id);
int _wasgo_CollisionPolygon2D_wrapper_is_one_way_collision_enabled(WasGoID wasgo_id);
void _wasgo_CollisionPolygon2D_wrapper_set_build_mode(WasGoID wasgo_id, WasGoID p_build_mode);
void _wasgo_CollisionPolygon2D_wrapper_set_disabled(WasGoID wasgo_id, bool p_disabled);
void _wasgo_CollisionPolygon2D_wrapper_set_one_way_collision(WasGoID wasgo_id, bool p_enabled);
void _wasgo_CollisionPolygon2D_wrapper_set_one_way_collision_margin(WasGoID wasgo_id, float p_margin);
void _wasgo_CollisionPolygon2D_wrapper_set_polygon(WasGoID wasgo_id, WasGoID p_polygon);

    //constructor wrappers
    WasGoID _wasgo_CollisionPolygon2D_constructor();
            
}
#endif