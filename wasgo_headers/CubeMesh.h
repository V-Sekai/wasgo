/* THIS FILE IS GENERATED */
#ifndef CUBEMESH_H
#define CUBEMESH_H

#include "wasgo\wasgo.h"

#include "Vector3.h"
#include "PrimitiveMesh.h"
class CubeMesh : public PrimitiveMesh{
public:
Vector3 get_size();
int get_subdivide_depth();
int get_subdivide_height();
int get_subdivide_width();
void set_size(Vector3 p_size);
void set_subdivide_depth(int p_divisions);
void set_subdivide_height(int p_divisions);
void set_subdivide_width(int p_subdivide);

protected:
CubeMesh(WasGoId p_wasgo_id);
public:
CubeMesh();
~CubeMesh();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_CubeMesh_wrapper_get_size(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_CubeMesh_wrapper_get_subdivide_depth(WasGoId wasgo_id);
int _wasgo_CubeMesh_wrapper_get_subdivide_height(WasGoId wasgo_id);
int _wasgo_CubeMesh_wrapper_get_subdivide_width(WasGoId wasgo_id);
void _wasgo_CubeMesh_wrapper_set_size(WasGoId wasgo_id, const uint8_t * p_size, int p_size_wasgo_buffer_size);
void _wasgo_CubeMesh_wrapper_set_subdivide_depth(WasGoId wasgo_id, int p_divisions);
void _wasgo_CubeMesh_wrapper_set_subdivide_height(WasGoId wasgo_id, int p_divisions);
void _wasgo_CubeMesh_wrapper_set_subdivide_width(WasGoId wasgo_id, int p_subdivide);

    //constructor and destructor wrappers
    WasGoId _wasgo_CubeMesh_constructor();
    void _wasgo_CubeMesh_destructor(WasGoId p_wasgo_id);
            
}
#endif