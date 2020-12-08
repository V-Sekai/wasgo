/* THIS FILE IS GENERATED */
#ifndef SPRINGARM_H
#define SPRINGARM_H

#include "wasgo\wasgoid.h"

#include "Spatial.h"
#include "RID.h"
#include "Shape.h"
class SpringArm : public Spatial{
public:
void add_excluded_object(RID p_RID);
void clear_excluded_objects();
int get_collision_mask();
float get_hit_length();
float get_length();
float get_margin();
Shape get_shape();
bool remove_excluded_object(RID p_RID);
void set_collision_mask(int p_mask);
void set_length(float p_length);
void set_margin(float p_margin);
void set_shape(Shape p_shape);

protected:
public:
explicit SpringArm(WasGoID p_wasgo_id);
explicit SpringArm(Spatial other);
SpringArm();
SpringArm new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_SpringArm_wrapper_add_excluded_object(WasGoID wasgo_id, const uint8_t * p_RID, int p_RID_wasgo_buffer_size);
void _wasgo_SpringArm_wrapper_clear_excluded_objects(WasGoID wasgo_id);
int _wasgo_SpringArm_wrapper_get_collision_mask(WasGoID wasgo_id);
float _wasgo_SpringArm_wrapper_get_hit_length(WasGoID wasgo_id);
float _wasgo_SpringArm_wrapper_get_length(WasGoID wasgo_id);
float _wasgo_SpringArm_wrapper_get_margin(WasGoID wasgo_id);
WasGoID _wasgo_SpringArm_wrapper_get_shape(WasGoID wasgo_id);
int _wasgo_SpringArm_wrapper_remove_excluded_object(WasGoID wasgo_id, const uint8_t * p_RID, int p_RID_wasgo_buffer_size);
void _wasgo_SpringArm_wrapper_set_collision_mask(WasGoID wasgo_id, int p_mask);
void _wasgo_SpringArm_wrapper_set_length(WasGoID wasgo_id, float p_length);
void _wasgo_SpringArm_wrapper_set_margin(WasGoID wasgo_id, float p_margin);
void _wasgo_SpringArm_wrapper_set_shape(WasGoID wasgo_id, WasGoID p_shape);

    //constructor wrappers
    WasGoID _wasgo_SpringArm_constructor();
            
}
#endif