/* THIS FILE IS GENERATED */
#ifndef SHAPE_H
#define SHAPE_H

#include "wasgo\wasgoid.h"

#include "Resource.h"
class Shape : public Resource{
public:
float get_margin();
void set_margin(float p_margin);

protected:
public:
explicit Shape(WasGoID p_wasgo_id);
explicit Shape(Resource other);
Shape();
Shape new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_Shape_wrapper_get_margin(WasGoID wasgo_id);
void _wasgo_Shape_wrapper_set_margin(WasGoID wasgo_id, float p_margin);

    //constructor wrappers
    WasGoID _wasgo_Shape_constructor();
            
}
#endif