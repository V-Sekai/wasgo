/* THIS FILE IS GENERATED */
#ifndef FILEDIALOG_H
#define FILEDIALOG_H

#include "wasgo\wasgo.h"

#include "VBoxContainer.h"
#include "LineEdit.h"
#include "ConfirmationDialog.h"
#include "ustring.h"
#include "Variant.h"
class FileDialog : public ConfirmationDialog{
public:
enum Access{
ACCESS_RESOURCES,
ACCESS_USERDATA,
ACCESS_FILESYSTEM
};
enum Mode{
MODE_OPEN_FILE,
MODE_OPEN_FILES,
MODE_OPEN_DIR,
MODE_OPEN_ANY,
MODE_SAVE_FILE
};
void add_filter(String p_filter);
void clear_filters();
void deselect_items();
FileDialog::Access get_access();
String get_current_dir();
String get_current_file();
String get_current_path();
PoolStringArray get_filters();
LineEdit get_line_edit();
FileDialog::Mode get_mode();
VBoxContainer get_vbox();
void invalidate();
bool is_mode_overriding_title();
bool is_showing_hidden_files();
void set_access(FileDialog::Access p_access);
void set_current_dir(String p_dir);
void set_current_file(String p_file);
void set_current_path(String p_path);
void set_filters(PoolStringArray p_filters);
void set_mode(FileDialog::Mode p_mode);
void set_mode_overrides_title(bool p_override);
void set_show_hidden_files(bool p_show);

protected:
FileDialog(WasGoId p_wasgo_id);
public:
FileDialog();
~FileDialog();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_FileDialog_wrapper_add_filter(WasGoId wasgo_id, const uint8_t * p_filter, int p_filter_wasgo_buffer_size);
void _wasgo_FileDialog_wrapper_clear_filters(WasGoId wasgo_id);
void _wasgo_FileDialog_wrapper_deselect_items(WasGoId wasgo_id);
WasGoId _wasgo_FileDialog_wrapper_get_access(WasGoId wasgo_id);
void _wasgo_FileDialog_wrapper_get_current_dir(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_FileDialog_wrapper_get_current_file(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_FileDialog_wrapper_get_current_path(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_FileDialog_wrapper_get_filters(WasGoId wasgo_id);
WasGoId _wasgo_FileDialog_wrapper_get_line_edit(WasGoId wasgo_id);
WasGoId _wasgo_FileDialog_wrapper_get_mode(WasGoId wasgo_id);
WasGoId _wasgo_FileDialog_wrapper_get_vbox(WasGoId wasgo_id);
void _wasgo_FileDialog_wrapper_invalidate(WasGoId wasgo_id);
int _wasgo_FileDialog_wrapper_is_mode_overriding_title(WasGoId wasgo_id);
int _wasgo_FileDialog_wrapper_is_showing_hidden_files(WasGoId wasgo_id);
void _wasgo_FileDialog_wrapper_set_access(WasGoId wasgo_id, WasGoId p_access);
void _wasgo_FileDialog_wrapper_set_current_dir(WasGoId wasgo_id, const uint8_t * p_dir, int p_dir_wasgo_buffer_size);
void _wasgo_FileDialog_wrapper_set_current_file(WasGoId wasgo_id, const uint8_t * p_file, int p_file_wasgo_buffer_size);
void _wasgo_FileDialog_wrapper_set_current_path(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
void _wasgo_FileDialog_wrapper_set_filters(WasGoId wasgo_id, WasGoId p_filters);
void _wasgo_FileDialog_wrapper_set_mode(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_FileDialog_wrapper_set_mode_overrides_title(WasGoId wasgo_id, bool p_override);
void _wasgo_FileDialog_wrapper_set_show_hidden_files(WasGoId wasgo_id, bool p_show);

    //constructor and destructor wrappers
    WasGoId _wasgo_FileDialog_constructor();
    void _wasgo_FileDialog_destructor(WasGoId p_wasgo_id);
            
}
#endif