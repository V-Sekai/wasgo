/* THIS FILE IS GENERATED */
#ifndef CLIPPEDCAMERA_H
#define CLIPPEDCAMERA_H

#include <stdint.h>

#include "Camera.h"
#include "Object.h"
#include "RID.h"
class ClippedCamera : public Camera{
public: ClippedCamera();
enum ProcessMode{
CLIP_PROCESS_PHYSICS: 0,
};
void  add_exception(Object node);
void  add_exception_rid(RID rid);
void  clear_exceptions();
void  clear_exceptions();
float  get_clip_offset();
float  get_clip_offset();
int  get_collision_mask();
int  get_collision_mask();
bool  get_collision_mask_bit(int bit);
float  get_margin();
float  get_margin();
enum.ClippedCamera::ProcessMode  get_process_mode();
enum.ClippedCamera::ProcessMode  get_process_mode();
bool  is_clip_to_areas_enabled();
bool  is_clip_to_areas_enabled();
bool  is_clip_to_bodies_enabled();
bool  is_clip_to_bodies_enabled();
void  remove_exception(Object node);
void  remove_exception_rid(RID rid);
void  set_clip_to_areas(bool enable);
void  set_clip_to_bodies(bool enable);
void  set_collision_mask(int mask);
void  set_collision_mask_bit(int bit, bool value);
void  set_margin(float margin);
void  set_process_mode(int process_mode);
};
#endif