/* THIS FILE IS GENERATED */
#ifndef LIGHTOCCLUDER2D_H
#define LIGHTOCCLUDER2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "OccluderPolygon2D.h"
#include "Node2D.h"
class LightOccluder2D : public Node2D{
public:
int get_occluder_light_mask();
OccluderPolygon2D get_occluder_polygon();
void set_occluder_light_mask(int p_mask);
void set_occluder_polygon(OccluderPolygon2D p_polygon);

LightOccluder2D(WasGoId p_wasgo_id);
~LightOccluder2D();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_LightOccluder2D_wrapper_get_occluder_light_mask(WasGoId wasgo_id);
WasGoId _wasgo_LightOccluder2D_wrapper_get_occluder_polygon(WasGoId wasgo_id);
void _wasgo_LightOccluder2D_wrapper_set_occluder_light_mask(WasGoId wasgo_id, int p_mask);
void _wasgo_LightOccluder2D_wrapper_set_occluder_polygon(WasGoId wasgo_id, WasGoId p_polygon);
}
#endif