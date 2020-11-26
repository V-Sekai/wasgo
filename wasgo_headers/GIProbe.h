/* THIS FILE IS GENERATED */
#ifndef GIPROBE_H
#define GIPROBE_H

#include <stdint.h>

#include "Node.h"
#include "Vector3.h"
#include "VisualInstance.h"
#include "GIProbeData.h"
class GIProbe : public VisualInstance{
public: GIProbe();
enum Subdiv{
SUBDIV_64: 0,
SUBDIV_128: 1,
SUBDIV_256: 2,
SUBDIV_512: 3,
};
void  bake(Node from_node = null, bool create_visual_debug = false);
void  debug_bake();
void  debug_bake();
float  get_bias();
float  get_bias();
int  get_dynamic_range();
int  get_dynamic_range();
float  get_energy();
float  get_energy();
Vector3  get_extents();
Vector3  get_extents();
float  get_normal_bias();
float  get_normal_bias();
GIProbeData  get_probe_data();
GIProbeData  get_probe_data();
float  get_propagation();
float  get_propagation();
enum.GIProbe::Subdiv  get_subdiv();
enum.GIProbe::Subdiv  get_subdiv();
bool  is_compressed();
bool  is_compressed();
bool  is_interior();
bool  is_interior();
void  set_bias(float max);
void  set_compress(bool enable);
void  set_dynamic_range(int max);
void  set_energy(float max);
void  set_extents(Vector3 extents);
void  set_interior(bool enable);
void  set_normal_bias(float max);
void  set_probe_data(GIProbeData data);
void  set_propagation(float max);
void  set_subdiv(int subdiv);
};
#endif