/* THIS FILE IS GENERATED */
#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Reference.h"
#include "Error.h"
class Directory : public Reference{
Error change_dir(String p_todir);
Error copy(String p_from, String p_to);
bool current_is_dir();
bool dir_exists(String p_path);
bool file_exists(String p_path);
String get_current_dir();
int get_current_drive();
String get_drive(int p_idx);
int get_drive_count();
String get_next();
int get_space_left();
Error list_dir_begin(bool p_skip_navigational = (bool) False, bool p_skip_hidden = (bool) False);
void list_dir_end();
Error make_dir(String p_path);
Error make_dir_recursive(String p_path);
Error open(String p_path);
Error remove(String p_path);
Error rename(String p_from, String p_to);

Directory(WasGoId p_wasgo_id);
~Directory();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_Directory_wrapper_change_dir(WasGoId wasgo_id, WasGo::WasGoId p_todir);
WasGo::WasGoId _wasgo_Directory_wrapper_copy(WasGoId wasgo_id, WasGo::WasGoId p_from, WasGo::WasGoId p_to);
int _wasgo_Directory_wrapper_current_is_dir(WasGoId wasgo_id);
int _wasgo_Directory_wrapper_dir_exists(WasGoId wasgo_id, WasGo::WasGoId p_path);
int _wasgo_Directory_wrapper_file_exists(WasGoId wasgo_id, WasGo::WasGoId p_path);
WasGo::WasGoId _wasgo_Directory_wrapper_get_current_dir(WasGoId wasgo_id);
int _wasgo_Directory_wrapper_get_current_drive(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Directory_wrapper_get_drive(WasGoId wasgo_id, int p_idx);
int _wasgo_Directory_wrapper_get_drive_count(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Directory_wrapper_get_next(WasGoId wasgo_id);
int _wasgo_Directory_wrapper_get_space_left(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Directory_wrapper_list_dir_begin(WasGoId wasgo_id, bool p_skip_navigational, bool p_skip_hidden);
void _wasgo_Directory_wrapper_list_dir_end(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Directory_wrapper_make_dir(WasGoId wasgo_id, WasGo::WasGoId p_path);
WasGo::WasGoId _wasgo_Directory_wrapper_make_dir_recursive(WasGoId wasgo_id, WasGo::WasGoId p_path);
WasGo::WasGoId _wasgo_Directory_wrapper_open(WasGoId wasgo_id, WasGo::WasGoId p_path);
WasGo::WasGoId _wasgo_Directory_wrapper_remove(WasGoId wasgo_id, WasGo::WasGoId p_path);
WasGo::WasGoId _wasgo_Directory_wrapper_rename(WasGoId wasgo_id, WasGo::WasGoId p_from, WasGo::WasGoId p_to);
}
#endif