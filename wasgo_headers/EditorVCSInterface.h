/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Object.h"
#include "Variant.h"
#include "Dictionary.h"
class EditorVCSInterface : public Object{
public: EditorVCSInterface();
void  _commit(String msg);
Array  _get_file_diff(String file_path);
Dictionary  _get_modified_files_data();
Dictionary  _get_modified_files_data();
String  _get_project_name();
String  _get_project_name();
String  _get_vcs_name();
String  _get_vcs_name();
bool  _initialize(String project_root_path);
bool  _is_vcs_initialized();
bool  _is_vcs_initialized();
bool  _shut_down();
bool  _shut_down();
void  _stage_file(String file_path);
void  _unstage_file(String file_path);
void  commit(String msg);
Array  get_file_diff(String file_path);
Dictionary  get_modified_files_data();
Dictionary  get_modified_files_data();
String  get_project_name();
String  get_project_name();
String  get_vcs_name();
String  get_vcs_name();
bool  initialize(String project_root_path);
bool  is_addon_ready();
bool  is_addon_ready();
bool  is_vcs_initialized();
bool  is_vcs_initialized();
bool  shut_down();
bool  shut_down();
void  stage_file(String file_path);
void  unstage_file(String file_path);
};