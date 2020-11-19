/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Control.h"
#include "Node.h"
class Range : public Control{
public: Range();
float  get_as_ratio();
float  get_as_ratio();
float  get_max();
float  get_max();
float  get_min();
float  get_min();
float  get_page();
float  get_page();
float  get_step();
float  get_step();
float  get_value();
float  get_value();
bool  is_greater_allowed();
bool  is_greater_allowed();
bool  is_lesser_allowed();
bool  is_lesser_allowed();
bool  is_ratio_exp();
bool  is_ratio_exp();
bool  is_using_rounded_values();
bool  is_using_rounded_values();
void  set_allow_greater(bool allow);
void  set_allow_lesser(bool allow);
void  set_as_ratio(float value);
void  set_exp_ratio(bool enabled);
void  set_max(float maximum);
void  set_min(float minimum);
void  set_page(float pagesize);
void  set_step(float step);
void  set_use_rounded_values(bool enabled);
void  set_value(float value);
void  share(Node with);
void  unshare();
void  unshare();
};