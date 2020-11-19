/* THIS FILE IS GENERATED */
#ifndef MESHLIBRARY_H
#define MESHLIBRARY_H

#include <stdint.h>

#include "String.h"
#include "Resource.h"
#include "Mesh.h"
#include "Transform.h"
#include "PoolIntArray.h"
#include "Texture.h"
#include "NavigationMesh.h"
#include "Variant.h"
class MeshLibrary : public Resource{
public: MeshLibrary();
void  clear();
void  clear();
void  create_item(int id);
int  find_item_by_name(String name);
PoolIntArray  get_item_list();
PoolIntArray  get_item_list();
Mesh  get_item_mesh(int id);
String  get_item_name(int id);
NavigationMesh  get_item_navmesh(int id);
Transform  get_item_navmesh_transform(int id);
Texture  get_item_preview(int id);
Array  get_item_shapes(int id);
int  get_last_unused_item_id();
int  get_last_unused_item_id();
void  remove_item(int id);
void  set_item_mesh(int id, Mesh mesh);
void  set_item_name(int id, String name);
void  set_item_navmesh(int id, NavigationMesh navmesh);
void  set_item_navmesh_transform(int id, Transform navmesh);
void  set_item_preview(int id, Texture texture);
void  set_item_shapes(int id, Array shapes);
};
#endif