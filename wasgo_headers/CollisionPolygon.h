/* THIS FILE IS GENERATED */
#ifndef COLLISIONPOLYGON_H
#define COLLISIONPOLYGON_H

#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Spatial.h"
class CollisionPolygon : public Spatial{
public:
float get_depth();
PoolVector2Array get_polygon();
bool is_disabled();
void set_depth(float p_depth);
void set_disabled(bool p_disabled);
void set_polygon(PoolVector2Array p_polygon);

protected:
CollisionPolygon(WasGoId p_wasgo_id);
public:
CollisionPolygon();
~CollisionPolygon();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_CollisionPolygon_wrapper_get_depth(WasGoId wasgo_id);
WasGoId _wasgo_CollisionPolygon_wrapper_get_polygon(WasGoId wasgo_id);
int _wasgo_CollisionPolygon_wrapper_is_disabled(WasGoId wasgo_id);
void _wasgo_CollisionPolygon_wrapper_set_depth(WasGoId wasgo_id, float p_depth);
void _wasgo_CollisionPolygon_wrapper_set_disabled(WasGoId wasgo_id, bool p_disabled);
void _wasgo_CollisionPolygon_wrapper_set_polygon(WasGoId wasgo_id, WasGoId p_polygon);

    //constructor and destructor wrappers
    WasGoId _wasgo_CollisionPolygon_constructor();
    void _wasgo_CollisionPolygon_destructor(WasGoId p_wasgo_id);
            
}
#endif