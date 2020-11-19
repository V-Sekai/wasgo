/* THIS FILE IS GENERATED */
#ifndef EDITOREXPORTPLUGIN_H
#define EDITOREXPORTPLUGIN_H

#include <stdint.h>

#include "String.h"
#include "Reference.h"
#include "PoolByteArray.h"
#include "PoolStringArray.h"
class EditorExportPlugin : public Reference{
public: EditorExportPlugin();
void  _export_begin(PoolStringArray features, bool is_debug, String path, int flags);
void  _export_end();
void  _export_end();
void  _export_file(String path, String type, PoolStringArray features);
void  add_file(String path, PoolByteArray file, bool remap);
void  add_ios_bundle_file(String path);
void  add_ios_cpp_code(String code);
void  add_ios_framework(String path);
void  add_ios_linker_flags(String flags);
void  add_ios_plist_content(String plist_content);
void  add_shared_object(String path, PoolStringArray tags);
void  skip();
void  skip();
};
#endif