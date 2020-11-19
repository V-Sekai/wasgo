/* THIS FILE IS GENERATED */
#ifndef EDITORFEATUREPROFILE_H
#define EDITORFEATUREPROFILE_H

#include <stdint.h>

#include "String.h"
#include "Erro.h"
#include "Reference.h"
class EditorFeatureProfile : public Reference{
public: EditorFeatureProfile();
enum Feature{
FEATURE_3D: 0,
FEATURE_SCRIPT: 1,
FEATURE_ASSET_LIB: 2,
FEATURE_SCENE_TREE: 3,
FEATURE_IMPORT_DOCK: 4,
FEATURE_NODE_DOCK: 5,
FEATURE_FILESYSTEM_DOCK: 6,
};
String  get_feature_name(int feature);
bool  is_class_disabled(String class_name);
bool  is_class_editor_disabled(String class_name);
bool  is_class_property_disabled(String class_name, String property);
bool  is_feature_disabled(int feature);
enum.Error  load_from_file(String path);
enum.Error  save_to_file(String path);
void  set_disable_class(String class_name, bool disable);
void  set_disable_class_editor(String class_name, bool disable);
void  set_disable_class_property(String class_name, String property, bool disable);
void  set_disable_feature(int feature, bool disable);
};
#endif