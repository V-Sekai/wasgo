/* THIS FILE IS GENERATED */
#ifndef _DIRECTORY_H
#define _DIRECTORY_H

#include <stdint.h>

#include "Erro.h"
#include "String.h"
#include "Reference.h"
class _Directory : public Reference{
public: _Directory();
enum.Error  change_dir(String todir);
enum.Error  copy(String from, String to);
bool  current_is_dir();
bool  current_is_dir();
bool  dir_exists(String path);
bool  file_exists(String path);
String  get_current_dir();
String  get_current_dir();
int  get_current_drive();
int  get_current_drive();
String  get_drive(int idx);
int  get_drive_count();
int  get_drive_count();
String  get_next();
String  get_next();
int  get_space_left();
int  get_space_left();
enum.Error  list_dir_begin(bool skip_navigational = false, bool skip_hidden = false);
void  list_dir_end();
void  list_dir_end();
enum.Error  make_dir(String path);
enum.Error  make_dir_recursive(String path);
enum.Error  open(String path);
enum.Error  remove(String path);
enum.Error  rename(String from, String to);
};
#endif