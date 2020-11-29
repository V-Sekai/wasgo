/* THIS FILE IS GENERATED */
#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
#include "Error.h"
class Directory : public Reference{
public: Directory();
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
};
#endif