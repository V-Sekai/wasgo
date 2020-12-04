/* THIS FILE IS GENERATED */
#ifndef GIPROBE_H
#define GIPROBE_H

#include "wasgo\wasgo.h"

#include "GIProbeData.h"
#include "Vector3.h"
#include "Node.h"
#include "VisualInstance.h"
class GIProbe : public VisualInstance{
public:
enum Subdiv{
SUBDIV_64,
SUBDIV_128,
SUBDIV_256,
SUBDIV_512,
SUBDIV_MAX
};
void bake(Node p_from_node = (Node) "", bool p_create_visual_debug = (bool) false);
void debug_bake();
float get_bias();
int get_dynamic_range();
float get_energy();
Vector3 get_extents();
float get_normal_bias();
GIProbeData get_probe_data();
float get_propagation();
GIProbe::Subdiv get_subdiv();
bool is_compressed();
bool is_interior();
void set_bias(float p_max);
void set_compress(bool p_enable);
void set_dynamic_range(int p_max);
void set_energy(float p_max);
void set_extents(Vector3 p_extents);
void set_interior(bool p_enable);
void set_normal_bias(float p_max);
void set_probe_data(GIProbeData p_data);
void set_propagation(float p_max);
void set_subdiv(GIProbe::Subdiv p_subdiv);

protected:
public:
explicit GIProbe(WasGoID p_wasgo_id);
explicit GIProbe(VisualInstance other);
GIProbe new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_GIProbe_wrapper_bake(WasGoID wasgo_id, WasGoID p_from_node, bool p_create_visual_debug);
void _wasgo_GIProbe_wrapper_debug_bake(WasGoID wasgo_id);
float _wasgo_GIProbe_wrapper_get_bias(WasGoID wasgo_id);
int _wasgo_GIProbe_wrapper_get_dynamic_range(WasGoID wasgo_id);
float _wasgo_GIProbe_wrapper_get_energy(WasGoID wasgo_id);
void _wasgo_GIProbe_wrapper_get_extents(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_GIProbe_wrapper_get_normal_bias(WasGoID wasgo_id);
WasGoID _wasgo_GIProbe_wrapper_get_probe_data(WasGoID wasgo_id);
float _wasgo_GIProbe_wrapper_get_propagation(WasGoID wasgo_id);
WasGoID _wasgo_GIProbe_wrapper_get_subdiv(WasGoID wasgo_id);
int _wasgo_GIProbe_wrapper_is_compressed(WasGoID wasgo_id);
int _wasgo_GIProbe_wrapper_is_interior(WasGoID wasgo_id);
void _wasgo_GIProbe_wrapper_set_bias(WasGoID wasgo_id, float p_max);
void _wasgo_GIProbe_wrapper_set_compress(WasGoID wasgo_id, bool p_enable);
void _wasgo_GIProbe_wrapper_set_dynamic_range(WasGoID wasgo_id, int p_max);
void _wasgo_GIProbe_wrapper_set_energy(WasGoID wasgo_id, float p_max);
void _wasgo_GIProbe_wrapper_set_extents(WasGoID wasgo_id, const uint8_t * p_extents, int p_extents_wasgo_buffer_size);
void _wasgo_GIProbe_wrapper_set_interior(WasGoID wasgo_id, bool p_enable);
void _wasgo_GIProbe_wrapper_set_normal_bias(WasGoID wasgo_id, float p_max);
void _wasgo_GIProbe_wrapper_set_probe_data(WasGoID wasgo_id, WasGoID p_data);
void _wasgo_GIProbe_wrapper_set_propagation(WasGoID wasgo_id, float p_max);
void _wasgo_GIProbe_wrapper_set_subdiv(WasGoID wasgo_id, WasGoID p_subdiv);

    //constructor wrappers
    WasGoID _wasgo_GIProbe_constructor();
            
}
#endif