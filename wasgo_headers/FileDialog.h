/* THIS FILE IS GENERATED */
#ifndef FILEDIALOG_H
#define FILEDIALOG_H

#include <stdint.h>

#include "VBoxContainer.h"
#include "PoolStringArray.h"
#include "String.h"
#include "ConfirmationDialog.h"
#include "Object.h"
#include "LineEdit.h"
#include "InputEvent.h"
class FileDialog : public ConfirmationDialog{
public: FileDialog();
enum Mode{
MODE_OPEN_FILE: 0,
MODE_OPEN_FILES: 1,
MODE_OPEN_DIR: 2,
MODE_OPEN_ANY: 3,
};
enum Access{
ACCESS_RESOURCES: 0,
ACCESS_USERDATA: 1,
};
void  _action_pressed();
void  _action_pressed();
void  _cancel_pressed();
void  _cancel_pressed();
void  _dir_entered(String arg0);
void  _file_entered(String arg0);
void  _filter_selected(int arg0);
void  _go_up();
void  _go_up();
void  _make_dir();
void  _make_dir();
void  _make_dir_confirm();
void  _make_dir_confirm();
void  _save_confirm_pressed();
void  _save_confirm_pressed();
void  _select_drive(int arg0);
void  _tree_item_activated();
void  _tree_item_activated();
void  _tree_multi_selected(Object arg0, int arg1, bool arg2);
void  _tree_selected();
void  _tree_selected();
void  _unhandled_input(InputEvent arg0);
void  _update_dir();
void  _update_dir();
void  _update_file_list();
void  _update_file_list();
void  _update_file_name();
void  _update_file_name();
void  add_filter(String filter);
void  clear_filters();
void  clear_filters();
void  deselect_items();
void  deselect_items();
enum.FileDialog::Access  get_access();
enum.FileDialog::Access  get_access();
String  get_current_dir();
String  get_current_dir();
String  get_current_file();
String  get_current_file();
String  get_current_path();
String  get_current_path();
PoolStringArray  get_filters();
PoolStringArray  get_filters();
LineEdit  get_line_edit();
LineEdit  get_line_edit();
enum.FileDialog::Mode  get_mode();
enum.FileDialog::Mode  get_mode();
VBoxContainer  get_vbox();
VBoxContainer  get_vbox();
void  invalidate();
void  invalidate();
bool  is_mode_overriding_title();
bool  is_mode_overriding_title();
bool  is_showing_hidden_files();
bool  is_showing_hidden_files();
void  set_access(int access);
void  set_current_dir(String dir);
void  set_current_file(String file);
void  set_current_path(String path);
void  set_filters(PoolStringArray filters);
void  set_mode(int mode);
void  set_mode_overrides_title(bool override);
void  set_show_hidden_files(bool show);
};
#endif