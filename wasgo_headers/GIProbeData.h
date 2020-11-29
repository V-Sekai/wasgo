/* THIS FILE IS GENERATED */
#ifndef GIPROBEDATA_H
#define GIPROBEDATA_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class GIProbeData : public Resource{
public: GIProbeData();
float get_bias();
AABB get_bounds();
float get_cell_size();
PoolIntArray get_dynamic_data();
int get_dynamic_range();
float get_energy();
float get_normal_bias();
float get_propagation();
Transform get_to_cell_xform();
bool is_compressed();
bool is_interior();
void set_bias(float p_bias);
void set_bounds(AABB p_bounds);
void set_cell_size(float p_cell_size);
void set_compress(bool p_compress);
void set_dynamic_data(PoolIntArray p_dynamic_data);
void set_dynamic_range(int p_dynamic_range);
void set_energy(float p_energy);
void set_interior(bool p_interior);
void set_normal_bias(float p_bias);
void set_propagation(float p_propagation);
void set_to_cell_xform(Transform p_to_cell_xform);
};
#endif