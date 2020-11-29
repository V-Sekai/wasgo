/* THIS FILE IS GENERATED */
#ifndef RANGE_H
#define RANGE_H

#include "stdint.h"

#include "Node.h"
#include "Control.h"
class Range : public Control{
public: Range();
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
#endif