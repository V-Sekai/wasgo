/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Transform.h"
#include "PoolByteArray.h"
#include "Texture.h"
#include "AABB.h"
#include "Resource.h"
#include "Variant.h"
#include "NodePath.h"
class BakedLightmapData : public Resource{
public: BakedLightmapData();
Array  _get_user_data();
Array  _get_user_data();
void  _set_user_data(Array data);
void  add_user(NodePath path, Texture lightmap, int instance);
void  clear_users();
void  clear_users();
AABB  get_bounds();
AABB  get_bounds();
Transform  get_cell_space_transform();
Transform  get_cell_space_transform();
int  get_cell_subdiv();
int  get_cell_subdiv();
float  get_energy();
float  get_energy();
PoolByteArray  get_octree();
PoolByteArray  get_octree();
int  get_user_count();
int  get_user_count();
Texture  get_user_lightmap(int user_idx);
NodePath  get_user_path(int user_idx);
void  set_bounds(AABB bounds);
void  set_cell_space_transform(Transform xform);
void  set_cell_subdiv(int cell_subdiv);
void  set_energy(float energy);
void  set_octree(PoolByteArray octree);
};