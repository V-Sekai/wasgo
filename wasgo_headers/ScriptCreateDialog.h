/* THIS FILE IS GENERATED */
#ifndef SCRIPTCREATEDIALOG_H
#define SCRIPTCREATEDIALOG_H

#include <stdint.h>

#include "String.h"
#include "ConfirmationDialog.h"
class ScriptCreateDialog : public ConfirmationDialog{
public: ScriptCreateDialog();
void  _browse_class_in_tree();
void  _browse_class_in_tree();
void  _browse_path(bool arg0, bool arg1);
void  _built_in_pressed();
void  _built_in_pressed();
void  _class_name_changed(String arg0);
void  _create();
void  _create();
void  _file_selected(String arg0);
void  _lang_changed(int arg0);
void  _parent_name_changed(String arg0);
void  _path_changed(String arg0);
void  _path_entered(String arg0);
void  _path_hbox_sorted();
void  _path_hbox_sorted();
void  _template_changed(int arg0);
void  config(String inherits, String path, bool built_in_enabled = true, bool load_enabled = true);
};
#endif