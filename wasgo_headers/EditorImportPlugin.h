/* THIS FILE IS GENERATED */
#ifndef EDITORIMPORTPLUGIN_H
#define EDITORIMPORTPLUGIN_H

#include <stdint.h>

#include "String.h"
#include "Dictionary.h"
#include "Variant.h"
#include "ResourceImporter.h"
class EditorImportPlugin : public ResourceImporter{
public: EditorImportPlugin();
Array  get_import_options(int preset);
int  get_import_order();
int  get_import_order();
String  get_importer_name();
String  get_importer_name();
bool  get_option_visibility(String option, Dictionary options);
int  get_preset_count();
int  get_preset_count();
String  get_preset_name(int preset);
float  get_priority();
float  get_priority();
Array  get_recognized_extensions();
Array  get_recognized_extensions();
String  get_resource_type();
String  get_resource_type();
String  get_save_extension();
String  get_save_extension();
String  get_visible_name();
String  get_visible_name();
int  import(String source_file, String save_path, Dictionary options, Array platform_variants, Array gen_files);
};
#endif