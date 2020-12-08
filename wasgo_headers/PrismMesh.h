/* THIS FILE IS GENERATED */
#ifndef PRISMMESH_H
#define PRISMMESH_H

#include "wasgo\wasgoid.h"

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

protected:
public:
explicit PrismMesh(WasGoID p_wasgo_id);
explicit PrismMesh(PrimitiveMesh other);
PrismMesh();
PrismMesh new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_PrismMesh_wrapper_get_left_to_right(WasGoID wasgo_id);
void _wasgo_PrismMesh_wrapper_get_size(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_PrismMesh_wrapper_get_subdivide_depth(WasGoID wasgo_id);
int _wasgo_PrismMesh_wrapper_get_subdivide_height(WasGoID wasgo_id);
int _wasgo_PrismMesh_wrapper_get_subdivide_width(WasGoID wasgo_id);
void _wasgo_PrismMesh_wrapper_set_left_to_right(WasGoID wasgo_id, float p_left_to_right);
void _wasgo_PrismMesh_wrapper_set_size(WasGoID wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);
void _wasgo_PrismMesh_wrapper_set_subdivide_depth(WasGoID wasgo_id, int p_segments);
void _wasgo_PrismMesh_wrapper_set_subdivide_height(WasGoID wasgo_id, int p_segments);
void _wasgo_PrismMesh_wrapper_set_subdivide_width(WasGoID wasgo_id, int p_segments);

    //constructor wrappers
    WasGoID _wasgo_PrismMesh_constructor();
            
}
#endif