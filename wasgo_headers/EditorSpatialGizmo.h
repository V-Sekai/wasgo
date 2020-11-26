/* THIS FILE IS GENERATED */
#ifndef EDITORSPATIALGIZMO_H
#define EDITORSPATIALGIZMO_H

#include <stdint.h>

#include "Vector2.h"
#include "TriangleMesh.h"
#include "Material.h"
#include "Spatial.h"
#include "EditorSpatialGizmoPlugin.h"
#include "String.h"
#include "ArrayMesh.h"
#include "Node.h"
#include "PoolVector3Array.h"
#include "SpatialGizmo.h"
#include "SkinReference.h"
#include "Camera.h"
#include "Variant.h"
class EditorSpatialGizmo : public SpatialGizmo{
public: EditorSpatialGizmo();
void  add_collision_segments(PoolVector3Array segments);
void  add_collision_triangles(TriangleMesh triangles);
void  add_handles(PoolVector3Array handles, Material material, bool billboard = false, bool secondary = false);
void  add_lines(PoolVector3Array lines, Material material, bool billboard = false, Color modulate = 1,1,1,1);
void  add_mesh(ArrayMesh mesh, bool billboard = false, SkinReference skeleton = [object:null], Material material = null);
void  add_unscaled_billboard(Material material, float default_scale = 1, Color modulate = 1,1,1,1);
void  clear();
void  clear();
void  commit_handle(int index, Variant restore, bool cancel);
String  get_handle_name(int index);
Variant  get_handle_value(int index);
EditorSpatialGizmoPlugin  get_plugin();
EditorSpatialGizmoPlugin  get_plugin();
Spatial  get_spatial_node();
Spatial  get_spatial_node();
bool  is_handle_highlighted(int index);
void  redraw();
void  redraw();
void  set_handle(int index, Camera camera, Vector2 point);
void  set_hidden(bool hidden);
void  set_spatial_node(Node node);
};
#endif