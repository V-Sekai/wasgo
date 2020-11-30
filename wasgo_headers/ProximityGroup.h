/* THIS FILE IS GENERATED */
#ifndef PROXIMITYGROUP_H
#define PROXIMITYGROUP_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Spatial.h"
#include "Variant.h"
class ProximityGroup : public Spatial{
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

ProximityGroup(WasGoId p_wasgo_id);
~ProximityGroup();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ProximityGroup_wrapper_broadcast(WasGoId wasgo_id, WasGo::WasGoId p_name, WasGo::WasGoId p_parameters);
WasGo::WasGoId _wasgo_ProximityGroup_wrapper_get_dispatch_mode(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ProximityGroup_wrapper_get_grid_radius(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ProximityGroup_wrapper_get_group_name(WasGoId wasgo_id);
void _wasgo_ProximityGroup_wrapper_set_dispatch_mode(WasGoId wasgo_id, WasGo::WasGoId p_mode);
void _wasgo_ProximityGroup_wrapper_set_grid_radius(WasGoId wasgo_id, WasGo::WasGoId p_radius);
void _wasgo_ProximityGroup_wrapper_set_group_name(WasGoId wasgo_id, WasGo::WasGoId p_name);
}
#endif