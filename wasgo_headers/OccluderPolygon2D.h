/* THIS FILE IS GENERATED */
#ifndef OCCLUDERPOLYGON2D_H
#define OCCLUDERPOLYGON2D_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class OccluderPolygon2D : public Resource{
public: OccluderPolygon2D();
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
};
#endif