/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "RID.h"
#include "Node.h"
#include "Transform2D.h"
#include "Vector2.h"
class CanvasLayer : public Node{
public: CanvasLayer();
RID  get_canvas();
RID  get_canvas();
Node  get_custom_viewport();
Node  get_custom_viewport();
float  get_follow_viewport_scale();
float  get_follow_viewport_scale();
int  get_layer();
int  get_layer();
Vector2  get_offset();
Vector2  get_offset();
float  get_rotation();
float  get_rotation();
float  get_rotation_degrees();
float  get_rotation_degrees();
Vector2  get_scale();
Vector2  get_scale();
Transform2D  get_transform();
Transform2D  get_transform();
bool  is_following_viewport();
bool  is_following_viewport();
void  set_custom_viewport(Node viewport);
void  set_follow_viewport(bool enable);
void  set_follow_viewport_scale(float scale);
void  set_layer(int layer);
void  set_offset(Vector2 offset);
void  set_rotation(float radians);
void  set_rotation_degrees(float degrees);
void  set_scale(Vector2 scale);
void  set_transform(Transform2D transform);
};