/* THIS FILE IS GENERATED */
#ifndef YSORT_H
#define YSORT_H

#include "wasgo\wasgo.h"

#include "Node2D.h"
class YSort : public Node2D{
public:
bool is_sort_enabled();
void set_sort_enabled(bool p_enabled);

protected:
public:
explicit YSort(WasGoId p_wasgo_id);
explicit YSort(Node2D other);
YSort new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_YSort_wrapper_is_sort_enabled(WasGoId wasgo_id);
void _wasgo_YSort_wrapper_set_sort_enabled(WasGoId wasgo_id, bool p_enabled);

    //constructor wrappers
    WasGoId _wasgo_YSort_constructor();
            
}
#endif