/* THIS FILE IS GENERATED */
#ifndef GIPROBEDATA_H
#define GIPROBEDATA_H

#include "wasgo\wasgoid.h"

#include "Resource.h"
#include "AABB.h"
#include "Variant.h"
#include "Transform.h"
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
public:
explicit GIProbeData(WasGoID p_wasgo_id);
explicit GIProbeData(Resource other);
GIProbeData();
GIProbeData new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_GIProbeData_wrapper_get_bias(WasGoID wasgo_id);
void _wasgo_GIProbeData_wrapper_get_bounds(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_GIProbeData_wrapper_get_cell_size(WasGoID wasgo_id);
WasGoID _wasgo_GIProbeData_wrapper_get_dynamic_data(WasGoID wasgo_id);
int _wasgo_GIProbeData_wrapper_get_dynamic_range(WasGoID wasgo_id);
float _wasgo_GIProbeData_wrapper_get_energy(WasGoID wasgo_id);
float _wasgo_GIProbeData_wrapper_get_normal_bias(WasGoID wasgo_id);
float _wasgo_GIProbeData_wrapper_get_propagation(WasGoID wasgo_id);
void _wasgo_GIProbeData_wrapper_get_to_cell_xform(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_GIProbeData_wrapper_is_compressed(WasGoID wasgo_id);
int _wasgo_GIProbeData_wrapper_is_interior(WasGoID wasgo_id);
void _wasgo_GIProbeData_wrapper_set_bias(WasGoID wasgo_id, float p_bias);
void _wasgo_GIProbeData_wrapper_set_bounds(WasGoID wasgo_id, const uint8_t * p_bounds, int p_bounds_wasgo_buffer_size);
void _wasgo_GIProbeData_wrapper_set_cell_size(WasGoID wasgo_id, float p_cell_size);
void _wasgo_GIProbeData_wrapper_set_compress(WasGoID wasgo_id, bool p_compress);
void _wasgo_GIProbeData_wrapper_set_dynamic_data(WasGoID wasgo_id, WasGoID p_dynamic_data);
void _wasgo_GIProbeData_wrapper_set_dynamic_range(WasGoID wasgo_id, int p_dynamic_range);
void _wasgo_GIProbeData_wrapper_set_energy(WasGoID wasgo_id, float p_energy);
void _wasgo_GIProbeData_wrapper_set_interior(WasGoID wasgo_id, bool p_interior);
void _wasgo_GIProbeData_wrapper_set_normal_bias(WasGoID wasgo_id, float p_bias);
void _wasgo_GIProbeData_wrapper_set_propagation(WasGoID wasgo_id, float p_propagation);
void _wasgo_GIProbeData_wrapper_set_to_cell_xform(WasGoID wasgo_id, const uint8_t * p_to_cell_xform, int p_to_cell_xform_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_GIProbeData_constructor();
            
}
#endif