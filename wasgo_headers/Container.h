/* THIS FILE IS GENERATED */
#ifndef CONTAINER_H
#define CONTAINER_H

#include "wasgo\wasgoid.h"

#include "Control.h"
#include "Rect2.h"
class Container : public Control{
public:
void fit_child_in_rect(Control p_child, Rect2 p_rect);
void queue_sort();

protected:
public:
explicit Container(WasGoID p_wasgo_id);
explicit Container(Control other);
Container();
Container new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Container_wrapper_fit_child_in_rect(WasGoID wasgo_id, WasGoID p_child, const uint8_t * p_rect, int p_rect_wasgo_buffer_size);
void _wasgo_Container_wrapper_queue_sort(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_Container_constructor();
            
}
#endif