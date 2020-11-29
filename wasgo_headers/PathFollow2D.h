/* THIS FILE IS GENERATED */
#ifndef PATHFOLLOW2D_H
#define PATHFOLLOW2D_H

#include "stdint.h"

#include "Node2D.h"
class PathFollow2D : public Node2D{
public: PathFollow2D();
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
};
#endif