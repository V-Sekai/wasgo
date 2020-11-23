/* THIS FILE IS GENERATED */
#ifndef EDITORFILEDIALOG_H
#define EDITORFILEDIALOG_H

#include <stdint.h>

#include "String.h"
#include "InputEvent.h"
#include "ConfirmationDialog.h"
#include "Vector2.h"
#include "VBoxContainer.h"
#include "Variant.h"
#include "Texture.h"
class EditorFileDialog : public ConfirmationDialog{
public: EditorFileDialog();
enum DisplayMode{
DISPLAY_THUMBNAILS: 0,
};
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
void  _favorite_move_down();
void  _favorite_move_down();
void  _favorite_move_up();
void  _favorite_move_up();
void  _favorite_pressed();
void  _favorite_pressed();
void  _favorite_selected(int arg0);
void  _file_entered(String arg0);
void  _filter_selected(int arg0);
void  _go_back();
void  _go_back();
void  _go_forward();
void  _go_forward();
void  _go_up();
void  _go_up();
void  _item_db_selected(int arg0);
void  _item_list_item_rmb_selected(int arg0, Vector2 arg1);
void  _item_list_rmb_clicked(Vector2 arg0);
void  _item_menu_id_pressed(int arg0);
void  _item_selected(int arg0);
void  _items_clear_selection();
void  _items_clear_selection();
void  _make_dir();
void  _make_dir();
void  _make_dir_confirm();
void  _make_dir_confirm();
void  _multi_selected(int arg0, bool arg1);
void  _recent_selected(int arg0);
void  _save_confirm_pressed();
void  _save_confirm_pressed();
void  _select_drive(int arg0);
void  _thumbnail_done(String arg0, Texture arg1, Texture arg2, Variant arg3);
void  _thumbnail_result(String arg0, Texture arg1, Texture arg2, Variant arg3);
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
enum.EditorFileDialog::Access  get_access();
enum.EditorFileDialog::Access  get_access();
String  get_current_dir();
String  get_current_dir();
String  get_current_file();
String  get_current_file();
String  get_current_path();
String  get_current_path();
enum.EditorFileDialog::DisplayMode  get_display_mode();
enum.EditorFileDialog::DisplayMode  get_display_mode();
enum.EditorFileDialog::Mode  get_mode();
enum.EditorFileDialog::Mode  get_mode();
VBoxContainer  get_vbox();
VBoxContainer  get_vbox();
void  invalidate();
void  invalidate();
bool  is_overwrite_warning_disabled();
bool  is_overwrite_warning_disabled();
bool  is_showing_hidden_files();
bool  is_showing_hidden_files();
void  set_access(int access);
void  set_current_dir(String dir);
void  set_current_file(String file);
void  set_current_path(String path);
void  set_disable_overwrite_warning(bool disable);
void  set_display_mode(int mode);
void  set_mode(int mode);
void  set_show_hidden_files(bool show);
};
#endif