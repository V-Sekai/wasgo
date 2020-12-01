/* THIS FILE IS GENERATED */
#ifndef CAMERA2D_H
#define CAMERA2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Node2D.h"
class Camera2D : public Node2D{
public:
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

Camera2D(WasGoId p_wasgo_id);
~Camera2D();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Camera2D_wrapper_clear_current(WasGoId wasgo_id);
WasGoId _wasgo_Camera2D_wrapper_get_anchor_mode(WasGoId wasgo_id);
WasGoId _wasgo_Camera2D_wrapper_get_offset(WasGoId wasgo_id);
int _wasgo_Camera2D_wrapper_is_rotating(WasGoId wasgo_id);
void _wasgo_Camera2D_wrapper_make_current(WasGoId wasgo_id);
void _wasgo_Camera2D_wrapper_set_anchor_mode(WasGoId wasgo_id, WasGoId p_anchor_mode);
void _wasgo_Camera2D_wrapper_set_offset(WasGoId wasgo_id, WasGoId p_offset);
void _wasgo_Camera2D_wrapper_set_rotating(WasGoId wasgo_id, bool p_rotating);
}
#endif