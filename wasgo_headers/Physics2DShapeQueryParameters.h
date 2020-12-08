/* THIS FILE IS GENERATED */
#ifndef PHYSICS2DSHAPEQUERYPARAMETERS_H
#define PHYSICS2DSHAPEQUERYPARAMETERS_H

#include "wasgo\wasgoid.h"

#include "Vector2.h"
#include "RID.h"
#include "Resource.h"
#include "Transform2D.h"
#include "Reference.h"
#include "Variant.h"
class Physics2DShapeQueryParameters : public Reference{
public:
int get_collision_layer();
Array get_exclude();
float get_margin();
Vector2 get_motion();
RID get_shape_rid();
Transform2D get_transform();
bool is_collide_with_areas_enabled();
bool is_collide_with_bodies_enabled();
void set_collide_with_areas(bool p_enable);
void set_collide_with_bodies(bool p_enable);
void set_collision_layer(int p_collision_layer);
void set_exclude(Array p_exclude);
void set_margin(float p_margin);
void set_motion(Vector2 p_motion);
void set_shape(Resource p_shape);
void set_shape_rid(RID p_shape);
void set_transform(Transform2D p_transform);

protected:
public:
explicit Physics2DShapeQueryParameters(WasGoID p_wasgo_id);
explicit Physics2DShapeQueryParameters(Reference other);
Physics2DShapeQueryParameters();
Physics2DShapeQueryParameters new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Physics2DShapeQueryParameters_wrapper_get_collision_layer(WasGoID wasgo_id);
WasGoID _wasgo_Physics2DShapeQueryParameters_wrapper_get_exclude(WasGoID wasgo_id);
float _wasgo_Physics2DShapeQueryParameters_wrapper_get_margin(WasGoID wasgo_id);
void _wasgo_Physics2DShapeQueryParameters_wrapper_get_motion(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Physics2DShapeQueryParameters_wrapper_get_shape_rid(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Physics2DShapeQueryParameters_wrapper_get_transform(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Physics2DShapeQueryParameters_wrapper_is_collide_with_areas_enabled(WasGoID wasgo_id);
int _wasgo_Physics2DShapeQueryParameters_wrapper_is_collide_with_bodies_enabled(WasGoID wasgo_id);
void _wasgo_Physics2DShapeQueryParameters_wrapper_set_collide_with_areas(WasGoID wasgo_id, bool p_enable);
void _wasgo_Physics2DShapeQueryParameters_wrapper_set_collide_with_bodies(WasGoID wasgo_id, bool p_enable);
void _wasgo_Physics2DShapeQueryParameters_wrapper_set_collision_layer(WasGoID wasgo_id, int p_collision_layer);
void _wasgo_Physics2DShapeQueryParameters_wrapper_set_exclude(WasGoID wasgo_id, WasGoID p_exclude);
void _wasgo_Physics2DShapeQueryParameters_wrapper_set_margin(WasGoID wasgo_id, float p_margin);
void _wasgo_Physics2DShapeQueryParameters_wrapper_set_motion(WasGoID wasgo_id, const uint8_t * p_motion, int p_motion_wasgo_buffer_size);
void _wasgo_Physics2DShapeQueryParameters_wrapper_set_shape(WasGoID wasgo_id, WasGoID p_shape);
void _wasgo_Physics2DShapeQueryParameters_wrapper_set_shape_rid(WasGoID wasgo_id, const uint8_t * p_shape, int p_shape_wasgo_buffer_size);
void _wasgo_Physics2DShapeQueryParameters_wrapper_set_transform(WasGoID wasgo_id, const uint8_t * p_transform, int p_transform_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_Physics2DShapeQueryParameters_constructor();
            
}
#endif