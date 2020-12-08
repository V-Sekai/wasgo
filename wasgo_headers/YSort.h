/* THIS FILE IS GENERATED */
#ifndef YSORT_H
#define YSORT_H

#include "wasgo\wasgoid.h"

#include "Node2D.h"
class YSort : public Node2D{
public:
bool is_sort_enabled();
void set_sort_enabled(bool p_enabled);

protected:
public:
explicit YSort(WasGoID p_wasgo_id);
explicit YSort(Node2D other);
YSort();
YSort new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_YSort_wrapper_is_sort_enabled(WasGoID wasgo_id);
void _wasgo_YSort_wrapper_set_sort_enabled(WasGoID wasgo_id, bool p_enabled);

    //constructor wrappers
    WasGoID _wasgo_YSort_constructor();
            
}
#endif