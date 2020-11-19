/* THIS FILE IS GENERATED */
#ifndef PROXIMITYGROUP_H
#define PROXIMITYGROUP_H

#include <stdint.h>

#include "String.h"
#include "Vector3.h"
#include "Spatial.h"
#include "Variant.h"
class ProximityGroup : public Spatial{
public: ProximityGroup();
enum DispatchMode{
MODE_PROXY: 0,
};
void  _proximity_group_broadcast(String name, Variant params);
void  broadcast(String name, Variant parameters);
enum.ProximityGroup::DispatchMode  get_dispatch_mode();
enum.ProximityGroup::DispatchMode  get_dispatch_mode();
Vector3  get_grid_radius();
Vector3  get_grid_radius();
String  get_group_name();
String  get_group_name();
void  set_dispatch_mode(int mode);
void  set_grid_radius(Vector3 radius);
void  set_group_name(String name);
};
#endif