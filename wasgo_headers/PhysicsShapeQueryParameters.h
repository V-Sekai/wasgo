/* THIS FILE IS GENERATED */
#ifndef PHYSICSSHAPEQUERYPARAMETERS_H
#define PHYSICSSHAPEQUERYPARAMETERS_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "Transform.h"
#include "Reference.h"
#include "RID.h"
#include "Variant.h"
class PhysicsShapeQueryParameters : public Reference{
public:
int get_collision_mask();
Array get_exclude();
float get_margin();
RID get_shape_rid();
Transform get_transform();
bool is_collide_with_areas_enabled();
bool is_collide_with_bodies_enabled();
void set_collide_with_areas(bool p_enable);
void set_collide_with_bodies(bool p_enable);
void set_collision_mask(int p_collision_mask);
void set_exclude(Array p_exclude);
void set_margin(float p_margin);
void set_shape(Resource p_shape);
void set_shape_rid(RID p_shape);
void set_transform(Transform p_transform);

protected:
PhysicsShapeQueryParameters(WasGoId p_wasgo_id);
public:
PhysicsShapeQueryParameters();
~PhysicsShapeQueryParameters();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_PhysicsShapeQueryParameters_wrapper_get_collision_mask(WasGoId wasgo_id);
WasGoId _wasgo_PhysicsShapeQueryParameters_wrapper_get_exclude(WasGoId wasgo_id);
float _wasgo_PhysicsShapeQueryParameters_wrapper_get_margin(WasGoId wasgo_id);
void _wasgo_PhysicsShapeQueryParameters_wrapper_get_shape_rid(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_PhysicsShapeQueryParameters_wrapper_get_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_PhysicsShapeQueryParameters_wrapper_is_collide_with_areas_enabled(WasGoId wasgo_id);
int _wasgo_PhysicsShapeQueryParameters_wrapper_is_collide_with_bodies_enabled(WasGoId wasgo_id);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_collide_with_areas(WasGoId wasgo_id, bool p_enable);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_collide_with_bodies(WasGoId wasgo_id, bool p_enable);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_collision_mask(WasGoId wasgo_id, int p_collision_mask);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_exclude(WasGoId wasgo_id, WasGoId p_exclude);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_margin(WasGoId wasgo_id, float p_margin);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_shape(WasGoId wasgo_id, WasGoId p_shape);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_shape_rid(WasGoId wasgo_id, const uint8_t * p_shape, int p_shape_wasgo_buffer_size);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_transform(WasGoId wasgo_id, const uint8_t * p_transform, int p_transform_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_PhysicsShapeQueryParameters_constructor();
    void _wasgo_PhysicsShapeQueryParameters_destructor(WasGoId p_wasgo_id);
            
}
#endif