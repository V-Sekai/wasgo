/* THIS FILE IS GENERATED */
#ifndef MESHLIBRARY_H
#define MESHLIBRARY_H

#include "wasgo\wasgoid.h"

#include "Mesh.h"
#include "NavigationMesh.h"
#include "Resource.h"
#include "Variant.h"
#include "Transform.h"
#include "Ustring.h"
#include "Texture.h"
class MeshLibrary : public Resource{
public:
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

protected:
public:
explicit MeshLibrary(WasGoID p_wasgo_id);
explicit MeshLibrary(Resource other);
MeshLibrary();
MeshLibrary new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_MeshLibrary_wrapper_clear(WasGoID wasgo_id);
void _wasgo_MeshLibrary_wrapper_create_item(WasGoID wasgo_id, int p_id);
int _wasgo_MeshLibrary_wrapper_find_item_by_name(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
WasGoID _wasgo_MeshLibrary_wrapper_get_item_list(WasGoID wasgo_id);
WasGoID _wasgo_MeshLibrary_wrapper_get_item_mesh(WasGoID wasgo_id, int p_id);
void _wasgo_MeshLibrary_wrapper_get_item_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_id);
WasGoID _wasgo_MeshLibrary_wrapper_get_item_navmesh(WasGoID wasgo_id, int p_id);
void _wasgo_MeshLibrary_wrapper_get_item_navmesh_transform(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_id);
WasGoID _wasgo_MeshLibrary_wrapper_get_item_preview(WasGoID wasgo_id, int p_id);
WasGoID _wasgo_MeshLibrary_wrapper_get_item_shapes(WasGoID wasgo_id, int p_id);
int _wasgo_MeshLibrary_wrapper_get_last_unused_item_id(WasGoID wasgo_id);
void _wasgo_MeshLibrary_wrapper_remove_item(WasGoID wasgo_id, int p_id);
void _wasgo_MeshLibrary_wrapper_set_item_mesh(WasGoID wasgo_id, int p_id, WasGoID p_mesh);
void _wasgo_MeshLibrary_wrapper_set_item_name(WasGoID wasgo_id, int p_id, const uint8_t * p_name, int wasgo_throwaway, int p_name_wasgo_buffer_size);
void _wasgo_MeshLibrary_wrapper_set_item_navmesh(WasGoID wasgo_id, int p_id, WasGoID p_navmesh);
void _wasgo_MeshLibrary_wrapper_set_item_navmesh_transform(WasGoID wasgo_id, int p_id, const uint8_t * p_navmesh, int wasgo_throwaway, int p_navmesh_wasgo_buffer_size);
void _wasgo_MeshLibrary_wrapper_set_item_preview(WasGoID wasgo_id, int p_id, WasGoID p_texture);
void _wasgo_MeshLibrary_wrapper_set_item_shapes(WasGoID wasgo_id, int p_id, WasGoID p_shapes);

    //constructor wrappers
    WasGoID _wasgo_MeshLibrary_constructor();
            
}
#endif