/* THIS FILE IS GENERATED */
#ifndef ARRAYMESH_H
#define ARRAYMESH_H

#include "wasgo\wasgoid.h"

#include "Mesh.h"
#include "error_list.h"
#include "AABB.h"
#include "Variant.h"
#include "Transform.h"
#include "Ustring.h"
class ArrayMesh : public Mesh{
public:
enum ArrayFormat{
ARRAY_FORMAT_VERTEX,
ARRAY_FORMAT_NORMAL,
ARRAY_FORMAT_TANGENT,
ARRAY_FORMAT_COLOR,
ARRAY_FORMAT_TEX_UV,
ARRAY_FORMAT_TEX_UV2,
ARRAY_FORMAT_BONES,
ARRAY_FORMAT_WEIGHTS,
ARRAY_FORMAT_INDEX
};
enum ArrayType{
ARRAY_VERTEX,
ARRAY_NORMAL,
ARRAY_TANGENT,
ARRAY_COLOR,
ARRAY_TEX_UV,
ARRAY_TEX_UV2,
ARRAY_BONES,
ARRAY_WEIGHTS,
ARRAY_INDEX,
ARRAY_MAX
};
void add_blend_shape(String p_name);
void add_surface_from_arrays(Mesh::PrimitiveType p_primitive, Array p_arrays, Array p_blend_shapes = Array(), int p_compress_flags = (int) 97280);
void clear_blend_shapes();
int get_blend_shape_count();
Mesh::BlendShapeMode get_blend_shape_mode();
String get_blend_shape_name(int p_index);
AABB get_custom_aabb();
Error lightmap_unwrap(Transform p_transform, float p_texel_size);
void regen_normalmaps();
void set_blend_shape_mode(Mesh::BlendShapeMode p_mode);
void set_custom_aabb(AABB p_aabb);
int surface_find_by_name(String p_name);
int surface_get_array_index_len(int p_surf_idx);
int surface_get_array_len(int p_surf_idx);
int surface_get_format(int p_surf_idx);
String surface_get_name(int p_surf_idx);
Mesh::PrimitiveType surface_get_primitive_type(int p_surf_idx);
void surface_remove(int p_surf_idx);
void surface_set_name(int p_surf_idx, String p_name);
void surface_update_region(int p_surf_idx, int p_offset, PoolByteArray p_data);

protected:
public:
explicit ArrayMesh(WasGoID p_wasgo_id);
explicit ArrayMesh(Mesh other);
ArrayMesh();
ArrayMesh new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ArrayMesh_wrapper_add_blend_shape(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_ArrayMesh_wrapper_add_surface_from_arrays(WasGoID wasgo_id, WasGoID p_primitive, WasGoID p_arrays, int wasgo_throwaway, WasGoID p_blend_shapes, int p_compress_flags);
void _wasgo_ArrayMesh_wrapper_clear_blend_shapes(WasGoID wasgo_id);
int _wasgo_ArrayMesh_wrapper_get_blend_shape_count(WasGoID wasgo_id);
WasGoID _wasgo_ArrayMesh_wrapper_get_blend_shape_mode(WasGoID wasgo_id);
void _wasgo_ArrayMesh_wrapper_get_blend_shape_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_index);
void _wasgo_ArrayMesh_wrapper_get_custom_aabb(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_ArrayMesh_wrapper_lightmap_unwrap(WasGoID wasgo_id, const uint8_t * p_transform, int p_transform_wasgo_buffer_size, int wasgo_throwaway, float p_texel_size);
void _wasgo_ArrayMesh_wrapper_regen_normalmaps(WasGoID wasgo_id);
void _wasgo_ArrayMesh_wrapper_set_blend_shape_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_ArrayMesh_wrapper_set_custom_aabb(WasGoID wasgo_id, const uint8_t * p_aabb, int p_aabb_wasgo_buffer_size);
int _wasgo_ArrayMesh_wrapper_surface_find_by_name(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_ArrayMesh_wrapper_surface_get_array_index_len(WasGoID wasgo_id, int p_surf_idx);
int _wasgo_ArrayMesh_wrapper_surface_get_array_len(WasGoID wasgo_id, int p_surf_idx);
int _wasgo_ArrayMesh_wrapper_surface_get_format(WasGoID wasgo_id, int p_surf_idx);
void _wasgo_ArrayMesh_wrapper_surface_get_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_surf_idx);
WasGoID _wasgo_ArrayMesh_wrapper_surface_get_primitive_type(WasGoID wasgo_id, int p_surf_idx);
void _wasgo_ArrayMesh_wrapper_surface_remove(WasGoID wasgo_id, int p_surf_idx);
void _wasgo_ArrayMesh_wrapper_surface_set_name(WasGoID wasgo_id, int p_surf_idx, const uint8_t * p_name, int wasgo_throwaway, int p_name_wasgo_buffer_size);
void _wasgo_ArrayMesh_wrapper_surface_update_region(WasGoID wasgo_id, int p_surf_idx, int p_offset, int wasgo_throwaway, WasGoID p_data);

    //constructor wrappers
    WasGoID _wasgo_ArrayMesh_constructor();
            
}
#endif