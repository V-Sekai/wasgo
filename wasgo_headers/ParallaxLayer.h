/* THIS FILE IS GENERATED */
#ifndef PARALLAXLAYER_H
#define PARALLAXLAYER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Node2D.h"
class ParallaxLayer : public Node2D{
public:
Vector2 get_mirroring();
Vector2 get_motion_offset();
Vector2 get_motion_scale();
void set_mirroring(Vector2 p_mirror);
void set_motion_offset(Vector2 p_offset);
void set_motion_scale(Vector2 p_scale);

ParallaxLayer(WasGoId p_wasgo_id);
~ParallaxLayer();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ParallaxLayer_wrapper_get_mirroring(WasGoId wasgo_id);
WasGoId _wasgo_ParallaxLayer_wrapper_get_motion_offset(WasGoId wasgo_id);
WasGoId _wasgo_ParallaxLayer_wrapper_get_motion_scale(WasGoId wasgo_id);
void _wasgo_ParallaxLayer_wrapper_set_mirroring(WasGoId wasgo_id, WasGoId p_mirror);
void _wasgo_ParallaxLayer_wrapper_set_motion_offset(WasGoId wasgo_id, WasGoId p_offset);
void _wasgo_ParallaxLayer_wrapper_set_motion_scale(WasGoId wasgo_id, WasGoId p_scale);
}
#endif