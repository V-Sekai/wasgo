/* THIS FILE IS GENERATED */
#ifndef GRIDMAP_H
#define GRIDMAP_H

#include <stdint.h>

#include "Resource.h"
#include "RID.h"
#include "MeshLibrary.h"
#include "Variant.h"
#include "Spatial.h"
#include "Vector3.h"
class GridMap : public Spatial{
public: GridMap();
void  _update_octants_callback();
void  _update_octants_callback();
void  clear();
void  clear();
void  clear_baked_meshes();
void  clear_baked_meshes();
RID  get_bake_mesh_instance(int idx);
Array  get_bake_meshes();
Array  get_bake_meshes();
int  get_cell_item(int x, int y, int z);
int  get_cell_item_orientation(int x, int y, int z);
float  get_cell_scale();
float  get_cell_scale();
Vector3  get_cell_size();
Vector3  get_cell_size();
bool  get_center_x();
bool  get_center_x();
bool  get_center_y();
bool  get_center_y();
bool  get_center_z();
bool  get_center_z();
int  get_collision_layer();
int  get_collision_layer();
bool  get_collision_layer_bit(int bit);
int  get_collision_mask();
int  get_collision_mask();
bool  get_collision_mask_bit(int bit);
MeshLibrary  get_mesh_library();
MeshLibrary  get_mesh_library();
Array  get_meshes();
Array  get_meshes();
int  get_octant_size();
int  get_octant_size();
Array  get_used_cells();
Array  get_used_cells();
void  make_baked_meshes(bool gen_lightmap_uv = false, float lightmap_uv_texel_size = 0.1);
Vector3  map_to_world(int x, int y, int z);
void  resource_changed(Resource resource);
void  set_cell_item(int x, int y, int z, int item, int orientation = 0);
void  set_cell_scale(float scale);
void  set_cell_size(Vector3 size);
void  set_center_x(bool enable);
void  set_center_y(bool enable);
void  set_center_z(bool enable);
void  set_clip(bool enabled, bool clipabove = true, int floor = 0, int axis = 0);
void  set_collision_layer(int layer);
void  set_collision_layer_bit(int bit, bool value);
void  set_collision_mask(int mask);
void  set_collision_mask_bit(int bit, bool value);
void  set_mesh_library(MeshLibrary mesh_library);
void  set_octant_size(int size);
Vector3  world_to_map(Vector3 pos);
};
#endif