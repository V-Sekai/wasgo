/* THIS FILE IS GENERATED */
#ifndef RAYSHAPE_H
#define RAYSHAPE_H

#include "wasgo\wasgo.h"

#include "Shape.h"
class RayShape : public Shape{
public:
float get_length();
bool get_slips_on_slope();
void set_length(float p_length);
void set_slips_on_slope(bool p_active);

protected:
public:
explicit RayShape(WasGoID p_wasgo_id);
explicit RayShape(Shape other);
RayShape new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_RayShape_wrapper_get_length(WasGoID wasgo_id);
int _wasgo_RayShape_wrapper_get_slips_on_slope(WasGoID wasgo_id);
void _wasgo_RayShape_wrapper_set_length(WasGoID wasgo_id, float p_length);
void _wasgo_RayShape_wrapper_set_slips_on_slope(WasGoID wasgo_id, bool p_active);

    //constructor wrappers
    WasGoID _wasgo_RayShape_constructor();
            
}
#endif