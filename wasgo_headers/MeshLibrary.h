/* THIS FILE IS GENERATED */
#ifndef MESHLIBRARY_H
#define MESHLIBRARY_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Mesh.h"
#include "Resource.h"
#include "Texture.h"
#include "Variant.h"
#include "NavigationMesh.h"
class MeshLibrary : public Resource{
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

MeshLibrary(WasGoId p_wasgo_id);
~MeshLibrary();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_MeshLibrary_wrapper_clear(WasGoId wasgo_id);
void _wasgo_MeshLibrary_wrapper_create_item(WasGoId wasgo_id, int p_id);
int _wasgo_MeshLibrary_wrapper_find_item_by_name(WasGoId wasgo_id, WasGo::WasGoId p_name);
WasGo::WasGoId _wasgo_MeshLibrary_wrapper_get_item_list(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_MeshLibrary_wrapper_get_item_mesh(WasGoId wasgo_id, int p_id);
WasGo::WasGoId _wasgo_MeshLibrary_wrapper_get_item_name(WasGoId wasgo_id, int p_id);
WasGo::WasGoId _wasgo_MeshLibrary_wrapper_get_item_navmesh(WasGoId wasgo_id, int p_id);
WasGo::WasGoId _wasgo_MeshLibrary_wrapper_get_item_navmesh_transform(WasGoId wasgo_id, int p_id);
WasGo::WasGoId _wasgo_MeshLibrary_wrapper_get_item_preview(WasGoId wasgo_id, int p_id);
WasGo::WasGoId _wasgo_MeshLibrary_wrapper_get_item_shapes(WasGoId wasgo_id, int p_id);
int _wasgo_MeshLibrary_wrapper_get_last_unused_item_id(WasGoId wasgo_id);
void _wasgo_MeshLibrary_wrapper_remove_item(WasGoId wasgo_id, int p_id);
void _wasgo_MeshLibrary_wrapper_set_item_mesh(WasGoId wasgo_id, int p_id, WasGo::WasGoId p_mesh);
void _wasgo_MeshLibrary_wrapper_set_item_name(WasGoId wasgo_id, int p_id, WasGo::WasGoId p_name);
void _wasgo_MeshLibrary_wrapper_set_item_navmesh(WasGoId wasgo_id, int p_id, WasGo::WasGoId p_navmesh);
void _wasgo_MeshLibrary_wrapper_set_item_navmesh_transform(WasGoId wasgo_id, int p_id, WasGo::WasGoId p_navmesh);
void _wasgo_MeshLibrary_wrapper_set_item_preview(WasGoId wasgo_id, int p_id, WasGo::WasGoId p_texture);
void _wasgo_MeshLibrary_wrapper_set_item_shapes(WasGoId wasgo_id, int p_id, WasGo::WasGoId p_shapes);
}
#endif