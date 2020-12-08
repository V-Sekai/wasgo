/* THIS FILE IS GENERATED */
#ifndef COLLISIONPOLYGON_H
#define COLLISIONPOLYGON_H

#include "wasgo\wasgoid.h"

#include "Spatial.h"
#include "Variant.h"
class CollisionPolygon : public Spatial{
public:
float get_depth();
PoolVector2Array get_polygon();
bool is_disabled();
void set_depth(float p_depth);
void set_disabled(bool p_disabled);
void set_polygon(PoolVector2Array p_polygon);

protected:
public:
explicit CollisionPolygon(WasGoID p_wasgo_id);
explicit CollisionPolygon(Spatial other);
CollisionPolygon();
CollisionPolygon new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_CollisionPolygon_wrapper_get_depth(WasGoID wasgo_id);
WasGoID _wasgo_CollisionPolygon_wrapper_get_polygon(WasGoID wasgo_id);
int _wasgo_CollisionPolygon_wrapper_is_disabled(WasGoID wasgo_id);
void _wasgo_CollisionPolygon_wrapper_set_depth(WasGoID wasgo_id, float p_depth);
void _wasgo_CollisionPolygon_wrapper_set_disabled(WasGoID wasgo_id, bool p_disabled);
void _wasgo_CollisionPolygon_wrapper_set_polygon(WasGoID wasgo_id, WasGoID p_polygon);

    //constructor wrappers
    WasGoID _wasgo_CollisionPolygon_constructor();
            
}
#endif