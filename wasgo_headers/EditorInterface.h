/* THIS FILE IS GENERATED */
#ifndef EDITORINTERFACE_H
#define EDITORINTERFACE_H

#include <stdint.h>

#include "EditorSettings.h"
#include "EditorFileSystem.h"
#include "String.h"
#include "Resource.h"
#include "ScriptEditor.h"
#include "EditorSelection.h"
#include "Node.h"
#include "EditorInspector.h"
#include "Erro.h"
#include "EditorResourcePreview.h"
#include "Object.h"
#include "Control.h"
#include "Variant.h"
class EditorInterface : public Node{
public: EditorInterface();
void  edit_resource(Resource resource);
Control  get_base_control();
Control  get_base_control();
String  get_current_path();
String  get_current_path();
Node  get_edited_scene_root();
Node  get_edited_scene_root();
EditorSettings  get_editor_settings();
EditorSettings  get_editor_settings();
Control  get_editor_viewport();
Control  get_editor_viewport();
EditorInspector  get_inspector();
EditorInspector  get_inspector();
Array  get_open_scenes();
Array  get_open_scenes();
EditorFileSystem  get_resource_filesystem();
EditorFileSystem  get_resource_filesystem();
EditorResourcePreview  get_resource_previewer();
EditorResourcePreview  get_resource_previewer();
ScriptEditor  get_script_editor();
ScriptEditor  get_script_editor();
String  get_selected_path();
String  get_selected_path();
EditorSelection  get_selection();
EditorSelection  get_selection();
void  inspect_object(Object object, String for_property = "");
bool  is_plugin_enabled(String plugin);
Array  make_mesh_previews(Array meshes, int preview_size);
void  open_scene_from_path(String scene_filepath);
void  reload_scene_from_path(String scene_filepath);
enum.Error  save_scene();
enum.Error  save_scene();
void  save_scene_as(String path, bool with_preview = true);
void  select_file(String file);
void  set_distraction_free_mode(bool enter);
void  set_main_screen_editor(String name);
void  set_plugin_enabled(String plugin, bool enabled);
};
#endif