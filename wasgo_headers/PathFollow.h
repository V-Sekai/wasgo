/* THIS FILE IS GENERATED */
#ifndef PATHFOLLOW_H
#define PATHFOLLOW_H

#include "wasgo\wasgo.h"

#include "Spatial.h"
class PathFollow : public Spatial{
public:
enum RotationMode{
ROTATION_NONE,
ROTATION_Y,
ROTATION_XY,
ROTATION_XYZ,
ROTATION_ORIENTED
};
bool get_cubic_interpolation();
float get_h_offset();
float get_offset();
PathFollow::RotationMode get_rotation_mode();
float get_unit_offset();
float get_v_offset();
bool has_loop();
void set_cubic_interpolation(bool p_enable);
void set_h_offset(float p_h_offset);
void set_loop(bool p_loop);
void set_offset(float p_offset);
void set_rotation_mode(PathFollow::RotationMode p_rotation_mode);
void set_unit_offset(float p_unit_offset);
void set_v_offset(float p_v_offset);

protected:
PathFollow(WasGoId p_wasgo_id);
public:
PathFollow();
~PathFollow();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_PathFollow_wrapper_get_cubic_interpolation(WasGoId wasgo_id);
float _wasgo_PathFollow_wrapper_get_h_offset(WasGoId wasgo_id);
float _wasgo_PathFollow_wrapper_get_offset(WasGoId wasgo_id);
WasGoId _wasgo_PathFollow_wrapper_get_rotation_mode(WasGoId wasgo_id);
float _wasgo_PathFollow_wrapper_get_unit_offset(WasGoId wasgo_id);
float _wasgo_PathFollow_wrapper_get_v_offset(WasGoId wasgo_id);
int _wasgo_PathFollow_wrapper_has_loop(WasGoId wasgo_id);
void _wasgo_PathFollow_wrapper_set_cubic_interpolation(WasGoId wasgo_id, bool p_enable);
void _wasgo_PathFollow_wrapper_set_h_offset(WasGoId wasgo_id, float p_h_offset);
void _wasgo_PathFollow_wrapper_set_loop(WasGoId wasgo_id, bool p_loop);
void _wasgo_PathFollow_wrapper_set_offset(WasGoId wasgo_id, float p_offset);
void _wasgo_PathFollow_wrapper_set_rotation_mode(WasGoId wasgo_id, WasGoId p_rotation_mode);
void _wasgo_PathFollow_wrapper_set_unit_offset(WasGoId wasgo_id, float p_unit_offset);
void _wasgo_PathFollow_wrapper_set_v_offset(WasGoId wasgo_id, float p_v_offset);

    //constructor and destructor wrappers
    WasGoId _wasgo_PathFollow_constructor();
    void _wasgo_PathFollow_destructor(WasGoId p_wasgo_id);
            
}
#endif