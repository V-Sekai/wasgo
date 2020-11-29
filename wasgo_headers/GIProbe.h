/* THIS FILE IS GENERATED */
#ifndef GIPROBE_H
#define GIPROBE_H

#include "stdint.h"

#include "Variant.h"
#include "VisualInstance.h"
#include "Node.h"
#include "GIProbeData.h"
class GIProbe : public VisualInstance{
public: GIProbe();
enum Subdiv{
SUBDIV_64,
SUBDIV_128,
SUBDIV_256,
SUBDIV_512,
SUBDIV_MAX
};
void bake(Node p_from_node = (Node) "", bool p_create_visual_debug = (bool) False);
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
};
#endif