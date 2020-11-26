/* THIS FILE IS GENERATED */
#ifndef EDITORSPATIALGIZMOPLUGIN_H
#define EDITORSPATIALGIZMOPLUGIN_H

#include <stdint.h>

#include "EditorSpatialGizmo.h"
#include "Vector2.h"
#include "Spatial.h"
#include "String.h"
#include "Resource.h"
#include "Texture.h"
#include "SpatialMaterial.h"
#include "Camera.h"
#include "Variant.h"
class EditorSpatialGizmoPlugin : public Resource{
public: EditorSpatialGizmoPlugin();
void  add_material(String name, SpatialMaterial material);
bool  can_be_hidden();
bool  can_be_hidden();
void  commit_handle(EditorSpatialGizmo gizmo, int index, Variant restore, bool cancel);
EditorSpatialGizmo  create_gizmo(Spatial spatial);
void  create_handle_material(String name, bool billboard = false);
void  create_icon_material(String name, Texture texture, bool on_top = false, Color color = 1,1,1,1);
void  create_material(String name, Color color, bool billboard = false, bool on_top = false, bool use_vertex_color = false);
String  get_handle_name(EditorSpatialGizmo gizmo, int index);
Variant  get_handle_value(EditorSpatialGizmo gizmo, int index);
SpatialMaterial  get_material(String name, EditorSpatialGizmo gizmo);
String  get_name();
String  get_name();
String  get_priority();
String  get_priority();
bool  has_gizmo(Spatial spatial);
bool  is_handle_highlighted(EditorSpatialGizmo gizmo, int index);
bool  is_selectable_when_hidden();
bool  is_selectable_when_hidden();
void  redraw(EditorSpatialGizmo gizmo);
void  set_handle(EditorSpatialGizmo gizmo, int index, Camera camera, Vector2 point);
};
#endif