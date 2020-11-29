/* THIS FILE IS GENERATED */
#ifndef NAVIGATIONMESH_H
#define NAVIGATIONMESH_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
#include "Mesh.h"
class NavigationMesh : public Resource{
public: NavigationMesh();
void add_polygon(PoolIntArray p_polygon);
void clear_polygons();
void create_from_mesh(Mesh p_mesh);
float get_agent_height();
float get_agent_max_climb();
float get_agent_max_slope();
float get_agent_radius();
float get_cell_height();
float get_cell_size();
int get_collision_mask();
bool get_collision_mask_bit(int p_bit);
float get_detail_sample_distance();
float get_detail_sample_max_error();
float get_edge_max_error();
float get_edge_max_length();
bool get_filter_ledge_spans();
bool get_filter_low_hanging_obstacles();
bool get_filter_walkable_low_height_spans();
int get_parsed_geometry_type();
PoolIntArray get_polygon(int p_idx);
int get_polygon_count();
float get_region_merge_size();
float get_region_min_size();
int get_sample_partition_type();
int get_source_geometry_mode();
String get_source_group_name();
PoolVector3Array get_vertices();
float get_verts_per_poly();
void set_agent_height(float p_agent_height);
void set_agent_max_climb(float p_agent_max_climb);
void set_agent_max_slope(float p_agent_max_slope);
void set_agent_radius(float p_agent_radius);
void set_cell_height(float p_cell_height);
void set_cell_size(float p_cell_size);
void set_collision_mask(int p_mask);
void set_collision_mask_bit(int p_bit, bool p_value);
void set_detail_sample_distance(float p_detail_sample_dist);
void set_detail_sample_max_error(float p_detail_sample_max_error);
void set_edge_max_error(float p_edge_max_error);
void set_edge_max_length(float p_edge_max_length);
void set_filter_ledge_spans(bool p_filter_ledge_spans);
void set_filter_low_hanging_obstacles(bool p_filter_low_hanging_obstacles);
void set_filter_walkable_low_height_spans(bool p_filter_walkable_low_height_spans);
void set_parsed_geometry_type(int p_geometry_type);
void set_region_merge_size(float p_region_merge_size);
void set_region_min_size(float p_region_min_size);
void set_sample_partition_type(int p_sample_partition_type);
void set_source_geometry_mode(int p_mask);
void set_source_group_name(String p_mask);
void set_vertices(PoolVector3Array p_vertices);
void set_verts_per_poly(float p_verts_per_poly);
};
#endif