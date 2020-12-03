/* THIS FILE IS GENERATED */
#ifndef GIPROBEDATA_H
#define GIPROBEDATA_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "Transform.h"
#include "Variant.h"
#include "AABB.h"
class GIProbeData : public Resource{
public:
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

protected:
GIProbeData(WasGoId p_wasgo_id);
public:
GIProbeData();
~GIProbeData();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_GIProbeData_wrapper_get_bias(WasGoId wasgo_id);
void _wasgo_GIProbeData_wrapper_get_bounds(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_GIProbeData_wrapper_get_cell_size(WasGoId wasgo_id);
WasGoId _wasgo_GIProbeData_wrapper_get_dynamic_data(WasGoId wasgo_id);
int _wasgo_GIProbeData_wrapper_get_dynamic_range(WasGoId wasgo_id);
float _wasgo_GIProbeData_wrapper_get_energy(WasGoId wasgo_id);
float _wasgo_GIProbeData_wrapper_get_normal_bias(WasGoId wasgo_id);
float _wasgo_GIProbeData_wrapper_get_propagation(WasGoId wasgo_id);
void _wasgo_GIProbeData_wrapper_get_to_cell_xform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_GIProbeData_wrapper_is_compressed(WasGoId wasgo_id);
int _wasgo_GIProbeData_wrapper_is_interior(WasGoId wasgo_id);
void _wasgo_GIProbeData_wrapper_set_bias(WasGoId wasgo_id, float p_bias);
void _wasgo_GIProbeData_wrapper_set_bounds(WasGoId wasgo_id, const uint8_t * p_bounds, int p_bounds_wasgo_buffer_size);
void _wasgo_GIProbeData_wrapper_set_cell_size(WasGoId wasgo_id, float p_cell_size);
void _wasgo_GIProbeData_wrapper_set_compress(WasGoId wasgo_id, bool p_compress);
void _wasgo_GIProbeData_wrapper_set_dynamic_data(WasGoId wasgo_id, WasGoId p_dynamic_data);
void _wasgo_GIProbeData_wrapper_set_dynamic_range(WasGoId wasgo_id, int p_dynamic_range);
void _wasgo_GIProbeData_wrapper_set_energy(WasGoId wasgo_id, float p_energy);
void _wasgo_GIProbeData_wrapper_set_interior(WasGoId wasgo_id, bool p_interior);
void _wasgo_GIProbeData_wrapper_set_normal_bias(WasGoId wasgo_id, float p_bias);
void _wasgo_GIProbeData_wrapper_set_propagation(WasGoId wasgo_id, float p_propagation);
void _wasgo_GIProbeData_wrapper_set_to_cell_xform(WasGoId wasgo_id, const uint8_t * p_to_cell_xform, int p_to_cell_xform_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_GIProbeData_constructor();
    void _wasgo_GIProbeData_destructor(WasGoId p_wasgo_id);
            
}
#endif