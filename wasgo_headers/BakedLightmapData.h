/* THIS FILE IS GENERATED */
#ifndef BAKEDLIGHTMAPDATA_H
#define BAKEDLIGHTMAPDATA_H

#include "wasgo\wasgo.h"

#include "Texture.h"
#include "NodePath.h"
#include "AABB.h"
#include "Resource.h"
#include "Transform.h"
#include "Variant.h"
class BakedLightmapData : public Resource{
public:
void add_user(NodePath p_path, Texture p_lightmap, int p_instance);
void clear_users();
AABB get_bounds();
Transform get_cell_space_transform();
int get_cell_subdiv();
float get_energy();
PoolByteArray get_octree();
int get_user_count();
Texture get_user_lightmap(int p_user_idx);
NodePath get_user_path(int p_user_idx);
void set_bounds(AABB p_bounds);
void set_cell_space_transform(Transform p_xform);
void set_cell_subdiv(int p_cell_subdiv);
void set_energy(float p_energy);
void set_octree(PoolByteArray p_octree);

protected:
public:
explicit BakedLightmapData(WasGoId p_wasgo_id);
explicit BakedLightmapData(Resource other);
BakedLightmapData new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_BakedLightmapData_wrapper_add_user(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, WasGoId p_lightmap, int p_instance);
void _wasgo_BakedLightmapData_wrapper_clear_users(WasGoId wasgo_id);
void _wasgo_BakedLightmapData_wrapper_get_bounds(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_BakedLightmapData_wrapper_get_cell_space_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_BakedLightmapData_wrapper_get_cell_subdiv(WasGoId wasgo_id);
float _wasgo_BakedLightmapData_wrapper_get_energy(WasGoId wasgo_id);
WasGoId _wasgo_BakedLightmapData_wrapper_get_octree(WasGoId wasgo_id);
int _wasgo_BakedLightmapData_wrapper_get_user_count(WasGoId wasgo_id);
WasGoId _wasgo_BakedLightmapData_wrapper_get_user_lightmap(WasGoId wasgo_id, int p_user_idx);
void _wasgo_BakedLightmapData_wrapper_get_user_path(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_user_idx);
void _wasgo_BakedLightmapData_wrapper_set_bounds(WasGoId wasgo_id, const uint8_t * p_bounds, int p_bounds_wasgo_buffer_size);
void _wasgo_BakedLightmapData_wrapper_set_cell_space_transform(WasGoId wasgo_id, const uint8_t * p_xform, int p_xform_wasgo_buffer_size);
void _wasgo_BakedLightmapData_wrapper_set_cell_subdiv(WasGoId wasgo_id, int p_cell_subdiv);
void _wasgo_BakedLightmapData_wrapper_set_energy(WasGoId wasgo_id, float p_energy);
void _wasgo_BakedLightmapData_wrapper_set_octree(WasGoId wasgo_id, WasGoId p_octree);

    //constructor wrappers
    WasGoId _wasgo_BakedLightmapData_constructor();
            
}
#endif