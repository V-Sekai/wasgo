/* THIS FILE IS GENERATED */
#ifndef CLIPPEDCAMERA_H
#define CLIPPEDCAMERA_H

#include "wasgo\wasgo.h"

#include "Camera.h"
#include "Object.h"
#include "RID.h"
class ClippedCamera : public Camera{
public:
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

protected:
ClippedCamera(WasGoId p_wasgo_id);
public:
ClippedCamera();
~ClippedCamera();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ClippedCamera_wrapper_add_exception(WasGoId wasgo_id, WasGoId p_node);
void _wasgo_ClippedCamera_wrapper_add_exception_rid(WasGoId wasgo_id, const uint8_t * p_rid, int p_rid_wasgo_buffer_size);
void _wasgo_ClippedCamera_wrapper_clear_exceptions(WasGoId wasgo_id);
float _wasgo_ClippedCamera_wrapper_get_clip_offset(WasGoId wasgo_id);
int _wasgo_ClippedCamera_wrapper_get_collision_mask(WasGoId wasgo_id);
int _wasgo_ClippedCamera_wrapper_get_collision_mask_bit(WasGoId wasgo_id, int p_bit);
float _wasgo_ClippedCamera_wrapper_get_margin(WasGoId wasgo_id);
WasGoId _wasgo_ClippedCamera_wrapper_get_process_mode(WasGoId wasgo_id);
int _wasgo_ClippedCamera_wrapper_is_clip_to_areas_enabled(WasGoId wasgo_id);
int _wasgo_ClippedCamera_wrapper_is_clip_to_bodies_enabled(WasGoId wasgo_id);
void _wasgo_ClippedCamera_wrapper_remove_exception(WasGoId wasgo_id, WasGoId p_node);
void _wasgo_ClippedCamera_wrapper_remove_exception_rid(WasGoId wasgo_id, const uint8_t * p_rid, int p_rid_wasgo_buffer_size);
void _wasgo_ClippedCamera_wrapper_set_clip_to_areas(WasGoId wasgo_id, bool p_enable);
void _wasgo_ClippedCamera_wrapper_set_clip_to_bodies(WasGoId wasgo_id, bool p_enable);
void _wasgo_ClippedCamera_wrapper_set_collision_mask(WasGoId wasgo_id, int p_mask);
void _wasgo_ClippedCamera_wrapper_set_collision_mask_bit(WasGoId wasgo_id, int p_bit, bool p_value);
void _wasgo_ClippedCamera_wrapper_set_margin(WasGoId wasgo_id, float p_margin);
void _wasgo_ClippedCamera_wrapper_set_process_mode(WasGoId wasgo_id, WasGoId p_process_mode);

    //constructor and destructor wrappers
    WasGoId _wasgo_ClippedCamera_constructor();
    void _wasgo_ClippedCamera_destructor(WasGoId p_wasgo_id);
            
}
#endif