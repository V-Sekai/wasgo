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
public:
explicit PathFollow2D(WasGoID p_wasgo_id);
explicit PathFollow2D(Node2D other);
PathFollow2D new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_PathFollow2D_wrapper_get_cubic_interpolation(WasGoID wasgo_id);
float _wasgo_PathFollow2D_wrapper_get_h_offset(WasGoID wasgo_id);
float _wasgo_PathFollow2D_wrapper_get_lookahead(WasGoID wasgo_id);
float _wasgo_PathFollow2D_wrapper_get_offset(WasGoID wasgo_id);
float _wasgo_PathFollow2D_wrapper_get_unit_offset(WasGoID wasgo_id);
float _wasgo_PathFollow2D_wrapper_get_v_offset(WasGoID wasgo_id);
int _wasgo_PathFollow2D_wrapper_has_loop(WasGoID wasgo_id);
int _wasgo_PathFollow2D_wrapper_is_rotating(WasGoID wasgo_id);
void _wasgo_PathFollow2D_wrapper_set_cubic_interpolation(WasGoID wasgo_id, bool p_enable);
void _wasgo_PathFollow2D_wrapper_set_h_offset(WasGoID wasgo_id, float p_h_offset);
void _wasgo_PathFollow2D_wrapper_set_lookahead(WasGoID wasgo_id, float p_lookahead);
void _wasgo_PathFollow2D_wrapper_set_loop(WasGoID wasgo_id, bool p_loop);
void _wasgo_PathFollow2D_wrapper_set_offset(WasGoID wasgo_id, float p_offset);
void _wasgo_PathFollow2D_wrapper_set_rotate(WasGoID wasgo_id, bool p_enable);
void _wasgo_PathFollow2D_wrapper_set_unit_offset(WasGoID wasgo_id, float p_unit_offset);
void _wasgo_PathFollow2D_wrapper_set_v_offset(WasGoID wasgo_id, float p_v_offset);

    //constructor wrappers
    WasGoID _wasgo_PathFollow2D_constructor();
            
}
#endif