/* THIS FILE IS GENERATED */
#ifndef LIGHTOCCLUDER2D_H
#define LIGHTOCCLUDER2D_H

#include "wasgo\wasgoid.h"

#include "Node2D.h"
#include "OccluderPolygon2D.h"
class LightOccluder2D : public Node2D{
public:
int get_occluder_light_mask();
OccluderPolygon2D get_occluder_polygon();
void set_occluder_light_mask(int p_mask);
void set_occluder_polygon(OccluderPolygon2D p_polygon);

protected:
public:
explicit LightOccluder2D(WasGoID p_wasgo_id);
explicit LightOccluder2D(Node2D other);
LightOccluder2D();
LightOccluder2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_LightOccluder2D_wrapper_get_occluder_light_mask(WasGoID wasgo_id);
WasGoID _wasgo_LightOccluder2D_wrapper_get_occluder_polygon(WasGoID wasgo_id);
void _wasgo_LightOccluder2D_wrapper_set_occluder_light_mask(WasGoID wasgo_id, int p_mask);
void _wasgo_LightOccluder2D_wrapper_set_occluder_polygon(WasGoID wasgo_id, WasGoID p_polygon);

    //constructor wrappers
    WasGoID _wasgo_LightOccluder2D_constructor();
            
}
#endif