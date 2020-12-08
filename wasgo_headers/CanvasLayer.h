/* THIS FILE IS GENERATED */
#ifndef CANVASLAYER_H
#define CANVASLAYER_H

#include "wasgo\wasgoid.h"

#include "RID.h"
#include "Transform2D.h"
#include "Node.h"
#include "Vector2.h"
class CanvasLayer : public Node{
public:
RID get_canvas();
Node get_custom_viewport();
float get_follow_viewport_scale();
int get_layer();
Vector2 get_offset();
float get_rotation();
float get_rotation_degrees();
Vector2 get_scale();
Transform2D get_transform();
bool is_following_viewport();
void set_custom_viewport(Node p_viewport);
void set_follow_viewport(bool p_enable);
void set_follow_viewport_scale(float p_scale);
void set_layer(int p_layer);
void set_offset(Vector2 p_offset);
void set_rotation(float p_radians);
void set_rotation_degrees(float p_degrees);
void set_scale(Vector2 p_scale);
void set_transform(Transform2D p_transform);

protected:
public:
explicit CanvasLayer(WasGoID p_wasgo_id);
explicit CanvasLayer(Node other);
CanvasLayer();
CanvasLayer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_CanvasLayer_wrapper_get_canvas(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_CanvasLayer_wrapper_get_custom_viewport(WasGoID wasgo_id);
float _wasgo_CanvasLayer_wrapper_get_follow_viewport_scale(WasGoID wasgo_id);
int _wasgo_CanvasLayer_wrapper_get_layer(WasGoID wasgo_id);
void _wasgo_CanvasLayer_wrapper_get_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_CanvasLayer_wrapper_get_rotation(WasGoID wasgo_id);
float _wasgo_CanvasLayer_wrapper_get_rotation_degrees(WasGoID wasgo_id);
void _wasgo_CanvasLayer_wrapper_get_scale(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_CanvasLayer_wrapper_get_transform(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_CanvasLayer_wrapper_is_following_viewport(WasGoID wasgo_id);
void _wasgo_CanvasLayer_wrapper_set_custom_viewport(WasGoID wasgo_id, WasGoID p_viewport);
void _wasgo_CanvasLayer_wrapper_set_follow_viewport(WasGoID wasgo_id, bool p_enable);
void _wasgo_CanvasLayer_wrapper_set_follow_viewport_scale(WasGoID wasgo_id, float p_scale);
void _wasgo_CanvasLayer_wrapper_set_layer(WasGoID wasgo_id, int p_layer);
void _wasgo_CanvasLayer_wrapper_set_offset(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_CanvasLayer_wrapper_set_rotation(WasGoID wasgo_id, float p_radians);
void _wasgo_CanvasLayer_wrapper_set_rotation_degrees(WasGoID wasgo_id, float p_degrees);
void _wasgo_CanvasLayer_wrapper_set_scale(WasGoID wasgo_id, const uint8_t * p_scale, int p_scale_wasgo_buffer_size);
void _wasgo_CanvasLayer_wrapper_set_transform(WasGoID wasgo_id, const uint8_t * p_transform, int p_transform_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_CanvasLayer_constructor();
            
}
#endif