/* THIS FILE IS GENERATED */
#ifndef EDITORPLUGIN_H
#define EDITORPLUGIN_H

#include <stdint.h>

#include "UndoRedo.h"
#include "Node.h"
#include "Script.h"
#include "EditorInspectorPlugin.h"
#include "EditorExportPlugin.h"
#include "PoolStringArray.h"
#include "Object.h"
#include "ScriptCreateDialog.h"
#include "Camera.h"
#include "InputEvent.h"
#include "ToolButton.h"
#include "Dictionary.h"
#include "EditorInterface.h"
#include "EditorImportPlugin.h"
#include "Texture.h"
#include "String.h"
#include "EditorSpatialGizmoPlugin.h"
#include "Control.h"
#include "EditorSceneImporter.h"
#include "Variant.h"
#include "ConfigFile.h"
class EditorPlugin : public Node{
public: EditorPlugin();
enum DockSlot{
DOCK_SLOT_LEFT_UL: 0,
DOCK_SLOT_LEFT_BL: 1,
DOCK_SLOT_LEFT_UR: 2,
DOCK_SLOT_LEFT_BR: 3,
DOCK_SLOT_RIGHT_UL: 4,
DOCK_SLOT_RIGHT_BL: 5,
DOCK_SLOT_RIGHT_UR: 6,
DOCK_SLOT_RIGHT_BR: 7,
};
enum CustomControlContainer{
CONTAINER_TOOLBAR: 0,
CONTAINER_SPATIAL_EDITOR_MENU: 1,
CONTAINER_SPATIAL_EDITOR_SIDE_LEFT: 2,
CONTAINER_SPATIAL_EDITOR_SIDE_RIGHT: 3,
CONTAINER_SPATIAL_EDITOR_BOTTOM: 4,
CONTAINER_CANVAS_EDITOR_MENU: 5,
CONTAINER_CANVAS_EDITOR_SIDE_LEFT: 6,
CONTAINER_CANVAS_EDITOR_SIDE_RIGHT: 7,
CONTAINER_CANVAS_EDITOR_BOTTOM: 8,
CONTAINER_PROPERTY_EDITOR_BOTTOM: 9,
CONTAINER_PROJECT_SETTING_TAB_LEFT: 10,
};
void  add_autoload_singleton(String name, String path);
ToolButton  add_control_to_bottom_panel(Control control, String title);
void  add_control_to_container(int container, Control control);
void  add_control_to_dock(int slot, Control control);
void  add_custom_type(String type, String base, Script script, Texture icon);
void  add_export_plugin(EditorExportPlugin plugin);
void  add_import_plugin(EditorImportPlugin importer);
void  add_inspector_plugin(EditorInspectorPlugin plugin);
void  add_scene_import_plugin(EditorSceneImporter scene_importer);
void  add_spatial_gizmo_plugin(EditorSpatialGizmoPlugin plugin);
void  add_tool_menu_item(String name, Object handler, String callback, Variant ud = null);
void  add_tool_submenu_item(String name, Object submenu);
void  apply_changes();
void  apply_changes();
bool  build();
bool  build();
void  clear();
void  clear();
void  disable_plugin();
void  disable_plugin();
void  edit(Object object);
void  enable_plugin();
void  enable_plugin();
void  forward_canvas_draw_over_viewport(Control overlay);
void  forward_canvas_force_draw_over_viewport(Control overlay);
bool  forward_canvas_gui_input(InputEvent event);
bool  forward_spatial_gui_input(Camera camera, InputEvent event);
PoolStringArray  get_breakpoints();
PoolStringArray  get_breakpoints();
EditorInterface  get_editor_interface();
EditorInterface  get_editor_interface();
Object  get_plugin_icon();
Object  get_plugin_icon();
String  get_plugin_name();
String  get_plugin_name();
ScriptCreateDialog  get_script_create_dialog();
ScriptCreateDialog  get_script_create_dialog();
Dictionary  get_state();
Dictionary  get_state();
UndoRedo  get_undo_redo();
UndoRedo  get_undo_redo();
void  get_window_layout(ConfigFile layout);
bool  handles(Object object);
bool  has_main_screen();
bool  has_main_screen();
void  hide_bottom_panel();
void  hide_bottom_panel();
void  make_bottom_panel_item_visible(Control item);
void  make_visible(bool visible);
void  queue_save_layout();
void  queue_save_layout();
void  remove_autoload_singleton(String name);
void  remove_control_from_bottom_panel(Control control);
void  remove_control_from_container(int container, Control control);
void  remove_control_from_docks(Control control);
void  remove_custom_type(String type);
void  remove_export_plugin(EditorExportPlugin plugin);
void  remove_import_plugin(EditorImportPlugin importer);
void  remove_inspector_plugin(EditorInspectorPlugin plugin);
void  remove_scene_import_plugin(EditorSceneImporter scene_importer);
void  remove_spatial_gizmo_plugin(EditorSpatialGizmoPlugin plugin);
void  remove_tool_menu_item(String name);
void  save_external_data();
void  save_external_data();
void  set_force_draw_over_forwarding_enabled();
void  set_force_draw_over_forwarding_enabled();
void  set_input_event_forwarding_always_enabled();
void  set_input_event_forwarding_always_enabled();
void  set_state(Dictionary state);
void  set_window_layout(ConfigFile layout);
int  update_overlays();
int  update_overlays();
};
#endif