/* THIS FILE IS GENERATED */
#ifndef EDITORFILESYSTEMDIRECTORY_H
#define EDITORFILESYSTEMDIRECTORY_H

#include <stdint.h>

#include "String.h"
#include "Object.h"
class EditorFileSystemDirectory : public Object{
public: EditorFileSystemDirectory();
int  find_dir_index(String name);
int  find_file_index(String name);
String  get_file(int idx);
int  get_file_count();
int  get_file_count();
bool  get_file_import_is_valid(int idx);
String  get_file_path(int idx);
String  get_file_script_class_extends(int idx);
String  get_file_script_class_name(int idx);
String  get_file_type(int idx);
String  get_name();
String  get_name();
EditorFileSystemDirectory  get_parent();
EditorFileSystemDirectory  get_parent();
String  get_path();
String  get_path();
EditorFileSystemDirectory  get_subdir(int idx);
int  get_subdir_count();
int  get_subdir_count();
};
#endif