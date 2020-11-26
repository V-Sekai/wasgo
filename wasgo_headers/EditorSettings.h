/* THIS FILE IS GENERATED */
#ifndef EDITORSETTINGS_H
#define EDITORSETTINGS_H

#include <stdint.h>

#include "PoolStringArray.h"
#include "Dictionary.h"
#include "String.h"
#include "Resource.h"
#include "Variant.h"
class EditorSettings : public Resource{
public: EditorSettings();
void  add_property_info(Dictionary info);
void  erase(String property);
PoolStringArray  get_favorites();
PoolStringArray  get_favorites();
Variant  get_project_metadata(String section, String key, Variant default = null);
String  get_project_settings_dir();
String  get_project_settings_dir();
PoolStringArray  get_recent_dirs();
PoolStringArray  get_recent_dirs();
Variant  get_setting(String name);
String  get_settings_dir();
String  get_settings_dir();
bool  has_setting(String name);
bool  property_can_revert(String name);
Variant  property_get_revert(String name);
void  set_favorites(PoolStringArray dirs);
void  set_initial_value(String name, Variant value, bool update_current);
void  set_project_metadata(String section, String key, Variant data);
void  set_recent_dirs(PoolStringArray dirs);
void  set_setting(String name, Variant value);
};
#endif