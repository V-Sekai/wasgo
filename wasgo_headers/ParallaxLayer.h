/* THIS FILE IS GENERATED */
#ifndef PARALLAXLAYER_H
#define PARALLAXLAYER_H

#include "wasgo\wasgo.h"

#include "Node2D.h"
#include "Vector2.h"
class ParallaxLayer : public Node2D{
public:
Vector2 get_mirroring();
Vector2 get_motion_offset();
Vector2 get_motion_scale();
void set_mirroring(Vector2 p_mirror);
void set_motion_offset(Vector2 p_offset);
void set_motion_scale(Vector2 p_scale);

protected:
ParallaxLayer(WasGoId p_wasgo_id);
public:
ParallaxLayer();
~ParallaxLayer();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ParallaxLayer_wrapper_get_mirroring(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ParallaxLayer_wrapper_get_motion_offset(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ParallaxLayer_wrapper_get_motion_scale(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ParallaxLayer_wrapper_set_mirroring(WasGoId wasgo_id, const uint8_t * p_mirror, int p_mirror_wasgo_buffer_size);
void _wasgo_ParallaxLayer_wrapper_set_motion_offset(WasGoId wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_ParallaxLayer_wrapper_set_motion_scale(WasGoId wasgo_id, const uint8_t * p_scale, int p_scale_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_ParallaxLayer_constructor();
    void _wasgo_ParallaxLayer_destructor(WasGoId p_wasgo_id);
            
}
#endif