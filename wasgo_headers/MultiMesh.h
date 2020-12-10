/* THIS FILE IS GENERATED */
#ifndef MULTIMESH_H
#define MULTIMESH_H

#include "wasgo\wasgoid.h"

#include "Transform2D.h"
#include "Mesh.h"
#include "Resource.h"
#include "AABB.h"
#include "Variant.h"
#include "Transform.h"
#include "Color.h"
class MultiMesh : public Resource{
public:
enum ColorFormat{
COLOR_NONE,
COLOR_8BIT,
COLOR_FLOAT
};
enum CustomDataFormat{
CUSTOM_DATA_NONE,
CUSTOM_DATA_8BIT,
CUSTOM_DATA_FLOAT
};
enum TransformFormat{
TRANSFORM_2D,
TRANSFORM_3D
};
AABB get_aabb();
MultiMesh::ColorFormat get_color_format();
MultiMesh::CustomDataFormat get_custom_data_format();
Color get_instance_color(int p_instance);
int get_instance_count();
Color get_instance_custom_data(int p_instance);
Transform get_instance_transform(int p_instance);
Transform2D get_instance_transform_2d(int p_instance);
Mesh get_mesh();
MultiMesh::TransformFormat get_transform_format();
int get_visible_instance_count();
void set_as_bulk_array(PoolRealArray p_array);
void set_color_format(MultiMesh::ColorFormat p_format);
void set_custom_data_format(MultiMesh::CustomDataFormat p_format);
void set_instance_color(int p_instance, Color p_color);
void set_instance_count(int p_count);
void set_instance_custom_data(int p_instance, Color p_custom_data);
void set_instance_transform(int p_instance, Transform p_transform);
void set_instance_transform_2d(int p_instance, Transform2D p_transform);
void set_mesh(Mesh p_mesh);
void set_transform_format(MultiMesh::TransformFormat p_format);
void set_visible_instance_count(int p_count);

protected:
public:
explicit MultiMesh(WasGoID p_wasgo_id);
explicit MultiMesh(Resource other);
MultiMesh();
MultiMesh new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_MultiMesh_wrapper_get_aabb(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_MultiMesh_wrapper_get_color_format(WasGoID wasgo_id);
WasGoID _wasgo_MultiMesh_wrapper_get_custom_data_format(WasGoID wasgo_id);
void _wasgo_MultiMesh_wrapper_get_instance_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_instance);
int _wasgo_MultiMesh_wrapper_get_instance_count(WasGoID wasgo_id);
void _wasgo_MultiMesh_wrapper_get_instance_custom_data(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_instance);
void _wasgo_MultiMesh_wrapper_get_instance_transform(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_instance);
void _wasgo_MultiMesh_wrapper_get_instance_transform_2d(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_instance);
WasGoID _wasgo_MultiMesh_wrapper_get_mesh(WasGoID wasgo_id);
WasGoID _wasgo_MultiMesh_wrapper_get_transform_format(WasGoID wasgo_id);
int _wasgo_MultiMesh_wrapper_get_visible_instance_count(WasGoID wasgo_id);
void _wasgo_MultiMesh_wrapper_set_as_bulk_array(WasGoID wasgo_id, WasGoID p_array);
void _wasgo_MultiMesh_wrapper_set_color_format(WasGoID wasgo_id, WasGoID p_format);
void _wasgo_MultiMesh_wrapper_set_custom_data_format(WasGoID wasgo_id, WasGoID p_format);
void _wasgo_MultiMesh_wrapper_set_instance_color(WasGoID wasgo_id, int p_instance, const uint8_t * p_color, int wasgo_throwaway, int p_color_wasgo_buffer_size);
void _wasgo_MultiMesh_wrapper_set_instance_count(WasGoID wasgo_id, int p_count);
void _wasgo_MultiMesh_wrapper_set_instance_custom_data(WasGoID wasgo_id, int p_instance, const uint8_t * p_custom_data, int wasgo_throwaway, int p_custom_data_wasgo_buffer_size);
void _wasgo_MultiMesh_wrapper_set_instance_transform(WasGoID wasgo_id, int p_instance, const uint8_t * p_transform, int wasgo_throwaway, int p_transform_wasgo_buffer_size);
void _wasgo_MultiMesh_wrapper_set_instance_transform_2d(WasGoID wasgo_id, int p_instance, const uint8_t * p_transform, int wasgo_throwaway, int p_transform_wasgo_buffer_size);
void _wasgo_MultiMesh_wrapper_set_mesh(WasGoID wasgo_id, WasGoID p_mesh);
void _wasgo_MultiMesh_wrapper_set_transform_format(WasGoID wasgo_id, WasGoID p_format);
void _wasgo_MultiMesh_wrapper_set_visible_instance_count(WasGoID wasgo_id, int p_count);

    //constructor wrappers
    WasGoID _wasgo_MultiMesh_constructor();
            
}
#endif