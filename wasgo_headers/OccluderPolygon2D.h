/* THIS FILE IS GENERATED */
#ifndef OCCLUDERPOLYGON2D_H
#define OCCLUDERPOLYGON2D_H

#include <stdint.h>

#include "PoolVector2Array.h"
#include "Resource.h"
class OccluderPolygon2D : public Resource{
public: OccluderPolygon2D();
enum CullMode{
CULL_DISABLED: 0,
CULL_CLOCKWISE: 1,
};
enum.OccluderPolygon2D::CullMode  get_cull_mode();
enum.OccluderPolygon2D::CullMode  get_cull_mode();
PoolVector2Array  get_polygon();
PoolVector2Array  get_polygon();
bool  is_closed();
bool  is_closed();
void  set_closed(bool closed);
void  set_cull_mode(int cull_mode);
void  set_polygon(PoolVector2Array polygon);
};
#endif