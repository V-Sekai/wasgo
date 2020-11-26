/* THIS FILE IS GENERATED */
#ifndef NAVIGATIONMESH_H
#define NAVIGATIONMESH_H

#include <stdint.h>

#include "Mesh.h"
#include "String.h"
#include "Resource.h"
#include "PoolIntArray.h"
#include "PoolVector3Array.h"
#include "Variant.h"
class NavigationMesh : public Resource{
public: NavigationMesh();
Array  _get_polygons();
Array  _get_polygons();
void  _set_polygons(Array polygons);
void  add_polygon(PoolIntArray polygon);
void  clear_polygons();
void  clear_polygons();
void  create_from_mesh(Mesh mesh);
float  get_agent_height();
float  get_agent_height();
float  get_agent_max_climb();
float  get_agent_max_climb();
float  get_agent_max_slope();
float  get_agent_max_slope();
float  get_agent_radius();
float  get_agent_radius();
float  get_cell_height();
float  get_cell_height();
float  get_cell_size();
float  get_cell_size();
int  get_collision_mask();
int  get_collision_mask();
bool  get_collision_mask_bit(int bit);
float  get_detail_sample_distance();
float  get_detail_sample_distance();
float  get_detail_sample_max_error();
float  get_detail_sample_max_error();
float  get_edge_max_error();
float  get_edge_max_error();
float  get_edge_max_length();
float  get_edge_max_length();
bool  get_filter_ledge_spans();
bool  get_filter_ledge_spans();
bool  get_filter_low_hanging_obstacles();
bool  get_filter_low_hanging_obstacles();
bool  get_filter_walkable_low_height_spans();
bool  get_filter_walkable_low_height_spans();
int  get_parsed_geometry_type();
int  get_parsed_geometry_type();
PoolIntArray  get_polygon(int idx);
int  get_polygon_count();
int  get_polygon_count();
float  get_region_merge_size();
float  get_region_merge_size();
float  get_region_min_size();
float  get_region_min_size();
int  get_sample_partition_type();
int  get_sample_partition_type();
int  get_source_geometry_mode();
int  get_source_geometry_mode();
String  get_source_group_name();
String  get_source_group_name();
PoolVector3Array  get_vertices();
PoolVector3Array  get_vertices();
float  get_verts_per_poly();
float  get_verts_per_poly();
void  set_agent_height(float agent_height);
void  set_agent_max_climb(float agent_max_climb);
void  set_agent_max_slope(float agent_max_slope);
void  set_agent_radius(float agent_radius);
void  set_cell_height(float cell_height);
void  set_cell_size(float cell_size);
void  set_collision_mask(int mask);
void  set_collision_mask_bit(int bit, bool value);
void  set_detail_sample_distance(float detail_sample_dist);
void  set_detail_sample_max_error(float detail_sample_max_error);
void  set_edge_max_error(float edge_max_error);
void  set_edge_max_length(float edge_max_length);
void  set_filter_ledge_spans(bool filter_ledge_spans);
void  set_filter_low_hanging_obstacles(bool filter_low_hanging_obstacles);
void  set_filter_walkable_low_height_spans(bool filter_walkable_low_height_spans);
void  set_parsed_geometry_type(int geometry_type);
void  set_region_merge_size(float region_merge_size);
void  set_region_min_size(float region_min_size);
void  set_sample_partition_type(int sample_partition_type);
void  set_source_geometry_mode(int mask);
void  set_source_group_name(String mask);
void  set_vertices(PoolVector3Array vertices);
void  set_verts_per_poly(float verts_per_poly);
};
#endif