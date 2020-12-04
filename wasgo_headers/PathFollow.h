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
public:
explicit PathFollow(WasGoID p_wasgo_id);
explicit PathFollow(Spatial other);
PathFollow new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_PathFollow_wrapper_get_cubic_interpolation(WasGoID wasgo_id);
float _wasgo_PathFollow_wrapper_get_h_offset(WasGoID wasgo_id);
float _wasgo_PathFollow_wrapper_get_offset(WasGoID wasgo_id);
WasGoID _wasgo_PathFollow_wrapper_get_rotation_mode(WasGoID wasgo_id);
float _wasgo_PathFollow_wrapper_get_unit_offset(WasGoID wasgo_id);
float _wasgo_PathFollow_wrapper_get_v_offset(WasGoID wasgo_id);
int _wasgo_PathFollow_wrapper_has_loop(WasGoID wasgo_id);
void _wasgo_PathFollow_wrapper_set_cubic_interpolation(WasGoID wasgo_id, bool p_enable);
void _wasgo_PathFollow_wrapper_set_h_offset(WasGoID wasgo_id, float p_h_offset);
void _wasgo_PathFollow_wrapper_set_loop(WasGoID wasgo_id, bool p_loop);
void _wasgo_PathFollow_wrapper_set_offset(WasGoID wasgo_id, float p_offset);
void _wasgo_PathFollow_wrapper_set_rotation_mode(WasGoID wasgo_id, WasGoID p_rotation_mode);
void _wasgo_PathFollow_wrapper_set_unit_offset(WasGoID wasgo_id, float p_unit_offset);
void _wasgo_PathFollow_wrapper_set_v_offset(WasGoID wasgo_id, float p_v_offset);

    //constructor wrappers
    WasGoID _wasgo_PathFollow_constructor();
            
}
#endif