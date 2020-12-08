/* THIS FILE IS GENERATED */
#ifndef SCROLLBAR_H
#define SCROLLBAR_H

#include "wasgo\wasgoid.h"

#include "Range.h"
class ScrollBar : public Range{
public:
float get_custom_step();
void set_custom_step(float p_step);

protected:
public:
explicit ScrollBar(WasGoID p_wasgo_id);
explicit ScrollBar(Range other);
ScrollBar();
ScrollBar new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_ScrollBar_wrapper_get_custom_step(WasGoID wasgo_id);
void _wasgo_ScrollBar_wrapper_set_custom_step(WasGoID wasgo_id, float p_step);

    //constructor wrappers
    WasGoID _wasgo_ScrollBar_constructor();
            
}
#endif