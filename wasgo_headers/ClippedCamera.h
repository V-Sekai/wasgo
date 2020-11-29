/* THIS FILE IS GENERATED */
#ifndef CLIPPEDCAMERA_H
#define CLIPPEDCAMERA_H

#include "stdint.h"

#include "Object.h"
#include "Camera.h"
#include "Variant.h"
class ClippedCamera : public Camera{
public: ClippedCamera();
enum ProcessMode{
CLIP_PROCESS_PHYSICS,
CLIP_PROCESS_IDLE
};
void add_exception(Object p_node);
void add_exception_rid(RID p_rid);
void clear_exceptions();
float get_clip_offset();
int get_collision_mask();
bool get_collision_mask_bit(int p_bit);
float get_margin();
ClippedCamera::ProcessMode get_process_mode();
bool is_clip_to_areas_enabled();
bool is_clip_to_bodies_enabled();
void remove_exception(Object p_node);
void remove_exception_rid(RID p_rid);
void set_clip_to_areas(bool p_enable);
void set_clip_to_bodies(bool p_enable);
void set_collision_mask(int p_mask);
void set_collision_mask_bit(int p_bit, bool p_value);
void set_margin(float p_margin);
void set_process_mode(ClippedCamera::ProcessMode p_process_mode);
};
#endif