/* THIS FILE IS GENERATED */
#ifndef MULTIMESH_H
#define MULTIMESH_H

#include <stdint.h>

#include "Mesh.h"
#include "PoolRealArray.h"
#include "PoolVector2Array.h"
#include "AABB.h"
#include "Resource.h"
#include "Transform.h"
#include "PoolVector3Array.h"
#include "Transform2D.h"
#include "Variant.h"
class MultiMesh : public Resource{
public: MultiMesh();
enum TransformFormat{
TRANSFORM_2D: 0,
};
enum CustomDataFormat{
CUSTOM_DATA_NONE: 0,
CUSTOM_DATA_8BIT: 1,
};
enum ColorFormat{
COLOR_NONE: 0,
COLOR_8BIT: 1,
};
PoolColorArray  _get_color_array();
PoolColorArray  _get_color_array();
PoolColorArray  _get_custom_data_array();
PoolColorArray  _get_custom_data_array();
PoolVector2Array  _get_transform_2d_array();
PoolVector2Array  _get_transform_2d_array();
PoolVector3Array  _get_transform_array();
PoolVector3Array  _get_transform_array();
void  _set_color_array(PoolColorArray arg0);
void  _set_custom_data_array(PoolColorArray arg0);
void  _set_transform_2d_array(PoolVector2Array arg0);
void  _set_transform_array(PoolVector3Array arg0);
AABB  get_aabb();
AABB  get_aabb();
enum.MultiMesh::ColorFormat  get_color_format();
enum.MultiMesh::ColorFormat  get_color_format();
enum.MultiMesh::CustomDataFormat  get_custom_data_format();
enum.MultiMesh::CustomDataFormat  get_custom_data_format();
Color  get_instance_color(int instance);
int  get_instance_count();
int  get_instance_count();
Color  get_instance_custom_data(int instance);
Transform  get_instance_transform(int instance);
Transform2D  get_instance_transform_2d(int instance);
Mesh  get_mesh();
Mesh  get_mesh();
enum.MultiMesh::TransformFormat  get_transform_format();
enum.MultiMesh::TransformFormat  get_transform_format();
int  get_visible_instance_count();
int  get_visible_instance_count();
void  set_as_bulk_array(PoolRealArray array);
void  set_color_format(int format);
void  set_custom_data_format(int format);
void  set_instance_color(int instance, Color color);
void  set_instance_count(int count);
void  set_instance_custom_data(int instance, Color custom_data);
void  set_instance_transform(int instance, Transform transform);
void  set_instance_transform_2d(int instance, Transform2D transform);
void  set_mesh(Mesh mesh);
void  set_transform_format(int format);
void  set_visible_instance_count(int count);
};
#endif