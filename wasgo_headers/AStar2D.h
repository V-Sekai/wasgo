/* THIS FILE IS GENERATED */
#ifndef ASTAR2D_H
#define ASTAR2D_H

#include "wasgo\wasgo.h"

#include "Reference.h"
#include "Variant.h"
#include "Vector2.h"
class AStar2D : public Reference{
public:
void add_point(int p_id, Vector2 p_position, float p_weight_scale = (float) 1);
bool are_points_connected(int p_id, int p_to_id);
void clear();
void connect_points(int p_id, int p_to_id, bool p_bidirectional = (bool) true);
void disconnect_points(int p_id, int p_to_id);
int get_available_point_id();
int get_closest_point(Vector2 p_to_position, bool p_include_disabled = (bool) false);
Vector2 get_closest_position_in_segment(Vector2 p_to_position);
PoolIntArray get_id_path(int p_from_id, int p_to_id);
int get_point_capacity();
PoolIntArray get_point_connections(int p_id);
int get_point_count();
PoolVector2Array get_point_path(int p_from_id, int p_to_id);
Vector2 get_point_position(int p_id);
float get_point_weight_scale(int p_id);
Array get_points();
bool has_point(int p_id);
bool is_point_disabled(int p_id);
void remove_point(int p_id);
void reserve_space(int p_num_nodes);
void set_point_disabled(int p_id, bool p_disabled = (bool) true);
void set_point_position(int p_id, Vector2 p_position);
void set_point_weight_scale(int p_id, float p_weight_scale);

protected:
public:
explicit AStar2D(WasGoID p_wasgo_id);
explicit AStar2D(Reference other);
AStar2D new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AStar2D_wrapper_add_point(WasGoID wasgo_id, int p_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, float p_weight_scale);
int _wasgo_AStar2D_wrapper_are_points_connected(WasGoID wasgo_id, int p_id, int p_to_id);
void _wasgo_AStar2D_wrapper_clear(WasGoID wasgo_id);
void _wasgo_AStar2D_wrapper_connect_points(WasGoID wasgo_id, int p_id, int p_to_id, bool p_bidirectional);
void _wasgo_AStar2D_wrapper_disconnect_points(WasGoID wasgo_id, int p_id, int p_to_id);
int _wasgo_AStar2D_wrapper_get_available_point_id(WasGoID wasgo_id);
int _wasgo_AStar2D_wrapper_get_closest_point(WasGoID wasgo_id, const uint8_t * p_to_position, int p_to_position_wasgo_buffer_size, bool p_include_disabled);
void _wasgo_AStar2D_wrapper_get_closest_position_in_segment(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_to_position, int p_to_position_wasgo_buffer_size);
WasGoID _wasgo_AStar2D_wrapper_get_id_path(WasGoID wasgo_id, int p_from_id, int p_to_id);
int _wasgo_AStar2D_wrapper_get_point_capacity(WasGoID wasgo_id);
WasGoID _wasgo_AStar2D_wrapper_get_point_connections(WasGoID wasgo_id, int p_id);
int _wasgo_AStar2D_wrapper_get_point_count(WasGoID wasgo_id);
WasGoID _wasgo_AStar2D_wrapper_get_point_path(WasGoID wasgo_id, int p_from_id, int p_to_id);
void _wasgo_AStar2D_wrapper_get_point_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_id);
float _wasgo_AStar2D_wrapper_get_point_weight_scale(WasGoID wasgo_id, int p_id);
WasGoID _wasgo_AStar2D_wrapper_get_points(WasGoID wasgo_id);
int _wasgo_AStar2D_wrapper_has_point(WasGoID wasgo_id, int p_id);
int _wasgo_AStar2D_wrapper_is_point_disabled(WasGoID wasgo_id, int p_id);
void _wasgo_AStar2D_wrapper_remove_point(WasGoID wasgo_id, int p_id);
void _wasgo_AStar2D_wrapper_reserve_space(WasGoID wasgo_id, int p_num_nodes);
void _wasgo_AStar2D_wrapper_set_point_disabled(WasGoID wasgo_id, int p_id, bool p_disabled);
void _wasgo_AStar2D_wrapper_set_point_position(WasGoID wasgo_id, int p_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_AStar2D_wrapper_set_point_weight_scale(WasGoID wasgo_id, int p_id, float p_weight_scale);

    //constructor wrappers
    WasGoID _wasgo_AStar2D_constructor();
            
}
#endif