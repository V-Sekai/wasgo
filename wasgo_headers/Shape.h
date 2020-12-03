/* THIS FILE IS GENERATED */
#ifndef SHAPE_H
#define SHAPE_H

#include "wasgo\wasgo.h"

#include "Resource.h"
class Shape : public Resource{
public:
float get_margin();
void set_margin(float p_margin);
};


//Wrapper Functions
extern "C"{
float _wasgo_Shape_wrapper_get_margin(WasGoId wasgo_id);
void _wasgo_Shape_wrapper_set_margin(WasGoId wasgo_id, float p_margin);

    //constructor and destructor wrappers
    WasGoId _wasgo_Shape_constructor();
    void _wasgo_Shape_destructor(WasGoId p_wasgo_id);
            
}
#endif