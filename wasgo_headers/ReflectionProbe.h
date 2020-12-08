/* THIS FILE IS GENERATED */
#ifndef REFLECTIONPROBE_H
#define REFLECTIONPROBE_H

#include "wasgo\wasgoid.h"

#include "Color.h"
#include "VisualInstance.h"
#include "Vector3.h"
class ReflectionProbe : public VisualInstance{
public:
enum UpdateMode{
UPDATE_ONCE,
UPDATE_ALWAYS
};
bool are_shadows_enabled();
int get_cull_mask();
Vector3 get_extents();
float get_intensity();
Color get_interior_ambient();
float get_interior_ambient_energy();
float get_interior_ambient_probe_contribution();
float get_max_distance();
Vector3 get_origin_offset();
ReflectionProbe::UpdateMode get_update_mode();
bool is_box_projection_enabled();
bool is_set_as_interior();
void set_as_interior(bool p_enable);
void set_cull_mask(int p_layers);
void set_enable_box_projection(bool p_enable);
void set_enable_shadows(bool p_enable);
void set_extents(Vector3 p_extents);
void set_intensity(float p_intensity);
void set_interior_ambient(Color p_ambient);
void set_interior_ambient_energy(float p_ambient_energy);
void set_interior_ambient_probe_contribution(float p_ambient_probe_contribution);
void set_max_distance(float p_max_distance);
void set_origin_offset(Vector3 p_origin_offset);
void set_update_mode(ReflectionProbe::UpdateMode p_mode);

protected:
public:
explicit ReflectionProbe(WasGoID p_wasgo_id);
explicit ReflectionProbe(VisualInstance other);
ReflectionProbe();
ReflectionProbe new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ReflectionProbe_wrapper_are_shadows_enabled(WasGoID wasgo_id);
int _wasgo_ReflectionProbe_wrapper_get_cull_mask(WasGoID wasgo_id);
void _wasgo_ReflectionProbe_wrapper_get_extents(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_ReflectionProbe_wrapper_get_intensity(WasGoID wasgo_id);
void _wasgo_ReflectionProbe_wrapper_get_interior_ambient(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_ReflectionProbe_wrapper_get_interior_ambient_energy(WasGoID wasgo_id);
float _wasgo_ReflectionProbe_wrapper_get_interior_ambient_probe_contribution(WasGoID wasgo_id);
float _wasgo_ReflectionProbe_wrapper_get_max_distance(WasGoID wasgo_id);
void _wasgo_ReflectionProbe_wrapper_get_origin_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_ReflectionProbe_wrapper_get_update_mode(WasGoID wasgo_id);
int _wasgo_ReflectionProbe_wrapper_is_box_projection_enabled(WasGoID wasgo_id);
int _wasgo_ReflectionProbe_wrapper_is_set_as_interior(WasGoID wasgo_id);
void _wasgo_ReflectionProbe_wrapper_set_as_interior(WasGoID wasgo_id, bool p_enable);
void _wasgo_ReflectionProbe_wrapper_set_cull_mask(WasGoID wasgo_id, int p_layers);
void _wasgo_ReflectionProbe_wrapper_set_enable_box_projection(WasGoID wasgo_id, bool p_enable);
void _wasgo_ReflectionProbe_wrapper_set_enable_shadows(WasGoID wasgo_id, bool p_enable);
void _wasgo_ReflectionProbe_wrapper_set_extents(WasGoID wasgo_id, const uint8_t * p_extents, int p_extents_wasgo_buffer_size);
void _wasgo_ReflectionProbe_wrapper_set_intensity(WasGoID wasgo_id, float p_intensity);
void _wasgo_ReflectionProbe_wrapper_set_interior_ambient(WasGoID wasgo_id, const uint8_t * p_ambient, int p_ambient_wasgo_buffer_size);
void _wasgo_ReflectionProbe_wrapper_set_interior_ambient_energy(WasGoID wasgo_id, float p_ambient_energy);
void _wasgo_ReflectionProbe_wrapper_set_interior_ambient_probe_contribution(WasGoID wasgo_id, float p_ambient_probe_contribution);
void _wasgo_ReflectionProbe_wrapper_set_max_distance(WasGoID wasgo_id, float p_max_distance);
void _wasgo_ReflectionProbe_wrapper_set_origin_offset(WasGoID wasgo_id, const uint8_t * p_origin_offset, int p_origin_offset_wasgo_buffer_size);
void _wasgo_ReflectionProbe_wrapper_set_update_mode(WasGoID wasgo_id, WasGoID p_mode);

    //constructor wrappers
    WasGoID _wasgo_ReflectionProbe_constructor();
            
}
#endif