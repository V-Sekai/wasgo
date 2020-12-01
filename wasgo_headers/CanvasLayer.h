/* THIS FILE IS GENERATED */
#ifndef CANVASLAYER_H
#define CANVASLAYER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

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

CanvasLayer(WasGoId p_wasgo_id);
~CanvasLayer();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_CanvasLayer_wrapper_get_canvas(WasGoId wasgo_id);
WasGoId _wasgo_CanvasLayer_wrapper_get_custom_viewport(WasGoId wasgo_id);
float _wasgo_CanvasLayer_wrapper_get_follow_viewport_scale(WasGoId wasgo_id);
int _wasgo_CanvasLayer_wrapper_get_layer(WasGoId wasgo_id);
WasGoId _wasgo_CanvasLayer_wrapper_get_offset(WasGoId wasgo_id);
float _wasgo_CanvasLayer_wrapper_get_rotation(WasGoId wasgo_id);
float _wasgo_CanvasLayer_wrapper_get_rotation_degrees(WasGoId wasgo_id);
WasGoId _wasgo_CanvasLayer_wrapper_get_scale(WasGoId wasgo_id);
WasGoId _wasgo_CanvasLayer_wrapper_get_transform(WasGoId wasgo_id);
int _wasgo_CanvasLayer_wrapper_is_following_viewport(WasGoId wasgo_id);
void _wasgo_CanvasLayer_wrapper_set_custom_viewport(WasGoId wasgo_id, WasGoId p_viewport);
void _wasgo_CanvasLayer_wrapper_set_follow_viewport(WasGoId wasgo_id, bool p_enable);
void _wasgo_CanvasLayer_wrapper_set_follow_viewport_scale(WasGoId wasgo_id, float p_scale);
void _wasgo_CanvasLayer_wrapper_set_layer(WasGoId wasgo_id, int p_layer);
void _wasgo_CanvasLayer_wrapper_set_offset(WasGoId wasgo_id, WasGoId p_offset);
void _wasgo_CanvasLayer_wrapper_set_rotation(WasGoId wasgo_id, float p_radians);
void _wasgo_CanvasLayer_wrapper_set_rotation_degrees(WasGoId wasgo_id, float p_degrees);
void _wasgo_CanvasLayer_wrapper_set_scale(WasGoId wasgo_id, WasGoId p_scale);
void _wasgo_CanvasLayer_wrapper_set_transform(WasGoId wasgo_id, WasGoId p_transform);
}
#endif