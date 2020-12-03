/* THIS FILE IS GENERATED */
#ifndef SPRINGARM_H
#define SPRINGARM_H

#include "wasgo\wasgo.h"

#include "Shape.h"
#include "Spatial.h"
#include "RID.h"
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
SpringArm(WasGoId p_wasgo_id);
public:
SpringArm();
~SpringArm();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_SpringArm_wrapper_add_excluded_object(WasGoId wasgo_id, const uint8_t * p_RID, int p_RID_wasgo_buffer_size);
void _wasgo_SpringArm_wrapper_clear_excluded_objects(WasGoId wasgo_id);
int _wasgo_SpringArm_wrapper_get_collision_mask(WasGoId wasgo_id);
float _wasgo_SpringArm_wrapper_get_hit_length(WasGoId wasgo_id);
float _wasgo_SpringArm_wrapper_get_length(WasGoId wasgo_id);
float _wasgo_SpringArm_wrapper_get_margin(WasGoId wasgo_id);
WasGoId _wasgo_SpringArm_wrapper_get_shape(WasGoId wasgo_id);
int _wasgo_SpringArm_wrapper_remove_excluded_object(WasGoId wasgo_id, const uint8_t * p_RID, int p_RID_wasgo_buffer_size);
void _wasgo_SpringArm_wrapper_set_collision_mask(WasGoId wasgo_id, int p_mask);
void _wasgo_SpringArm_wrapper_set_length(WasGoId wasgo_id, float p_length);
void _wasgo_SpringArm_wrapper_set_margin(WasGoId wasgo_id, float p_margin);
void _wasgo_SpringArm_wrapper_set_shape(WasGoId wasgo_id, WasGoId p_shape);

    //constructor and destructor wrappers
    WasGoId _wasgo_SpringArm_constructor();
    void _wasgo_SpringArm_destructor(WasGoId p_wasgo_id);
            
}
#endif