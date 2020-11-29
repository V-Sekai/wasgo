/* THIS FILE IS GENERATED */
#ifndef CANVASLAYER_H
#define CANVASLAYER_H

#include "stdint.h"

#include "Variant.h"
#include "Node.h"
class CanvasLayer : public Node{
public: CanvasLayer();
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
};
#endif