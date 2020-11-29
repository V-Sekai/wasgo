/* THIS FILE IS GENERATED */
#ifndef REFLECTIONPROBE_H
#define REFLECTIONPROBE_H

#include "stdint.h"

#include "Variant.h"
#include "VisualInstance.h"
class ReflectionProbe : public VisualInstance{
public: ReflectionProbe();
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
};
#endif