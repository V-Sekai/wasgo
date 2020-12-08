/* THIS FILE IS GENERATED */
#ifndef SPHEREMESH_H
#define SPHEREMESH_H

#include "wasgo\wasgoid.h"

#include "PrimitiveMesh.h"
class SphereMesh : public PrimitiveMesh{
public:
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

protected:
public:
explicit SphereMesh(WasGoID p_wasgo_id);
explicit SphereMesh(PrimitiveMesh other);
SphereMesh();
SphereMesh new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_SphereMesh_wrapper_get_height(WasGoID wasgo_id);
int _wasgo_SphereMesh_wrapper_get_is_hemisphere(WasGoID wasgo_id);
int _wasgo_SphereMesh_wrapper_get_radial_segments(WasGoID wasgo_id);
float _wasgo_SphereMesh_wrapper_get_radius(WasGoID wasgo_id);
int _wasgo_SphereMesh_wrapper_get_rings(WasGoID wasgo_id);
void _wasgo_SphereMesh_wrapper_set_height(WasGoID wasgo_id, float p_height);
void _wasgo_SphereMesh_wrapper_set_is_hemisphere(WasGoID wasgo_id, bool p_is_hemisphere);
void _wasgo_SphereMesh_wrapper_set_radial_segments(WasGoID wasgo_id, int p_radial_segments);
void _wasgo_SphereMesh_wrapper_set_radius(WasGoID wasgo_id, float p_radius);
void _wasgo_SphereMesh_wrapper_set_rings(WasGoID wasgo_id, int p_rings);

    //constructor wrappers
    WasGoID _wasgo_SphereMesh_constructor();
            
}
#endif