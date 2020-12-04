/* THIS FILE IS GENERATED */
#ifndef SCROLLBAR_H
#define SCROLLBAR_H

#include "wasgo\wasgo.h"

#include "Range.h"
class ScrollBar : public Range{
public:
float get_custom_step();
void set_custom_step(float p_step);
};


//Wrapper Functions
extern "C"{
float _wasgo_ScrollBar_wrapper_get_custom_step(WasGoId wasgo_id);
void _wasgo_ScrollBar_wrapper_set_custom_step(WasGoId wasgo_id, float p_step);

    //constructor wrappers
    WasGoId _wasgo_ScrollBar_constructor();
            
}
#endif