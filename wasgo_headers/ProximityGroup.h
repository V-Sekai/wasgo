/* THIS FILE IS GENERATED */
#ifndef PROXIMITYGROUP_H
#define PROXIMITYGROUP_H

#include "wasgo\wasgoid.h"

#include "Ustring.h"
#include "Spatial.h"
#include "Vector3.h"
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
public:
explicit ProximityGroup(WasGoID p_wasgo_id);
explicit ProximityGroup(Spatial other);
ProximityGroup();
ProximityGroup new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ProximityGroup_wrapper_broadcast(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_parameters, int p_parameters_wasgo_buffer_size);
WasGoID _wasgo_ProximityGroup_wrapper_get_dispatch_mode(WasGoID wasgo_id);
void _wasgo_ProximityGroup_wrapper_get_grid_radius(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ProximityGroup_wrapper_get_group_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ProximityGroup_wrapper_set_dispatch_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_ProximityGroup_wrapper_set_grid_radius(WasGoID wasgo_id, const uint8_t * p_radius, int p_radius_wasgo_buffer_size);
void _wasgo_ProximityGroup_wrapper_set_group_name(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_ProximityGroup_constructor();
            
}
#endif