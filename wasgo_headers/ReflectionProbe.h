/* THIS FILE IS GENERATED */
#ifndef REFLECTIONPROBE_H
#define REFLECTIONPROBE_H

#include "wasgo\wasgo.h"

#include "Vector3.h"
#include "Color.h"
#include "VisualInstance.h"
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
explicit ReflectionProbe(WasGoId p_wasgo_id);
explicit ReflectionProbe(VisualInstance other);
ReflectionProbe new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ReflectionProbe_wrapper_are_shadows_enabled(WasGoId wasgo_id);
int _wasgo_ReflectionProbe_wrapper_get_cull_mask(WasGoId wasgo_id);
void _wasgo_ReflectionProbe_wrapper_get_extents(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_ReflectionProbe_wrapper_get_intensity(WasGoId wasgo_id);
void _wasgo_ReflectionProbe_wrapper_get_interior_ambient(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_ReflectionProbe_wrapper_get_interior_ambient_energy(WasGoId wasgo_id);
float _wasgo_ReflectionProbe_wrapper_get_interior_ambient_probe_contribution(WasGoId wasgo_id);
float _wasgo_ReflectionProbe_wrapper_get_max_distance(WasGoId wasgo_id);
void _wasgo_ReflectionProbe_wrapper_get_origin_offset(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_ReflectionProbe_wrapper_get_update_mode(WasGoId wasgo_id);
int _wasgo_ReflectionProbe_wrapper_is_box_projection_enabled(WasGoId wasgo_id);
int _wasgo_ReflectionProbe_wrapper_is_set_as_interior(WasGoId wasgo_id);
void _wasgo_ReflectionProbe_wrapper_set_as_interior(WasGoId wasgo_id, bool p_enable);
void _wasgo_ReflectionProbe_wrapper_set_cull_mask(WasGoId wasgo_id, int p_layers);
void _wasgo_ReflectionProbe_wrapper_set_enable_box_projection(WasGoId wasgo_id, bool p_enable);
void _wasgo_ReflectionProbe_wrapper_set_enable_shadows(WasGoId wasgo_id, bool p_enable);
void _wasgo_ReflectionProbe_wrapper_set_extents(WasGoId wasgo_id, const uint8_t * p_extents, int p_extents_wasgo_buffer_size);
void _wasgo_ReflectionProbe_wrapper_set_intensity(WasGoId wasgo_id, float p_intensity);
void _wasgo_ReflectionProbe_wrapper_set_interior_ambient(WasGoId wasgo_id, const uint8_t * p_ambient, int p_ambient_wasgo_buffer_size);
void _wasgo_ReflectionProbe_wrapper_set_interior_ambient_energy(WasGoId wasgo_id, float p_ambient_energy);
void _wasgo_ReflectionProbe_wrapper_set_interior_ambient_probe_contribution(WasGoId wasgo_id, float p_ambient_probe_contribution);
void _wasgo_ReflectionProbe_wrapper_set_max_distance(WasGoId wasgo_id, float p_max_distance);
void _wasgo_ReflectionProbe_wrapper_set_origin_offset(WasGoId wasgo_id, const uint8_t * p_origin_offset, int p_origin_offset_wasgo_buffer_size);
void _wasgo_ReflectionProbe_wrapper_set_update_mode(WasGoId wasgo_id, WasGoId p_mode);

    //constructor wrappers
    WasGoId _wasgo_ReflectionProbe_constructor();
            
}
#endif