/* THIS FILE IS GENERATED */
#ifndef PHYSICSSHAPEQUERYPARAMETERS_H
#define PHYSICSSHAPEQUERYPARAMETERS_H

#include "wasgo\wasgo.h"

#include "Reference.h"
#include "Resource.h"
#include "Variant.h"
#include "RID.h"
#include "Transform.h"
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
public:
explicit PhysicsShapeQueryParameters(WasGoID p_wasgo_id);
explicit PhysicsShapeQueryParameters(Reference other);
PhysicsShapeQueryParameters new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_PhysicsShapeQueryParameters_wrapper_get_collision_mask(WasGoID wasgo_id);
WasGoID _wasgo_PhysicsShapeQueryParameters_wrapper_get_exclude(WasGoID wasgo_id);
float _wasgo_PhysicsShapeQueryParameters_wrapper_get_margin(WasGoID wasgo_id);
void _wasgo_PhysicsShapeQueryParameters_wrapper_get_shape_rid(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_PhysicsShapeQueryParameters_wrapper_get_transform(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_PhysicsShapeQueryParameters_wrapper_is_collide_with_areas_enabled(WasGoID wasgo_id);
int _wasgo_PhysicsShapeQueryParameters_wrapper_is_collide_with_bodies_enabled(WasGoID wasgo_id);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_collide_with_areas(WasGoID wasgo_id, bool p_enable);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_collide_with_bodies(WasGoID wasgo_id, bool p_enable);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_collision_mask(WasGoID wasgo_id, int p_collision_mask);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_exclude(WasGoID wasgo_id, WasGoID p_exclude);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_margin(WasGoID wasgo_id, float p_margin);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_shape(WasGoID wasgo_id, WasGoID p_shape);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_shape_rid(WasGoID wasgo_id, const uint8_t * p_shape, int p_shape_wasgo_buffer_size);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_transform(WasGoID wasgo_id, const uint8_t * p_transform, int p_transform_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_PhysicsShapeQueryParameters_constructor();
            
}
#endif