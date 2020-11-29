/* THIS FILE IS GENERATED */
#ifndef LIGHTOCCLUDER2D_H
#define LIGHTOCCLUDER2D_H

#include "stdint.h"

#include "Node2D.h"
#include "OccluderPolygon2D.h"
class LightOccluder2D : public Node2D{
public: LightOccluder2D();
int get_occluder_light_mask();
OccluderPolygon2D get_occluder_polygon();
void set_occluder_light_mask(int p_mask);
void set_occluder_polygon(OccluderPolygon2D p_polygon);
};
#endif