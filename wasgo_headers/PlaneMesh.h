/* THIS FILE IS GENERATED */
#ifndef PLANEMESH_H
#define PLANEMESH_H

#include "wasgo\wasgo.h"

#include "PrimitiveMesh.h"
#include "Vector2.h"
class PlaneMesh : public PrimitiveMesh{
public:
Vector2 get_size();
int get_subdivide_depth();
int get_subdivide_width();
void set_size(Vector2 p_size);
void set_subdivide_depth(int p_subdivide);
void set_subdivide_width(int p_subdivide);

protected:
PlaneMesh(WasGoId p_wasgo_id);
public:
PlaneMesh();
~PlaneMesh();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_PlaneMesh_wrapper_get_size(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_PlaneMesh_wrapper_get_subdivide_depth(WasGoId wasgo_id);
int _wasgo_PlaneMesh_wrapper_get_subdivide_width(WasGoId wasgo_id);
void _wasgo_PlaneMesh_wrapper_set_size(WasGoId wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);
void _wasgo_PlaneMesh_wrapper_set_subdivide_depth(WasGoId wasgo_id, int p_subdivide);
void _wasgo_PlaneMesh_wrapper_set_subdivide_width(WasGoId wasgo_id, int p_subdivide);

    //constructor and destructor wrappers
    WasGoId _wasgo_PlaneMesh_constructor();
    void _wasgo_PlaneMesh_destructor(WasGoId p_wasgo_id);
            
}
#endif