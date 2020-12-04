/* THIS FILE IS GENERATED */
#ifndef RANGE_H
#define RANGE_H

#include "wasgo\wasgo.h"

#include "Node.h"
#include "Control.h"
class Range : public Control{
public:
float get_as_ratio();
float get_max();
float get_min();
float get_page();
float get_step();
float get_value();
bool is_greater_allowed();
bool is_lesser_allowed();
bool is_ratio_exp();
bool is_using_rounded_values();
void set_allow_greater(bool p_allow);
void set_allow_lesser(bool p_allow);
void set_as_ratio(float p_value);
void set_exp_ratio(bool p_enabled);
void set_max(float p_maximum);
void set_min(float p_minimum);
void set_page(float p_pagesize);
void set_step(float p_step);
void set_use_rounded_values(bool p_enabled);
void set_value(float p_value);
void share(Node p_with);
void unshare();
};


//Wrapper Functions
extern "C"{
float _wasgo_Range_wrapper_get_as_ratio(WasGoId wasgo_id);
float _wasgo_Range_wrapper_get_max(WasGoId wasgo_id);
float _wasgo_Range_wrapper_get_min(WasGoId wasgo_id);
float _wasgo_Range_wrapper_get_page(WasGoId wasgo_id);
float _wasgo_Range_wrapper_get_step(WasGoId wasgo_id);
float _wasgo_Range_wrapper_get_value(WasGoId wasgo_id);
int _wasgo_Range_wrapper_is_greater_allowed(WasGoId wasgo_id);
int _wasgo_Range_wrapper_is_lesser_allowed(WasGoId wasgo_id);
int _wasgo_Range_wrapper_is_ratio_exp(WasGoId wasgo_id);
int _wasgo_Range_wrapper_is_using_rounded_values(WasGoId wasgo_id);
void _wasgo_Range_wrapper_set_allow_greater(WasGoId wasgo_id, bool p_allow);
void _wasgo_Range_wrapper_set_allow_lesser(WasGoId wasgo_id, bool p_allow);
void _wasgo_Range_wrapper_set_as_ratio(WasGoId wasgo_id, float p_value);
void _wasgo_Range_wrapper_set_exp_ratio(WasGoId wasgo_id, bool p_enabled);
void _wasgo_Range_wrapper_set_max(WasGoId wasgo_id, float p_maximum);
void _wasgo_Range_wrapper_set_min(WasGoId wasgo_id, float p_minimum);
void _wasgo_Range_wrapper_set_page(WasGoId wasgo_id, float p_pagesize);
void _wasgo_Range_wrapper_set_step(WasGoId wasgo_id, float p_step);
void _wasgo_Range_wrapper_set_use_rounded_values(WasGoId wasgo_id, bool p_enabled);
void _wasgo_Range_wrapper_set_value(WasGoId wasgo_id, float p_value);
void _wasgo_Range_wrapper_share(WasGoId wasgo_id, WasGoId p_with);
void _wasgo_Range_wrapper_unshare(WasGoId wasgo_id);

    //constructor wrappers
    WasGoId _wasgo_Range_constructor();
            
}
#endif