/* THIS FILE IS GENERATED */
#ifndef PROXIMITYGROUP_H
#define PROXIMITYGROUP_H

#include "stdint.h"

#include "Variant.h"
#include "Spatial.h"
class ProximityGroup : public Spatial{
public: ProximityGroup();
enum DispatchMode{
MODE_PROXY,
MODE_SIGNAL
};
void broadcast(String p_name, Variant p_parameters);
ProximityGroup::DispatchMode get_dispatch_mode();
Vector3 get_grid_radius();
String get_group_name();
void set_dispatch_mode(ProximityGroup::DispatchMode p_mode);
void set_grid_radius(Vector3 p_radius);
void set_group_name(String p_name);
};
#endif