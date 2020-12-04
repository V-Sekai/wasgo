/* THIS FILE IS GENERATED */
#ifndef OCCLUDERPOLYGON2D_H
#define OCCLUDERPOLYGON2D_H

#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Resource.h"
class OccluderPolygon2D : public Resource{
public:
enum CullMode{
CULL_DISABLED,
CULL_CLOCKWISE,
CULL_COUNTER_CLOCKWISE
};
OccluderPolygon2D::CullMode get_cull_mode();
PoolVector2Array get_polygon();
bool is_closed();
void set_closed(bool p_closed);
void set_cull_mode(OccluderPolygon2D::CullMode p_cull_mode);
void set_polygon(PoolVector2Array p_polygon);

protected:
public:
explicit OccluderPolygon2D(WasGoID p_wasgo_id);
explicit OccluderPolygon2D(Resource other);
OccluderPolygon2D new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_OccluderPolygon2D_wrapper_get_cull_mode(WasGoID wasgo_id);
WasGoID _wasgo_OccluderPolygon2D_wrapper_get_polygon(WasGoID wasgo_id);
int _wasgo_OccluderPolygon2D_wrapper_is_closed(WasGoID wasgo_id);
void _wasgo_OccluderPolygon2D_wrapper_set_closed(WasGoID wasgo_id, bool p_closed);
void _wasgo_OccluderPolygon2D_wrapper_set_cull_mode(WasGoID wasgo_id, WasGoID p_cull_mode);
void _wasgo_OccluderPolygon2D_wrapper_set_polygon(WasGoID wasgo_id, WasGoID p_polygon);

    //constructor wrappers
    WasGoID _wasgo_OccluderPolygon2D_constructor();
            
}
#endif