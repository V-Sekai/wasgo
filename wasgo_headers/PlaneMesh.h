/* THIS FILE IS GENERATED */
#ifndef PLANEMESH_H
#define PLANEMESH_H

#include "stdint.h"
#include "wasgo\wasgo.h"

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

PlaneMesh(WasGoId p_wasgo_id);
~PlaneMesh();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_PlaneMesh_wrapper_get_size(WasGoId wasgo_id);
int _wasgo_PlaneMesh_wrapper_get_subdivide_depth(WasGoId wasgo_id);
int _wasgo_PlaneMesh_wrapper_get_subdivide_width(WasGoId wasgo_id);
void _wasgo_PlaneMesh_wrapper_set_size(WasGoId wasgo_id, WasGoId p_size);
void _wasgo_PlaneMesh_wrapper_set_subdivide_depth(WasGoId wasgo_id, int p_subdivide);
void _wasgo_PlaneMesh_wrapper_set_subdivide_width(WasGoId wasgo_id, int p_subdivide);
}
#endif