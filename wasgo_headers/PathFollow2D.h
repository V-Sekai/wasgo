/* THIS FILE IS GENERATED */
#ifndef PATHFOLLOW2D_H
#define PATHFOLLOW2D_H

#include "wasgo\wasgo.h"

#include "Node2D.h"
class PathFollow2D : public Node2D{
public:
bool get_cubic_interpolation();
float get_h_offset();
float get_lookahead();
float get_offset();
float get_unit_offset();
float get_v_offset();
bool has_loop();
bool is_rotating();
void set_cubic_interpolation(bool p_enable);
void set_h_offset(float p_h_offset);
void set_lookahead(float p_lookahead);
void set_loop(bool p_loop);
void set_offset(float p_offset);
void set_rotate(bool p_enable);
void set_unit_offset(float p_unit_offset);
void set_v_offset(float p_v_offset);

protected:
PathFollow2D(WasGoId p_wasgo_id);
public:
PathFollow2D();
~PathFollow2D();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_PathFollow2D_wrapper_get_cubic_interpolation(WasGoId wasgo_id);
float _wasgo_PathFollow2D_wrapper_get_h_offset(WasGoId wasgo_id);
float _wasgo_PathFollow2D_wrapper_get_lookahead(WasGoId wasgo_id);
float _wasgo_PathFollow2D_wrapper_get_offset(WasGoId wasgo_id);
float _wasgo_PathFollow2D_wrapper_get_unit_offset(WasGoId wasgo_id);
float _wasgo_PathFollow2D_wrapper_get_v_offset(WasGoId wasgo_id);
int _wasgo_PathFollow2D_wrapper_has_loop(WasGoId wasgo_id);
int _wasgo_PathFollow2D_wrapper_is_rotating(WasGoId wasgo_id);
void _wasgo_PathFollow2D_wrapper_set_cubic_interpolation(WasGoId wasgo_id, bool p_enable);
void _wasgo_PathFollow2D_wrapper_set_h_offset(WasGoId wasgo_id, float p_h_offset);
void _wasgo_PathFollow2D_wrapper_set_lookahead(WasGoId wasgo_id, float p_lookahead);
void _wasgo_PathFollow2D_wrapper_set_loop(WasGoId wasgo_id, bool p_loop);
void _wasgo_PathFollow2D_wrapper_set_offset(WasGoId wasgo_id, float p_offset);
void _wasgo_PathFollow2D_wrapper_set_rotate(WasGoId wasgo_id, bool p_enable);
void _wasgo_PathFollow2D_wrapper_set_unit_offset(WasGoId wasgo_id, float p_unit_offset);
void _wasgo_PathFollow2D_wrapper_set_v_offset(WasGoId wasgo_id, float p_v_offset);

    //constructor and destructor wrappers
    WasGoId _wasgo_PathFollow2D_constructor();
    void _wasgo_PathFollow2D_destructor(WasGoId p_wasgo_id);
            
}
#endif