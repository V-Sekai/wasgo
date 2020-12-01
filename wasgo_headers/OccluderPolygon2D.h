/* THIS FILE IS GENERATED */
#ifndef OCCLUDERPOLYGON2D_H
#define OCCLUDERPOLYGON2D_H

#include "stdint.h"
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

OccluderPolygon2D(WasGoId p_wasgo_id);
~OccluderPolygon2D();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_OccluderPolygon2D_wrapper_get_cull_mode(WasGoId wasgo_id);
WasGoId _wasgo_OccluderPolygon2D_wrapper_get_polygon(WasGoId wasgo_id);
int _wasgo_OccluderPolygon2D_wrapper_is_closed(WasGoId wasgo_id);
void _wasgo_OccluderPolygon2D_wrapper_set_closed(WasGoId wasgo_id, bool p_closed);
void _wasgo_OccluderPolygon2D_wrapper_set_cull_mode(WasGoId wasgo_id, WasGoId p_cull_mode);
void _wasgo_OccluderPolygon2D_wrapper_set_polygon(WasGoId wasgo_id, WasGoId p_polygon);
}
#endif