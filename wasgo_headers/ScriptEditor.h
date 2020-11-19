/* THIS FILE IS GENERATED */
#ifndef SCRIPTEDITOR_H
#define SCRIPTEDITOR_H

#include <stdint.h>

#include "Vector2.h"
#include "String.h"
#include "Resource.h"
#include "Script.h"
#include "Control.h"
#include "Node.h"
#include "Reference.h"
#include "Object.h"
#include "PanelContainer.h"
#include "PoolStringArray.h"
#include "InputEvent.h"
#include "Variant.h"
class ScriptEditor : public PanelContainer{
public: ScriptEditor();
void  _add_callback(Object arg0, String arg1, PoolStringArray arg2);
void  _autosave_scripts();
void  _autosave_scripts();
void  _breaked(bool arg0, bool arg1);
void  _clear_execution(Reference arg0);
void  _close_all_tabs();
void  _close_all_tabs();
void  _close_current_tab();
void  _close_current_tab();
void  _close_discard_current_tab(String arg0);
void  _close_docs_tab();
void  _close_docs_tab();
void  _close_other_tabs();
void  _close_other_tabs();
void  _copy_script_path();
void  _copy_script_path();
void  _editor_pause();
void  _editor_pause();
void  _editor_play();
void  _editor_play();
void  _editor_settings_changed();
void  _editor_settings_changed();
void  _editor_stop();
void  _editor_stop();
void  _file_dialog_action(String arg0);
void  _filter_methods_text_changed(String arg0);
void  _filter_scripts_text_changed(String arg0);
String  _get_debug_tooltip(String arg0, Node arg1);
void  _goto_script_line(Reference arg0, int arg1);
void  _goto_script_line2(int arg0);
void  _help_class_goto(String arg0);
void  _help_class_open(String arg0);
void  _help_overview_selected(int arg0);
void  _help_search(String arg0);
void  _history_back();
void  _history_back();
void  _history_forward();
void  _history_forward();
void  _live_auto_reload_running_scripts();
void  _live_auto_reload_running_scripts();
void  _members_overview_selected(int arg0);
void  _menu_option(int arg0);
void  _on_find_in_files_modified_files(PoolStringArray arg0);
void  _on_find_in_files_requested(String arg0);
void  _on_find_in_files_result_selected(String arg0, int arg1, int arg2, int arg3);
void  _open_recent_script(int arg0);
void  _reload_scripts();
void  _reload_scripts();
void  _request_help(String arg0);
void  _res_saved_callback(Resource arg0);
void  _resave_scripts(String arg0);
void  _save_history();
void  _save_history();
void  _script_changed();
void  _script_changed();
void  _script_created(Script arg0);
void  _script_list_gui_input(InputEvent arg0);
void  _script_selected(int arg0);
void  _script_split_dragged(float arg0);
void  _set_execution(Reference arg0, int arg1);
void  _show_debugger(bool arg0);
void  _start_find_in_files(bool arg0);
void  _tab_changed(int arg0);
void  _theme_option(int arg0);
void  _toggle_members_overview_alpha_sort(bool arg0);
void  _tree_changed();
void  _tree_changed();
void  _unhandled_input(InputEvent arg0);
void  _update_autosave_timer();
void  _update_autosave_timer();
void  _update_members_overview();
void  _update_members_overview();
void  _update_recent_scripts();
void  _update_recent_scripts();
void  _update_script_connections();
void  _update_script_connections();
void  _update_script_names();
void  _update_script_names();
bool  can_drop_data_fw(Vector2 point, Variant data, Control from);
void  drop_data_fw(Vector2 point, Variant data, Control from);
Script  get_current_script();
Script  get_current_script();
Variant  get_drag_data_fw(Vector2 point, Control from);
Array  get_open_scripts();
Array  get_open_scripts();
void  goto_line(int line_number);
void  open_script_create_dialog(String base_name, String base_path);
};
#endif