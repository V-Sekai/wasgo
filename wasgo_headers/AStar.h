/* THIS FILE IS GENERATED */
#ifndef ASTAR_H
#define ASTAR_H

#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Reference.h"
#include "Vector3.h"
class AStar : public Reference{
public:
void add_point(int p_id, Vector3 p_position, float p_weight_scale = (float) 1);
bool are_points_connected(int p_id, int p_to_id, bool p_bidirectional = (bool) true);
void clear();
void connect_points(int p_id, int p_to_id, bool p_bidirectional = (bool) true);
void disconnect_points(int p_id, int p_to_id, bool p_bidirectional = (bool) true);
int get_available_point_id();
int get_closest_point(Vector3 p_to_position, bool p_include_disabled = (bool) false);
Vector3 get_closest_position_in_segment(Vector3 p_to_position);
PoolIntArray get_id_path(int p_from_id, int p_to_id);
int get_point_capacity();
PoolIntArray get_point_connections(int p_id);
int get_point_count();
PoolVector3Array get_point_path(int p_from_id, int p_to_id);
Vector3 get_point_position(int p_id);
float get_point_weight_scale(int p_id);
Array get_points();
bool has_point(int p_id);
bool is_point_disabled(int p_id);
void remove_point(int p_id);
void reserve_space(int p_num_nodes);
void set_point_disabled(int p_id, bool p_disabled = (bool) true);
void set_point_position(int p_id, Vector3 p_position);
void set_point_weight_scale(int p_id, float p_weight_scale);

protected:
AStar(WasGoId p_wasgo_id);
public:
AStar();
~AStar();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AStar_wrapper_add_point(WasGoId wasgo_id, int p_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, float p_weight_scale);
int _wasgo_AStar_wrapper_are_points_connected(WasGoId wasgo_id, int p_id, int p_to_id, bool p_bidirectional);
void _wasgo_AStar_wrapper_clear(WasGoId wasgo_id);
void _wasgo_AStar_wrapper_connect_points(WasGoId wasgo_id, int p_id, int p_to_id, bool p_bidirectional);
void _wasgo_AStar_wrapper_disconnect_points(WasGoId wasgo_id, int p_id, int p_to_id, bool p_bidirectional);
int _wasgo_AStar_wrapper_get_available_point_id(WasGoId wasgo_id);
int _wasgo_AStar_wrapper_get_closest_point(WasGoId wasgo_id, const uint8_t * p_to_position, int p_to_position_wasgo_buffer_size, bool p_include_disabled);
void _wasgo_AStar_wrapper_get_closest_position_in_segment(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_to_position, int p_to_position_wasgo_buffer_size);
WasGoId _wasgo_AStar_wrapper_get_id_path(WasGoId wasgo_id, int p_from_id, int p_to_id);
int _wasgo_AStar_wrapper_get_point_capacity(WasGoId wasgo_id);
WasGoId _wasgo_AStar_wrapper_get_point_connections(WasGoId wasgo_id, int p_id);
int _wasgo_AStar_wrapper_get_point_count(WasGoId wasgo_id);
WasGoId _wasgo_AStar_wrapper_get_point_path(WasGoId wasgo_id, int p_from_id, int p_to_id);
void _wasgo_AStar_wrapper_get_point_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_id);
float _wasgo_AStar_wrapper_get_point_weight_scale(WasGoId wasgo_id, int p_id);
WasGoId _wasgo_AStar_wrapper_get_points(WasGoId wasgo_id);
int _wasgo_AStar_wrapper_has_point(WasGoId wasgo_id, int p_id);
int _wasgo_AStar_wrapper_is_point_disabled(WasGoId wasgo_id, int p_id);
void _wasgo_AStar_wrapper_remove_point(WasGoId wasgo_id, int p_id);
void _wasgo_AStar_wrapper_reserve_space(WasGoId wasgo_id, int p_num_nodes);
void _wasgo_AStar_wrapper_set_point_disabled(WasGoId wasgo_id, int p_id, bool p_disabled);
void _wasgo_AStar_wrapper_set_point_position(WasGoId wasgo_id, int p_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_AStar_wrapper_set_point_weight_scale(WasGoId wasgo_id, int p_id, float p_weight_scale);

    //constructor and destructor wrappers
    WasGoId _wasgo_AStar_constructor();
    void _wasgo_AStar_destructor(WasGoId p_wasgo_id);
            
}
#endif