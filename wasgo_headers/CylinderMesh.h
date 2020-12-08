/* THIS FILE IS GENERATED */
#ifndef CYLINDERMESH_H
#define CYLINDERMESH_H

#include "wasgo\wasgoid.h"

#include "PrimitiveMesh.h"
class CylinderMesh : public PrimitiveMesh{
public:
float get_bottom_radius();
float get_height();
int get_radial_segments();
int get_rings();
float get_top_radius();
void set_bottom_radius(float p_radius);
void set_height(float p_height);
void set_radial_segments(int p_segments);
void set_rings(int p_rings);
void set_top_radius(float p_radius);

protected:
public:
explicit CylinderMesh(WasGoID p_wasgo_id);
explicit CylinderMesh(PrimitiveMesh other);
CylinderMesh();
CylinderMesh new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_CylinderMesh_wrapper_get_bottom_radius(WasGoID wasgo_id);
float _wasgo_CylinderMesh_wrapper_get_height(WasGoID wasgo_id);
int _wasgo_CylinderMesh_wrapper_get_radial_segments(WasGoID wasgo_id);
int _wasgo_CylinderMesh_wrapper_get_rings(WasGoID wasgo_id);
float _wasgo_CylinderMesh_wrapper_get_top_radius(WasGoID wasgo_id);
void _wasgo_CylinderMesh_wrapper_set_bottom_radius(WasGoID wasgo_id, float p_radius);
void _wasgo_CylinderMesh_wrapper_set_height(WasGoID wasgo_id, float p_height);
void _wasgo_CylinderMesh_wrapper_set_radial_segments(WasGoID wasgo_id, int p_segments);
void _wasgo_CylinderMesh_wrapper_set_rings(WasGoID wasgo_id, int p_rings);
void _wasgo_CylinderMesh_wrapper_set_top_radius(WasGoID wasgo_id, float p_radius);

    //constructor wrappers
    WasGoID _wasgo_CylinderMesh_constructor();
            
}
#endif