/* THIS FILE IS GENERATED */
#ifndef CAPSULEMESH_H
#define CAPSULEMESH_H

#include "wasgo\wasgo.h"

#include "PrimitiveMesh.h"
class CapsuleMesh : public PrimitiveMesh{
public:
float get_mid_height();
int get_radial_segments();
float get_radius();
int get_rings();
void set_mid_height(float p_mid_height);
void set_radial_segments(int p_segments);
void set_radius(float p_radius);
void set_rings(int p_rings);

protected:
public:
explicit CapsuleMesh(WasGoId p_wasgo_id);
explicit CapsuleMesh(PrimitiveMesh other);
CapsuleMesh new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_CapsuleMesh_wrapper_get_mid_height(WasGoId wasgo_id);
int _wasgo_CapsuleMesh_wrapper_get_radial_segments(WasGoId wasgo_id);
float _wasgo_CapsuleMesh_wrapper_get_radius(WasGoId wasgo_id);
int _wasgo_CapsuleMesh_wrapper_get_rings(WasGoId wasgo_id);
void _wasgo_CapsuleMesh_wrapper_set_mid_height(WasGoId wasgo_id, float p_mid_height);
void _wasgo_CapsuleMesh_wrapper_set_radial_segments(WasGoId wasgo_id, int p_segments);
void _wasgo_CapsuleMesh_wrapper_set_radius(WasGoId wasgo_id, float p_radius);
void _wasgo_CapsuleMesh_wrapper_set_rings(WasGoId wasgo_id, int p_rings);

    //constructor wrappers
    WasGoId _wasgo_CapsuleMesh_constructor();
            
}
#endif