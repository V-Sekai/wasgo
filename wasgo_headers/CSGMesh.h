/* THIS FILE IS GENERATED */
#ifndef CSGMESH_H
#define CSGMESH_H

#include <stdint.h>

#include "Material.h"
#include "CSGPrimitive.h"
#include "Mesh.h"
class CSGMesh : public CSGPrimitive{
public: CSGMesh();
void  _mesh_changed();
void  _mesh_changed();
Material  get_material();
Material  get_material();
Mesh  get_mesh();
Mesh  get_mesh();
void  set_material(Material material);
void  set_mesh(Mesh mesh);
};
#endif