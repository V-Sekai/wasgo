/* THIS FILE IS GENERATED */
#ifndef SPHEREMESH_H
#define SPHEREMESH_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "PrimitiveMesh.h"
class SphereMesh : public PrimitiveMesh{
float get_height();
bool get_is_hemisphere();
int get_radial_segments();
float get_radius();
int get_rings();
void set_height(float p_height);
void set_is_hemisphere(bool p_is_hemisphere);
void set_radial_segments(int p_radial_segments);
void set_radius(float p_radius);
void set_rings(int p_rings);

SphereMesh(WasGoId p_wasgo_id);
~SphereMesh();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_SphereMesh_wrapper_get_height(WasGoId wasgo_id);
int _wasgo_SphereMesh_wrapper_get_is_hemisphere(WasGoId wasgo_id);
int _wasgo_SphereMesh_wrapper_get_radial_segments(WasGoId wasgo_id);
float _wasgo_SphereMesh_wrapper_get_radius(WasGoId wasgo_id);
int _wasgo_SphereMesh_wrapper_get_rings(WasGoId wasgo_id);
void _wasgo_SphereMesh_wrapper_set_height(WasGoId wasgo_id, float p_height);
void _wasgo_SphereMesh_wrapper_set_is_hemisphere(WasGoId wasgo_id, bool p_is_hemisphere);
void _wasgo_SphereMesh_wrapper_set_radial_segments(WasGoId wasgo_id, int p_radial_segments);
void _wasgo_SphereMesh_wrapper_set_radius(WasGoId wasgo_id, float p_radius);
void _wasgo_SphereMesh_wrapper_set_rings(WasGoId wasgo_id, int p_rings);
}
#endif