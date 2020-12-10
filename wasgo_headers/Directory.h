/* THIS FILE IS GENERATED */
#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "wasgo\wasgoid.h"

#include "Ustring.h"
#include "Reference.h"
#include "error_list.h"
class Directory : public Reference{
public:
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
Error list_dir_begin(bool p_skip_navigational = (bool) false, bool p_skip_hidden = (bool) false);
void list_dir_end();
Error make_dir(String p_path);
Error make_dir_recursive(String p_path);
Error open(String p_path);
Error remove(String p_path);
Error rename(String p_from, String p_to);

protected:
public:
explicit Directory(WasGoID p_wasgo_id);
explicit Directory(Reference other);
Directory();
Directory new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_Directory_wrapper_change_dir(WasGoID wasgo_id, const uint8_t * p_todir, int p_todir_wasgo_buffer_size);
WasGoID _wasgo_Directory_wrapper_copy(WasGoID wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_to, int p_to_wasgo_buffer_size);
int _wasgo_Directory_wrapper_current_is_dir(WasGoID wasgo_id);
int _wasgo_Directory_wrapper_dir_exists(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
int _wasgo_Directory_wrapper_file_exists(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
void _wasgo_Directory_wrapper_get_current_dir(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Directory_wrapper_get_current_drive(WasGoID wasgo_id);
void _wasgo_Directory_wrapper_get_drive(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_idx);
int _wasgo_Directory_wrapper_get_drive_count(WasGoID wasgo_id);
void _wasgo_Directory_wrapper_get_next(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Directory_wrapper_get_space_left(WasGoID wasgo_id);
WasGoID _wasgo_Directory_wrapper_list_dir_begin(WasGoID wasgo_id, bool p_skip_navigational, bool p_skip_hidden);
void _wasgo_Directory_wrapper_list_dir_end(WasGoID wasgo_id);
WasGoID _wasgo_Directory_wrapper_make_dir(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoID _wasgo_Directory_wrapper_make_dir_recursive(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoID _wasgo_Directory_wrapper_open(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoID _wasgo_Directory_wrapper_remove(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
WasGoID _wasgo_Directory_wrapper_rename(WasGoID wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_to, int p_to_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_Directory_constructor();
            
}
#endif