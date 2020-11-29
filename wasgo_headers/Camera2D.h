/* THIS FILE IS GENERATED */
#ifndef CAMERA2D_H
#define CAMERA2D_H

#include "stdint.h"

#include "Node2D.h"
#include "Variant.h"
class Camera2D : public Node2D{
public: Camera2D();
enum AnchorMode{
ANCHOR_MODE_FIXED_TOP_LEFT,
ANCHOR_MODE_DRAG_CENTER
};
enum Camera2DProcessMode{
CAMERA2D_PROCESS_PHYSICS,
CAMERA2D_PROCESS_IDLE
};
void clear_current();
Camera2D::AnchorMode get_anchor_mode();
Vector2 get_offset();
bool is_rotating();
void make_current();
void set_anchor_mode(Camera2D::AnchorMode p_anchor_mode);
void set_offset(Vector2 p_offset);
void set_rotating(bool p_rotating);
};
#endif