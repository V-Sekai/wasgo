/* THIS FILE IS GENERATED */
#ifndef PRISMMESH_H
#define PRISMMESH_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "PrimitiveMesh.h"
#include "Vector3.h"
class PrismMesh : public PrimitiveMesh{
public:
float get_left_to_right();
Vector3 get_size();
int get_subdivide_depth();
int get_subdivide_height();
int get_subdivide_width();
void set_left_to_right(float p_left_to_right);
void set_size(Vector3 p_size);
void set_subdivide_depth(int p_segments);
void set_subdivide_height(int p_segments);
void set_subdivide_width(int p_segments);

PrismMesh(WasGoId p_wasgo_id);
~PrismMesh();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_PrismMesh_wrapper_get_left_to_right(WasGoId wasgo_id);
WasGoId _wasgo_PrismMesh_wrapper_get_size(WasGoId wasgo_id);
int _wasgo_PrismMesh_wrapper_get_subdivide_depth(WasGoId wasgo_id);
int _wasgo_PrismMesh_wrapper_get_subdivide_height(WasGoId wasgo_id);
int _wasgo_PrismMesh_wrapper_get_subdivide_width(WasGoId wasgo_id);
void _wasgo_PrismMesh_wrapper_set_left_to_right(WasGoId wasgo_id, float p_left_to_right);
void _wasgo_PrismMesh_wrapper_set_size(WasGoId wasgo_id, WasGoId p_size);
void _wasgo_PrismMesh_wrapper_set_subdivide_depth(WasGoId wasgo_id, int p_segments);
void _wasgo_PrismMesh_wrapper_set_subdivide_height(WasGoId wasgo_id, int p_segments);
void _wasgo_PrismMesh_wrapper_set_subdivide_width(WasGoId wasgo_id, int p_segments);
}
#endif