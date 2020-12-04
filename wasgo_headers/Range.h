/* THIS FILE IS GENERATED */
#ifndef RANGE_H
#define RANGE_H

#include "wasgo\wasgo.h"

#include "Control.h"
#include "Node.h"
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
float _wasgo_Range_wrapper_get_as_ratio(WasGoID wasgo_id);
float _wasgo_Range_wrapper_get_max(WasGoID wasgo_id);
float _wasgo_Range_wrapper_get_min(WasGoID wasgo_id);
float _wasgo_Range_wrapper_get_page(WasGoID wasgo_id);
float _wasgo_Range_wrapper_get_step(WasGoID wasgo_id);
float _wasgo_Range_wrapper_get_value(WasGoID wasgo_id);
int _wasgo_Range_wrapper_is_greater_allowed(WasGoID wasgo_id);
int _wasgo_Range_wrapper_is_lesser_allowed(WasGoID wasgo_id);
int _wasgo_Range_wrapper_is_ratio_exp(WasGoID wasgo_id);
int _wasgo_Range_wrapper_is_using_rounded_values(WasGoID wasgo_id);
void _wasgo_Range_wrapper_set_allow_greater(WasGoID wasgo_id, bool p_allow);
void _wasgo_Range_wrapper_set_allow_lesser(WasGoID wasgo_id, bool p_allow);
void _wasgo_Range_wrapper_set_as_ratio(WasGoID wasgo_id, float p_value);
void _wasgo_Range_wrapper_set_exp_ratio(WasGoID wasgo_id, bool p_enabled);
void _wasgo_Range_wrapper_set_max(WasGoID wasgo_id, float p_maximum);
void _wasgo_Range_wrapper_set_min(WasGoID wasgo_id, float p_minimum);
void _wasgo_Range_wrapper_set_page(WasGoID wasgo_id, float p_pagesize);
void _wasgo_Range_wrapper_set_step(WasGoID wasgo_id, float p_step);
void _wasgo_Range_wrapper_set_use_rounded_values(WasGoID wasgo_id, bool p_enabled);
void _wasgo_Range_wrapper_set_value(WasGoID wasgo_id, float p_value);
void _wasgo_Range_wrapper_share(WasGoID wasgo_id, WasGoID p_with);
void _wasgo_Range_wrapper_unshare(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_Range_constructor();
            
}
#endif