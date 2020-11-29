/* THIS FILE IS GENERATED */
#ifndef MESHLIBRARY_H
#define MESHLIBRARY_H

#include "stdint.h"

#include "Resource.h"
#include "Variant.h"
#include "Texture.h"
#include "Mesh.h"
#include "NavigationMesh.h"
class MeshLibrary : public Resource{
public: MeshLibrary();
void clear();
void create_item(int p_id);
int find_item_by_name(String p_name);
PoolIntArray get_item_list();
Mesh get_item_mesh(int p_id);
String get_item_name(int p_id);
NavigationMesh get_item_navmesh(int p_id);
Transform get_item_navmesh_transform(int p_id);
Texture get_item_preview(int p_id);
Array get_item_shapes(int p_id);
int get_last_unused_item_id();
void remove_item(int p_id);
void set_item_mesh(int p_id, Mesh p_mesh);
void set_item_name(int p_id, String p_name);
void set_item_navmesh(int p_id, NavigationMesh p_navmesh);
void set_item_navmesh_transform(int p_id, Transform p_navmesh);
void set_item_preview(int p_id, Texture p_texture);
void set_item_shapes(int p_id, Array p_shapes);
};
#endif