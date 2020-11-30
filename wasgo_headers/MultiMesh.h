/* THIS FILE IS GENERATED */
#ifndef MULTIMESH_H
#define MULTIMESH_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Mesh.h"
#include "Resource.h"
class MultiMesh : public Resource{
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

MultiMesh(WasGoId p_wasgo_id);
~MultiMesh();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_MultiMesh_wrapper_get_aabb(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_MultiMesh_wrapper_get_color_format(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_MultiMesh_wrapper_get_custom_data_format(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_MultiMesh_wrapper_get_instance_color(WasGoId wasgo_id, int p_instance);
int _wasgo_MultiMesh_wrapper_get_instance_count(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_MultiMesh_wrapper_get_instance_custom_data(WasGoId wasgo_id, int p_instance);
WasGo::WasGoId _wasgo_MultiMesh_wrapper_get_instance_transform(WasGoId wasgo_id, int p_instance);
WasGo::WasGoId _wasgo_MultiMesh_wrapper_get_instance_transform_2d(WasGoId wasgo_id, int p_instance);
WasGo::WasGoId _wasgo_MultiMesh_wrapper_get_mesh(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_MultiMesh_wrapper_get_transform_format(WasGoId wasgo_id);
int _wasgo_MultiMesh_wrapper_get_visible_instance_count(WasGoId wasgo_id);
void _wasgo_MultiMesh_wrapper_set_as_bulk_array(WasGoId wasgo_id, WasGo::WasGoId p_array);
void _wasgo_MultiMesh_wrapper_set_color_format(WasGoId wasgo_id, WasGo::WasGoId p_format);
void _wasgo_MultiMesh_wrapper_set_custom_data_format(WasGoId wasgo_id, WasGo::WasGoId p_format);
void _wasgo_MultiMesh_wrapper_set_instance_color(WasGoId wasgo_id, int p_instance, WasGo::WasGoId p_color);
void _wasgo_MultiMesh_wrapper_set_instance_count(WasGoId wasgo_id, int p_count);
void _wasgo_MultiMesh_wrapper_set_instance_custom_data(WasGoId wasgo_id, int p_instance, WasGo::WasGoId p_custom_data);
void _wasgo_MultiMesh_wrapper_set_instance_transform(WasGoId wasgo_id, int p_instance, WasGo::WasGoId p_transform);
void _wasgo_MultiMesh_wrapper_set_instance_transform_2d(WasGoId wasgo_id, int p_instance, WasGo::WasGoId p_transform);
void _wasgo_MultiMesh_wrapper_set_mesh(WasGoId wasgo_id, WasGo::WasGoId p_mesh);
void _wasgo_MultiMesh_wrapper_set_transform_format(WasGoId wasgo_id, WasGo::WasGoId p_format);
void _wasgo_MultiMesh_wrapper_set_visible_instance_count(WasGoId wasgo_id, int p_count);
}
#endif