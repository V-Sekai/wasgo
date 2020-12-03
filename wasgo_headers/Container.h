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
Container(WasGoId p_wasgo_id);
public:
Container();
~Container();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Container_wrapper_fit_child_in_rect(WasGoId wasgo_id, WasGoId p_child, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);
void _wasgo_Container_wrapper_queue_sort(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_Container_constructor();
    void _wasgo_Container_destructor(WasGoId p_wasgo_id);
            
}
#endif