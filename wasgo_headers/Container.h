/* THIS FILE IS GENERATED */
#ifndef CONTAINER_H
#define CONTAINER_H

#include "wasgo\wasgo.h"

#include "Rect2.h"
#include "Control.h"
class Container : public Control{
public:
void fit_child_in_rect(Control p_child, Rect2 p_rect);
void queue_sort();

protected:
public:
explicit Container(WasGoId p_wasgo_id);
explicit Container(Control other);
Container new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Container_wrapper_fit_child_in_rect(WasGoId wasgo_id, WasGoId p_child, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);
void _wasgo_Container_wrapper_queue_sort(WasGoId wasgo_id);

    //constructor wrappers
    WasGoId _wasgo_Container_constructor();
            
}
#endif