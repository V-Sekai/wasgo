/* THIS FILE IS GENERATED */
#ifndef NAVIGATION2D_H
#define NAVIGATION2D_H

#include "wasgo\wasgo.h"

#include "Node2D.h"
#include "Vector2.h"
#include "Object.h"
#include "NavigationPolygon.h"
#include "Transform2D.h"
#include "Variant.h"
class Navigation2D : public Node2D{
public:
Vector2 get_closest_point(Vector2 p_to_point);
Object get_closest_point_owner(Vector2 p_to_point);
PoolVector2Array get_simple_path(Vector2 p_start, Vector2 p_end, bool p_optimize = (bool) true);
int navpoly_add(NavigationPolygon p_mesh, Transform2D p_xform, Object p_owner = (Object) "");
void navpoly_remove(int p_id);
void navpoly_set_transform(int p_id, Transform2D p_xform);

protected:
Navigation2D(WasGoId p_wasgo_id);
public:
Navigation2D();
~Navigation2D();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Navigation2D_wrapper_get_closest_point(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_to_point, int p_to_point_wasgo_buffer_size);
WasGoId _wasgo_Navigation2D_wrapper_get_closest_point_owner(WasGoId wasgo_id, const uint8_t * p_to_point, int p_to_point_wasgo_buffer_size);
WasGoId _wasgo_Navigation2D_wrapper_get_simple_path(WasGoId wasgo_id, const uint8_t * p_start, int p_start_wasgo_buffer_size, const uint8_t * p_end, int p_end_wasgo_buffer_size, bool p_optimize);
int _wasgo_Navigation2D_wrapper_navpoly_add(WasGoId wasgo_id, WasGoId p_mesh, const uint8_t * p_xform, int p_xform_wasgo_buffer_size, WasGoId p_owner);
void _wasgo_Navigation2D_wrapper_navpoly_remove(WasGoId wasgo_id, int p_id);
void _wasgo_Navigation2D_wrapper_navpoly_set_transform(WasGoId wasgo_id, int p_id, const uint8_t * p_xform, int p_xform_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_Navigation2D_constructor();
    void _wasgo_Navigation2D_destructor(WasGoId p_wasgo_id);
            
}
#endif