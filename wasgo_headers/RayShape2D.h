/* THIS FILE IS GENERATED */
#ifndef RAYSHAPE2D_H
#define RAYSHAPE2D_H

#include "wasgo\wasgoid.h"

#include "Shape2D.h"
class RayShape2D : public Shape2D{
public:
float get_length();
bool get_slips_on_slope();
void set_length(float p_length);
void set_slips_on_slope(bool p_active);

protected:
public:
explicit RayShape2D(WasGoID p_wasgo_id);
explicit RayShape2D(Shape2D other);
RayShape2D();
RayShape2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_RayShape2D_wrapper_get_length(WasGoID wasgo_id);
int _wasgo_RayShape2D_wrapper_get_slips_on_slope(WasGoID wasgo_id);
void _wasgo_RayShape2D_wrapper_set_length(WasGoID wasgo_id, float p_length);
void _wasgo_RayShape2D_wrapper_set_slips_on_slope(WasGoID wasgo_id, bool p_active);

    //constructor wrappers
    WasGoID _wasgo_RayShape2D_constructor();
            
}
#endif