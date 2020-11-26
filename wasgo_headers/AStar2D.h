/* THIS FILE IS GENERATED */
#ifndef ASTAR2D_H
#define ASTAR2D_H

#include <stdint.h>

#include "Vector2.h"
#include "PoolVector2Array.h"
#include "Reference.h"
#include "PoolIntArray.h"
#include "Variant.h"
class AStar2D : public Reference{
public: AStar2D();
void  add_point(int id, Vector2 position, float weight_scale = 1);
bool  are_points_connected(int id, int to_id);
void  clear();
void  clear();
void  connect_points(int id, int to_id, bool bidirectional = true);
void  disconnect_points(int id, int to_id);
int  get_available_point_id();
int  get_available_point_id();
int  get_closest_point(Vector2 to_position, bool include_disabled = false);
Vector2  get_closest_position_in_segment(Vector2 to_position);
PoolIntArray  get_id_path(int from_id, int to_id);
int  get_point_capacity();
int  get_point_capacity();
PoolIntArray  get_point_connections(int id);
int  get_point_count();
int  get_point_count();
PoolVector2Array  get_point_path(int from_id, int to_id);
Vector2  get_point_position(int id);
float  get_point_weight_scale(int id);
Array  get_points();
Array  get_points();
bool  has_point(int id);
bool  is_point_disabled(int id);
void  remove_point(int id);
void  reserve_space(int num_nodes);
void  set_point_disabled(int id, bool disabled = true);
void  set_point_position(int id, Vector2 position);
void  set_point_weight_scale(int id, float weight_scale);
};
#endif