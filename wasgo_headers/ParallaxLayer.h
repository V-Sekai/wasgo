/* THIS FILE IS GENERATED */
#ifndef PARALLAXLAYER_H
#define PARALLAXLAYER_H

#include "wasgo\wasgoid.h"

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
public:
explicit ParallaxLayer(WasGoID p_wasgo_id);
explicit ParallaxLayer(Node2D other);
ParallaxLayer();
ParallaxLayer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ParallaxLayer_wrapper_get_mirroring(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ParallaxLayer_wrapper_get_motion_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ParallaxLayer_wrapper_get_motion_scale(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ParallaxLayer_wrapper_set_mirroring(WasGoID wasgo_id, const uint8_t * p_mirror, int p_mirror_wasgo_buffer_size);
void _wasgo_ParallaxLayer_wrapper_set_motion_offset(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_ParallaxLayer_wrapper_set_motion_scale(WasGoID wasgo_id, const uint8_t * p_scale, int p_scale_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_ParallaxLayer_constructor();
            
}
#endif