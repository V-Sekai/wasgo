/* THIS FILE IS GENERATED */
#ifndef PROXIMITYGROUP_H
#define PROXIMITYGROUP_H

#include "wasgo\wasgo.h"

#include "Spatial.h"
#include "Vector3.h"
#include "ustring.h"
#include "Variant.h"
class ProximityGroup : public Spatial{
public:
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

protected:
ProximityGroup(WasGoId p_wasgo_id);
public:
ProximityGroup();
~ProximityGroup();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ProximityGroup_wrapper_broadcast(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, WasGoId p_parameters);
WasGoId _wasgo_ProximityGroup_wrapper_get_dispatch_mode(WasGoId wasgo_id);
void _wasgo_ProximityGroup_wrapper_get_grid_radius(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ProximityGroup_wrapper_get_group_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ProximityGroup_wrapper_set_dispatch_mode(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_ProximityGroup_wrapper_set_grid_radius(WasGoId wasgo_id, const uint8_t * p_radius, int p_radius_wasgo_buffer_size);
void _wasgo_ProximityGroup_wrapper_set_group_name(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_ProximityGroup_constructor();
    void _wasgo_ProximityGroup_destructor(WasGoId p_wasgo_id);
            
}
#endif