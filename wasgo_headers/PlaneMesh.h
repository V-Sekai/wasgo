/* THIS FILE IS GENERATED */
#ifndef PLANEMESH_H
#define PLANEMESH_H

#include "wasgo\wasgoid.h"

#include "Vector2.h"
#include "PrimitiveMesh.h"
class PlaneMesh : public PrimitiveMesh{
public:
Vector2 get_size();
int get_subdivide_depth();
int get_subdivide_width();
void set_size(Vector2 p_size);
void set_subdivide_depth(int p_subdivide);
void set_subdivide_width(int p_subdivide);

protected:
public:
explicit PlaneMesh(WasGoID p_wasgo_id);
explicit PlaneMesh(PrimitiveMesh other);
PlaneMesh();
PlaneMesh new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_PlaneMesh_wrapper_get_size(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_PlaneMesh_wrapper_get_subdivide_depth(WasGoID wasgo_id);
int _wasgo_PlaneMesh_wrapper_get_subdivide_width(WasGoID wasgo_id);
void _wasgo_PlaneMesh_wrapper_set_size(WasGoID wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);
void _wasgo_PlaneMesh_wrapper_set_subdivide_depth(WasGoID wasgo_id, int p_subdivide);
void _wasgo_PlaneMesh_wrapper_set_subdivide_width(WasGoID wasgo_id, int p_subdivide);

    //constructor wrappers
    WasGoID _wasgo_PlaneMesh_constructor();
            
}
#endif