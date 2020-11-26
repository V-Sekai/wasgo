/* THIS FILE IS GENERATED */
#ifndef GIPROBEDATA_H
#define GIPROBEDATA_H

#include <stdint.h>

#include "Transform.h"
#include "AABB.h"
#include "Resource.h"
#include "PoolIntArray.h"
class GIProbeData : public Resource{
public: GIProbeData();
float  get_bias();
float  get_bias();
AABB  get_bounds();
AABB  get_bounds();
float  get_cell_size();
float  get_cell_size();
PoolIntArray  get_dynamic_data();
PoolIntArray  get_dynamic_data();
int  get_dynamic_range();
int  get_dynamic_range();
float  get_energy();
float  get_energy();
float  get_normal_bias();
float  get_normal_bias();
float  get_propagation();
float  get_propagation();
Transform  get_to_cell_xform();
Transform  get_to_cell_xform();
bool  is_compressed();
bool  is_compressed();
bool  is_interior();
bool  is_interior();
void  set_bias(float bias);
void  set_bounds(AABB bounds);
void  set_cell_size(float cell_size);
void  set_compress(bool compress);
void  set_dynamic_data(PoolIntArray dynamic_data);
void  set_dynamic_range(int dynamic_range);
void  set_energy(float energy);
void  set_interior(bool interior);
void  set_normal_bias(float bias);
void  set_propagation(float propagation);
void  set_to_cell_xform(Transform to_cell_xform);
};
#endif