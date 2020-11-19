/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "AABB.h"
#include "Mesh.h"
#include "Variant.h"
#include "Material.h"
class PrimitiveMesh : public Mesh{
public: PrimitiveMesh();
void  _update();
void  _update();
AABB  get_custom_aabb();
AABB  get_custom_aabb();
bool  get_flip_faces();
bool  get_flip_faces();
Material  get_material();
Material  get_material();
Array  get_mesh_arrays();
Array  get_mesh_arrays();
void  set_custom_aabb(AABB aabb);
void  set_flip_faces(bool flip_faces);
void  set_material(Material material);
};