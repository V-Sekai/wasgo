/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "VisualInstance.h"
#include "Vector3.h"
#include "Variant.h"
class ReflectionProbe : public VisualInstance{
public: ReflectionProbe();
enum UpdateMode{
UPDATE_ONCE: 0,
};
bool  are_shadows_enabled();
bool  are_shadows_enabled();
int  get_cull_mask();
int  get_cull_mask();
Vector3  get_extents();
Vector3  get_extents();
float  get_intensity();
float  get_intensity();
Color  get_interior_ambient();
Color  get_interior_ambient();
float  get_interior_ambient_energy();
float  get_interior_ambient_energy();
float  get_interior_ambient_probe_contribution();
float  get_interior_ambient_probe_contribution();
float  get_max_distance();
float  get_max_distance();
Vector3  get_origin_offset();
Vector3  get_origin_offset();
enum.ReflectionProbe::UpdateMode  get_update_mode();
enum.ReflectionProbe::UpdateMode  get_update_mode();
bool  is_box_projection_enabled();
bool  is_box_projection_enabled();
bool  is_set_as_interior();
bool  is_set_as_interior();
void  set_as_interior(bool enable);
void  set_cull_mask(int layers);
void  set_enable_box_projection(bool enable);
void  set_enable_shadows(bool enable);
void  set_extents(Vector3 extents);
void  set_intensity(float intensity);
void  set_interior_ambient(Color ambient);
void  set_interior_ambient_energy(float ambient_energy);
void  set_interior_ambient_probe_contribution(float ambient_probe_contribution);
void  set_max_distance(float max_distance);
void  set_origin_offset(Vector3 origin_offset);
void  set_update_mode(int mode);
};